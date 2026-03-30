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

#include <tencentcloud/cvm/v20170312/model/ResourcePoolPack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ResourcePoolPack::ResourcePoolPack() :
    m_dedicatedResourcePackIdHasBeenSet(false),
    m_dedicatedResourcePackNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_resourcePoolPackTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalCapacityHasBeenSet(false),
    m_availableCapacityHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_rackIdHasBeenSet(false),
    m_switchIdHasBeenSet(false),
    m_autoPlacementHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome ResourcePoolPack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DedicatedResourcePackId") && !value["DedicatedResourcePackId"].IsNull())
    {
        if (!value["DedicatedResourcePackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.DedicatedResourcePackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedResourcePackId = string(value["DedicatedResourcePackId"].GetString());
        m_dedicatedResourcePackIdHasBeenSet = true;
    }

    if (value.HasMember("DedicatedResourcePackName") && !value["DedicatedResourcePackName"].IsNull())
    {
        if (!value["DedicatedResourcePackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.DedicatedResourcePackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedResourcePackName = string(value["DedicatedResourcePackName"].GetString());
        m_dedicatedResourcePackNameHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("ResourcePoolPackType") && !value["ResourcePoolPackType"].IsNull())
    {
        if (!value["ResourcePoolPackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.ResourcePoolPackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePoolPackType = string(value["ResourcePoolPackType"].GetString());
        m_resourcePoolPackTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TotalCapacity") && !value["TotalCapacity"].IsNull())
    {
        if (!value["TotalCapacity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.TotalCapacity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_totalCapacity.Deserialize(value["TotalCapacity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_totalCapacityHasBeenSet = true;
    }

    if (value.HasMember("AvailableCapacity") && !value["AvailableCapacity"].IsNull())
    {
        if (!value["AvailableCapacity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.AvailableCapacity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_availableCapacity.Deserialize(value["AvailableCapacity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_availableCapacityHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("RackId") && !value["RackId"].IsNull())
    {
        if (!value["RackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.RackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackId = string(value["RackId"].GetString());
        m_rackIdHasBeenSet = true;
    }

    if (value.HasMember("SwitchId") && !value["SwitchId"].IsNull())
    {
        if (!value["SwitchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.SwitchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchId = string(value["SwitchId"].GetString());
        m_switchIdHasBeenSet = true;
    }

    if (value.HasMember("AutoPlacement") && !value["AutoPlacement"].IsNull())
    {
        if (!value["AutoPlacement"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.AutoPlacement` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoPlacement = value["AutoPlacement"].GetBool();
        m_autoPlacementHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPack.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourcePoolPack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dedicatedResourcePackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedResourcePackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedResourcePackId.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedResourcePackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedResourcePackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedResourcePackName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePoolPackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePoolPackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePoolPackType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_totalCapacity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_availableCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_availableCapacity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_rackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rackId.c_str(), allocator).Move(), allocator);
    }

    if (m_switchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoPlacementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPlacement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoPlacement, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string ResourcePoolPack::GetDedicatedResourcePackId() const
{
    return m_dedicatedResourcePackId;
}

void ResourcePoolPack::SetDedicatedResourcePackId(const string& _dedicatedResourcePackId)
{
    m_dedicatedResourcePackId = _dedicatedResourcePackId;
    m_dedicatedResourcePackIdHasBeenSet = true;
}

bool ResourcePoolPack::DedicatedResourcePackIdHasBeenSet() const
{
    return m_dedicatedResourcePackIdHasBeenSet;
}

string ResourcePoolPack::GetDedicatedResourcePackName() const
{
    return m_dedicatedResourcePackName;
}

void ResourcePoolPack::SetDedicatedResourcePackName(const string& _dedicatedResourcePackName)
{
    m_dedicatedResourcePackName = _dedicatedResourcePackName;
    m_dedicatedResourcePackNameHasBeenSet = true;
}

bool ResourcePoolPack::DedicatedResourcePackNameHasBeenSet() const
{
    return m_dedicatedResourcePackNameHasBeenSet;
}

string ResourcePoolPack::GetZone() const
{
    return m_zone;
}

void ResourcePoolPack::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ResourcePoolPack::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ResourcePoolPack::GetInstanceType() const
{
    return m_instanceType;
}

void ResourcePoolPack::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ResourcePoolPack::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ResourcePoolPack::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void ResourcePoolPack::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool ResourcePoolPack::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string ResourcePoolPack::GetResourcePoolPackType() const
{
    return m_resourcePoolPackType;
}

void ResourcePoolPack::SetResourcePoolPackType(const string& _resourcePoolPackType)
{
    m_resourcePoolPackType = _resourcePoolPackType;
    m_resourcePoolPackTypeHasBeenSet = true;
}

bool ResourcePoolPack::ResourcePoolPackTypeHasBeenSet() const
{
    return m_resourcePoolPackTypeHasBeenSet;
}

string ResourcePoolPack::GetStatus() const
{
    return m_status;
}

void ResourcePoolPack::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ResourcePoolPack::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

ResourceCount ResourcePoolPack::GetTotalCapacity() const
{
    return m_totalCapacity;
}

void ResourcePoolPack::SetTotalCapacity(const ResourceCount& _totalCapacity)
{
    m_totalCapacity = _totalCapacity;
    m_totalCapacityHasBeenSet = true;
}

bool ResourcePoolPack::TotalCapacityHasBeenSet() const
{
    return m_totalCapacityHasBeenSet;
}

ResourceCount ResourcePoolPack::GetAvailableCapacity() const
{
    return m_availableCapacity;
}

void ResourcePoolPack::SetAvailableCapacity(const ResourceCount& _availableCapacity)
{
    m_availableCapacity = _availableCapacity;
    m_availableCapacityHasBeenSet = true;
}

bool ResourcePoolPack::AvailableCapacityHasBeenSet() const
{
    return m_availableCapacityHasBeenSet;
}

string ResourcePoolPack::GetHostIp() const
{
    return m_hostIp;
}

void ResourcePoolPack::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool ResourcePoolPack::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string ResourcePoolPack::GetRackId() const
{
    return m_rackId;
}

void ResourcePoolPack::SetRackId(const string& _rackId)
{
    m_rackId = _rackId;
    m_rackIdHasBeenSet = true;
}

bool ResourcePoolPack::RackIdHasBeenSet() const
{
    return m_rackIdHasBeenSet;
}

string ResourcePoolPack::GetSwitchId() const
{
    return m_switchId;
}

void ResourcePoolPack::SetSwitchId(const string& _switchId)
{
    m_switchId = _switchId;
    m_switchIdHasBeenSet = true;
}

bool ResourcePoolPack::SwitchIdHasBeenSet() const
{
    return m_switchIdHasBeenSet;
}

bool ResourcePoolPack::GetAutoPlacement() const
{
    return m_autoPlacement;
}

void ResourcePoolPack::SetAutoPlacement(const bool& _autoPlacement)
{
    m_autoPlacement = _autoPlacement;
    m_autoPlacementHasBeenSet = true;
}

bool ResourcePoolPack::AutoPlacementHasBeenSet() const
{
    return m_autoPlacementHasBeenSet;
}

string ResourcePoolPack::GetRenewFlag() const
{
    return m_renewFlag;
}

void ResourcePoolPack::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool ResourcePoolPack::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string ResourcePoolPack::GetStartTime() const
{
    return m_startTime;
}

void ResourcePoolPack::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ResourcePoolPack::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ResourcePoolPack::GetEndTime() const
{
    return m_endTime;
}

void ResourcePoolPack::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ResourcePoolPack::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

