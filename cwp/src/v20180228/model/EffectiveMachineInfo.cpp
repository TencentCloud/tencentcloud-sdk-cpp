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

#include <tencentcloud/cwp/v20180228/model/EffectiveMachineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

EffectiveMachineInfo::EffectiveMachineInfo() :
    m_machineNameHasBeenSet(false),
    m_machinePublicIpHasBeenSet(false),
    m_machinePrivateIpHasBeenSet(false),
    m_machineTagHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_licenseOrderHasBeenSet(false),
    m_vulNumHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_instanceIDHasBeenSet(false)
{
}

CoreInternalOutcome EffectiveMachineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachinePublicIp") && !value["MachinePublicIp"].IsNull())
    {
        if (!value["MachinePublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.MachinePublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machinePublicIp = string(value["MachinePublicIp"].GetString());
        m_machinePublicIpHasBeenSet = true;
    }

    if (value.HasMember("MachinePrivateIp") && !value["MachinePrivateIp"].IsNull())
    {
        if (!value["MachinePrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.MachinePrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machinePrivateIp = string(value["MachinePrivateIp"].GetString());
        m_machinePrivateIpHasBeenSet = true;
    }

    if (value.HasMember("MachineTag") && !value["MachineTag"].IsNull())
    {
        if (!value["MachineTag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.MachineTag` is not array type"));

        const rapidjson::Value &tmpValue = value["MachineTag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MachineTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_machineTag.push_back(item);
        }
        m_machineTagHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("KernelVersion") && !value["KernelVersion"].IsNull())
    {
        if (!value["KernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.KernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kernelVersion = string(value["KernelVersion"].GetString());
        m_kernelVersionHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("LicenseOrder") && !value["LicenseOrder"].IsNull())
    {
        if (!value["LicenseOrder"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.LicenseOrder` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_licenseOrder.Deserialize(value["LicenseOrder"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_licenseOrderHasBeenSet = true;
    }

    if (value.HasMember("VulNum") && !value["VulNum"].IsNull())
    {
        if (!value["VulNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.VulNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulNum = value["VulNum"].GetUint64();
        m_vulNumHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.CloudTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloudTags.push_back(item);
        }
        m_cloudTagsHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveMachineInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EffectiveMachineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machinePublicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachinePublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machinePublicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machinePrivateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachinePrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machinePrivateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_machineTag.begin(); itr != m_machineTag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_kernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_licenseOrder.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulNum, allocator);
    }

    if (m_cloudTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudTags.begin(); itr != m_cloudTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

}


string EffectiveMachineInfo::GetMachineName() const
{
    return m_machineName;
}

void EffectiveMachineInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool EffectiveMachineInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string EffectiveMachineInfo::GetMachinePublicIp() const
{
    return m_machinePublicIp;
}

void EffectiveMachineInfo::SetMachinePublicIp(const string& _machinePublicIp)
{
    m_machinePublicIp = _machinePublicIp;
    m_machinePublicIpHasBeenSet = true;
}

bool EffectiveMachineInfo::MachinePublicIpHasBeenSet() const
{
    return m_machinePublicIpHasBeenSet;
}

string EffectiveMachineInfo::GetMachinePrivateIp() const
{
    return m_machinePrivateIp;
}

void EffectiveMachineInfo::SetMachinePrivateIp(const string& _machinePrivateIp)
{
    m_machinePrivateIp = _machinePrivateIp;
    m_machinePrivateIpHasBeenSet = true;
}

bool EffectiveMachineInfo::MachinePrivateIpHasBeenSet() const
{
    return m_machinePrivateIpHasBeenSet;
}

vector<MachineTag> EffectiveMachineInfo::GetMachineTag() const
{
    return m_machineTag;
}

void EffectiveMachineInfo::SetMachineTag(const vector<MachineTag>& _machineTag)
{
    m_machineTag = _machineTag;
    m_machineTagHasBeenSet = true;
}

bool EffectiveMachineInfo::MachineTagHasBeenSet() const
{
    return m_machineTagHasBeenSet;
}

string EffectiveMachineInfo::GetQuuid() const
{
    return m_quuid;
}

void EffectiveMachineInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool EffectiveMachineInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string EffectiveMachineInfo::GetUuid() const
{
    return m_uuid;
}

void EffectiveMachineInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool EffectiveMachineInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string EffectiveMachineInfo::GetKernelVersion() const
{
    return m_kernelVersion;
}

void EffectiveMachineInfo::SetKernelVersion(const string& _kernelVersion)
{
    m_kernelVersion = _kernelVersion;
    m_kernelVersionHasBeenSet = true;
}

bool EffectiveMachineInfo::KernelVersionHasBeenSet() const
{
    return m_kernelVersionHasBeenSet;
}

string EffectiveMachineInfo::GetMachineStatus() const
{
    return m_machineStatus;
}

void EffectiveMachineInfo::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool EffectiveMachineInfo::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

LicenseOrder EffectiveMachineInfo::GetLicenseOrder() const
{
    return m_licenseOrder;
}

void EffectiveMachineInfo::SetLicenseOrder(const LicenseOrder& _licenseOrder)
{
    m_licenseOrder = _licenseOrder;
    m_licenseOrderHasBeenSet = true;
}

bool EffectiveMachineInfo::LicenseOrderHasBeenSet() const
{
    return m_licenseOrderHasBeenSet;
}

uint64_t EffectiveMachineInfo::GetVulNum() const
{
    return m_vulNum;
}

void EffectiveMachineInfo::SetVulNum(const uint64_t& _vulNum)
{
    m_vulNum = _vulNum;
    m_vulNumHasBeenSet = true;
}

bool EffectiveMachineInfo::VulNumHasBeenSet() const
{
    return m_vulNumHasBeenSet;
}

vector<Tags> EffectiveMachineInfo::GetCloudTags() const
{
    return m_cloudTags;
}

void EffectiveMachineInfo::SetCloudTags(const vector<Tags>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool EffectiveMachineInfo::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

string EffectiveMachineInfo::GetInstanceID() const
{
    return m_instanceID;
}

void EffectiveMachineInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool EffectiveMachineInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

