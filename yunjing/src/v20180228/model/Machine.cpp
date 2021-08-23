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

#include <tencentcloud/yunjing/v20180228/model/Machine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

Machine::Machine() :
    m_machineNameHasBeenSet(false),
    m_machineOsHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_vulNumHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_isProVersionHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_malwareNumHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_baselineNumHasBeenSet(false),
    m_cyberAttackNumHasBeenSet(false),
    m_securityStatusHasBeenSet(false),
    m_invasionNumHasBeenSet(false),
    m_regionInfoHasBeenSet(false)
{
}

CoreInternalOutcome Machine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineOs") && !value["MachineOs"].IsNull())
    {
        if (!value["MachineOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineOs = string(value["MachineOs"].GetString());
        m_machineOsHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("VulNum") && !value["VulNum"].IsNull())
    {
        if (!value["VulNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.VulNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulNum = value["VulNum"].GetInt64();
        m_vulNumHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("IsProVersion") && !value["IsProVersion"].IsNull())
    {
        if (!value["IsProVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.IsProVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProVersion = value["IsProVersion"].GetBool();
        m_isProVersionHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("MalwareNum") && !value["MalwareNum"].IsNull())
    {
        if (!value["MalwareNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MalwareNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_malwareNum = value["MalwareNum"].GetInt64();
        m_malwareNumHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Machine.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MachineTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("BaselineNum") && !value["BaselineNum"].IsNull())
    {
        if (!value["BaselineNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.BaselineNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineNum = value["BaselineNum"].GetInt64();
        m_baselineNumHasBeenSet = true;
    }

    if (value.HasMember("CyberAttackNum") && !value["CyberAttackNum"].IsNull())
    {
        if (!value["CyberAttackNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.CyberAttackNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cyberAttackNum = value["CyberAttackNum"].GetInt64();
        m_cyberAttackNumHasBeenSet = true;
    }

    if (value.HasMember("SecurityStatus") && !value["SecurityStatus"].IsNull())
    {
        if (!value["SecurityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.SecurityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityStatus = string(value["SecurityStatus"].GetString());
        m_securityStatusHasBeenSet = true;
    }

    if (value.HasMember("InvasionNum") && !value["InvasionNum"].IsNull())
    {
        if (!value["InvasionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.InvasionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invasionNum = value["InvasionNum"].GetInt64();
        m_invasionNumHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Machine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineOs.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulNum, allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_isProVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProVersion, allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_malwareNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MalwareNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_malwareNum, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_baselineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineNum, allocator);
    }

    if (m_cyberAttackNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CyberAttackNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cyberAttackNum, allocator);
    }

    if (m_securityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_invasionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvasionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invasionNum, allocator);
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Machine::GetMachineName() const
{
    return m_machineName;
}

void Machine::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool Machine::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string Machine::GetMachineOs() const
{
    return m_machineOs;
}

void Machine::SetMachineOs(const string& _machineOs)
{
    m_machineOs = _machineOs;
    m_machineOsHasBeenSet = true;
}

bool Machine::MachineOsHasBeenSet() const
{
    return m_machineOsHasBeenSet;
}

string Machine::GetMachineStatus() const
{
    return m_machineStatus;
}

void Machine::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool Machine::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

string Machine::GetUuid() const
{
    return m_uuid;
}

void Machine::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool Machine::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string Machine::GetQuuid() const
{
    return m_quuid;
}

void Machine::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool Machine::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

int64_t Machine::GetVulNum() const
{
    return m_vulNum;
}

void Machine::SetVulNum(const int64_t& _vulNum)
{
    m_vulNum = _vulNum;
    m_vulNumHasBeenSet = true;
}

bool Machine::VulNumHasBeenSet() const
{
    return m_vulNumHasBeenSet;
}

string Machine::GetMachineIp() const
{
    return m_machineIp;
}

void Machine::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool Machine::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

bool Machine::GetIsProVersion() const
{
    return m_isProVersion;
}

void Machine::SetIsProVersion(const bool& _isProVersion)
{
    m_isProVersion = _isProVersion;
    m_isProVersionHasBeenSet = true;
}

bool Machine::IsProVersionHasBeenSet() const
{
    return m_isProVersionHasBeenSet;
}

string Machine::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void Machine::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool Machine::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string Machine::GetPayMode() const
{
    return m_payMode;
}

void Machine::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Machine::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t Machine::GetMalwareNum() const
{
    return m_malwareNum;
}

void Machine::SetMalwareNum(const int64_t& _malwareNum)
{
    m_malwareNum = _malwareNum;
    m_malwareNumHasBeenSet = true;
}

bool Machine::MalwareNumHasBeenSet() const
{
    return m_malwareNumHasBeenSet;
}

vector<MachineTag> Machine::GetTag() const
{
    return m_tag;
}

void Machine::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool Machine::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

int64_t Machine::GetBaselineNum() const
{
    return m_baselineNum;
}

void Machine::SetBaselineNum(const int64_t& _baselineNum)
{
    m_baselineNum = _baselineNum;
    m_baselineNumHasBeenSet = true;
}

bool Machine::BaselineNumHasBeenSet() const
{
    return m_baselineNumHasBeenSet;
}

int64_t Machine::GetCyberAttackNum() const
{
    return m_cyberAttackNum;
}

void Machine::SetCyberAttackNum(const int64_t& _cyberAttackNum)
{
    m_cyberAttackNum = _cyberAttackNum;
    m_cyberAttackNumHasBeenSet = true;
}

bool Machine::CyberAttackNumHasBeenSet() const
{
    return m_cyberAttackNumHasBeenSet;
}

string Machine::GetSecurityStatus() const
{
    return m_securityStatus;
}

void Machine::SetSecurityStatus(const string& _securityStatus)
{
    m_securityStatus = _securityStatus;
    m_securityStatusHasBeenSet = true;
}

bool Machine::SecurityStatusHasBeenSet() const
{
    return m_securityStatusHasBeenSet;
}

int64_t Machine::GetInvasionNum() const
{
    return m_invasionNum;
}

void Machine::SetInvasionNum(const int64_t& _invasionNum)
{
    m_invasionNum = _invasionNum;
    m_invasionNumHasBeenSet = true;
}

bool Machine::InvasionNumHasBeenSet() const
{
    return m_invasionNumHasBeenSet;
}

RegionInfo Machine::GetRegionInfo() const
{
    return m_regionInfo;
}

void Machine::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool Machine::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

