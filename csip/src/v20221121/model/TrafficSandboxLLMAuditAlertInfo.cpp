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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxLLMAuditAlertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxLLMAuditAlertInfo::TrafficSandboxLLMAuditAlertInfo() :
    m_iDHasBeenSet(false),
    m_belongAssetTypeHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_systemRuleNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_hitPayloadHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_firstAlertTimeHasBeenSet(false),
    m_lastAlertTimeHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxLLMAuditAlertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("BelongAssetType") && !value["BelongAssetType"].IsNull())
    {
        if (!value["BelongAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.BelongAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongAssetType = string(value["BelongAssetType"].GetString());
        m_belongAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("SystemRuleName") && !value["SystemRuleName"].IsNull())
    {
        if (!value["SystemRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.SystemRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemRuleName = string(value["SystemRuleName"].GetString());
        m_systemRuleNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("HitPayload") && !value["HitPayload"].IsNull())
    {
        if (!value["HitPayload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.HitPayload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitPayload = string(value["HitPayload"].GetString());
        m_hitPayloadHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FirstAlertTime") && !value["FirstAlertTime"].IsNull())
    {
        if (!value["FirstAlertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.FirstAlertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstAlertTime = string(value["FirstAlertTime"].GetString());
        m_firstAlertTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAlertTime") && !value["LastAlertTime"].IsNull())
    {
        if (!value["LastAlertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditAlertInfo.LastAlertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAlertTime = string(value["LastAlertTime"].GetString());
        m_lastAlertTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxLLMAuditAlertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_belongAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_belongAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_systemRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemRuleName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_hitPayloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitPayload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitPayload.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_firstAlertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstAlertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstAlertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAlertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAlertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAlertTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t TrafficSandboxLLMAuditAlertInfo::GetID() const
{
    return m_iD;
}

void TrafficSandboxLLMAuditAlertInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetBelongAssetType() const
{
    return m_belongAssetType;
}

void TrafficSandboxLLMAuditAlertInfo::SetBelongAssetType(const string& _belongAssetType)
{
    m_belongAssetType = _belongAssetType;
    m_belongAssetTypeHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::BelongAssetTypeHasBeenSet() const
{
    return m_belongAssetTypeHasBeenSet;
}

int64_t TrafficSandboxLLMAuditAlertInfo::GetRuleID() const
{
    return m_ruleID;
}

void TrafficSandboxLLMAuditAlertInfo::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetRuleName() const
{
    return m_ruleName;
}

void TrafficSandboxLLMAuditAlertInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetSystemRuleName() const
{
    return m_systemRuleName;
}

void TrafficSandboxLLMAuditAlertInfo::SetSystemRuleName(const string& _systemRuleName)
{
    m_systemRuleName = _systemRuleName;
    m_systemRuleNameHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::SystemRuleNameHasBeenSet() const
{
    return m_systemRuleNameHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetInstanceId() const
{
    return m_instanceId;
}

void TrafficSandboxLLMAuditAlertInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetInstanceName() const
{
    return m_instanceName;
}

void TrafficSandboxLLMAuditAlertInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetClusterId() const
{
    return m_clusterId;
}

void TrafficSandboxLLMAuditAlertInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetContainerId() const
{
    return m_containerId;
}

void TrafficSandboxLLMAuditAlertInfo::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetContainerName() const
{
    return m_containerName;
}

void TrafficSandboxLLMAuditAlertInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetHitPayload() const
{
    return m_hitPayload;
}

void TrafficSandboxLLMAuditAlertInfo::SetHitPayload(const string& _hitPayload)
{
    m_hitPayload = _hitPayload;
    m_hitPayloadHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::HitPayloadHasBeenSet() const
{
    return m_hitPayloadHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetRuleAction() const
{
    return m_ruleAction;
}

void TrafficSandboxLLMAuditAlertInfo::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetLevel() const
{
    return m_level;
}

void TrafficSandboxLLMAuditAlertInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetStatus() const
{
    return m_status;
}

void TrafficSandboxLLMAuditAlertInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetFirstAlertTime() const
{
    return m_firstAlertTime;
}

void TrafficSandboxLLMAuditAlertInfo::SetFirstAlertTime(const string& _firstAlertTime)
{
    m_firstAlertTime = _firstAlertTime;
    m_firstAlertTimeHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::FirstAlertTimeHasBeenSet() const
{
    return m_firstAlertTimeHasBeenSet;
}

string TrafficSandboxLLMAuditAlertInfo::GetLastAlertTime() const
{
    return m_lastAlertTime;
}

void TrafficSandboxLLMAuditAlertInfo::SetLastAlertTime(const string& _lastAlertTime)
{
    m_lastAlertTime = _lastAlertTime;
    m_lastAlertTimeHasBeenSet = true;
}

bool TrafficSandboxLLMAuditAlertInfo::LastAlertTimeHasBeenSet() const
{
    return m_lastAlertTimeHasBeenSet;
}

