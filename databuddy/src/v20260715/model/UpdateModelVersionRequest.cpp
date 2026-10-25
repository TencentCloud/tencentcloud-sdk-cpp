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

#include <tencentcloud/databuddy/v20260715/model/UpdateModelVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateModelVersionRequest::UpdateModelVersionRequest() :
    m_catalogNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_addedAliasesHasBeenSet(false),
    m_removedAliasesHasBeenSet(false),
    m_newCommentHasBeenSet(false)
{
}

string UpdateModelVersionRequest::ToJsonString() const
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

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelVersion, allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_addedAliasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddedAliases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addedAliases.begin(); itr != m_addedAliases.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_removedAliasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemovedAliases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_removedAliases.begin(); itr != m_removedAliases.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_newCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewComment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newComment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateModelVersionRequest::GetCatalogName() const
{
    return m_catalogName;
}

void UpdateModelVersionRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool UpdateModelVersionRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string UpdateModelVersionRequest::GetSchemaName() const
{
    return m_schemaName;
}

void UpdateModelVersionRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool UpdateModelVersionRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string UpdateModelVersionRequest::GetModelName() const
{
    return m_modelName;
}

void UpdateModelVersionRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool UpdateModelVersionRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

int64_t UpdateModelVersionRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void UpdateModelVersionRequest::SetModelVersion(const int64_t& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool UpdateModelVersionRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string UpdateModelVersionRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void UpdateModelVersionRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool UpdateModelVersionRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

vector<string> UpdateModelVersionRequest::GetAddedAliases() const
{
    return m_addedAliases;
}

void UpdateModelVersionRequest::SetAddedAliases(const vector<string>& _addedAliases)
{
    m_addedAliases = _addedAliases;
    m_addedAliasesHasBeenSet = true;
}

bool UpdateModelVersionRequest::AddedAliasesHasBeenSet() const
{
    return m_addedAliasesHasBeenSet;
}

vector<string> UpdateModelVersionRequest::GetRemovedAliases() const
{
    return m_removedAliases;
}

void UpdateModelVersionRequest::SetRemovedAliases(const vector<string>& _removedAliases)
{
    m_removedAliases = _removedAliases;
    m_removedAliasesHasBeenSet = true;
}

bool UpdateModelVersionRequest::RemovedAliasesHasBeenSet() const
{
    return m_removedAliasesHasBeenSet;
}

string UpdateModelVersionRequest::GetNewComment() const
{
    return m_newComment;
}

void UpdateModelVersionRequest::SetNewComment(const string& _newComment)
{
    m_newComment = _newComment;
    m_newCommentHasBeenSet = true;
}

bool UpdateModelVersionRequest::NewCommentHasBeenSet() const
{
    return m_newCommentHasBeenSet;
}


