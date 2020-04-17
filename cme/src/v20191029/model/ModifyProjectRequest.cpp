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

#include <tencentcloud/cme/v20191029/model/ModifyProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ModifyProjectRequest::ModifyProjectRequest() :
    m_platformHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

string ModifyProjectRequest::ToJsonString() const
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

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_owner.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProjectRequest::GetPlatform() const
{
    return m_platform;
}

void ModifyProjectRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ModifyProjectRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ModifyProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyProjectRequest::GetName() const
{
    return m_name;
}

void ModifyProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyProjectRequest::GetAspectRatio() const
{
    return m_aspectRatio;
}

void ModifyProjectRequest::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool ModifyProjectRequest::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

Entity ModifyProjectRequest::GetOwner() const
{
    return m_owner;
}

void ModifyProjectRequest::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool ModifyProjectRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}


