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

#include <tencentcloud/monitor/v20180724/model/PrometheusZoneItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusZoneItem::PrometheusZoneItem() :
    m_zoneHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneStateHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_zoneResourceStateHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusZoneItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusZoneItem.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusZoneItem.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneState") && !value["ZoneState"].IsNull())
    {
        if (!value["ZoneState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusZoneItem.ZoneState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneState = value["ZoneState"].GetInt64();
        m_zoneStateHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusZoneItem.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusZoneItem.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneResourceState") && !value["ZoneResourceState"].IsNull())
    {
        if (!value["ZoneResourceState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusZoneItem.ZoneResourceState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneResourceState = value["ZoneResourceState"].GetInt64();
        m_zoneResourceStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusZoneItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_zoneStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneState, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneResourceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneResourceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneResourceState, allocator);
    }

}


string PrometheusZoneItem::GetZone() const
{
    return m_zone;
}

void PrometheusZoneItem::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool PrometheusZoneItem::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t PrometheusZoneItem::GetZoneId() const
{
    return m_zoneId;
}

void PrometheusZoneItem::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool PrometheusZoneItem::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t PrometheusZoneItem::GetZoneState() const
{
    return m_zoneState;
}

void PrometheusZoneItem::SetZoneState(const int64_t& _zoneState)
{
    m_zoneState = _zoneState;
    m_zoneStateHasBeenSet = true;
}

bool PrometheusZoneItem::ZoneStateHasBeenSet() const
{
    return m_zoneStateHasBeenSet;
}

int64_t PrometheusZoneItem::GetRegionId() const
{
    return m_regionId;
}

void PrometheusZoneItem::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool PrometheusZoneItem::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string PrometheusZoneItem::GetZoneName() const
{
    return m_zoneName;
}

void PrometheusZoneItem::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool PrometheusZoneItem::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

int64_t PrometheusZoneItem::GetZoneResourceState() const
{
    return m_zoneResourceState;
}

void PrometheusZoneItem::SetZoneResourceState(const int64_t& _zoneResourceState)
{
    m_zoneResourceState = _zoneResourceState;
    m_zoneResourceStateHasBeenSet = true;
}

bool PrometheusZoneItem::ZoneResourceStateHasBeenSet() const
{
    return m_zoneResourceStateHasBeenSet;
}

