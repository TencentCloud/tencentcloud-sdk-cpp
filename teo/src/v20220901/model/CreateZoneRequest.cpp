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

#include <tencentcloud/teo/v20220901/model/CreateZoneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateZoneRequest::CreateZoneRequest() :
    m_typeHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_aliasZoneNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_allowDuplicatesHasBeenSet(false),
    m_jumpStartHasBeenSet(false)
{
}

string CreateZoneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasZoneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aliasZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_allowDuplicatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDuplicates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowDuplicates, allocator);
    }

    if (m_jumpStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jumpStart, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateZoneRequest::GetType() const
{
    return m_type;
}

void CreateZoneRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateZoneRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateZoneRequest::GetZoneName() const
{
    return m_zoneName;
}

void CreateZoneRequest::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool CreateZoneRequest::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string CreateZoneRequest::GetArea() const
{
    return m_area;
}

void CreateZoneRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CreateZoneRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string CreateZoneRequest::GetPlanId() const
{
    return m_planId;
}

void CreateZoneRequest::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool CreateZoneRequest::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string CreateZoneRequest::GetAliasZoneName() const
{
    return m_aliasZoneName;
}

void CreateZoneRequest::SetAliasZoneName(const string& _aliasZoneName)
{
    m_aliasZoneName = _aliasZoneName;
    m_aliasZoneNameHasBeenSet = true;
}

bool CreateZoneRequest::AliasZoneNameHasBeenSet() const
{
    return m_aliasZoneNameHasBeenSet;
}

vector<Tag> CreateZoneRequest::GetTags() const
{
    return m_tags;
}

void CreateZoneRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateZoneRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateZoneRequest::GetAllowDuplicates() const
{
    return m_allowDuplicates;
}

void CreateZoneRequest::SetAllowDuplicates(const bool& _allowDuplicates)
{
    m_allowDuplicates = _allowDuplicates;
    m_allowDuplicatesHasBeenSet = true;
}

bool CreateZoneRequest::AllowDuplicatesHasBeenSet() const
{
    return m_allowDuplicatesHasBeenSet;
}

bool CreateZoneRequest::GetJumpStart() const
{
    return m_jumpStart;
}

void CreateZoneRequest::SetJumpStart(const bool& _jumpStart)
{
    m_jumpStart = _jumpStart;
    m_jumpStartHasBeenSet = true;
}

bool CreateZoneRequest::JumpStartHasBeenSet() const
{
    return m_jumpStartHasBeenSet;
}


