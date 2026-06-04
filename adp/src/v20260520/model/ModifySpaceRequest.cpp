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

#include <tencentcloud/adp/v20260520/model/ModifySpaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifySpaceRequest::ModifySpaceRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_fieldMaskHasBeenSet(false)
{
}

string ModifySpaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fieldMask.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySpaceRequest::GetName() const
{
    return m_name;
}

void ModifySpaceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifySpaceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifySpaceRequest::GetDescription() const
{
    return m_description;
}

void ModifySpaceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifySpaceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifySpaceRequest::GetSpaceId() const
{
    return m_spaceId;
}

void ModifySpaceRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool ModifySpaceRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

FieldMask ModifySpaceRequest::GetFieldMask() const
{
    return m_fieldMask;
}

void ModifySpaceRequest::SetFieldMask(const FieldMask& _fieldMask)
{
    m_fieldMask = _fieldMask;
    m_fieldMaskHasBeenSet = true;
}

bool ModifySpaceRequest::FieldMaskHasBeenSet() const
{
    return m_fieldMaskHasBeenSet;
}


