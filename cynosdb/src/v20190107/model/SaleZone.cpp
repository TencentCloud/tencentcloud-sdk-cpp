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

#include <tencentcloud/cynosdb/v20190107/model/SaleZone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SaleZone::SaleZone() :
    m_zoneHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneZhHasBeenSet(false),
    m_isSupportServerlessHasBeenSet(false),
    m_isSupportNormalHasBeenSet(false),
    m_physicalZoneHasBeenSet(false),
    m_hasPermissionHasBeenSet(false),
    m_isWholeRdmaZoneHasBeenSet(false),
    m_isSupportCreateClusterHasBeenSet(false)
{
}

CoreInternalOutcome SaleZone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleZone.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SaleZone.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneZh") && !value["ZoneZh"].IsNull())
    {
        if (!value["ZoneZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleZone.ZoneZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneZh = string(value["ZoneZh"].GetString());
        m_zoneZhHasBeenSet = true;
    }

    if (value.HasMember("IsSupportServerless") && !value["IsSupportServerless"].IsNull())
    {
        if (!value["IsSupportServerless"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SaleZone.IsSupportServerless` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportServerless = value["IsSupportServerless"].GetInt64();
        m_isSupportServerlessHasBeenSet = true;
    }

    if (value.HasMember("IsSupportNormal") && !value["IsSupportNormal"].IsNull())
    {
        if (!value["IsSupportNormal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SaleZone.IsSupportNormal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportNormal = value["IsSupportNormal"].GetInt64();
        m_isSupportNormalHasBeenSet = true;
    }

    if (value.HasMember("PhysicalZone") && !value["PhysicalZone"].IsNull())
    {
        if (!value["PhysicalZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleZone.PhysicalZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physicalZone = string(value["PhysicalZone"].GetString());
        m_physicalZoneHasBeenSet = true;
    }

    if (value.HasMember("HasPermission") && !value["HasPermission"].IsNull())
    {
        if (!value["HasPermission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SaleZone.HasPermission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasPermission = value["HasPermission"].GetBool();
        m_hasPermissionHasBeenSet = true;
    }

    if (value.HasMember("IsWholeRdmaZone") && !value["IsWholeRdmaZone"].IsNull())
    {
        if (!value["IsWholeRdmaZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaleZone.IsWholeRdmaZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isWholeRdmaZone = string(value["IsWholeRdmaZone"].GetString());
        m_isWholeRdmaZoneHasBeenSet = true;
    }

    if (value.HasMember("IsSupportCreateCluster") && !value["IsSupportCreateCluster"].IsNull())
    {
        if (!value["IsSupportCreateCluster"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SaleZone.IsSupportCreateCluster` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportCreateCluster = value["IsSupportCreateCluster"].GetInt64();
        m_isSupportCreateClusterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SaleZone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_zoneZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneZh.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportServerlessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportServerless";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportServerless, allocator);
    }

    if (m_isSupportNormalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportNormal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportNormal, allocator);
    }

    if (m_physicalZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_physicalZone.c_str(), allocator).Move(), allocator);
    }

    if (m_hasPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasPermission, allocator);
    }

    if (m_isWholeRdmaZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWholeRdmaZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isWholeRdmaZone.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportCreateClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportCreateCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportCreateCluster, allocator);
    }

}


string SaleZone::GetZone() const
{
    return m_zone;
}

void SaleZone::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool SaleZone::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t SaleZone::GetZoneId() const
{
    return m_zoneId;
}

void SaleZone::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool SaleZone::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string SaleZone::GetZoneZh() const
{
    return m_zoneZh;
}

void SaleZone::SetZoneZh(const string& _zoneZh)
{
    m_zoneZh = _zoneZh;
    m_zoneZhHasBeenSet = true;
}

bool SaleZone::ZoneZhHasBeenSet() const
{
    return m_zoneZhHasBeenSet;
}

int64_t SaleZone::GetIsSupportServerless() const
{
    return m_isSupportServerless;
}

void SaleZone::SetIsSupportServerless(const int64_t& _isSupportServerless)
{
    m_isSupportServerless = _isSupportServerless;
    m_isSupportServerlessHasBeenSet = true;
}

bool SaleZone::IsSupportServerlessHasBeenSet() const
{
    return m_isSupportServerlessHasBeenSet;
}

int64_t SaleZone::GetIsSupportNormal() const
{
    return m_isSupportNormal;
}

void SaleZone::SetIsSupportNormal(const int64_t& _isSupportNormal)
{
    m_isSupportNormal = _isSupportNormal;
    m_isSupportNormalHasBeenSet = true;
}

bool SaleZone::IsSupportNormalHasBeenSet() const
{
    return m_isSupportNormalHasBeenSet;
}

string SaleZone::GetPhysicalZone() const
{
    return m_physicalZone;
}

void SaleZone::SetPhysicalZone(const string& _physicalZone)
{
    m_physicalZone = _physicalZone;
    m_physicalZoneHasBeenSet = true;
}

bool SaleZone::PhysicalZoneHasBeenSet() const
{
    return m_physicalZoneHasBeenSet;
}

bool SaleZone::GetHasPermission() const
{
    return m_hasPermission;
}

void SaleZone::SetHasPermission(const bool& _hasPermission)
{
    m_hasPermission = _hasPermission;
    m_hasPermissionHasBeenSet = true;
}

bool SaleZone::HasPermissionHasBeenSet() const
{
    return m_hasPermissionHasBeenSet;
}

string SaleZone::GetIsWholeRdmaZone() const
{
    return m_isWholeRdmaZone;
}

void SaleZone::SetIsWholeRdmaZone(const string& _isWholeRdmaZone)
{
    m_isWholeRdmaZone = _isWholeRdmaZone;
    m_isWholeRdmaZoneHasBeenSet = true;
}

bool SaleZone::IsWholeRdmaZoneHasBeenSet() const
{
    return m_isWholeRdmaZoneHasBeenSet;
}

int64_t SaleZone::GetIsSupportCreateCluster() const
{
    return m_isSupportCreateCluster;
}

void SaleZone::SetIsSupportCreateCluster(const int64_t& _isSupportCreateCluster)
{
    m_isSupportCreateCluster = _isSupportCreateCluster;
    m_isSupportCreateClusterHasBeenSet = true;
}

bool SaleZone::IsSupportCreateClusterHasBeenSet() const
{
    return m_isSupportCreateClusterHasBeenSet;
}

