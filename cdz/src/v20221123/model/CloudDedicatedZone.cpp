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

#include <tencentcloud/cdz/v20221123/model/CloudDedicatedZone.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdz::V20221123::Model;
using namespace std;

CloudDedicatedZone::CloudDedicatedZone() :
    m_zoneHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_isLiteModeHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome CloudDedicatedZone::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZone.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZone.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZone.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("IsLiteMode") && !value["IsLiteMode"].IsNull())
    {
        if (!value["IsLiteMode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZone.IsLiteMode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLiteMode = value["IsLiteMode"].GetBool();
        m_isLiteModeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZone.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudDedicatedZone::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_isLiteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLiteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLiteMode, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string CloudDedicatedZone::GetZone() const
{
    return m_zone;
}

void CloudDedicatedZone::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CloudDedicatedZone::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CloudDedicatedZone::GetZoneId() const
{
    return m_zoneId;
}

void CloudDedicatedZone::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CloudDedicatedZone::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CloudDedicatedZone::GetZoneName() const
{
    return m_zoneName;
}

void CloudDedicatedZone::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool CloudDedicatedZone::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

bool CloudDedicatedZone::GetIsLiteMode() const
{
    return m_isLiteMode;
}

void CloudDedicatedZone::SetIsLiteMode(const bool& _isLiteMode)
{
    m_isLiteMode = _isLiteMode;
    m_isLiteModeHasBeenSet = true;
}

bool CloudDedicatedZone::IsLiteModeHasBeenSet() const
{
    return m_isLiteModeHasBeenSet;
}

string CloudDedicatedZone::GetRegion() const
{
    return m_region;
}

void CloudDedicatedZone::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CloudDedicatedZone::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

