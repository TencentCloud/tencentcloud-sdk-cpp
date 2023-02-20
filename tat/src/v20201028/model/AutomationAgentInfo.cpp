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

#include <tencentcloud/tat/v20201028/model/AutomationAgentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

AutomationAgentInfo::AutomationAgentInfo() :
    m_instanceIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_lastHeartbeatTimeHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_supportFeaturesHasBeenSet(false)
{
}

CoreInternalOutcome AutomationAgentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutomationAgentInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutomationAgentInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("LastHeartbeatTime") && !value["LastHeartbeatTime"].IsNull())
    {
        if (!value["LastHeartbeatTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutomationAgentInfo.LastHeartbeatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastHeartbeatTime = string(value["LastHeartbeatTime"].GetString());
        m_lastHeartbeatTimeHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutomationAgentInfo.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutomationAgentInfo.Environment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environment = string(value["Environment"].GetString());
        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("SupportFeatures") && !value["SupportFeatures"].IsNull())
    {
        if (!value["SupportFeatures"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutomationAgentInfo.SupportFeatures` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportFeatures"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportFeatures.push_back((*itr).GetString());
        }
        m_supportFeaturesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutomationAgentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_lastHeartbeatTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastHeartbeatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastHeartbeatTime.c_str(), allocator).Move(), allocator);
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_supportFeaturesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportFeatures";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportFeatures.begin(); itr != m_supportFeatures.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AutomationAgentInfo::GetInstanceId() const
{
    return m_instanceId;
}

void AutomationAgentInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AutomationAgentInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AutomationAgentInfo::GetVersion() const
{
    return m_version;
}

void AutomationAgentInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AutomationAgentInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string AutomationAgentInfo::GetLastHeartbeatTime() const
{
    return m_lastHeartbeatTime;
}

void AutomationAgentInfo::SetLastHeartbeatTime(const string& _lastHeartbeatTime)
{
    m_lastHeartbeatTime = _lastHeartbeatTime;
    m_lastHeartbeatTimeHasBeenSet = true;
}

bool AutomationAgentInfo::LastHeartbeatTimeHasBeenSet() const
{
    return m_lastHeartbeatTimeHasBeenSet;
}

string AutomationAgentInfo::GetAgentStatus() const
{
    return m_agentStatus;
}

void AutomationAgentInfo::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool AutomationAgentInfo::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

string AutomationAgentInfo::GetEnvironment() const
{
    return m_environment;
}

void AutomationAgentInfo::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool AutomationAgentInfo::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

vector<string> AutomationAgentInfo::GetSupportFeatures() const
{
    return m_supportFeatures;
}

void AutomationAgentInfo::SetSupportFeatures(const vector<string>& _supportFeatures)
{
    m_supportFeatures = _supportFeatures;
    m_supportFeaturesHasBeenSet = true;
}

bool AutomationAgentInfo::SupportFeaturesHasBeenSet() const
{
    return m_supportFeaturesHasBeenSet;
}

