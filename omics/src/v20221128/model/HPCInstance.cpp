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

#include <tencentcloud/omics/v20221128/model/HPCInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

HPCInstance::HPCInstance() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_oSNameHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_gPUInfoHasBeenSet(false),
    m_privateIPAddressesHasBeenSet(false),
    m_publicIPAddressesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_internetInfoHasBeenSet(false)
{
}

CoreInternalOutcome HPCInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.CPU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetInt64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("OSName") && !value["OSName"].IsNull())
    {
        if (!value["OSName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.OSName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oSName = string(value["OSName"].GetString());
        m_oSNameHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("GPUInfo") && !value["GPUInfo"].IsNull())
    {
        if (!value["GPUInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.GPUInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gPUInfo.Deserialize(value["GPUInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gPUInfoHasBeenSet = true;
    }

    if (value.HasMember("PrivateIPAddresses") && !value["PrivateIPAddresses"].IsNull())
    {
        if (!value["PrivateIPAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HPCInstance.PrivateIPAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIPAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIPAddresses.push_back((*itr).GetString());
        }
        m_privateIPAddressesHasBeenSet = true;
    }

    if (value.HasMember("PublicIPAddresses") && !value["PublicIPAddresses"].IsNull())
    {
        if (!value["PublicIPAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HPCInstance.PublicIPAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIPAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIPAddresses.push_back((*itr).GetString());
        }
        m_publicIPAddressesHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("InternetInfo") && !value["InternetInfo"].IsNull())
    {
        if (!value["InternetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HPCInstance.InternetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetInfo.Deserialize(value["InternetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HPCInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_oSNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OSName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oSName.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gPUInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gPUInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_privateIPAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIPAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIPAddresses.begin(); itr != m_privateIPAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicIPAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIPAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIPAddresses.begin(); itr != m_publicIPAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_internetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string HPCInstance::GetInstanceId() const
{
    return m_instanceId;
}

void HPCInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool HPCInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string HPCInstance::GetName() const
{
    return m_name;
}

void HPCInstance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HPCInstance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t HPCInstance::GetCPU() const
{
    return m_cPU;
}

void HPCInstance::SetCPU(const int64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool HPCInstance::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

int64_t HPCInstance::GetMemory() const
{
    return m_memory;
}

void HPCInstance::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool HPCInstance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string HPCInstance::GetState() const
{
    return m_state;
}

void HPCInstance::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool HPCInstance::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string HPCInstance::GetType() const
{
    return m_type;
}

void HPCInstance::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HPCInstance::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string HPCInstance::GetChargeType() const
{
    return m_chargeType;
}

void HPCInstance::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool HPCInstance::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string HPCInstance::GetOSName() const
{
    return m_oSName;
}

void HPCInstance::SetOSName(const string& _oSName)
{
    m_oSName = _oSName;
    m_oSNameHasBeenSet = true;
}

bool HPCInstance::OSNameHasBeenSet() const
{
    return m_oSNameHasBeenSet;
}

HPCDisk HPCInstance::GetSystemDisk() const
{
    return m_systemDisk;
}

void HPCInstance::SetSystemDisk(const HPCDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool HPCInstance::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

HPCGPUInfo HPCInstance::GetGPUInfo() const
{
    return m_gPUInfo;
}

void HPCInstance::SetGPUInfo(const HPCGPUInfo& _gPUInfo)
{
    m_gPUInfo = _gPUInfo;
    m_gPUInfoHasBeenSet = true;
}

bool HPCInstance::GPUInfoHasBeenSet() const
{
    return m_gPUInfoHasBeenSet;
}

vector<string> HPCInstance::GetPrivateIPAddresses() const
{
    return m_privateIPAddresses;
}

void HPCInstance::SetPrivateIPAddresses(const vector<string>& _privateIPAddresses)
{
    m_privateIPAddresses = _privateIPAddresses;
    m_privateIPAddressesHasBeenSet = true;
}

bool HPCInstance::PrivateIPAddressesHasBeenSet() const
{
    return m_privateIPAddressesHasBeenSet;
}

vector<string> HPCInstance::GetPublicIPAddresses() const
{
    return m_publicIPAddresses;
}

void HPCInstance::SetPublicIPAddresses(const vector<string>& _publicIPAddresses)
{
    m_publicIPAddresses = _publicIPAddresses;
    m_publicIPAddressesHasBeenSet = true;
}

bool HPCInstance::PublicIPAddressesHasBeenSet() const
{
    return m_publicIPAddressesHasBeenSet;
}

string HPCInstance::GetCreateTime() const
{
    return m_createTime;
}

void HPCInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HPCInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HPCInstance::GetExpireTime() const
{
    return m_expireTime;
}

void HPCInstance::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool HPCInstance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string HPCInstance::GetUuid() const
{
    return m_uuid;
}

void HPCInstance::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool HPCInstance::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

HPCInternetInfo HPCInstance::GetInternetInfo() const
{
    return m_internetInfo;
}

void HPCInstance::SetInternetInfo(const HPCInternetInfo& _internetInfo)
{
    m_internetInfo = _internetInfo;
    m_internetInfoHasBeenSet = true;
}

bool HPCInstance::InternetInfoHasBeenSet() const
{
    return m_internetInfoHasBeenSet;
}

