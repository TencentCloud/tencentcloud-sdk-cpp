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

#include <tencentcloud/postgres/v20170312/model/ZoneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

ZoneInfo::ZoneInfo() :
    m_zoneHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneStateHasBeenSet(false),
    m_zoneSupportIpv6HasBeenSet(false)
{
}

CoreInternalOutcome ZoneInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneState") && !value["ZoneState"].IsNull())
    {
        if (!value["ZoneState"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.ZoneState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneState = string(value["ZoneState"].GetString());
        m_zoneStateHasBeenSet = true;
    }

    if (value.HasMember("ZoneSupportIpv6") && !value["ZoneSupportIpv6"].IsNull())
    {
        if (!value["ZoneSupportIpv6"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ZoneInfo.ZoneSupportIpv6` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneSupportIpv6 = value["ZoneSupportIpv6"].GetUint64();
        m_zoneSupportIpv6HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneState.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneSupportIpv6HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneSupportIpv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneSupportIpv6, allocator);
    }

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

string ZoneInfo::GetZoneState() const
{
    return m_zoneState;
}

void ZoneInfo::SetZoneState(const string& _zoneState)
{
    m_zoneState = _zoneState;
    m_zoneStateHasBeenSet = true;
}

bool ZoneInfo::ZoneStateHasBeenSet() const
{
    return m_zoneStateHasBeenSet;
}

uint64_t ZoneInfo::GetZoneSupportIpv6() const
{
    return m_zoneSupportIpv6;
}

void ZoneInfo::SetZoneSupportIpv6(const uint64_t& _zoneSupportIpv6)
{
    m_zoneSupportIpv6 = _zoneSupportIpv6;
    m_zoneSupportIpv6HasBeenSet = true;
}

bool ZoneInfo::ZoneSupportIpv6HasBeenSet() const
{
    return m_zoneSupportIpv6HasBeenSet;
}

