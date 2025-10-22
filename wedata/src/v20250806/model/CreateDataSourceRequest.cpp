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

#include <tencentcloud/wedata/v20250806/model/CreateDataSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateDataSourceRequest::CreateDataSourceRequest() :
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_prodConPropertiesHasBeenSet(false),
    m_devConPropertiesHasBeenSet(false),
    m_prodFileUploadHasBeenSet(false),
    m_devFileUploadHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateDataSourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_prodConPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProdConProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prodConProperties.c_str(), allocator).Move(), allocator);
    }

    if (m_devConPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevConProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_devConProperties.c_str(), allocator).Move(), allocator);
    }

    if (m_prodFileUploadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProdFileUpload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prodFileUpload.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_devFileUploadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevFileUpload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_devFileUpload.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataSourceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDataSourceRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDataSourceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
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

string CreateDataSourceRequest::GetProdConProperties() const
{
    return m_prodConProperties;
}

void CreateDataSourceRequest::SetProdConProperties(const string& _prodConProperties)
{
    m_prodConProperties = _prodConProperties;
    m_prodConPropertiesHasBeenSet = true;
}

bool CreateDataSourceRequest::ProdConPropertiesHasBeenSet() const
{
    return m_prodConPropertiesHasBeenSet;
}

string CreateDataSourceRequest::GetDevConProperties() const
{
    return m_devConProperties;
}

void CreateDataSourceRequest::SetDevConProperties(const string& _devConProperties)
{
    m_devConProperties = _devConProperties;
    m_devConPropertiesHasBeenSet = true;
}

bool CreateDataSourceRequest::DevConPropertiesHasBeenSet() const
{
    return m_devConPropertiesHasBeenSet;
}

DataSourceFileUpload CreateDataSourceRequest::GetProdFileUpload() const
{
    return m_prodFileUpload;
}

void CreateDataSourceRequest::SetProdFileUpload(const DataSourceFileUpload& _prodFileUpload)
{
    m_prodFileUpload = _prodFileUpload;
    m_prodFileUploadHasBeenSet = true;
}

bool CreateDataSourceRequest::ProdFileUploadHasBeenSet() const
{
    return m_prodFileUploadHasBeenSet;
}

DataSourceFileUpload CreateDataSourceRequest::GetDevFileUpload() const
{
    return m_devFileUpload;
}

void CreateDataSourceRequest::SetDevFileUpload(const DataSourceFileUpload& _devFileUpload)
{
    m_devFileUpload = _devFileUpload;
    m_devFileUploadHasBeenSet = true;
}

bool CreateDataSourceRequest::DevFileUploadHasBeenSet() const
{
    return m_devFileUploadHasBeenSet;
}

string CreateDataSourceRequest::GetDisplayName() const
{
    return m_displayName;
}

void CreateDataSourceRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool CreateDataSourceRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string CreateDataSourceRequest::GetDescription() const
{
    return m_description;
}

void CreateDataSourceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDataSourceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


