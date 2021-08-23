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

#include <tencentcloud/yunjing/v20180228/model/ImpactedHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

ImpactedHost::ImpactedHost() :
    m_idHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_vulStatusHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_isProVersionHasBeenSet(false)
{
}

CoreInternalOutcome ImpactedHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactedHost.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactedHost.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactedHost.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactedHost.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("VulStatus") && !value["VulStatus"].IsNull())
    {
        if (!value["VulStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactedHost.VulStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulStatus = string(value["VulStatus"].GetString());
        m_vulStatusHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactedHost.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactedHost.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactedHost.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("IsProVersion") && !value["IsProVersion"].IsNull())
    {
        if (!value["IsProVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactedHost.IsProVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProVersion = value["IsProVersion"].GetBool();
        m_isProVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImpactedHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vulStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_isProVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProVersion, allocator);
    }

}


uint64_t ImpactedHost::GetId() const
{
    return m_id;
}

void ImpactedHost::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImpactedHost::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ImpactedHost::GetMachineIp() const
{
    return m_machineIp;
}

void ImpactedHost::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool ImpactedHost::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string ImpactedHost::GetMachineName() const
{
    return m_machineName;
}

void ImpactedHost::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool ImpactedHost::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string ImpactedHost::GetLastScanTime() const
{
    return m_lastScanTime;
}

void ImpactedHost::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool ImpactedHost::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

string ImpactedHost::GetVulStatus() const
{
    return m_vulStatus;
}

void ImpactedHost::SetVulStatus(const string& _vulStatus)
{
    m_vulStatus = _vulStatus;
    m_vulStatusHasBeenSet = true;
}

bool ImpactedHost::VulStatusHasBeenSet() const
{
    return m_vulStatusHasBeenSet;
}

string ImpactedHost::GetUuid() const
{
    return m_uuid;
}

void ImpactedHost::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ImpactedHost::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string ImpactedHost::GetDescription() const
{
    return m_description;
}

void ImpactedHost::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ImpactedHost::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t ImpactedHost::GetVulId() const
{
    return m_vulId;
}

void ImpactedHost::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool ImpactedHost::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

bool ImpactedHost::GetIsProVersion() const
{
    return m_isProVersion;
}

void ImpactedHost::SetIsProVersion(const bool& _isProVersion)
{
    m_isProVersion = _isProVersion;
    m_isProVersionHasBeenSet = true;
}

bool ImpactedHost::IsProVersionHasBeenSet() const
{
    return m_isProVersionHasBeenSet;
}

