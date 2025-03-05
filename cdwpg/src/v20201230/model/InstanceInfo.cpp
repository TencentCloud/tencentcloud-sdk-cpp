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

#include <tencentcloud/cdwpg/v20201230/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_iDHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_instanceStateInfoHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_regionDescHasBeenSet(false),
    m_zoneDescHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_cNNodesHasBeenSet(false),
    m_dNNodesHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_accessDetailsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("InstanceStateInfo") && !value["InstanceStateInfo"].IsNull())
    {
        if (!value["InstanceStateInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceStateInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceStateInfo.Deserialize(value["InstanceStateInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceStateInfoHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("RegionDesc") && !value["RegionDesc"].IsNull())
    {
        if (!value["RegionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RegionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionDesc = string(value["RegionDesc"].GetString());
        m_regionDescHasBeenSet = true;
    }

    if (value.HasMember("ZoneDesc") && !value["ZoneDesc"].IsNull())
    {
        if (!value["ZoneDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ZoneDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneDesc = string(value["ZoneDesc"].GetString());
        m_zoneDescHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Tags` is not array type"));

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

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Charset") && !value["Charset"].IsNull())
    {
        if (!value["Charset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Charset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_charset = string(value["Charset"].GetString());
        m_charsetHasBeenSet = true;
    }

    if (value.HasMember("CNNodes") && !value["CNNodes"].IsNull())
    {
        if (!value["CNNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CNNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["CNNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNodeGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cNNodes.push_back(item);
        }
        m_cNNodesHasBeenSet = true;
    }

    if (value.HasMember("DNNodes") && !value["DNNodes"].IsNull())
    {
        if (!value["DNNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DNNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["DNNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNodeGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dNNodes.push_back(item);
        }
        m_dNNodesHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RenewFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetBool();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AccessDetails") && !value["AccessDetails"].IsNull())
    {
        if (!value["AccessDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AccessDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessDetails.push_back(item);
        }
        m_accessDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStateInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceStateInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_regionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneDesc.c_str(), allocator).Move(), allocator);
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

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_charsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Charset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_charset.c_str(), allocator).Move(), allocator);
    }

    if (m_cNNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CNNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cNNodes.begin(); itr != m_cNNodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dNNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DNNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dNNodes.begin(); itr != m_dNNodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessDetails.begin(); itr != m_accessDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t InstanceInfo::GetID() const
{
    return m_iD;
}

void InstanceInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool InstanceInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string InstanceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceInfo::GetStatusDesc() const
{
    return m_statusDesc;
}

void InstanceInfo::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool InstanceInfo::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

InstanceStateInfo InstanceInfo::GetInstanceStateInfo() const
{
    return m_instanceStateInfo;
}

void InstanceInfo::SetInstanceStateInfo(const InstanceStateInfo& _instanceStateInfo)
{
    m_instanceStateInfo = _instanceStateInfo;
    m_instanceStateInfoHasBeenSet = true;
}

bool InstanceInfo::InstanceStateInfoHasBeenSet() const
{
    return m_instanceStateInfoHasBeenSet;
}

string InstanceInfo::GetInstanceID() const
{
    return m_instanceID;
}

void InstanceInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool InstanceInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string InstanceInfo::GetCreateTime() const
{
    return m_createTime;
}

void InstanceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceInfo::GetZone() const
{
    return m_zone;
}

void InstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InstanceInfo::GetRegionDesc() const
{
    return m_regionDesc;
}

void InstanceInfo::SetRegionDesc(const string& _regionDesc)
{
    m_regionDesc = _regionDesc;
    m_regionDescHasBeenSet = true;
}

bool InstanceInfo::RegionDescHasBeenSet() const
{
    return m_regionDescHasBeenSet;
}

string InstanceInfo::GetZoneDesc() const
{
    return m_zoneDesc;
}

void InstanceInfo::SetZoneDesc(const string& _zoneDesc)
{
    m_zoneDesc = _zoneDesc;
    m_zoneDescHasBeenSet = true;
}

bool InstanceInfo::ZoneDescHasBeenSet() const
{
    return m_zoneDescHasBeenSet;
}

vector<Tag> InstanceInfo::GetTags() const
{
    return m_tags;
}

void InstanceInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstanceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string InstanceInfo::GetVersion() const
{
    return m_version;
}

void InstanceInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool InstanceInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string InstanceInfo::GetCharset() const
{
    return m_charset;
}

void InstanceInfo::SetCharset(const string& _charset)
{
    m_charset = _charset;
    m_charsetHasBeenSet = true;
}

bool InstanceInfo::CharsetHasBeenSet() const
{
    return m_charsetHasBeenSet;
}

vector<InstanceNodeGroup> InstanceInfo::GetCNNodes() const
{
    return m_cNNodes;
}

void InstanceInfo::SetCNNodes(const vector<InstanceNodeGroup>& _cNNodes)
{
    m_cNNodes = _cNNodes;
    m_cNNodesHasBeenSet = true;
}

bool InstanceInfo::CNNodesHasBeenSet() const
{
    return m_cNNodesHasBeenSet;
}

vector<InstanceNodeGroup> InstanceInfo::GetDNNodes() const
{
    return m_dNNodes;
}

void InstanceInfo::SetDNNodes(const vector<InstanceNodeGroup>& _dNNodes)
{
    m_dNNodes = _dNNodes;
    m_dNNodesHasBeenSet = true;
}

bool InstanceInfo::DNNodesHasBeenSet() const
{
    return m_dNNodesHasBeenSet;
}

int64_t InstanceInfo::GetRegionId() const
{
    return m_regionId;
}

void InstanceInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool InstanceInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t InstanceInfo::GetZoneId() const
{
    return m_zoneId;
}

void InstanceInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string InstanceInfo::GetVpcId() const
{
    return m_vpcId;
}

void InstanceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InstanceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string InstanceInfo::GetExpireTime() const
{
    return m_expireTime;
}

void InstanceInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool InstanceInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string InstanceInfo::GetPayMode() const
{
    return m_payMode;
}

void InstanceInfo::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InstanceInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

bool InstanceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceInfo::SetRenewFlag(const bool& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<AccessInfo> InstanceInfo::GetAccessDetails() const
{
    return m_accessDetails;
}

void InstanceInfo::SetAccessDetails(const vector<AccessInfo>& _accessDetails)
{
    m_accessDetails = _accessDetails;
    m_accessDetailsHasBeenSet = true;
}

bool InstanceInfo::AccessDetailsHasBeenSet() const
{
    return m_accessDetailsHasBeenSet;
}

