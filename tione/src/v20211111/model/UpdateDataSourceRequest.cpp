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

#include <tencentcloud/tione/v20211111/model/UpdateDataSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

UpdateDataSourceRequest::UpdateDataSourceRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_mountConfigureHasBeenSet(false)
{
}

string UpdateDataSourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

    if (m_mountConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mountConfigure.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDataSourceRequest::GetId() const
{
    return m_id;
}

void UpdateDataSourceRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateDataSourceRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UpdateDataSourceRequest::GetName() const
{
    return m_name;
}

void UpdateDataSourceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateDataSourceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateDataSourceRequest::GetPermission() const
{
    return m_permission;
}

void UpdateDataSourceRequest::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool UpdateDataSourceRequest::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

MountConfigureInfo UpdateDataSourceRequest::GetMountConfigure() const
{
    return m_mountConfigure;
}

void UpdateDataSourceRequest::SetMountConfigure(const MountConfigureInfo& _mountConfigure)
{
    m_mountConfigure = _mountConfigure;
    m_mountConfigureHasBeenSet = true;
}

bool UpdateDataSourceRequest::MountConfigureHasBeenSet() const
{
    return m_mountConfigureHasBeenSet;
}


