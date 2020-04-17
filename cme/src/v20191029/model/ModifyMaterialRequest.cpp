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

#include <tencentcloud/cme/v20191029/model/ModifyMaterialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ModifyMaterialRequest::ModifyMaterialRequest() :
    m_platformHasBeenSet(false),
    m_materialIdHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_classPathHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ModifyMaterialRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_materialIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_owner.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_classPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_classPath.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMaterialRequest::GetPlatform() const
{
    return m_platform;
}

void ModifyMaterialRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ModifyMaterialRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ModifyMaterialRequest::GetMaterialId() const
{
    return m_materialId;
}

void ModifyMaterialRequest::SetMaterialId(const string& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool ModifyMaterialRequest::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

Entity ModifyMaterialRequest::GetOwner() const
{
    return m_owner;
}

void ModifyMaterialRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool ModifyMaterialRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string ModifyMaterialRequest::GetName() const
{
    return m_name;
}

void ModifyMaterialRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMaterialRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ModifyMaterialRequest::GetTags() const
{
    return m_tags;
}

void ModifyMaterialRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyMaterialRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ModifyMaterialRequest::GetClassPath() const
{
    return m_classPath;
}

void ModifyMaterialRequest::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool ModifyMaterialRequest::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

string ModifyMaterialRequest::GetOperator() const
{
    return m_operator;
}

void ModifyMaterialRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ModifyMaterialRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


