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

#include <tencentcloud/sqlserver/v20180328/model/ReadOnlyGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ReadOnlyGroup::ReadOnlyGroup() :
    m_readOnlyGroupIdHasBeenSet(false),
    m_readOnlyGroupNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_isOfflineDelayHasBeenSet(false),
    m_readOnlyMaxDelayTimeHasBeenSet(false),
    m_minReadOnlyInGroupHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_masterInstanceIdHasBeenSet(false),
    m_readOnlyInstanceSetHasBeenSet(false),
    m_dnsPodDomainHasBeenSet(false),
    m_tgwWanVPortHasBeenSet(false),
    m_readOnlyGroupTypeHasBeenSet(false),
    m_readOnlyGroupForcedUpgradeHasBeenSet(false)
{
}

CoreInternalOutcome ReadOnlyGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReadOnlyGroupId") && !value["ReadOnlyGroupId"].IsNull())
    {
        if (!value["ReadOnlyGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReadOnlyGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyGroupId = string(value["ReadOnlyGroupId"].GetString());
        m_readOnlyGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyGroupName") && !value["ReadOnlyGroupName"].IsNull())
    {
        if (!value["ReadOnlyGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReadOnlyGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyGroupName = string(value["ReadOnlyGroupName"].GetString());
        m_readOnlyGroupNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("IsOfflineDelay") && !value["IsOfflineDelay"].IsNull())
    {
        if (!value["IsOfflineDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.IsOfflineDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isOfflineDelay = value["IsOfflineDelay"].GetInt64();
        m_isOfflineDelayHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyMaxDelayTime") && !value["ReadOnlyMaxDelayTime"].IsNull())
    {
        if (!value["ReadOnlyMaxDelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReadOnlyMaxDelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyMaxDelayTime = value["ReadOnlyMaxDelayTime"].GetInt64();
        m_readOnlyMaxDelayTimeHasBeenSet = true;
    }

    if (value.HasMember("MinReadOnlyInGroup") && !value["MinReadOnlyInGroup"].IsNull())
    {
        if (!value["MinReadOnlyInGroup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.MinReadOnlyInGroup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minReadOnlyInGroup = value["MinReadOnlyInGroup"].GetInt64();
        m_minReadOnlyInGroupHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MasterInstanceId") && !value["MasterInstanceId"].IsNull())
    {
        if (!value["MasterInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.MasterInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterInstanceId = string(value["MasterInstanceId"].GetString());
        m_masterInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyInstanceSet") && !value["ReadOnlyInstanceSet"].IsNull())
    {
        if (!value["ReadOnlyInstanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReadOnlyInstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ReadOnlyInstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReadOnlyInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_readOnlyInstanceSet.push_back(item);
        }
        m_readOnlyInstanceSetHasBeenSet = true;
    }

    if (value.HasMember("DnsPodDomain") && !value["DnsPodDomain"].IsNull())
    {
        if (!value["DnsPodDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.DnsPodDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsPodDomain = string(value["DnsPodDomain"].GetString());
        m_dnsPodDomainHasBeenSet = true;
    }

    if (value.HasMember("TgwWanVPort") && !value["TgwWanVPort"].IsNull())
    {
        if (!value["TgwWanVPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.TgwWanVPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tgwWanVPort = value["TgwWanVPort"].GetUint64();
        m_tgwWanVPortHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyGroupType") && !value["ReadOnlyGroupType"].IsNull())
    {
        if (!value["ReadOnlyGroupType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReadOnlyGroupType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyGroupType = value["ReadOnlyGroupType"].GetInt64();
        m_readOnlyGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyGroupForcedUpgrade") && !value["ReadOnlyGroupForcedUpgrade"].IsNull())
    {
        if (!value["ReadOnlyGroupForcedUpgrade"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReadOnlyGroupForcedUpgrade` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyGroupForcedUpgrade = value["ReadOnlyGroupForcedUpgrade"].GetInt64();
        m_readOnlyGroupForcedUpgradeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReadOnlyGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_readOnlyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readOnlyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readOnlyGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_isOfflineDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOfflineDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOfflineDelay, allocator);
    }

    if (m_readOnlyMaxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyMaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnlyMaxDelayTime, allocator);
    }

    if (m_minReadOnlyInGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReadOnlyInGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReadOnlyInGroup, allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_masterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyInstanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyInstanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_readOnlyInstanceSet.begin(); itr != m_readOnlyInstanceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dnsPodDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsPodDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsPodDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_tgwWanVPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TgwWanVPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tgwWanVPort, allocator);
    }

    if (m_readOnlyGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnlyGroupType, allocator);
    }

    if (m_readOnlyGroupForcedUpgradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupForcedUpgrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnlyGroupForcedUpgrade, allocator);
    }

}


string ReadOnlyGroup::GetReadOnlyGroupId() const
{
    return m_readOnlyGroupId;
}

void ReadOnlyGroup::SetReadOnlyGroupId(const string& _readOnlyGroupId)
{
    m_readOnlyGroupId = _readOnlyGroupId;
    m_readOnlyGroupIdHasBeenSet = true;
}

bool ReadOnlyGroup::ReadOnlyGroupIdHasBeenSet() const
{
    return m_readOnlyGroupIdHasBeenSet;
}

string ReadOnlyGroup::GetReadOnlyGroupName() const
{
    return m_readOnlyGroupName;
}

void ReadOnlyGroup::SetReadOnlyGroupName(const string& _readOnlyGroupName)
{
    m_readOnlyGroupName = _readOnlyGroupName;
    m_readOnlyGroupNameHasBeenSet = true;
}

bool ReadOnlyGroup::ReadOnlyGroupNameHasBeenSet() const
{
    return m_readOnlyGroupNameHasBeenSet;
}

string ReadOnlyGroup::GetRegionId() const
{
    return m_regionId;
}

void ReadOnlyGroup::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ReadOnlyGroup::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ReadOnlyGroup::GetZoneId() const
{
    return m_zoneId;
}

void ReadOnlyGroup::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ReadOnlyGroup::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t ReadOnlyGroup::GetIsOfflineDelay() const
{
    return m_isOfflineDelay;
}

void ReadOnlyGroup::SetIsOfflineDelay(const int64_t& _isOfflineDelay)
{
    m_isOfflineDelay = _isOfflineDelay;
    m_isOfflineDelayHasBeenSet = true;
}

bool ReadOnlyGroup::IsOfflineDelayHasBeenSet() const
{
    return m_isOfflineDelayHasBeenSet;
}

int64_t ReadOnlyGroup::GetReadOnlyMaxDelayTime() const
{
    return m_readOnlyMaxDelayTime;
}

void ReadOnlyGroup::SetReadOnlyMaxDelayTime(const int64_t& _readOnlyMaxDelayTime)
{
    m_readOnlyMaxDelayTime = _readOnlyMaxDelayTime;
    m_readOnlyMaxDelayTimeHasBeenSet = true;
}

bool ReadOnlyGroup::ReadOnlyMaxDelayTimeHasBeenSet() const
{
    return m_readOnlyMaxDelayTimeHasBeenSet;
}

int64_t ReadOnlyGroup::GetMinReadOnlyInGroup() const
{
    return m_minReadOnlyInGroup;
}

void ReadOnlyGroup::SetMinReadOnlyInGroup(const int64_t& _minReadOnlyInGroup)
{
    m_minReadOnlyInGroup = _minReadOnlyInGroup;
    m_minReadOnlyInGroupHasBeenSet = true;
}

bool ReadOnlyGroup::MinReadOnlyInGroupHasBeenSet() const
{
    return m_minReadOnlyInGroupHasBeenSet;
}

string ReadOnlyGroup::GetVip() const
{
    return m_vip;
}

void ReadOnlyGroup::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ReadOnlyGroup::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t ReadOnlyGroup::GetVport() const
{
    return m_vport;
}

void ReadOnlyGroup::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool ReadOnlyGroup::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string ReadOnlyGroup::GetVpcId() const
{
    return m_vpcId;
}

void ReadOnlyGroup::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ReadOnlyGroup::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ReadOnlyGroup::GetSubnetId() const
{
    return m_subnetId;
}

void ReadOnlyGroup::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ReadOnlyGroup::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t ReadOnlyGroup::GetStatus() const
{
    return m_status;
}

void ReadOnlyGroup::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReadOnlyGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReadOnlyGroup::GetMasterInstanceId() const
{
    return m_masterInstanceId;
}

void ReadOnlyGroup::SetMasterInstanceId(const string& _masterInstanceId)
{
    m_masterInstanceId = _masterInstanceId;
    m_masterInstanceIdHasBeenSet = true;
}

bool ReadOnlyGroup::MasterInstanceIdHasBeenSet() const
{
    return m_masterInstanceIdHasBeenSet;
}

vector<ReadOnlyInstance> ReadOnlyGroup::GetReadOnlyInstanceSet() const
{
    return m_readOnlyInstanceSet;
}

void ReadOnlyGroup::SetReadOnlyInstanceSet(const vector<ReadOnlyInstance>& _readOnlyInstanceSet)
{
    m_readOnlyInstanceSet = _readOnlyInstanceSet;
    m_readOnlyInstanceSetHasBeenSet = true;
}

bool ReadOnlyGroup::ReadOnlyInstanceSetHasBeenSet() const
{
    return m_readOnlyInstanceSetHasBeenSet;
}

string ReadOnlyGroup::GetDnsPodDomain() const
{
    return m_dnsPodDomain;
}

void ReadOnlyGroup::SetDnsPodDomain(const string& _dnsPodDomain)
{
    m_dnsPodDomain = _dnsPodDomain;
    m_dnsPodDomainHasBeenSet = true;
}

bool ReadOnlyGroup::DnsPodDomainHasBeenSet() const
{
    return m_dnsPodDomainHasBeenSet;
}

uint64_t ReadOnlyGroup::GetTgwWanVPort() const
{
    return m_tgwWanVPort;
}

void ReadOnlyGroup::SetTgwWanVPort(const uint64_t& _tgwWanVPort)
{
    m_tgwWanVPort = _tgwWanVPort;
    m_tgwWanVPortHasBeenSet = true;
}

bool ReadOnlyGroup::TgwWanVPortHasBeenSet() const
{
    return m_tgwWanVPortHasBeenSet;
}

int64_t ReadOnlyGroup::GetReadOnlyGroupType() const
{
    return m_readOnlyGroupType;
}

void ReadOnlyGroup::SetReadOnlyGroupType(const int64_t& _readOnlyGroupType)
{
    m_readOnlyGroupType = _readOnlyGroupType;
    m_readOnlyGroupTypeHasBeenSet = true;
}

bool ReadOnlyGroup::ReadOnlyGroupTypeHasBeenSet() const
{
    return m_readOnlyGroupTypeHasBeenSet;
}

int64_t ReadOnlyGroup::GetReadOnlyGroupForcedUpgrade() const
{
    return m_readOnlyGroupForcedUpgrade;
}

void ReadOnlyGroup::SetReadOnlyGroupForcedUpgrade(const int64_t& _readOnlyGroupForcedUpgrade)
{
    m_readOnlyGroupForcedUpgrade = _readOnlyGroupForcedUpgrade;
    m_readOnlyGroupForcedUpgradeHasBeenSet = true;
}

bool ReadOnlyGroup::ReadOnlyGroupForcedUpgradeHasBeenSet() const
{
    return m_readOnlyGroupForcedUpgradeHasBeenSet;
}

