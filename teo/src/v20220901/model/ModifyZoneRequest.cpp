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

#include <tencentcloud/teo/v20220901/model/ModifyZoneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyZoneRequest::ModifyZoneRequest() :
    m_zoneIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vanityNameServersHasBeenSet(false),
    m_aliasZoneNameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_zoneNameHasBeenSet(false)
{
}

string ModifyZoneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_vanityNameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VanityNameServers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vanityNameServers.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aliasZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasZoneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aliasZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyZoneRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyZoneRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyZoneRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyZoneRequest::GetType() const
{
    return m_type;
}

void ModifyZoneRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyZoneRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

VanityNameServers ModifyZoneRequest::GetVanityNameServers() const
{
    return m_vanityNameServers;
}

void ModifyZoneRequest::SetVanityNameServers(const VanityNameServers& _vanityNameServers)
{
    m_vanityNameServers = _vanityNameServers;
    m_vanityNameServersHasBeenSet = true;
}

bool ModifyZoneRequest::VanityNameServersHasBeenSet() const
{
    return m_vanityNameServersHasBeenSet;
}

string ModifyZoneRequest::GetAliasZoneName() const
{
    return m_aliasZoneName;
}

void ModifyZoneRequest::SetAliasZoneName(const string& _aliasZoneName)
{
    m_aliasZoneName = _aliasZoneName;
    m_aliasZoneNameHasBeenSet = true;
}

bool ModifyZoneRequest::AliasZoneNameHasBeenSet() const
{
    return m_aliasZoneNameHasBeenSet;
}

string ModifyZoneRequest::GetArea() const
{
    return m_area;
}

void ModifyZoneRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ModifyZoneRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string ModifyZoneRequest::GetZoneName() const
{
    return m_zoneName;
}

void ModifyZoneRequest::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ModifyZoneRequest::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}


