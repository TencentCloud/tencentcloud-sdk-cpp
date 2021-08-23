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

#include <tencentcloud/cdn/v20180606/model/DescribeScdnTopDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeScdnTopDataResponse::DescribeScdnTopDataResponse() :
    m_topTypeDataHasBeenSet(false),
    m_topIpDataHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_topUrlDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScdnTopDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TopTypeData") && !rsp["TopTypeData"].IsNull())
    {
        if (!rsp["TopTypeData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopTypeData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TopTypeData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScdnTypeData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topTypeData.push_back(item);
        }
        m_topTypeDataHasBeenSet = true;
    }

    if (rsp.HasMember("TopIpData") && !rsp["TopIpData"].IsNull())
    {
        if (!rsp["TopIpData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopIpData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TopIpData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScdnTopData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topIpData.push_back(item);
        }
        m_topIpDataHasBeenSet = true;
    }

    if (rsp.HasMember("Mode") && !rsp["Mode"].IsNull())
    {
        if (!rsp["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(rsp["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (rsp.HasMember("TopUrlData") && !rsp["TopUrlData"].IsNull())
    {
        if (!rsp["TopUrlData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopUrlData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TopUrlData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScdnTopUrlData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topUrlData.push_back(item);
        }
        m_topUrlDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeScdnTopDataResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_topTypeDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopTypeData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topTypeData.begin(); itr != m_topTypeData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topIpDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopIpData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topIpData.begin(); itr != m_topIpData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_topUrlDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopUrlData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topUrlData.begin(); itr != m_topUrlData.end(); ++itr, ++i)
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


vector<ScdnTypeData> DescribeScdnTopDataResponse::GetTopTypeData() const
{
    return m_topTypeData;
}

bool DescribeScdnTopDataResponse::TopTypeDataHasBeenSet() const
{
    return m_topTypeDataHasBeenSet;
}

vector<ScdnTopData> DescribeScdnTopDataResponse::GetTopIpData() const
{
    return m_topIpData;
}

bool DescribeScdnTopDataResponse::TopIpDataHasBeenSet() const
{
    return m_topIpDataHasBeenSet;
}

string DescribeScdnTopDataResponse::GetMode() const
{
    return m_mode;
}

bool DescribeScdnTopDataResponse::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<ScdnTopUrlData> DescribeScdnTopDataResponse::GetTopUrlData() const
{
    return m_topUrlData;
}

bool DescribeScdnTopDataResponse::TopUrlDataHasBeenSet() const
{
    return m_topUrlDataHasBeenSet;
}


