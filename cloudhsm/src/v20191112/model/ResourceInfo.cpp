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

#include <tencentcloud/cloudhsm/v20191112/model/ResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

ResourceInfo::ResourceInfo() :
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_vsmTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_sgListHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_expiredHasBeenSet(false),
    m_remainSecondsHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_alarmStatusHasBeenSet(false)
{
}

CoreInternalOutcome ResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("VsmType") && !value["VsmType"].IsNull())
    {
        if (!value["VsmType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.VsmType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vsmType = value["VsmType"].GetInt64();
        m_vsmTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("SgList") && !value["SgList"].IsNull())
    {
        if (!value["SgList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.SgList` is not array type"));

        const rapidjson::Value &tmpValue = value["SgList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SgUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sgList.push_back(item);
        }
        m_sgListHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("Expired") && !value["Expired"].IsNull())
    {
        if (!value["Expired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Expired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_expired = value["Expired"].GetBool();
        m_expiredHasBeenSet = true;
    }

    if (value.HasMember("RemainSeconds") && !value["RemainSeconds"].IsNull())
    {
        if (!value["RemainSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.RemainSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainSeconds = value["RemainSeconds"].GetInt64();
        m_remainSecondsHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.CreateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = string(value["CreateUin"].GetString());
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("AlarmStatus") && !value["AlarmStatus"].IsNull())
    {
        if (!value["AlarmStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.AlarmStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmStatus = value["AlarmStatus"].GetInt64();
        m_alarmStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
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

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_vsmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VsmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vsmType, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_sgListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sgList.begin(); itr != m_sgList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expired, allocator);
    }

    if (m_remainSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainSeconds, allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUin.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmStatus, allocator);
    }

}


string ResourceInfo::GetResourceId() const
{
    return m_resourceId;
}

void ResourceInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ResourceInfo::GetResourceName() const
{
    return m_resourceName;
}

void ResourceInfo::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ResourceInfo::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

int64_t ResourceInfo::GetStatus() const
{
    return m_status;
}

void ResourceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ResourceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ResourceInfo::GetVip() const
{
    return m_vip;
}

void ResourceInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ResourceInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string ResourceInfo::GetVpcId() const
{
    return m_vpcId;
}

void ResourceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ResourceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ResourceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void ResourceInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ResourceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ResourceInfo::GetModel() const
{
    return m_model;
}

void ResourceInfo::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ResourceInfo::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

int64_t ResourceInfo::GetVsmType() const
{
    return m_vsmType;
}

void ResourceInfo::SetVsmType(const int64_t& _vsmType)
{
    m_vsmType = _vsmType;
    m_vsmTypeHasBeenSet = true;
}

bool ResourceInfo::VsmTypeHasBeenSet() const
{
    return m_vsmTypeHasBeenSet;
}

int64_t ResourceInfo::GetRegionId() const
{
    return m_regionId;
}

void ResourceInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ResourceInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t ResourceInfo::GetZoneId() const
{
    return m_zoneId;
}

void ResourceInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ResourceInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t ResourceInfo::GetExpireTime() const
{
    return m_expireTime;
}

void ResourceInfo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ResourceInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ResourceInfo::GetRegionName() const
{
    return m_regionName;
}

void ResourceInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool ResourceInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string ResourceInfo::GetZoneName() const
{
    return m_zoneName;
}

void ResourceInfo::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ResourceInfo::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

vector<SgUnit> ResourceInfo::GetSgList() const
{
    return m_sgList;
}

void ResourceInfo::SetSgList(const vector<SgUnit>& _sgList)
{
    m_sgList = _sgList;
    m_sgListHasBeenSet = true;
}

bool ResourceInfo::SgListHasBeenSet() const
{
    return m_sgListHasBeenSet;
}

string ResourceInfo::GetSubnetName() const
{
    return m_subnetName;
}

void ResourceInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool ResourceInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

bool ResourceInfo::GetExpired() const
{
    return m_expired;
}

void ResourceInfo::SetExpired(const bool& _expired)
{
    m_expired = _expired;
    m_expiredHasBeenSet = true;
}

bool ResourceInfo::ExpiredHasBeenSet() const
{
    return m_expiredHasBeenSet;
}

int64_t ResourceInfo::GetRemainSeconds() const
{
    return m_remainSeconds;
}

void ResourceInfo::SetRemainSeconds(const int64_t& _remainSeconds)
{
    m_remainSeconds = _remainSeconds;
    m_remainSecondsHasBeenSet = true;
}

bool ResourceInfo::RemainSecondsHasBeenSet() const
{
    return m_remainSecondsHasBeenSet;
}

string ResourceInfo::GetVpcName() const
{
    return m_vpcName;
}

void ResourceInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool ResourceInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string ResourceInfo::GetCreateUin() const
{
    return m_createUin;
}

void ResourceInfo::SetCreateUin(const string& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool ResourceInfo::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

int64_t ResourceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void ResourceInfo::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool ResourceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

vector<Tag> ResourceInfo::GetTags() const
{
    return m_tags;
}

void ResourceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ResourceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ResourceInfo::GetManufacturer() const
{
    return m_manufacturer;
}

void ResourceInfo::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool ResourceInfo::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

int64_t ResourceInfo::GetAlarmStatus() const
{
    return m_alarmStatus;
}

void ResourceInfo::SetAlarmStatus(const int64_t& _alarmStatus)
{
    m_alarmStatus = _alarmStatus;
    m_alarmStatusHasBeenSet = true;
}

bool ResourceInfo::AlarmStatusHasBeenSet() const
{
    return m_alarmStatusHasBeenSet;
}

