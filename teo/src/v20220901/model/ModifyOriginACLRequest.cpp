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

#include <tencentcloud/teo/v20220901/model/ModifyOriginACLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyOriginACLRequest::ModifyOriginACLRequest() :
    m_zoneIdHasBeenSet(false),
    m_l7EnableModeHasBeenSet(false),
    m_l4EnableModeHasBeenSet(false),
    m_originACLEntitiesHasBeenSet(false),
    m_originACLFamilyHasBeenSet(false)
{
}

string ModifyOriginACLRequest::ToJsonString() const
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

    if (m_l7EnableModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L7EnableMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_l7EnableMode.c_str(), allocator).Move(), allocator);
    }

    if (m_l4EnableModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L4EnableMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_l4EnableMode.c_str(), allocator).Move(), allocator);
    }

    if (m_originACLEntitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginACLEntities";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originACLEntities.begin(); itr != m_originACLEntities.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_originACLFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginACLFamily";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originACLFamily.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyOriginACLRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyOriginACLRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyOriginACLRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyOriginACLRequest::GetL7EnableMode() const
{
    return m_l7EnableMode;
}

void ModifyOriginACLRequest::SetL7EnableMode(const string& _l7EnableMode)
{
    m_l7EnableMode = _l7EnableMode;
    m_l7EnableModeHasBeenSet = true;
}

bool ModifyOriginACLRequest::L7EnableModeHasBeenSet() const
{
    return m_l7EnableModeHasBeenSet;
}

string ModifyOriginACLRequest::GetL4EnableMode() const
{
    return m_l4EnableMode;
}

void ModifyOriginACLRequest::SetL4EnableMode(const string& _l4EnableMode)
{
    m_l4EnableMode = _l4EnableMode;
    m_l4EnableModeHasBeenSet = true;
}

bool ModifyOriginACLRequest::L4EnableModeHasBeenSet() const
{
    return m_l4EnableModeHasBeenSet;
}

vector<OriginACLEntity> ModifyOriginACLRequest::GetOriginACLEntities() const
{
    return m_originACLEntities;
}

void ModifyOriginACLRequest::SetOriginACLEntities(const vector<OriginACLEntity>& _originACLEntities)
{
    m_originACLEntities = _originACLEntities;
    m_originACLEntitiesHasBeenSet = true;
}

bool ModifyOriginACLRequest::OriginACLEntitiesHasBeenSet() const
{
    return m_originACLEntitiesHasBeenSet;
}

string ModifyOriginACLRequest::GetOriginACLFamily() const
{
    return m_originACLFamily;
}

void ModifyOriginACLRequest::SetOriginACLFamily(const string& _originACLFamily)
{
    m_originACLFamily = _originACLFamily;
    m_originACLFamilyHasBeenSet = true;
}

bool ModifyOriginACLRequest::OriginACLFamilyHasBeenSet() const
{
    return m_originACLFamilyHasBeenSet;
}


