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

#include <tencentcloud/cwp/v20180228/model/MachineSimple.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

MachineSimple::MachineSimple() :
    m_machineNameHasBeenSet(false),
    m_machineOsHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_isProVersionHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_protectTypeHasBeenSet(false),
    m_licenseOrderHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome MachineSimple::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineOs") && !value["MachineOs"].IsNull())
    {
        if (!value["MachineOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.MachineOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineOs = string(value["MachineOs"].GetString());
        m_machineOsHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("IsProVersion") && !value["IsProVersion"].IsNull())
    {
        if (!value["IsProVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.IsProVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProVersion = value["IsProVersion"].GetBool();
        m_isProVersionHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineSimple.Tag` is not array type"));

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

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("KernelVersion") && !value["KernelVersion"].IsNull())
    {
        if (!value["KernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.KernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kernelVersion = string(value["KernelVersion"].GetString());
        m_kernelVersionHasBeenSet = true;
    }

    if (value.HasMember("ProtectType") && !value["ProtectType"].IsNull())
    {
        if (!value["ProtectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.ProtectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectType = string(value["ProtectType"].GetString());
        m_protectTypeHasBeenSet = true;
    }

    if (value.HasMember("LicenseOrder") && !value["LicenseOrder"].IsNull())
    {
        if (!value["LicenseOrder"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.LicenseOrder` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_licenseOrder.Deserialize(value["LicenseOrder"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_licenseOrderHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineSimple.CloudTags` is not array type"));

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

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSimple.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineSimple::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_kernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_protectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectType.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_licenseOrder.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string MachineSimple::GetMachineName() const
{
    return m_machineName;
}

void MachineSimple::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool MachineSimple::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string MachineSimple::GetMachineOs() const
{
    return m_machineOs;
}

void MachineSimple::SetMachineOs(const string& _machineOs)
{
    m_machineOs = _machineOs;
    m_machineOsHasBeenSet = true;
}

bool MachineSimple::MachineOsHasBeenSet() const
{
    return m_machineOsHasBeenSet;
}

string MachineSimple::GetUuid() const
{
    return m_uuid;
}

void MachineSimple::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool MachineSimple::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string MachineSimple::GetQuuid() const
{
    return m_quuid;
}

void MachineSimple::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool MachineSimple::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string MachineSimple::GetMachineIp() const
{
    return m_machineIp;
}

void MachineSimple::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool MachineSimple::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

bool MachineSimple::GetIsProVersion() const
{
    return m_isProVersion;
}

void MachineSimple::SetIsProVersion(const bool& _isProVersion)
{
    m_isProVersion = _isProVersion;
    m_isProVersionHasBeenSet = true;
}

bool MachineSimple::IsProVersionHasBeenSet() const
{
    return m_isProVersionHasBeenSet;
}

string MachineSimple::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void MachineSimple::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool MachineSimple::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string MachineSimple::GetPayMode() const
{
    return m_payMode;
}

void MachineSimple::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool MachineSimple::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<MachineTag> MachineSimple::GetTag() const
{
    return m_tag;
}

void MachineSimple::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool MachineSimple::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

RegionInfo MachineSimple::GetRegionInfo() const
{
    return m_regionInfo;
}

void MachineSimple::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool MachineSimple::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

string MachineSimple::GetInstanceState() const
{
    return m_instanceState;
}

void MachineSimple::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool MachineSimple::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

int64_t MachineSimple::GetProjectId() const
{
    return m_projectId;
}

void MachineSimple::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool MachineSimple::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string MachineSimple::GetMachineType() const
{
    return m_machineType;
}

void MachineSimple::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool MachineSimple::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string MachineSimple::GetKernelVersion() const
{
    return m_kernelVersion;
}

void MachineSimple::SetKernelVersion(const string& _kernelVersion)
{
    m_kernelVersion = _kernelVersion;
    m_kernelVersionHasBeenSet = true;
}

bool MachineSimple::KernelVersionHasBeenSet() const
{
    return m_kernelVersionHasBeenSet;
}

string MachineSimple::GetProtectType() const
{
    return m_protectType;
}

void MachineSimple::SetProtectType(const string& _protectType)
{
    m_protectType = _protectType;
    m_protectTypeHasBeenSet = true;
}

bool MachineSimple::ProtectTypeHasBeenSet() const
{
    return m_protectTypeHasBeenSet;
}

LicenseOrder MachineSimple::GetLicenseOrder() const
{
    return m_licenseOrder;
}

void MachineSimple::SetLicenseOrder(const LicenseOrder& _licenseOrder)
{
    m_licenseOrder = _licenseOrder;
    m_licenseOrderHasBeenSet = true;
}

bool MachineSimple::LicenseOrderHasBeenSet() const
{
    return m_licenseOrderHasBeenSet;
}

vector<Tags> MachineSimple::GetCloudTags() const
{
    return m_cloudTags;
}

void MachineSimple::SetCloudTags(const vector<Tags>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool MachineSimple::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

string MachineSimple::GetInstanceId() const
{
    return m_instanceId;
}

void MachineSimple::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MachineSimple::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

