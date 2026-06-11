/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/waf/v20180125/model/DescribeApiSecEventDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeApiSecEventDetailResponse::DescribeApiSecEventDetailResponse() :
    m_descriptionHasBeenSet(false),
    m_eventInfoHasBeenSet(false),
    m_attackSourceHasBeenSet(false),
    m_changeHistoryHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApiSecEventDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("EventInfo") && !rsp["EventInfo"].IsNull())
    {
        if (!rsp["EventInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventInfo.Deserialize(rsp["EventInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventInfoHasBeenSet = true;
    }

    if (rsp.HasMember("AttackSource") && !rsp["AttackSource"].IsNull())
    {
        if (!rsp["AttackSource"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttackSource` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AttackSource"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecAttackSource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attackSource.push_back(item);
        }
        m_attackSourceHasBeenSet = true;
    }

    if (rsp.HasMember("ChangeHistory") && !rsp["ChangeHistory"].IsNull())
    {
        if (!rsp["ChangeHistory"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChangeHistory` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ChangeHistory"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiSecEventChange item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_changeHistory.push_back(item);
        }
        m_changeHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeApiSecEventDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_eventInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_attackSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attackSource.begin(); itr != m_attackSource.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_changeHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_changeHistory.begin(); itr != m_changeHistory.end(); ++itr, ++i)
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


string DescribeApiSecEventDetailResponse::GetDescription() const
{
    return m_description;
}

bool DescribeApiSecEventDetailResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

ApiEvent DescribeApiSecEventDetailResponse::GetEventInfo() const
{
    return m_eventInfo;
}

bool DescribeApiSecEventDetailResponse::EventInfoHasBeenSet() const
{
    return m_eventInfoHasBeenSet;
}

vector<ApiSecAttackSource> DescribeApiSecEventDetailResponse::GetAttackSource() const
{
    return m_attackSource;
}

bool DescribeApiSecEventDetailResponse::AttackSourceHasBeenSet() const
{
    return m_attackSourceHasBeenSet;
}

vector<ApiSecEventChange> DescribeApiSecEventDetailResponse::GetChangeHistory() const
{
    return m_changeHistory;
}

bool DescribeApiSecEventDetailResponse::ChangeHistoryHasBeenSet() const
{
    return m_changeHistoryHasBeenSet;
}


