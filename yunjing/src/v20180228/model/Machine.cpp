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
using namespace rapidjson;
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
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome Machine::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Machine.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineOs") && !value["MachineOs"].IsNull())
    {
        if (!value["MachineOs"].IsString())
        {
            return CoreInternalOutcome(Error("response `Machine.MachineOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineOs = string(value["MachineOs"].GetString());
        m_machineOsHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `Machine.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Error("response `Machine.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Error("response `Machine.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("VulNum") && !value["VulNum"].IsNull())
    {
        if (!value["VulNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Machine.VulNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulNum = value["VulNum"].GetInt64();
        m_vulNumHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `Machine.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("IsProVersion") && !value["IsProVersion"].IsNull())
    {
        if (!value["IsProVersion"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Machine.IsProVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProVersion = value["IsProVersion"].GetBool();
        m_isProVersionHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `Machine.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `Machine.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("MalwareNum") && !value["MalwareNum"].IsNull())
    {
        if (!value["MalwareNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Machine.MalwareNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_malwareNum = value["MalwareNum"].GetInt64();
        m_malwareNumHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Error("response `Machine.Tag` is not array type"));

        const Value &tmpValue = value["Tag"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


    return CoreInternalOutcome(true);
}

void Machine::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_machineNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineOsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_machineOs.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VulNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulNum, allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_isProVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsProVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProVersion, allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_malwareNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MalwareNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_malwareNum, allocator);
    }

    if (m_tagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

