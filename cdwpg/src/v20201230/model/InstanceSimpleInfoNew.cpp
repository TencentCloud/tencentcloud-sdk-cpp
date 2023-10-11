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

#include <tencentcloud/cdwpg/v20201230/model/InstanceSimpleInfoNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

InstanceSimpleInfoNew::InstanceSimpleInfoNew() :
    m_iDHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionDescHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneDescHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_accessInfoHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_renewFlagHasBeenSet(false)
{
}

CoreInternalOutcome InstanceSimpleInfoNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionDesc") && !value["RegionDesc"].IsNull())
    {
        if (!value["RegionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.RegionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionDesc = string(value["RegionDesc"].GetString());
        m_regionDescHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneDesc") && !value["ZoneDesc"].IsNull())
    {
        if (!value["ZoneDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.ZoneDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneDesc = string(value["ZoneDesc"].GetString());
        m_zoneDescHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AccessInfo") && !value["AccessInfo"].IsNull())
    {
        if (!value["AccessInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.AccessInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessInfo = string(value["AccessInfo"].GetString());
        m_accessInfoHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSimpleInfoNew.RenewFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetBool();
        m_renewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceSimpleInfoNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_regionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneDesc.c_str(), allocator).Move(), allocator);
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

    if (m_accessInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

}


int64_t InstanceSimpleInfoNew::GetID() const
{
    return m_iD;
}

void InstanceSimpleInfoNew::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool InstanceSimpleInfoNew::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string InstanceSimpleInfoNew::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceSimpleInfoNew::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceSimpleInfoNew::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceSimpleInfoNew::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceSimpleInfoNew::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceSimpleInfoNew::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceSimpleInfoNew::GetVersion() const
{
    return m_version;
}

void InstanceSimpleInfoNew::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool InstanceSimpleInfoNew::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string InstanceSimpleInfoNew::GetRegion() const
{
    return m_region;
}

void InstanceSimpleInfoNew::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceSimpleInfoNew::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t InstanceSimpleInfoNew::GetRegionId() const
{
    return m_regionId;
}

void InstanceSimpleInfoNew::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool InstanceSimpleInfoNew::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string InstanceSimpleInfoNew::GetRegionDesc() const
{
    return m_regionDesc;
}

void InstanceSimpleInfoNew::SetRegionDesc(const string& _regionDesc)
{
    m_regionDesc = _regionDesc;
    m_regionDescHasBeenSet = true;
}

bool InstanceSimpleInfoNew::RegionDescHasBeenSet() const
{
    return m_regionDescHasBeenSet;
}

string InstanceSimpleInfoNew::GetZone() const
{
    return m_zone;
}

void InstanceSimpleInfoNew::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceSimpleInfoNew::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t InstanceSimpleInfoNew::GetZoneId() const
{
    return m_zoneId;
}

void InstanceSimpleInfoNew::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceSimpleInfoNew::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string InstanceSimpleInfoNew::GetZoneDesc() const
{
    return m_zoneDesc;
}

void InstanceSimpleInfoNew::SetZoneDesc(const string& _zoneDesc)
{
    m_zoneDesc = _zoneDesc;
    m_zoneDescHasBeenSet = true;
}

bool InstanceSimpleInfoNew::ZoneDescHasBeenSet() const
{
    return m_zoneDescHasBeenSet;
}

string InstanceSimpleInfoNew::GetVpcId() const
{
    return m_vpcId;
}

void InstanceSimpleInfoNew::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceSimpleInfoNew::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InstanceSimpleInfoNew::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceSimpleInfoNew::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceSimpleInfoNew::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string InstanceSimpleInfoNew::GetCreateTime() const
{
    return m_createTime;
}

void InstanceSimpleInfoNew::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceSimpleInfoNew::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceSimpleInfoNew::GetExpireTime() const
{
    return m_expireTime;
}

void InstanceSimpleInfoNew::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool InstanceSimpleInfoNew::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string InstanceSimpleInfoNew::GetAccessInfo() const
{
    return m_accessInfo;
}

void InstanceSimpleInfoNew::SetAccessInfo(const string& _accessInfo)
{
    m_accessInfo = _accessInfo;
    m_accessInfoHasBeenSet = true;
}

bool InstanceSimpleInfoNew::AccessInfoHasBeenSet() const
{
    return m_accessInfoHasBeenSet;
}

string InstanceSimpleInfoNew::GetPayMode() const
{
    return m_payMode;
}

void InstanceSimpleInfoNew::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InstanceSimpleInfoNew::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

bool InstanceSimpleInfoNew::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceSimpleInfoNew::SetRenewFlag(const bool& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceSimpleInfoNew::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

