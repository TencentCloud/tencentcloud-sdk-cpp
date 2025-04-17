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

#include <tencentcloud/cwp/v20180228/model/LicenseBindDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

LicenseBindDetail::LicenseBindDetail() :
    m_machineNameHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_isUnBindHasBeenSet(false),
    m_isSwitchBindHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_agentStateHasBeenSet(false)
{
}

CoreInternalOutcome LicenseBindDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("IsUnBind") && !value["IsUnBind"].IsNull())
    {
        if (!value["IsUnBind"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.IsUnBind` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUnBind = value["IsUnBind"].GetBool();
        m_isUnBindHasBeenSet = true;
    }

    if (value.HasMember("IsSwitchBind") && !value["IsSwitchBind"].IsNull())
    {
        if (!value["IsSwitchBind"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.IsSwitchBind` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSwitchBind = value["IsSwitchBind"].GetBool();
        m_isSwitchBindHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("AgentState") && !value["AgentState"].IsNull())
    {
        if (!value["AgentState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindDetail.AgentState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentState = string(value["AgentState"].GetString());
        m_agentStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseBindDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isUnBindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnBind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnBind, allocator);
    }

    if (m_isSwitchBindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSwitchBind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSwitchBind, allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_agentStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentState.c_str(), allocator).Move(), allocator);
    }

}


string LicenseBindDetail::GetMachineName() const
{
    return m_machineName;
}

void LicenseBindDetail::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool LicenseBindDetail::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string LicenseBindDetail::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void LicenseBindDetail::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool LicenseBindDetail::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string LicenseBindDetail::GetMachineIp() const
{
    return m_machineIp;
}

void LicenseBindDetail::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool LicenseBindDetail::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string LicenseBindDetail::GetQuuid() const
{
    return m_quuid;
}

void LicenseBindDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool LicenseBindDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string LicenseBindDetail::GetUuid() const
{
    return m_uuid;
}

void LicenseBindDetail::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool LicenseBindDetail::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

vector<string> LicenseBindDetail::GetTags() const
{
    return m_tags;
}

void LicenseBindDetail::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LicenseBindDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string LicenseBindDetail::GetAgentStatus() const
{
    return m_agentStatus;
}

void LicenseBindDetail::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool LicenseBindDetail::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

bool LicenseBindDetail::GetIsUnBind() const
{
    return m_isUnBind;
}

void LicenseBindDetail::SetIsUnBind(const bool& _isUnBind)
{
    m_isUnBind = _isUnBind;
    m_isUnBindHasBeenSet = true;
}

bool LicenseBindDetail::IsUnBindHasBeenSet() const
{
    return m_isUnBindHasBeenSet;
}

bool LicenseBindDetail::GetIsSwitchBind() const
{
    return m_isSwitchBind;
}

void LicenseBindDetail::SetIsSwitchBind(const bool& _isSwitchBind)
{
    m_isSwitchBind = _isSwitchBind;
    m_isSwitchBindHasBeenSet = true;
}

bool LicenseBindDetail::IsSwitchBindHasBeenSet() const
{
    return m_isSwitchBindHasBeenSet;
}

MachineExtraInfo LicenseBindDetail::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void LicenseBindDetail::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool LicenseBindDetail::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string LicenseBindDetail::GetInstanceState() const
{
    return m_instanceState;
}

void LicenseBindDetail::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool LicenseBindDetail::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string LicenseBindDetail::GetAgentState() const
{
    return m_agentState;
}

void LicenseBindDetail::SetAgentState(const string& _agentState)
{
    m_agentState = _agentState;
    m_agentStateHasBeenSet = true;
}

bool LicenseBindDetail::AgentStateHasBeenSet() const
{
    return m_agentStateHasBeenSet;
}

