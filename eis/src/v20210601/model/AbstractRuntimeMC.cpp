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

#include <tencentcloud/eis/v20210601/model/AbstractRuntimeMC.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

AbstractRuntimeMC::AbstractRuntimeMC() :
    m_runtimeIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_addrHasBeenSet(false)
{
}

CoreInternalOutcome AbstractRuntimeMC::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuntimeId") && !value["RuntimeId"].IsNull())
    {
        if (!value["RuntimeId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AbstractRuntimeMC.RuntimeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeId = value["RuntimeId"].GetInt64();
        m_runtimeIdHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AbstractRuntimeMC.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AbstractRuntimeMC.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `AbstractRuntimeMC.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Error("response `AbstractRuntimeMC.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Addr") && !value["Addr"].IsNull())
    {
        if (!value["Addr"].IsString())
        {
            return CoreInternalOutcome(Error("response `AbstractRuntimeMC.Addr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addr = string(value["Addr"].GetString());
        m_addrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbstractRuntimeMC::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runtimeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeId, allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_addrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addr.c_str(), allocator).Move(), allocator);
    }

}


int64_t AbstractRuntimeMC::GetRuntimeId() const
{
    return m_runtimeId;
}

void AbstractRuntimeMC::SetRuntimeId(const int64_t& _runtimeId)
{
    m_runtimeId = _runtimeId;
    m_runtimeIdHasBeenSet = true;
}

bool AbstractRuntimeMC::RuntimeIdHasBeenSet() const
{
    return m_runtimeIdHasBeenSet;
}

string AbstractRuntimeMC::GetDisplayName() const
{
    return m_displayName;
}

void AbstractRuntimeMC::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool AbstractRuntimeMC::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

int64_t AbstractRuntimeMC::GetType() const
{
    return m_type;
}

void AbstractRuntimeMC::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AbstractRuntimeMC::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AbstractRuntimeMC::GetZone() const
{
    return m_zone;
}

void AbstractRuntimeMC::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool AbstractRuntimeMC::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string AbstractRuntimeMC::GetArea() const
{
    return m_area;
}

void AbstractRuntimeMC::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool AbstractRuntimeMC::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string AbstractRuntimeMC::GetAddr() const
{
    return m_addr;
}

void AbstractRuntimeMC::SetAddr(const string& _addr)
{
    m_addr = _addr;
    m_addrHasBeenSet = true;
}

bool AbstractRuntimeMC::AddrHasBeenSet() const
{
    return m_addrHasBeenSet;
}

