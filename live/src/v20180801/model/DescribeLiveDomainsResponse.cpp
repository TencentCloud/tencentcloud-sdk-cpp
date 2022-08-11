/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/live/v20180801/model/DescribeLiveDomainsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveDomainsResponse::DescribeLiveDomainsResponse() :
    m_allCountHasBeenSet(false),
    m_domainListHasBeenSet(false),
    m_createLimitCountHasBeenSet(false),
    m_playTypeCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLiveDomainsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AllCount") && !rsp["AllCount"].IsNull())
    {
        if (!rsp["AllCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allCount = rsp["AllCount"].GetUint64();
        m_allCountHasBeenSet = true;
    }

    if (rsp.HasMember("DomainList") && !rsp["DomainList"].IsNull())
    {
        if (!rsp["DomainList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DomainList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DomainInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_domainList.push_back(item);
        }
        m_domainListHasBeenSet = true;
    }

    if (rsp.HasMember("CreateLimitCount") && !rsp["CreateLimitCount"].IsNull())
    {
        if (!rsp["CreateLimitCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateLimitCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createLimitCount = rsp["CreateLimitCount"].GetInt64();
        m_createLimitCountHasBeenSet = true;
    }

    if (rsp.HasMember("PlayTypeCount") && !rsp["PlayTypeCount"].IsNull())
    {
        if (!rsp["PlayTypeCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlayTypeCount` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PlayTypeCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_playTypeCount.push_back((*itr).GetInt64());
        }
        m_playTypeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLiveDomainsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_allCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allCount, allocator);
    }

    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_domainList.begin(); itr != m_domainList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createLimitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateLimitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createLimitCount, allocator);
    }

    if (m_playTypeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayTypeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_playTypeCount.begin(); itr != m_playTypeCount.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeLiveDomainsResponse::GetAllCount() const
{
    return m_allCount;
}

bool DescribeLiveDomainsResponse::AllCountHasBeenSet() const
{
    return m_allCountHasBeenSet;
}

vector<DomainInfo> DescribeLiveDomainsResponse::GetDomainList() const
{
    return m_domainList;
}

bool DescribeLiveDomainsResponse::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

int64_t DescribeLiveDomainsResponse::GetCreateLimitCount() const
{
    return m_createLimitCount;
}

bool DescribeLiveDomainsResponse::CreateLimitCountHasBeenSet() const
{
    return m_createLimitCountHasBeenSet;
}

vector<int64_t> DescribeLiveDomainsResponse::GetPlayTypeCount() const
{
    return m_playTypeCount;
}

bool DescribeLiveDomainsResponse::PlayTypeCountHasBeenSet() const
{
    return m_playTypeCountHasBeenSet;
}


