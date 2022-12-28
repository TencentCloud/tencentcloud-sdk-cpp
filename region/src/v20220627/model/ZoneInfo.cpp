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

#include <tencentcloud/region/v20220627/model/ZoneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Region::V20220627::Model;
using namespace std;

ZoneInfo::ZoneInfo() :
    m_zoneHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneStateHasBeenSet(false),
    m_parentZoneHasBeenSet(false),
    m_parentZoneIdHasBeenSet(false),
    m_parentZoneNameHasBeenSet(false),
    m_zoneTypeHasBeenSet(false),
    m_machineRoomTypeMCHasBeenSet(false),
    m_zoneIdMCHasBeenSet(false)
{
}

CoreInternalOutcome ZoneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


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

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneState") && !value["ZoneState"].IsNull())
    {
        if (!value["ZoneState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ZoneState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneState = string(value["ZoneState"].GetString());
        m_zoneStateHasBeenSet = true;
    }

    if (value.HasMember("ParentZone") && !value["ParentZone"].IsNull())
    {
        if (!value["ParentZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ParentZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentZone = string(value["ParentZone"].GetString());
        m_parentZoneHasBeenSet = true;
    }

    if (value.HasMember("ParentZoneId") && !value["ParentZoneId"].IsNull())
    {
        if (!value["ParentZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ParentZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentZoneId = string(value["ParentZoneId"].GetString());
        m_parentZoneIdHasBeenSet = true;
    }

    if (value.HasMember("ParentZoneName") && !value["ParentZoneName"].IsNull())
    {
        if (!value["ParentZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ParentZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentZoneName = string(value["ParentZoneName"].GetString());
        m_parentZoneNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneType") && !value["ZoneType"].IsNull())
    {
        if (!value["ZoneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ZoneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneType = string(value["ZoneType"].GetString());
        m_zoneTypeHasBeenSet = true;
    }

    if (value.HasMember("MachineRoomTypeMC") && !value["MachineRoomTypeMC"].IsNull())
    {
        if (!value["MachineRoomTypeMC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.MachineRoomTypeMC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineRoomTypeMC = string(value["MachineRoomTypeMC"].GetString());
        m_machineRoomTypeMCHasBeenSet = true;
    }

    if (value.HasMember("ZoneIdMC") && !value["ZoneIdMC"].IsNull())
    {
        if (!value["ZoneIdMC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ZoneIdMC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneIdMC = string(value["ZoneIdMC"].GetString());
        m_zoneIdMCHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneState.c_str(), allocator).Move(), allocator);
    }

    if (m_parentZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentZone.c_str(), allocator).Move(), allocator);
    }

    if (m_parentZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneType.c_str(), allocator).Move(), allocator);
    }

    if (m_machineRoomTypeMCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineRoomTypeMC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineRoomTypeMC.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdMCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIdMC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneIdMC.c_str(), allocator).Move(), allocator);
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

string ZoneInfo::GetZoneId() const
{
    return m_zoneId;
}

void ZoneInfo::SetZoneId(const string& _zoneId)
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

string ZoneInfo::GetParentZone() const
{
    return m_parentZone;
}

void ZoneInfo::SetParentZone(const string& _parentZone)
{
    m_parentZone = _parentZone;
    m_parentZoneHasBeenSet = true;
}

bool ZoneInfo::ParentZoneHasBeenSet() const
{
    return m_parentZoneHasBeenSet;
}

string ZoneInfo::GetParentZoneId() const
{
    return m_parentZoneId;
}

void ZoneInfo::SetParentZoneId(const string& _parentZoneId)
{
    m_parentZoneId = _parentZoneId;
    m_parentZoneIdHasBeenSet = true;
}

bool ZoneInfo::ParentZoneIdHasBeenSet() const
{
    return m_parentZoneIdHasBeenSet;
}

string ZoneInfo::GetParentZoneName() const
{
    return m_parentZoneName;
}

void ZoneInfo::SetParentZoneName(const string& _parentZoneName)
{
    m_parentZoneName = _parentZoneName;
    m_parentZoneNameHasBeenSet = true;
}

bool ZoneInfo::ParentZoneNameHasBeenSet() const
{
    return m_parentZoneNameHasBeenSet;
}

string ZoneInfo::GetZoneType() const
{
    return m_zoneType;
}

void ZoneInfo::SetZoneType(const string& _zoneType)
{
    m_zoneType = _zoneType;
    m_zoneTypeHasBeenSet = true;
}

bool ZoneInfo::ZoneTypeHasBeenSet() const
{
    return m_zoneTypeHasBeenSet;
}

string ZoneInfo::GetMachineRoomTypeMC() const
{
    return m_machineRoomTypeMC;
}

void ZoneInfo::SetMachineRoomTypeMC(const string& _machineRoomTypeMC)
{
    m_machineRoomTypeMC = _machineRoomTypeMC;
    m_machineRoomTypeMCHasBeenSet = true;
}

bool ZoneInfo::MachineRoomTypeMCHasBeenSet() const
{
    return m_machineRoomTypeMCHasBeenSet;
}

string ZoneInfo::GetZoneIdMC() const
{
    return m_zoneIdMC;
}

void ZoneInfo::SetZoneIdMC(const string& _zoneIdMC)
{
    m_zoneIdMC = _zoneIdMC;
    m_zoneIdMCHasBeenSet = true;
}

bool ZoneInfo::ZoneIdMCHasBeenSet() const
{
    return m_zoneIdMCHasBeenSet;
}

