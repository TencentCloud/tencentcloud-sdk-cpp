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

#include <tencentcloud/oceanus/v20190422/model/ResourceRefLatest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ResourceRefLatest::ResourceRefLatest() :
    m_resourceIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome ResourceRefLatest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefLatest.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefLatest.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefLatest.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefLatest.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefLatest.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceRefLatest.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceRefLatest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string ResourceRefLatest::GetResourceId() const
{
    return m_resourceId;
}

void ResourceRefLatest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceRefLatest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t ResourceRefLatest::GetVersion() const
{
    return m_version;
}

void ResourceRefLatest::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ResourceRefLatest::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t ResourceRefLatest::GetType() const
{
    return m_type;
}

void ResourceRefLatest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ResourceRefLatest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ResourceRefLatest::GetStatus() const
{
    return m_status;
}

void ResourceRefLatest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ResourceRefLatest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ResourceRefLatest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ResourceRefLatest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ResourceRefLatest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ResourceRefLatest::GetName() const
{
    return m_name;
}

void ResourceRefLatest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResourceRefLatest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

