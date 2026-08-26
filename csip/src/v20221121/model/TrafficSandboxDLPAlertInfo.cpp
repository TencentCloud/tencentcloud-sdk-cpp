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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPAlertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxDLPAlertInfo::TrafficSandboxDLPAlertInfo() :
    m_iDHasBeenSet(false),
    m_belongAssetTypeHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_exeHasBeenSet(false),
    m_paramHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_matchScopeHasBeenSet(false),
    m_matchContentHasBeenSet(false),
    m_matchContentSampleHasBeenSet(false),
    m_upProtoHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_countHasBeenSet(false),
    m_firstAlertTimeHasBeenSet(false),
    m_lastAlertTimeHasBeenSet(false),
    m_ruleActionHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxDLPAlertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("BelongAssetType") && !value["BelongAssetType"].IsNull())
    {
        if (!value["BelongAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.BelongAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongAssetType = string(value["BelongAssetType"].GetString());
        m_belongAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("Param") && !value["Param"].IsNull())
    {
        if (!value["Param"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.Param` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_param = string(value["Param"].GetString());
        m_paramHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("MatchScope") && !value["MatchScope"].IsNull())
    {
        if (!value["MatchScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.MatchScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchScope = string(value["MatchScope"].GetString());
        m_matchScopeHasBeenSet = true;
    }

    if (value.HasMember("MatchContent") && !value["MatchContent"].IsNull())
    {
        if (!value["MatchContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.MatchContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchContent = string(value["MatchContent"].GetString());
        m_matchContentHasBeenSet = true;
    }

    if (value.HasMember("MatchContentSample") && !value["MatchContentSample"].IsNull())
    {
        if (!value["MatchContentSample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.MatchContentSample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchContentSample = string(value["MatchContentSample"].GetString());
        m_matchContentSampleHasBeenSet = true;
    }

    if (value.HasMember("UpProto") && !value["UpProto"].IsNull())
    {
        if (!value["UpProto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.UpProto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upProto = string(value["UpProto"].GetString());
        m_upProtoHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("FirstAlertTime") && !value["FirstAlertTime"].IsNull())
    {
        if (!value["FirstAlertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.FirstAlertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstAlertTime = string(value["FirstAlertTime"].GetString());
        m_firstAlertTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAlertTime") && !value["LastAlertTime"].IsNull())
    {
        if (!value["LastAlertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.LastAlertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAlertTime = string(value["LastAlertTime"].GetString());
        m_lastAlertTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPAlertInfo.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxDLPAlertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_matchScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchScope.c_str(), allocator).Move(), allocator);
    }

    if (m_matchContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchContent.c_str(), allocator).Move(), allocator);
    }

    if (m_matchContentSampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchContentSample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchContentSample.c_str(), allocator).Move(), allocator);
    }

    if (m_upProtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpProto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upProto.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
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


int64_t TrafficSandboxDLPAlertInfo::GetID() const
{
    return m_iD;
}

void TrafficSandboxDLPAlertInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetBelongAssetType() const
{
    return m_belongAssetType;
}

void TrafficSandboxDLPAlertInfo::SetBelongAssetType(const string& _belongAssetType)
{
    m_belongAssetType = _belongAssetType;
    m_belongAssetTypeHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::BelongAssetTypeHasBeenSet() const
{
    return m_belongAssetTypeHasBeenSet;
}

int64_t TrafficSandboxDLPAlertInfo::GetRuleID() const
{
    return m_ruleID;
}

void TrafficSandboxDLPAlertInfo::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetRuleName() const
{
    return m_ruleName;
}

void TrafficSandboxDLPAlertInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetUUID() const
{
    return m_uUID;
}

void TrafficSandboxDLPAlertInfo::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetInstanceId() const
{
    return m_instanceId;
}

void TrafficSandboxDLPAlertInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetInstanceName() const
{
    return m_instanceName;
}

void TrafficSandboxDLPAlertInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetClusterId() const
{
    return m_clusterId;
}

void TrafficSandboxDLPAlertInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetContainerId() const
{
    return m_containerId;
}

void TrafficSandboxDLPAlertInfo::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetContainerName() const
{
    return m_containerName;
}

void TrafficSandboxDLPAlertInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetExe() const
{
    return m_exe;
}

void TrafficSandboxDLPAlertInfo::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetParam() const
{
    return m_param;
}

void TrafficSandboxDLPAlertInfo::SetParam(const string& _param)
{
    m_param = _param;
    m_paramHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::ParamHasBeenSet() const
{
    return m_paramHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetTarget() const
{
    return m_target;
}

void TrafficSandboxDLPAlertInfo::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetMatchScope() const
{
    return m_matchScope;
}

void TrafficSandboxDLPAlertInfo::SetMatchScope(const string& _matchScope)
{
    m_matchScope = _matchScope;
    m_matchScopeHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::MatchScopeHasBeenSet() const
{
    return m_matchScopeHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetMatchContent() const
{
    return m_matchContent;
}

void TrafficSandboxDLPAlertInfo::SetMatchContent(const string& _matchContent)
{
    m_matchContent = _matchContent;
    m_matchContentHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::MatchContentHasBeenSet() const
{
    return m_matchContentHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetMatchContentSample() const
{
    return m_matchContentSample;
}

void TrafficSandboxDLPAlertInfo::SetMatchContentSample(const string& _matchContentSample)
{
    m_matchContentSample = _matchContentSample;
    m_matchContentSampleHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::MatchContentSampleHasBeenSet() const
{
    return m_matchContentSampleHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetUpProto() const
{
    return m_upProto;
}

void TrafficSandboxDLPAlertInfo::SetUpProto(const string& _upProto)
{
    m_upProto = _upProto;
    m_upProtoHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::UpProtoHasBeenSet() const
{
    return m_upProtoHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetFileName() const
{
    return m_fileName;
}

void TrafficSandboxDLPAlertInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetFileType() const
{
    return m_fileType;
}

void TrafficSandboxDLPAlertInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

int64_t TrafficSandboxDLPAlertInfo::GetFileSize() const
{
    return m_fileSize;
}

void TrafficSandboxDLPAlertInfo::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetLevel() const
{
    return m_level;
}

void TrafficSandboxDLPAlertInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetStatus() const
{
    return m_status;
}

void TrafficSandboxDLPAlertInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t TrafficSandboxDLPAlertInfo::GetCount() const
{
    return m_count;
}

void TrafficSandboxDLPAlertInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetFirstAlertTime() const
{
    return m_firstAlertTime;
}

void TrafficSandboxDLPAlertInfo::SetFirstAlertTime(const string& _firstAlertTime)
{
    m_firstAlertTime = _firstAlertTime;
    m_firstAlertTimeHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::FirstAlertTimeHasBeenSet() const
{
    return m_firstAlertTimeHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetLastAlertTime() const
{
    return m_lastAlertTime;
}

void TrafficSandboxDLPAlertInfo::SetLastAlertTime(const string& _lastAlertTime)
{
    m_lastAlertTime = _lastAlertTime;
    m_lastAlertTimeHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::LastAlertTimeHasBeenSet() const
{
    return m_lastAlertTimeHasBeenSet;
}

string TrafficSandboxDLPAlertInfo::GetRuleAction() const
{
    return m_ruleAction;
}

void TrafficSandboxDLPAlertInfo::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool TrafficSandboxDLPAlertInfo::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

