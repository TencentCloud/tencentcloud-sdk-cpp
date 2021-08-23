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

#include <tencentcloud/ump/v20200918/model/ZoneConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

ZoneConfig::ZoneConfig() :
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_zoneTypeHasBeenSet(false),
    m_bunkCodesHasBeenSet(false),
    m_floorNameHasBeenSet(false),
    m_floorIdHasBeenSet(false),
    m_bindNumHasBeenSet(false),
    m_debugNumHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome ZoneConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneType") && !value["ZoneType"].IsNull())
    {
        if (!value["ZoneType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.ZoneType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneType = value["ZoneType"].GetInt64();
        m_zoneTypeHasBeenSet = true;
    }

    if (value.HasMember("BunkCodes") && !value["BunkCodes"].IsNull())
    {
        if (!value["BunkCodes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.BunkCodes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bunkCodes = string(value["BunkCodes"].GetString());
        m_bunkCodesHasBeenSet = true;
    }

    if (value.HasMember("FloorName") && !value["FloorName"].IsNull())
    {
        if (!value["FloorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.FloorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_floorName = string(value["FloorName"].GetString());
        m_floorNameHasBeenSet = true;
    }

    if (value.HasMember("FloorId") && !value["FloorId"].IsNull())
    {
        if (!value["FloorId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.FloorId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_floorId = value["FloorId"].GetInt64();
        m_floorIdHasBeenSet = true;
    }

    if (value.HasMember("BindNum") && !value["BindNum"].IsNull())
    {
        if (!value["BindNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.BindNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindNum = value["BindNum"].GetInt64();
        m_bindNumHasBeenSet = true;
    }

    if (value.HasMember("DebugNum") && !value["DebugNum"].IsNull())
    {
        if (!value["DebugNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.DebugNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_debugNum = value["DebugNum"].GetInt64();
        m_debugNumHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneType, allocator);
    }

    if (m_bunkCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BunkCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bunkCodes.c_str(), allocator).Move(), allocator);
    }

    if (m_floorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FloorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_floorName.c_str(), allocator).Move(), allocator);
    }

    if (m_floorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FloorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_floorId, allocator);
    }

    if (m_bindNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindNum, allocator);
    }

    if (m_debugNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DebugNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_debugNum, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

}


uint64_t ZoneConfig::GetZoneId() const
{
    return m_zoneId;
}

void ZoneConfig::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneConfig::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ZoneConfig::GetZoneName() const
{
    return m_zoneName;
}

void ZoneConfig::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneConfig::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

int64_t ZoneConfig::GetZoneType() const
{
    return m_zoneType;
}

void ZoneConfig::SetZoneType(const int64_t& _zoneType)
{
    m_zoneType = _zoneType;
    m_zoneTypeHasBeenSet = true;
}

bool ZoneConfig::ZoneTypeHasBeenSet() const
{
    return m_zoneTypeHasBeenSet;
}

string ZoneConfig::GetBunkCodes() const
{
    return m_bunkCodes;
}

void ZoneConfig::SetBunkCodes(const string& _bunkCodes)
{
    m_bunkCodes = _bunkCodes;
    m_bunkCodesHasBeenSet = true;
}

bool ZoneConfig::BunkCodesHasBeenSet() const
{
    return m_bunkCodesHasBeenSet;
}

string ZoneConfig::GetFloorName() const
{
    return m_floorName;
}

void ZoneConfig::SetFloorName(const string& _floorName)
{
    m_floorName = _floorName;
    m_floorNameHasBeenSet = true;
}

bool ZoneConfig::FloorNameHasBeenSet() const
{
    return m_floorNameHasBeenSet;
}

int64_t ZoneConfig::GetFloorId() const
{
    return m_floorId;
}

void ZoneConfig::SetFloorId(const int64_t& _floorId)
{
    m_floorId = _floorId;
    m_floorIdHasBeenSet = true;
}

bool ZoneConfig::FloorIdHasBeenSet() const
{
    return m_floorIdHasBeenSet;
}

int64_t ZoneConfig::GetBindNum() const
{
    return m_bindNum;
}

void ZoneConfig::SetBindNum(const int64_t& _bindNum)
{
    m_bindNum = _bindNum;
    m_bindNumHasBeenSet = true;
}

bool ZoneConfig::BindNumHasBeenSet() const
{
    return m_bindNumHasBeenSet;
}

int64_t ZoneConfig::GetDebugNum() const
{
    return m_debugNum;
}

void ZoneConfig::SetDebugNum(const int64_t& _debugNum)
{
    m_debugNum = _debugNum;
    m_debugNumHasBeenSet = true;
}

bool ZoneConfig::DebugNumHasBeenSet() const
{
    return m_debugNumHasBeenSet;
}

int64_t ZoneConfig::GetState() const
{
    return m_state;
}

void ZoneConfig::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ZoneConfig::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

