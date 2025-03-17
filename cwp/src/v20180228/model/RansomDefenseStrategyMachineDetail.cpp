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

#include <tencentcloud/cwp/v20180228/model/RansomDefenseStrategyMachineDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RansomDefenseStrategyMachineDetail::RansomDefenseStrategyMachineDetail() :
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_diskInfoHasBeenSet(false),
    m_hostVersionHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_machineTypeHasBeenSet(false)
{
}

CoreInternalOutcome RansomDefenseStrategyMachineDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.CloudTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.Tag` is not array type"));

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

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("DiskInfo") && !value["DiskInfo"].IsNull())
    {
        if (!value["DiskInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.DiskInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskInfo = string(value["DiskInfo"].GetString());
        m_diskInfoHasBeenSet = true;
    }

    if (value.HasMember("HostVersion") && !value["HostVersion"].IsNull())
    {
        if (!value["HostVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.HostVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostVersion = value["HostVersion"].GetUint64();
        m_hostVersionHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineDetail.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RansomDefenseStrategyMachineDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
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

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_diskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_hostVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostVersion, allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

}


string RansomDefenseStrategyMachineDetail::GetUuid() const
{
    return m_uuid;
}

void RansomDefenseStrategyMachineDetail::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string RansomDefenseStrategyMachineDetail::GetQuuid() const
{
    return m_quuid;
}

void RansomDefenseStrategyMachineDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string RansomDefenseStrategyMachineDetail::GetMachineName() const
{
    return m_machineName;
}

void RansomDefenseStrategyMachineDetail::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string RansomDefenseStrategyMachineDetail::GetInstanceId() const
{
    return m_instanceId;
}

void RansomDefenseStrategyMachineDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RansomDefenseStrategyMachineDetail::GetMachineIp() const
{
    return m_machineIp;
}

void RansomDefenseStrategyMachineDetail::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string RansomDefenseStrategyMachineDetail::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void RansomDefenseStrategyMachineDetail::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

vector<Tag> RansomDefenseStrategyMachineDetail::GetCloudTags() const
{
    return m_cloudTags;
}

void RansomDefenseStrategyMachineDetail::SetCloudTags(const vector<Tag>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

RegionInfo RansomDefenseStrategyMachineDetail::GetRegionInfo() const
{
    return m_regionInfo;
}

void RansomDefenseStrategyMachineDetail::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

vector<MachineTag> RansomDefenseStrategyMachineDetail::GetTag() const
{
    return m_tag;
}

void RansomDefenseStrategyMachineDetail::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineDetail::GetStatus() const
{
    return m_status;
}

void RansomDefenseStrategyMachineDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineDetail::GetStrategyId() const
{
    return m_strategyId;
}

void RansomDefenseStrategyMachineDetail::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string RansomDefenseStrategyMachineDetail::GetDiskInfo() const
{
    return m_diskInfo;
}

void RansomDefenseStrategyMachineDetail::SetDiskInfo(const string& _diskInfo)
{
    m_diskInfo = _diskInfo;
    m_diskInfoHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::DiskInfoHasBeenSet() const
{
    return m_diskInfoHasBeenSet;
}

uint64_t RansomDefenseStrategyMachineDetail::GetHostVersion() const
{
    return m_hostVersion;
}

void RansomDefenseStrategyMachineDetail::SetHostVersion(const uint64_t& _hostVersion)
{
    m_hostVersion = _hostVersion;
    m_hostVersionHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::HostVersionHasBeenSet() const
{
    return m_hostVersionHasBeenSet;
}

string RansomDefenseStrategyMachineDetail::GetStrategyName() const
{
    return m_strategyName;
}

void RansomDefenseStrategyMachineDetail::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string RansomDefenseStrategyMachineDetail::GetMachineType() const
{
    return m_machineType;
}

void RansomDefenseStrategyMachineDetail::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool RansomDefenseStrategyMachineDetail::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

