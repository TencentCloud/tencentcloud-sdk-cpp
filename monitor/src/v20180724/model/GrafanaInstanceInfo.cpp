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

#include <tencentcloud/monitor/v20180724/model/GrafanaInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

GrafanaInstanceInfo::GrafanaInstanceInfo() :
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_internetUrlHasBeenSet(false),
    m_internalUrlHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_rootUrlHasBeenSet(false),
    m_enableSSOHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_enableSSOCamCheckHasBeenSet(false)
{
}

CoreInternalOutcome GrafanaInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("InternetUrl") && !value["InternetUrl"].IsNull())
    {
        if (!value["InternetUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.InternetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetUrl = string(value["InternetUrl"].GetString());
        m_internetUrlHasBeenSet = true;
    }

    if (value.HasMember("InternalUrl") && !value["InternalUrl"].IsNull())
    {
        if (!value["InternalUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.InternalUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalUrl = string(value["InternalUrl"].GetString());
        m_internalUrlHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.InstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = value["InstanceStatus"].GetInt64();
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("TagSpecification") && !value["TagSpecification"].IsNull())
    {
        if (!value["TagSpecification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.TagSpecification` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSpecification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSpecification.push_back(item);
        }
        m_tagSpecificationHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.InstanceChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = value["InstanceChargeType"].GetInt64();
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RootUrl") && !value["RootUrl"].IsNull())
    {
        if (!value["RootUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.RootUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootUrl = string(value["RootUrl"].GetString());
        m_rootUrlHasBeenSet = true;
    }

    if (value.HasMember("EnableSSO") && !value["EnableSSO"].IsNull())
    {
        if (!value["EnableSSO"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.EnableSSO` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSSO = value["EnableSSO"].GetBool();
        m_enableSSOHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("EnableSSOCamCheck") && !value["EnableSSOCamCheck"].IsNull())
    {
        if (!value["EnableSSOCamCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaInstanceInfo.EnableSSOCamCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSSOCamCheck = value["EnableSSOCamCheck"].GetBool();
        m_enableSSOCamCheckHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrafanaInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_internetUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_internalUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStatus, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceChargeType, allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_rootUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rootUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSSOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSSO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSSO, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSSOCamCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSSOCamCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSSOCamCheck, allocator);
    }

}


string GrafanaInstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void GrafanaInstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool GrafanaInstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string GrafanaInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void GrafanaInstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool GrafanaInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string GrafanaInstanceInfo::GetRegion() const
{
    return m_region;
}

void GrafanaInstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool GrafanaInstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string GrafanaInstanceInfo::GetVpcId() const
{
    return m_vpcId;
}

void GrafanaInstanceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool GrafanaInstanceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> GrafanaInstanceInfo::GetSubnetIds() const
{
    return m_subnetIds;
}

void GrafanaInstanceInfo::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool GrafanaInstanceInfo::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string GrafanaInstanceInfo::GetInternetUrl() const
{
    return m_internetUrl;
}

void GrafanaInstanceInfo::SetInternetUrl(const string& _internetUrl)
{
    m_internetUrl = _internetUrl;
    m_internetUrlHasBeenSet = true;
}

bool GrafanaInstanceInfo::InternetUrlHasBeenSet() const
{
    return m_internetUrlHasBeenSet;
}

string GrafanaInstanceInfo::GetInternalUrl() const
{
    return m_internalUrl;
}

void GrafanaInstanceInfo::SetInternalUrl(const string& _internalUrl)
{
    m_internalUrl = _internalUrl;
    m_internalUrlHasBeenSet = true;
}

bool GrafanaInstanceInfo::InternalUrlHasBeenSet() const
{
    return m_internalUrlHasBeenSet;
}

string GrafanaInstanceInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void GrafanaInstanceInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool GrafanaInstanceInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t GrafanaInstanceInfo::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void GrafanaInstanceInfo::SetInstanceStatus(const int64_t& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool GrafanaInstanceInfo::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

vector<PrometheusTag> GrafanaInstanceInfo::GetTagSpecification() const
{
    return m_tagSpecification;
}

void GrafanaInstanceInfo::SetTagSpecification(const vector<PrometheusTag>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool GrafanaInstanceInfo::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

string GrafanaInstanceInfo::GetZone() const
{
    return m_zone;
}

void GrafanaInstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool GrafanaInstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t GrafanaInstanceInfo::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void GrafanaInstanceInfo::SetInstanceChargeType(const int64_t& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool GrafanaInstanceInfo::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string GrafanaInstanceInfo::GetVpcName() const
{
    return m_vpcName;
}

void GrafanaInstanceInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool GrafanaInstanceInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string GrafanaInstanceInfo::GetSubnetName() const
{
    return m_subnetName;
}

void GrafanaInstanceInfo::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool GrafanaInstanceInfo::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

int64_t GrafanaInstanceInfo::GetRegionId() const
{
    return m_regionId;
}

void GrafanaInstanceInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool GrafanaInstanceInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string GrafanaInstanceInfo::GetRootUrl() const
{
    return m_rootUrl;
}

void GrafanaInstanceInfo::SetRootUrl(const string& _rootUrl)
{
    m_rootUrl = _rootUrl;
    m_rootUrlHasBeenSet = true;
}

bool GrafanaInstanceInfo::RootUrlHasBeenSet() const
{
    return m_rootUrlHasBeenSet;
}

bool GrafanaInstanceInfo::GetEnableSSO() const
{
    return m_enableSSO;
}

void GrafanaInstanceInfo::SetEnableSSO(const bool& _enableSSO)
{
    m_enableSSO = _enableSSO;
    m_enableSSOHasBeenSet = true;
}

bool GrafanaInstanceInfo::EnableSSOHasBeenSet() const
{
    return m_enableSSOHasBeenSet;
}

string GrafanaInstanceInfo::GetVersion() const
{
    return m_version;
}

void GrafanaInstanceInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool GrafanaInstanceInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

bool GrafanaInstanceInfo::GetEnableSSOCamCheck() const
{
    return m_enableSSOCamCheck;
}

void GrafanaInstanceInfo::SetEnableSSOCamCheck(const bool& _enableSSOCamCheck)
{
    m_enableSSOCamCheck = _enableSSOCamCheck;
    m_enableSSOCamCheckHasBeenSet = true;
}

bool GrafanaInstanceInfo::EnableSSOCamCheckHasBeenSet() const
{
    return m_enableSSOCamCheckHasBeenSet;
}

