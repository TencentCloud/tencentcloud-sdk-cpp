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

#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeAgentSessionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

DescribeAgentSessionResponse::DescribeAgentSessionResponse() :
    m_sessionIdHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_endpointSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentSessionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SessionId") && !rsp["SessionId"].IsNull())
    {
        if (!rsp["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(rsp["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (rsp.HasMember("SessionName") && !rsp["SessionName"].IsNull())
    {
        if (!rsp["SessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionName = string(rsp["SessionName"].GetString());
        m_sessionNameHasBeenSet = true;
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

    if (rsp.HasMember("VersionId") && !rsp["VersionId"].IsNull())
    {
        if (!rsp["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(rsp["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (rsp.HasMember("VersionName") && !rsp["VersionName"].IsNull())
    {
        if (!rsp["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(rsp["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Creator") && !rsp["Creator"].IsNull())
    {
        if (!rsp["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(rsp["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (rsp.HasMember("Source") && !rsp["Source"].IsNull())
    {
        if (!rsp["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(rsp["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (rsp.HasMember("EndpointSet") && !rsp["EndpointSet"].IsNull())
    {
        if (!rsp["EndpointSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EndpointSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChatEndpoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endpointSet.push_back(item);
        }
        m_endpointSetHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeAgentSessionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpointSet.begin(); itr != m_endpointSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeAgentSessionResponse::GetSessionId() const
{
    return m_sessionId;
}

bool DescribeAgentSessionResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeAgentSessionResponse::GetSessionName() const
{
    return m_sessionName;
}

bool DescribeAgentSessionResponse::SessionNameHasBeenSet() const
{
    return m_sessionNameHasBeenSet;
}

string DescribeAgentSessionResponse::GetAgentId() const
{
    return m_agentId;
}

bool DescribeAgentSessionResponse::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string DescribeAgentSessionResponse::GetAgentName() const
{
    return m_agentName;
}

bool DescribeAgentSessionResponse::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string DescribeAgentSessionResponse::GetVersionId() const
{
    return m_versionId;
}

bool DescribeAgentSessionResponse::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string DescribeAgentSessionResponse::GetVersionName() const
{
    return m_versionName;
}

bool DescribeAgentSessionResponse::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string DescribeAgentSessionResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAgentSessionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAgentSessionResponse::GetCreator() const
{
    return m_creator;
}

bool DescribeAgentSessionResponse::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string DescribeAgentSessionResponse::GetSource() const
{
    return m_source;
}

bool DescribeAgentSessionResponse::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

vector<ChatEndpoint> DescribeAgentSessionResponse::GetEndpointSet() const
{
    return m_endpointSet;
}

bool DescribeAgentSessionResponse::EndpointSetHasBeenSet() const
{
    return m_endpointSetHasBeenSet;
}

string DescribeAgentSessionResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeAgentSessionResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DescribeAgentSessionResponse::GetModifiedTime() const
{
    return m_modifiedTime;
}

bool DescribeAgentSessionResponse::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}


