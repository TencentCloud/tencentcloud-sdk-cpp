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

#include <tencentcloud/tdai/v20250717/model/AgentInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

AgentInstance::AgentInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentInternalNameHasBeenSet(false),
    m_agentTypeHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_deployPlaceHasBeenSet(false),
    m_policyIdsHasBeenSet(false),
    m_clawConfigHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_allowedActionsHasBeenSet(false),
    m_lastActiveTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome AgentInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("AgentInternalName") && !value["AgentInternalName"].IsNull())
    {
        if (!value["AgentInternalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.AgentInternalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentInternalName = string(value["AgentInternalName"].GetString());
        m_agentInternalNameHasBeenSet = true;
    }

    if (value.HasMember("AgentType") && !value["AgentType"].IsNull())
    {
        if (!value["AgentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.AgentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentType = string(value["AgentType"].GetString());
        m_agentTypeHasBeenSet = true;
    }

    if (value.HasMember("AgentVersion") && !value["AgentVersion"].IsNull())
    {
        if (!value["AgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.AgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentVersion = string(value["AgentVersion"].GetString());
        m_agentVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentInstance.Parameters` is not array type"));

        const rapidjson::Value &tmpValue = value["Parameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Parameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parameters.push_back(item);
        }
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentInstance.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("DeployPlace") && !value["DeployPlace"].IsNull())
    {
        if (!value["DeployPlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.DeployPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployPlace = string(value["DeployPlace"].GetString());
        m_deployPlaceHasBeenSet = true;
    }

    if (value.HasMember("PolicyIds") && !value["PolicyIds"].IsNull())
    {
        if (!value["PolicyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentInstance.PolicyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_policyIds.push_back((*itr).GetString());
        }
        m_policyIdsHasBeenSet = true;
    }

    if (value.HasMember("ClawConfig") && !value["ClawConfig"].IsNull())
    {
        if (!value["ClawConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.ClawConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clawConfig.Deserialize(value["ClawConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clawConfigHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("AllowedActions") && !value["AllowedActions"].IsNull())
    {
        if (!value["AllowedActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentInstance.AllowedActions` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowedActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowedActions.push_back((*itr).GetString());
        }
        m_allowedActionsHasBeenSet = true;
    }

    if (value.HasMember("LastActiveTime") && !value["LastActiveTime"].IsNull())
    {
        if (!value["LastActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.LastActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastActiveTime = string(value["LastActiveTime"].GetString());
        m_lastActiveTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInstance.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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

    if (m_agentInternalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentInternalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentInternalName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentType.c_str(), allocator).Move(), allocator);
    }

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameters.begin(); itr != m_parameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deployPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyIds.begin(); itr != m_policyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clawConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClawConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clawConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_allowedActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedActions.begin(); itr != m_allowedActions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lastActiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastActiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string AgentInstance::GetInstanceId() const
{
    return m_instanceId;
}

void AgentInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AgentInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AgentInstance::GetInstanceName() const
{
    return m_instanceName;
}

void AgentInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AgentInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AgentInstance::GetAgentId() const
{
    return m_agentId;
}

void AgentInstance::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool AgentInstance::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string AgentInstance::GetAgentName() const
{
    return m_agentName;
}

void AgentInstance::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool AgentInstance::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string AgentInstance::GetAgentInternalName() const
{
    return m_agentInternalName;
}

void AgentInstance::SetAgentInternalName(const string& _agentInternalName)
{
    m_agentInternalName = _agentInternalName;
    m_agentInternalNameHasBeenSet = true;
}

bool AgentInstance::AgentInternalNameHasBeenSet() const
{
    return m_agentInternalNameHasBeenSet;
}

string AgentInstance::GetAgentType() const
{
    return m_agentType;
}

void AgentInstance::SetAgentType(const string& _agentType)
{
    m_agentType = _agentType;
    m_agentTypeHasBeenSet = true;
}

bool AgentInstance::AgentTypeHasBeenSet() const
{
    return m_agentTypeHasBeenSet;
}

string AgentInstance::GetAgentVersion() const
{
    return m_agentVersion;
}

void AgentInstance::SetAgentVersion(const string& _agentVersion)
{
    m_agentVersion = _agentVersion;
    m_agentVersionHasBeenSet = true;
}

bool AgentInstance::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

string AgentInstance::GetStatus() const
{
    return m_status;
}

void AgentInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Parameter> AgentInstance::GetParameters() const
{
    return m_parameters;
}

void AgentInstance::SetParameters(const vector<Parameter>& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool AgentInstance::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

string AgentInstance::GetCreateTime() const
{
    return m_createTime;
}

void AgentInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AgentInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AgentInstance::GetUpdateTime() const
{
    return m_updateTime;
}

void AgentInstance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AgentInstance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<TagItem> AgentInstance::GetTags() const
{
    return m_tags;
}

void AgentInstance::SetTags(const vector<TagItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AgentInstance::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string AgentInstance::GetDeployPlace() const
{
    return m_deployPlace;
}

void AgentInstance::SetDeployPlace(const string& _deployPlace)
{
    m_deployPlace = _deployPlace;
    m_deployPlaceHasBeenSet = true;
}

bool AgentInstance::DeployPlaceHasBeenSet() const
{
    return m_deployPlaceHasBeenSet;
}

vector<string> AgentInstance::GetPolicyIds() const
{
    return m_policyIds;
}

void AgentInstance::SetPolicyIds(const vector<string>& _policyIds)
{
    m_policyIds = _policyIds;
    m_policyIdsHasBeenSet = true;
}

bool AgentInstance::PolicyIdsHasBeenSet() const
{
    return m_policyIdsHasBeenSet;
}

ClawConfigInfo AgentInstance::GetClawConfig() const
{
    return m_clawConfig;
}

void AgentInstance::SetClawConfig(const ClawConfigInfo& _clawConfig)
{
    m_clawConfig = _clawConfig;
    m_clawConfigHasBeenSet = true;
}

bool AgentInstance::ClawConfigHasBeenSet() const
{
    return m_clawConfigHasBeenSet;
}

string AgentInstance::GetInstanceType() const
{
    return m_instanceType;
}

void AgentInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AgentInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<string> AgentInstance::GetAllowedActions() const
{
    return m_allowedActions;
}

void AgentInstance::SetAllowedActions(const vector<string>& _allowedActions)
{
    m_allowedActions = _allowedActions;
    m_allowedActionsHasBeenSet = true;
}

bool AgentInstance::AllowedActionsHasBeenSet() const
{
    return m_allowedActionsHasBeenSet;
}

string AgentInstance::GetLastActiveTime() const
{
    return m_lastActiveTime;
}

void AgentInstance::SetLastActiveTime(const string& _lastActiveTime)
{
    m_lastActiveTime = _lastActiveTime;
    m_lastActiveTimeHasBeenSet = true;
}

bool AgentInstance::LastActiveTimeHasBeenSet() const
{
    return m_lastActiveTimeHasBeenSet;
}

string AgentInstance::GetDescription() const
{
    return m_description;
}

void AgentInstance::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentInstance::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

