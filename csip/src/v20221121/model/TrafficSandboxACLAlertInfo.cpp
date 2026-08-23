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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLAlertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxACLAlertInfo::TrafficSandboxACLAlertInfo() :
    m_iDHasBeenSet(false),
    m_belongAssetTypeHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_exeHasBeenSet(false),
    m_paramHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_countHasBeenSet(false),
    m_firstAlertTimeHasBeenSet(false),
    m_lastAlertTimeHasBeenSet(false),
    m_ruleActionHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxACLAlertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("BelongAssetType") && !value["BelongAssetType"].IsNull())
    {
        if (!value["BelongAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.BelongAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongAssetType = string(value["BelongAssetType"].GetString());
        m_belongAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("Param") && !value["Param"].IsNull())
    {
        if (!value["Param"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.Param` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_param = string(value["Param"].GetString());
        m_paramHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("FirstAlertTime") && !value["FirstAlertTime"].IsNull())
    {
        if (!value["FirstAlertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.FirstAlertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstAlertTime = string(value["FirstAlertTime"].GetString());
        m_firstAlertTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAlertTime") && !value["LastAlertTime"].IsNull())
    {
        if (!value["LastAlertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.LastAlertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAlertTime = string(value["LastAlertTime"].GetString());
        m_lastAlertTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxACLAlertInfo.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxACLAlertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
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

    if (m_exeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exe.c_str(), allocator).Move(), allocator);
    }

    if (m_paramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_param.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
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

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
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

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

}


int64_t TrafficSandboxACLAlertInfo::GetID() const
{
    return m_iD;
}

void TrafficSandboxACLAlertInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetBelongAssetType() const
{
    return m_belongAssetType;
}

void TrafficSandboxACLAlertInfo::SetBelongAssetType(const string& _belongAssetType)
{
    m_belongAssetType = _belongAssetType;
    m_belongAssetTypeHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::BelongAssetTypeHasBeenSet() const
{
    return m_belongAssetTypeHasBeenSet;
}

int64_t TrafficSandboxACLAlertInfo::GetRuleID() const
{
    return m_ruleID;
}

void TrafficSandboxACLAlertInfo::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetRuleName() const
{
    return m_ruleName;
}

void TrafficSandboxACLAlertInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetUUID() const
{
    return m_uUID;
}

void TrafficSandboxACLAlertInfo::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetInstanceId() const
{
    return m_instanceId;
}

void TrafficSandboxACLAlertInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetInstanceName() const
{
    return m_instanceName;
}

void TrafficSandboxACLAlertInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetExe() const
{
    return m_exe;
}

void TrafficSandboxACLAlertInfo::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetParam() const
{
    return m_param;
}

void TrafficSandboxACLAlertInfo::SetParam(const string& _param)
{
    m_param = _param;
    m_paramHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::ParamHasBeenSet() const
{
    return m_paramHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetTarget() const
{
    return m_target;
}

void TrafficSandboxACLAlertInfo::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetProtocol() const
{
    return m_protocol;
}

void TrafficSandboxACLAlertInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetLevel() const
{
    return m_level;
}

void TrafficSandboxACLAlertInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetStatus() const
{
    return m_status;
}

void TrafficSandboxACLAlertInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t TrafficSandboxACLAlertInfo::GetCount() const
{
    return m_count;
}

void TrafficSandboxACLAlertInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetFirstAlertTime() const
{
    return m_firstAlertTime;
}

void TrafficSandboxACLAlertInfo::SetFirstAlertTime(const string& _firstAlertTime)
{
    m_firstAlertTime = _firstAlertTime;
    m_firstAlertTimeHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::FirstAlertTimeHasBeenSet() const
{
    return m_firstAlertTimeHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetLastAlertTime() const
{
    return m_lastAlertTime;
}

void TrafficSandboxACLAlertInfo::SetLastAlertTime(const string& _lastAlertTime)
{
    m_lastAlertTime = _lastAlertTime;
    m_lastAlertTimeHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::LastAlertTimeHasBeenSet() const
{
    return m_lastAlertTimeHasBeenSet;
}

string TrafficSandboxACLAlertInfo::GetRuleAction() const
{
    return m_ruleAction;
}

void TrafficSandboxACLAlertInfo::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool TrafficSandboxACLAlertInfo::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

