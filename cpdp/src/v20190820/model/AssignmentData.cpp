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

#include <tencentcloud/cpdp/v20190820/model/AssignmentData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AssignmentData::AssignmentData() :
    m_anchorIdHasBeenSet(false),
    m_anchorNameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false)
{
}

CoreInternalOutcome AssignmentData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AnchorId") && !value["AnchorId"].IsNull())
    {
        if (!value["AnchorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssignmentData.AnchorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorId = string(value["AnchorId"].GetString());
        m_anchorIdHasBeenSet = true;
    }

    if (value.HasMember("AnchorName") && !value["AnchorName"].IsNull())
    {
        if (!value["AnchorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssignmentData.AnchorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorName = string(value["AnchorName"].GetString());
        m_anchorNameHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssignmentData.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssignmentData.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssignmentData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_anchorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorId.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorName.c_str(), allocator).Move(), allocator);
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

}


string AssignmentData::GetAnchorId() const
{
    return m_anchorId;
}

void AssignmentData::SetAnchorId(const string& _anchorId)
{
    m_anchorId = _anchorId;
    m_anchorIdHasBeenSet = true;
}

bool AssignmentData::AnchorIdHasBeenSet() const
{
    return m_anchorIdHasBeenSet;
}

string AssignmentData::GetAnchorName() const
{
    return m_anchorName;
}

void AssignmentData::SetAnchorName(const string& _anchorName)
{
    m_anchorName = _anchorName;
    m_anchorNameHasBeenSet = true;
}

bool AssignmentData::AnchorNameHasBeenSet() const
{
    return m_anchorNameHasBeenSet;
}

string AssignmentData::GetAgentId() const
{
    return m_agentId;
}

void AssignmentData::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool AssignmentData::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string AssignmentData::GetAgentName() const
{
    return m_agentName;
}

void AssignmentData::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool AssignmentData::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

