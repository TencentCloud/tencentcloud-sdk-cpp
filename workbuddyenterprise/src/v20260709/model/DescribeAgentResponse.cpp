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

#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

DescribeAgentResponse::DescribeAgentResponse() :
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_avatarUrlHasBeenSet(false),
    m_isDebugHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_activeSessionCountHasBeenSet(false),
    m_routingSetHasBeenSet(false),
    m_a2AConfigHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AgentId") && !rsp["AgentId"].IsNull())
    {
        if (!rsp["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(rsp["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (rsp.HasMember("AgentName") && !rsp["AgentName"].IsNull())
    {
        if (!rsp["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(rsp["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
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

    if (rsp.HasMember("AvatarUrl") && !rsp["AvatarUrl"].IsNull())
    {
        if (!rsp["AvatarUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatarUrl = string(rsp["AvatarUrl"].GetString());
        m_avatarUrlHasBeenSet = true;
    }

    if (rsp.HasMember("IsDebug") && !rsp["IsDebug"].IsNull())
    {
        if (!rsp["IsDebug"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsDebug` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDebug = rsp["IsDebug"].GetBool();
        m_isDebugHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(rsp["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ModifiedTime") && !rsp["ModifiedTime"].IsNull())
    {
        if (!rsp["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(rsp["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ActiveSessionCount") && !rsp["ActiveSessionCount"].IsNull())
    {
        if (!rsp["ActiveSessionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveSessionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeSessionCount = rsp["ActiveSessionCount"].GetInt64();
        m_activeSessionCountHasBeenSet = true;
    }

    if (rsp.HasMember("RoutingSet") && !rsp["RoutingSet"].IsNull())
    {
        if (!rsp["RoutingSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoutingSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RoutingSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoutingItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routingSet.push_back(item);
        }
        m_routingSetHasBeenSet = true;
    }

    if (rsp.HasMember("A2AConfig") && !rsp["A2AConfig"].IsNull())
    {
        if (!rsp["A2AConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `A2AConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_a2AConfig.Deserialize(rsp["A2AConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_a2AConfigHasBeenSet = true;
    }

    if (rsp.HasMember("AccountId") && !rsp["AccountId"].IsNull())
    {
        if (!rsp["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(rsp["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAgentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatarUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isDebugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDebug";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDebug, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_activeSessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveSessionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeSessionCount, allocator);
    }

    if (m_routingSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routingSet.begin(); itr != m_routingSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_a2AConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_a2AConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
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


string DescribeAgentResponse::GetAgentId() const
{
    return m_agentId;
}

bool DescribeAgentResponse::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string DescribeAgentResponse::GetAgentName() const
{
    return m_agentName;
}

bool DescribeAgentResponse::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string DescribeAgentResponse::GetDescription() const
{
    return m_description;
}

bool DescribeAgentResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeAgentResponse::GetAvatarUrl() const
{
    return m_avatarUrl;
}

bool DescribeAgentResponse::AvatarUrlHasBeenSet() const
{
    return m_avatarUrlHasBeenSet;
}

bool DescribeAgentResponse::GetIsDebug() const
{
    return m_isDebug;
}

bool DescribeAgentResponse::IsDebugHasBeenSet() const
{
    return m_isDebugHasBeenSet;
}

string DescribeAgentResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeAgentResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DescribeAgentResponse::GetModifiedTime() const
{
    return m_modifiedTime;
}

bool DescribeAgentResponse::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

int64_t DescribeAgentResponse::GetActiveSessionCount() const
{
    return m_activeSessionCount;
}

bool DescribeAgentResponse::ActiveSessionCountHasBeenSet() const
{
    return m_activeSessionCountHasBeenSet;
}

vector<RoutingItem> DescribeAgentResponse::GetRoutingSet() const
{
    return m_routingSet;
}

bool DescribeAgentResponse::RoutingSetHasBeenSet() const
{
    return m_routingSetHasBeenSet;
}

A2AConfig DescribeAgentResponse::GetA2AConfig() const
{
    return m_a2AConfig;
}

bool DescribeAgentResponse::A2AConfigHasBeenSet() const
{
    return m_a2AConfigHasBeenSet;
}

string DescribeAgentResponse::GetAccountId() const
{
    return m_accountId;
}

bool DescribeAgentResponse::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}


