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

#include <tencentcloud/wedata/v20250806/model/UpdateDataSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

UpdateDataSourceRequest::UpdateDataSourceRequest() :
    m_idHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_prodConPropertiesHasBeenSet(false),
    m_devConPropertiesHasBeenSet(false),
    m_prodFileUploadHasBeenSet(false),
    m_devFileUploadHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
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
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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


uint64_t UpdateDataSourceRequest::GetId() const
{
    return m_id;
}

void UpdateDataSourceRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateDataSourceRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UpdateDataSourceRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateDataSourceRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateDataSourceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UpdateDataSourceRequest::GetProdConProperties() const
{
    return m_prodConProperties;
}

void UpdateDataSourceRequest::SetProdConProperties(const string& _prodConProperties)
{
    m_prodConProperties = _prodConProperties;
    m_prodConPropertiesHasBeenSet = true;
}

bool UpdateDataSourceRequest::ProdConPropertiesHasBeenSet() const
{
    return m_prodConPropertiesHasBeenSet;
}

string UpdateDataSourceRequest::GetDevConProperties() const
{
    return m_devConProperties;
}

void UpdateDataSourceRequest::SetDevConProperties(const string& _devConProperties)
{
    m_devConProperties = _devConProperties;
    m_devConPropertiesHasBeenSet = true;
}

bool UpdateDataSourceRequest::DevConPropertiesHasBeenSet() const
{
    return m_devConPropertiesHasBeenSet;
}

DataSourceFileUpload UpdateDataSourceRequest::GetProdFileUpload() const
{
    return m_prodFileUpload;
}

void UpdateDataSourceRequest::SetProdFileUpload(const DataSourceFileUpload& _prodFileUpload)
{
    m_prodFileUpload = _prodFileUpload;
    m_prodFileUploadHasBeenSet = true;
}

bool UpdateDataSourceRequest::ProdFileUploadHasBeenSet() const
{
    return m_prodFileUploadHasBeenSet;
}

DataSourceFileUpload UpdateDataSourceRequest::GetDevFileUpload() const
{
    return m_devFileUpload;
}

void UpdateDataSourceRequest::SetDevFileUpload(const DataSourceFileUpload& _devFileUpload)
{
    m_devFileUpload = _devFileUpload;
    m_devFileUploadHasBeenSet = true;
}

bool UpdateDataSourceRequest::DevFileUploadHasBeenSet() const
{
    return m_devFileUploadHasBeenSet;
}

string UpdateDataSourceRequest::GetDisplayName() const
{
    return m_displayName;
}

void UpdateDataSourceRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool UpdateDataSourceRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string UpdateDataSourceRequest::GetDescription() const
{
    return m_description;
}

void UpdateDataSourceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateDataSourceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


