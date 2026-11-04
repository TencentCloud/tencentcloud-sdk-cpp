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

#include <tencentcloud/tione/v20211111/model/ResourcePermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ResourcePermission::ResourcePermission() :
    m_resourceTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_subUinNameHasBeenSet(false),
    m_dataSourceBriefHasBeenSet(false)
{
}

CoreInternalOutcome ResourcePermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("SubUinName") && !value["SubUinName"].IsNull())
    {
        if (!value["SubUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.SubUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUinName = string(value["SubUinName"].GetString());
        m_subUinNameHasBeenSet = true;
    }

    if (value.HasMember("DataSourceBrief") && !value["DataSourceBrief"].IsNull())
    {
        if (!value["DataSourceBrief"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.DataSourceBrief` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataSourceBrief.Deserialize(value["DataSourceBrief"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataSourceBriefHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourcePermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUinName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceBriefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceBrief";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataSourceBrief.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ResourcePermission::GetResourceType() const
{
    return m_resourceType;
}

void ResourcePermission::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourcePermission::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ResourcePermission::GetId() const
{
    return m_id;
}

void ResourcePermission::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ResourcePermission::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ResourcePermission::GetPermission() const
{
    return m_permission;
}

void ResourcePermission::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool ResourcePermission::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string ResourcePermission::GetName() const
{
    return m_name;
}

void ResourcePermission::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResourcePermission::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ResourcePermission::GetSubUin() const
{
    return m_subUin;
}

void ResourcePermission::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool ResourcePermission::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string ResourcePermission::GetSubUinName() const
{
    return m_subUinName;
}

void ResourcePermission::SetSubUinName(const string& _subUinName)
{
    m_subUinName = _subUinName;
    m_subUinNameHasBeenSet = true;
}

bool ResourcePermission::SubUinNameHasBeenSet() const
{
    return m_subUinNameHasBeenSet;
}

DataSourceBrief ResourcePermission::GetDataSourceBrief() const
{
    return m_dataSourceBrief;
}

void ResourcePermission::SetDataSourceBrief(const DataSourceBrief& _dataSourceBrief)
{
    m_dataSourceBrief = _dataSourceBrief;
    m_dataSourceBriefHasBeenSet = true;
}

bool ResourcePermission::DataSourceBriefHasBeenSet() const
{
    return m_dataSourceBriefHasBeenSet;
}

