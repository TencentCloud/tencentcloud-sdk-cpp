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

#include <tencentcloud/teo/v20220106/model/CreateCustomErrorPageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

CreateCustomErrorPageRequest::CreateCustomErrorPageRequest() :
    m_zoneIdHasBeenSet(false),
    m_entityHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

string CreateCustomErrorPageRequest::ToJsonString() const
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

    if (m_entityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entity.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCustomErrorPageRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateCustomErrorPageRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateCustomErrorPageRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateCustomErrorPageRequest::GetEntity() const
{
    return m_entity;
}

void CreateCustomErrorPageRequest::SetEntity(const string& _entity)
{
    m_entity = _entity;
    m_entityHasBeenSet = true;
}

bool CreateCustomErrorPageRequest::EntityHasBeenSet() const
{
    return m_entityHasBeenSet;
}

string CreateCustomErrorPageRequest::GetName() const
{
    return m_name;
}

void CreateCustomErrorPageRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCustomErrorPageRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCustomErrorPageRequest::GetContent() const
{
    return m_content;
}

void CreateCustomErrorPageRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateCustomErrorPageRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}


