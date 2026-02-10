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

#include <tencentcloud/lke/v20231130/model/DescribeAppAgentListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeAppAgentListResponse::DescribeAppAgentListResponse() :
    m_staringAgentIdHasBeenSet(false),
    m_agentsHasBeenSet(false),
    m_handoffAdvancedSettingHasBeenSet(false),
    m_maxAgentCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAppAgentListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StaringAgentId") && !rsp["StaringAgentId"].IsNull())
    {
        if (!rsp["StaringAgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaringAgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staringAgentId = string(rsp["StaringAgentId"].GetString());
        m_staringAgentIdHasBeenSet = true;
    }

    if (rsp.HasMember("Agents") && !rsp["Agents"].IsNull())
    {
        if (!rsp["Agents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Agents` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Agents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Agent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_agents.push_back(item);
        }
        m_agentsHasBeenSet = true;
    }

    if (rsp.HasMember("HandoffAdvancedSetting") && !rsp["HandoffAdvancedSetting"].IsNull())
    {
        if (!rsp["HandoffAdvancedSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HandoffAdvancedSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_handoffAdvancedSetting.Deserialize(rsp["HandoffAdvancedSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_handoffAdvancedSettingHasBeenSet = true;
    }

    if (rsp.HasMember("MaxAgentCount") && !rsp["MaxAgentCount"].IsNull())
    {
        if (!rsp["MaxAgentCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAgentCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAgentCount = rsp["MaxAgentCount"].GetInt64();
        m_maxAgentCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAppAgentListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_staringAgentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaringAgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staringAgentId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_agents.begin(); itr != m_agents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_handoffAdvancedSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandoffAdvancedSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_handoffAdvancedSetting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxAgentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgentCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAgentCount, allocator);
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


string DescribeAppAgentListResponse::GetStaringAgentId() const
{
    return m_staringAgentId;
}

bool DescribeAppAgentListResponse::StaringAgentIdHasBeenSet() const
{
    return m_staringAgentIdHasBeenSet;
}

vector<Agent> DescribeAppAgentListResponse::GetAgents() const
{
    return m_agents;
}

bool DescribeAppAgentListResponse::AgentsHasBeenSet() const
{
    return m_agentsHasBeenSet;
}

AgentHandoffAdvancedSetting DescribeAppAgentListResponse::GetHandoffAdvancedSetting() const
{
    return m_handoffAdvancedSetting;
}

bool DescribeAppAgentListResponse::HandoffAdvancedSettingHasBeenSet() const
{
    return m_handoffAdvancedSettingHasBeenSet;
}

int64_t DescribeAppAgentListResponse::GetMaxAgentCount() const
{
    return m_maxAgentCount;
}

bool DescribeAppAgentListResponse::MaxAgentCountHasBeenSet() const
{
    return m_maxAgentCountHasBeenSet;
}


