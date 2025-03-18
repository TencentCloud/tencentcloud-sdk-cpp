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

#include <tencentcloud/cwp/v20180228/model/HostTagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

HostTagInfo::HostTagInfo() :
    m_quuidHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_protectTypeHasBeenSet(false),
    m_vulNumHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

CoreInternalOutcome HostTagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagList.push_back((*itr).GetString());
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("KernelVersion") && !value["KernelVersion"].IsNull())
    {
        if (!value["KernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.KernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kernelVersion = string(value["KernelVersion"].GetString());
        m_kernelVersionHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("ProtectType") && !value["ProtectType"].IsNull())
    {
        if (!value["ProtectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.ProtectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectType = string(value["ProtectType"].GetString());
        m_protectTypeHasBeenSet = true;
    }

    if (value.HasMember("VulNum") && !value["VulNum"].IsNull())
    {
        if (!value["VulNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.VulNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulNum = value["VulNum"].GetInt64();
        m_vulNumHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.CloudTags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostTagInfo.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostTagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
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

    if (m_protectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectType.c_str(), allocator).Move(), allocator);
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

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

}


string HostTagInfo::GetQuuid() const
{
    return m_quuid;
}

void HostTagInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool HostTagInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

vector<string> HostTagInfo::GetTagList() const
{
    return m_tagList;
}

void HostTagInfo::SetTagList(const vector<string>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool HostTagInfo::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string HostTagInfo::GetHostIp() const
{
    return m_hostIp;
}

void HostTagInfo::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool HostTagInfo::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string HostTagInfo::GetAliasName() const
{
    return m_aliasName;
}

void HostTagInfo::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool HostTagInfo::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string HostTagInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void HostTagInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool HostTagInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string HostTagInfo::GetUuid() const
{
    return m_uuid;
}

void HostTagInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool HostTagInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string HostTagInfo::GetKernelVersion() const
{
    return m_kernelVersion;
}

void HostTagInfo::SetKernelVersion(const string& _kernelVersion)
{
    m_kernelVersion = _kernelVersion;
    m_kernelVersionHasBeenSet = true;
}

bool HostTagInfo::KernelVersionHasBeenSet() const
{
    return m_kernelVersionHasBeenSet;
}

string HostTagInfo::GetMachineStatus() const
{
    return m_machineStatus;
}

void HostTagInfo::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool HostTagInfo::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

string HostTagInfo::GetProtectType() const
{
    return m_protectType;
}

void HostTagInfo::SetProtectType(const string& _protectType)
{
    m_protectType = _protectType;
    m_protectTypeHasBeenSet = true;
}

bool HostTagInfo::ProtectTypeHasBeenSet() const
{
    return m_protectTypeHasBeenSet;
}

int64_t HostTagInfo::GetVulNum() const
{
    return m_vulNum;
}

void HostTagInfo::SetVulNum(const int64_t& _vulNum)
{
    m_vulNum = _vulNum;
    m_vulNumHasBeenSet = true;
}

bool HostTagInfo::VulNumHasBeenSet() const
{
    return m_vulNumHasBeenSet;
}

vector<Tags> HostTagInfo::GetCloudTags() const
{
    return m_cloudTags;
}

void HostTagInfo::SetCloudTags(const vector<Tags>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool HostTagInfo::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

string HostTagInfo::GetInstanceID() const
{
    return m_instanceID;
}

void HostTagInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool HostTagInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string HostTagInfo::GetMachineType() const
{
    return m_machineType;
}

void HostTagInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool HostTagInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string HostTagInfo::GetRegionName() const
{
    return m_regionName;
}

void HostTagInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool HostTagInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

uint64_t HostTagInfo::GetRegionId() const
{
    return m_regionId;
}

void HostTagInfo::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool HostTagInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

