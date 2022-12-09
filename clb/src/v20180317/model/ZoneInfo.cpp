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

#include <tencentcloud/clb/v20180317/model/ZoneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ZoneInfo::ZoneInfo() :
    m_zoneIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_zoneRegionHasBeenSet(false),
    m_localZoneHasBeenSet(false),
    m_edgeZoneHasBeenSet(false)
{
}

CoreInternalOutcome ZoneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneRegion") && !value["ZoneRegion"].IsNull())
    {
        if (!value["ZoneRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ZoneRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneRegion = string(value["ZoneRegion"].GetString());
        m_zoneRegionHasBeenSet = true;
    }

    if (value.HasMember("LocalZone") && !value["LocalZone"].IsNull())
    {
        if (!value["LocalZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.LocalZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_localZone = value["LocalZone"].GetBool();
        m_localZoneHasBeenSet = true;
    }

    if (value.HasMember("EdgeZone") && !value["EdgeZone"].IsNull())
    {
        if (!value["EdgeZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.EdgeZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_edgeZone = value["EdgeZone"].GetBool();
        m_edgeZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_localZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localZone, allocator);
    }

    if (m_edgeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edgeZone, allocator);
    }

}


uint64_t ZoneInfo::GetZoneId() const
{
    return m_zoneId;
}

void ZoneInfo::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ZoneInfo::GetZone() const
{
    return m_zone;
}

void ZoneInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ZoneInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ZoneInfo::GetZoneName() const
{
    return m_zoneName;
}

void ZoneInfo::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneInfo::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string ZoneInfo::GetZoneRegion() const
{
    return m_zoneRegion;
}

void ZoneInfo::SetZoneRegion(const string& _zoneRegion)
{
    m_zoneRegion = _zoneRegion;
    m_zoneRegionHasBeenSet = true;
}

bool ZoneInfo::ZoneRegionHasBeenSet() const
{
    return m_zoneRegionHasBeenSet;
}

bool ZoneInfo::GetLocalZone() const
{
    return m_localZone;
}

void ZoneInfo::SetLocalZone(const bool& _localZone)
{
    m_localZone = _localZone;
    m_localZoneHasBeenSet = true;
}

bool ZoneInfo::LocalZoneHasBeenSet() const
{
    return m_localZoneHasBeenSet;
}

bool ZoneInfo::GetEdgeZone() const
{
    return m_edgeZone;
}

void ZoneInfo::SetEdgeZone(const bool& _edgeZone)
{
    m_edgeZone = _edgeZone;
    m_edgeZoneHasBeenSet = true;
}

bool ZoneInfo::EdgeZoneHasBeenSet() const
{
    return m_edgeZoneHasBeenSet;
}

