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

#include <tencentcloud/wedata/v20210820/model/BaseClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BaseClusterInfo::BaseClusterInfo() :
    m_clusterIdHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionCnHasBeenSet(false),
    m_regionEnHasBeenSet(false),
    m_regionAreaHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusInfoHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_computeTypeHasBeenSet(false),
    m_clusterResourceHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_extraConfHasBeenSet(false),
    m_rangerUserNameHasBeenSet(false),
    m_cdwUserNameHasBeenSet(false)
{
}

CoreInternalOutcome BaseClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("RegionCn") && !value["RegionCn"].IsNull())
    {
        if (!value["RegionCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.RegionCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCn = string(value["RegionCn"].GetString());
        m_regionCnHasBeenSet = true;
    }

    if (value.HasMember("RegionEn") && !value["RegionEn"].IsNull())
    {
        if (!value["RegionEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.RegionEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionEn = string(value["RegionEn"].GetString());
        m_regionEnHasBeenSet = true;
    }

    if (value.HasMember("RegionArea") && !value["RegionArea"].IsNull())
    {
        if (!value["RegionArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.RegionArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionArea = string(value["RegionArea"].GetString());
        m_regionAreaHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.Used` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetBool();
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusInfo") && !value["StatusInfo"].IsNull())
    {
        if (!value["StatusInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.StatusInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusInfo = string(value["StatusInfo"].GetString());
        m_statusInfoHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("ComputeType") && !value["ComputeType"].IsNull())
    {
        if (!value["ComputeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.ComputeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeType = string(value["ComputeType"].GetString());
        m_computeTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterResource") && !value["ClusterResource"].IsNull())
    {
        if (!value["ClusterResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.ClusterResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterResource = string(value["ClusterResource"].GetString());
        m_clusterResourceHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExtraConf") && !value["ExtraConf"].IsNull())
    {
        if (!value["ExtraConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.ExtraConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraConf = string(value["ExtraConf"].GetString());
        m_extraConfHasBeenSet = true;
    }

    if (value.HasMember("RangerUserName") && !value["RangerUserName"].IsNull())
    {
        if (!value["RangerUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.RangerUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rangerUserName = string(value["RangerUserName"].GetString());
        m_rangerUserNameHasBeenSet = true;
    }

    if (value.HasMember("CdwUserName") && !value["CdwUserName"].IsNull())
    {
        if (!value["CdwUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseClusterInfo.CdwUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdwUserName = string(value["CdwUserName"].GetString());
        m_cdwUserNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaseClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCn.c_str(), allocator).Move(), allocator);
    }

    if (m_regionEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionEn.c_str(), allocator).Move(), allocator);
    }

    if (m_regionAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionArea.c_str(), allocator).Move(), allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_computeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterResource.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_extraConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraConf.c_str(), allocator).Move(), allocator);
    }

    if (m_rangerUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangerUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rangerUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_cdwUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdwUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdwUserName.c_str(), allocator).Move(), allocator);
    }

}


string BaseClusterInfo::GetClusterId() const
{
    return m_clusterId;
}

void BaseClusterInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool BaseClusterInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string BaseClusterInfo::GetClusterType() const
{
    return m_clusterType;
}

void BaseClusterInfo::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool BaseClusterInfo::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string BaseClusterInfo::GetClusterName() const
{
    return m_clusterName;
}

void BaseClusterInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool BaseClusterInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string BaseClusterInfo::GetRegionCn() const
{
    return m_regionCn;
}

void BaseClusterInfo::SetRegionCn(const string& _regionCn)
{
    m_regionCn = _regionCn;
    m_regionCnHasBeenSet = true;
}

bool BaseClusterInfo::RegionCnHasBeenSet() const
{
    return m_regionCnHasBeenSet;
}

string BaseClusterInfo::GetRegionEn() const
{
    return m_regionEn;
}

void BaseClusterInfo::SetRegionEn(const string& _regionEn)
{
    m_regionEn = _regionEn;
    m_regionEnHasBeenSet = true;
}

bool BaseClusterInfo::RegionEnHasBeenSet() const
{
    return m_regionEnHasBeenSet;
}

string BaseClusterInfo::GetRegionArea() const
{
    return m_regionArea;
}

void BaseClusterInfo::SetRegionArea(const string& _regionArea)
{
    m_regionArea = _regionArea;
    m_regionAreaHasBeenSet = true;
}

bool BaseClusterInfo::RegionAreaHasBeenSet() const
{
    return m_regionAreaHasBeenSet;
}

bool BaseClusterInfo::GetUsed() const
{
    return m_used;
}

void BaseClusterInfo::SetUsed(const bool& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool BaseClusterInfo::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

uint64_t BaseClusterInfo::GetStatus() const
{
    return m_status;
}

void BaseClusterInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BaseClusterInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BaseClusterInfo::GetStatusInfo() const
{
    return m_statusInfo;
}

void BaseClusterInfo::SetStatusInfo(const string& _statusInfo)
{
    m_statusInfo = _statusInfo;
    m_statusInfoHasBeenSet = true;
}

bool BaseClusterInfo::StatusInfoHasBeenSet() const
{
    return m_statusInfoHasBeenSet;
}

string BaseClusterInfo::GetStorageType() const
{
    return m_storageType;
}

void BaseClusterInfo::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool BaseClusterInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string BaseClusterInfo::GetComputeType() const
{
    return m_computeType;
}

void BaseClusterInfo::SetComputeType(const string& _computeType)
{
    m_computeType = _computeType;
    m_computeTypeHasBeenSet = true;
}

bool BaseClusterInfo::ComputeTypeHasBeenSet() const
{
    return m_computeTypeHasBeenSet;
}

string BaseClusterInfo::GetClusterResource() const
{
    return m_clusterResource;
}

void BaseClusterInfo::SetClusterResource(const string& _clusterResource)
{
    m_clusterResource = _clusterResource;
    m_clusterResourceHasBeenSet = true;
}

bool BaseClusterInfo::ClusterResourceHasBeenSet() const
{
    return m_clusterResourceHasBeenSet;
}

string BaseClusterInfo::GetChargeType() const
{
    return m_chargeType;
}

void BaseClusterInfo::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool BaseClusterInfo::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string BaseClusterInfo::GetCreateTime() const
{
    return m_createTime;
}

void BaseClusterInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BaseClusterInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BaseClusterInfo::GetExtraConf() const
{
    return m_extraConf;
}

void BaseClusterInfo::SetExtraConf(const string& _extraConf)
{
    m_extraConf = _extraConf;
    m_extraConfHasBeenSet = true;
}

bool BaseClusterInfo::ExtraConfHasBeenSet() const
{
    return m_extraConfHasBeenSet;
}

string BaseClusterInfo::GetRangerUserName() const
{
    return m_rangerUserName;
}

void BaseClusterInfo::SetRangerUserName(const string& _rangerUserName)
{
    m_rangerUserName = _rangerUserName;
    m_rangerUserNameHasBeenSet = true;
}

bool BaseClusterInfo::RangerUserNameHasBeenSet() const
{
    return m_rangerUserNameHasBeenSet;
}

string BaseClusterInfo::GetCdwUserName() const
{
    return m_cdwUserName;
}

void BaseClusterInfo::SetCdwUserName(const string& _cdwUserName)
{
    m_cdwUserName = _cdwUserName;
    m_cdwUserNameHasBeenSet = true;
}

bool BaseClusterInfo::CdwUserNameHasBeenSet() const
{
    return m_cdwUserNameHasBeenSet;
}

