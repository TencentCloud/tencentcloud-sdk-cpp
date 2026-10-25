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

#include <tencentcloud/databuddy/v20260715/model/CreateModelVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateModelVersionRequest::CreateModelVersionRequest() :
    m_catalogNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

string CreateModelVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aliases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aliases.begin(); itr != m_aliases.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
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


string CreateModelVersionRequest::GetCatalogName() const
{
    return m_catalogName;
}

void CreateModelVersionRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool CreateModelVersionRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string CreateModelVersionRequest::GetSchemaName() const
{
    return m_schemaName;
}

void CreateModelVersionRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool CreateModelVersionRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string CreateModelVersionRequest::GetModelName() const
{
    return m_modelName;
}

void CreateModelVersionRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool CreateModelVersionRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string CreateModelVersionRequest::GetUri() const
{
    return m_uri;
}

void CreateModelVersionRequest::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool CreateModelVersionRequest::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string CreateModelVersionRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CreateModelVersionRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CreateModelVersionRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

vector<string> CreateModelVersionRequest::GetAliases() const
{
    return m_aliases;
}

void CreateModelVersionRequest::SetAliases(const vector<string>& _aliases)
{
    m_aliases = _aliases;
    m_aliasesHasBeenSet = true;
}

bool CreateModelVersionRequest::AliasesHasBeenSet() const
{
    return m_aliasesHasBeenSet;
}

string CreateModelVersionRequest::GetComment() const
{
    return m_comment;
}

void CreateModelVersionRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateModelVersionRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<KVPair> CreateModelVersionRequest::GetProperties() const
{
    return m_properties;
}

void CreateModelVersionRequest::SetProperties(const vector<KVPair>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool CreateModelVersionRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}


