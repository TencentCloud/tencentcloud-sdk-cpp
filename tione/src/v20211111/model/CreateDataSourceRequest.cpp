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

#include <tencentcloud/tione/v20211111/model/CreateDataSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CreateDataSourceRequest::CreateDataSourceRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_storageIdHasBeenSet(false),
    m_mountConfigureHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateDataSourceRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

    if (m_storageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mountConfigure.ToJsonObject(d[key.c_str()], allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataSourceRequest::GetName() const
{
    return m_name;
}

void CreateDataSourceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDataSourceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDataSourceRequest::GetType() const
{
    return m_type;
}

void CreateDataSourceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateDataSourceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateDataSourceRequest::GetPermission() const
{
    return m_permission;
}

void CreateDataSourceRequest::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool CreateDataSourceRequest::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string CreateDataSourceRequest::GetStorageId() const
{
    return m_storageId;
}

void CreateDataSourceRequest::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool CreateDataSourceRequest::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

MountConfigureInfo CreateDataSourceRequest::GetMountConfigure() const
{
    return m_mountConfigure;
}

void CreateDataSourceRequest::SetMountConfigure(const MountConfigureInfo& _mountConfigure)
{
    m_mountConfigure = _mountConfigure;
    m_mountConfigureHasBeenSet = true;
}

bool CreateDataSourceRequest::MountConfigureHasBeenSet() const
{
    return m_mountConfigureHasBeenSet;
}

vector<Tag> CreateDataSourceRequest::GetTags() const
{
    return m_tags;
}

void CreateDataSourceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDataSourceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


