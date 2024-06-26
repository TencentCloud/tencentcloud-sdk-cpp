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

#include <tencentcloud/domain/v20180808/model/ReservedPreDomainsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

ReservedPreDomainsResponse::ReservedPreDomainsResponse() :
    m_sucDomainListHasBeenSet(false),
    m_failDomainListHasBeenSet(false),
    m_sucDomainsHasBeenSet(false)
{
}

CoreInternalOutcome ReservedPreDomainsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SucDomainList") && !rsp["SucDomainList"].IsNull())
    {
        if (!rsp["SucDomainList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SucDomainList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SucDomainList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sucDomainList.push_back((*itr).GetString());
        }
        m_sucDomainListHasBeenSet = true;
    }

    if (rsp.HasMember("FailDomainList") && !rsp["FailDomainList"].IsNull())
    {
        if (!rsp["FailDomainList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailDomainList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailDomainList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FailReservedDomainInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failDomainList.push_back(item);
        }
        m_failDomainListHasBeenSet = true;
    }

    if (rsp.HasMember("SucDomains") && !rsp["SucDomains"].IsNull())
    {
        if (!rsp["SucDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SucDomains` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SucDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SucDomainInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sucDomains.push_back(item);
        }
        m_sucDomainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ReservedPreDomainsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sucDomainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucDomainList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sucDomainList.begin(); itr != m_sucDomainList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failDomainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailDomainList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failDomainList.begin(); itr != m_failDomainList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sucDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sucDomains.begin(); itr != m_sucDomains.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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


vector<string> ReservedPreDomainsResponse::GetSucDomainList() const
{
    return m_sucDomainList;
}

bool ReservedPreDomainsResponse::SucDomainListHasBeenSet() const
{
    return m_sucDomainListHasBeenSet;
}

vector<FailReservedDomainInfo> ReservedPreDomainsResponse::GetFailDomainList() const
{
    return m_failDomainList;
}

bool ReservedPreDomainsResponse::FailDomainListHasBeenSet() const
{
    return m_failDomainListHasBeenSet;
}

vector<SucDomainInfo> ReservedPreDomainsResponse::GetSucDomains() const
{
    return m_sucDomains;
}

bool ReservedPreDomainsResponse::SucDomainsHasBeenSet() const
{
    return m_sucDomainsHasBeenSet;
}


