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

#include <tencentcloud/wedata/v20210820/model/SubmitSqlTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SubmitSqlTaskRequest::SubmitSqlTaskRequest() :
    m_databaseTypeHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_scriptIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_engineIdHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_resourceQueueHasBeenSet(false),
    m_datasourceTypeHasBeenSet(false),
    m_computeResourceHasBeenSet(false),
    m_runParamsHasBeenSet(false),
    m_confParamsHasBeenSet(false),
    m_scriptEncryptionHasBeenSet(false)
{
}

string SubmitSqlTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_databaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_datasourceId, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineId.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_computeResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_computeResource.c_str(), allocator).Move(), allocator);
    }

    if (m_runParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runParams.c_str(), allocator).Move(), allocator);
    }

    if (m_confParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_confParams.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptEncryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scriptEncryption, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitSqlTaskRequest::GetDatabaseType() const
{
    return m_databaseType;
}

void SubmitSqlTaskRequest::SetDatabaseType(const string& _databaseType)
{
    m_databaseType = _databaseType;
    m_databaseTypeHasBeenSet = true;
}

bool SubmitSqlTaskRequest::DatabaseTypeHasBeenSet() const
{
    return m_databaseTypeHasBeenSet;
}

int64_t SubmitSqlTaskRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void SubmitSqlTaskRequest::SetDatasourceId(const int64_t& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool SubmitSqlTaskRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string SubmitSqlTaskRequest::GetGroupId() const
{
    return m_groupId;
}

void SubmitSqlTaskRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SubmitSqlTaskRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string SubmitSqlTaskRequest::GetScriptId() const
{
    return m_scriptId;
}

void SubmitSqlTaskRequest::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool SubmitSqlTaskRequest::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

string SubmitSqlTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void SubmitSqlTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SubmitSqlTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SubmitSqlTaskRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void SubmitSqlTaskRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool SubmitSqlTaskRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string SubmitSqlTaskRequest::GetEngineId() const
{
    return m_engineId;
}

void SubmitSqlTaskRequest::SetEngineId(const string& _engineId)
{
    m_engineId = _engineId;
    m_engineIdHasBeenSet = true;
}

bool SubmitSqlTaskRequest::EngineIdHasBeenSet() const
{
    return m_engineIdHasBeenSet;
}

string SubmitSqlTaskRequest::GetScriptContent() const
{
    return m_scriptContent;
}

void SubmitSqlTaskRequest::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool SubmitSqlTaskRequest::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string SubmitSqlTaskRequest::GetResourceQueue() const
{
    return m_resourceQueue;
}

void SubmitSqlTaskRequest::SetResourceQueue(const string& _resourceQueue)
{
    m_resourceQueue = _resourceQueue;
    m_resourceQueueHasBeenSet = true;
}

bool SubmitSqlTaskRequest::ResourceQueueHasBeenSet() const
{
    return m_resourceQueueHasBeenSet;
}

string SubmitSqlTaskRequest::GetDatasourceType() const
{
    return m_datasourceType;
}

void SubmitSqlTaskRequest::SetDatasourceType(const string& _datasourceType)
{
    m_datasourceType = _datasourceType;
    m_datasourceTypeHasBeenSet = true;
}

bool SubmitSqlTaskRequest::DatasourceTypeHasBeenSet() const
{
    return m_datasourceTypeHasBeenSet;
}

string SubmitSqlTaskRequest::GetComputeResource() const
{
    return m_computeResource;
}

void SubmitSqlTaskRequest::SetComputeResource(const string& _computeResource)
{
    m_computeResource = _computeResource;
    m_computeResourceHasBeenSet = true;
}

bool SubmitSqlTaskRequest::ComputeResourceHasBeenSet() const
{
    return m_computeResourceHasBeenSet;
}

string SubmitSqlTaskRequest::GetRunParams() const
{
    return m_runParams;
}

void SubmitSqlTaskRequest::SetRunParams(const string& _runParams)
{
    m_runParams = _runParams;
    m_runParamsHasBeenSet = true;
}

bool SubmitSqlTaskRequest::RunParamsHasBeenSet() const
{
    return m_runParamsHasBeenSet;
}

string SubmitSqlTaskRequest::GetConfParams() const
{
    return m_confParams;
}

void SubmitSqlTaskRequest::SetConfParams(const string& _confParams)
{
    m_confParams = _confParams;
    m_confParamsHasBeenSet = true;
}

bool SubmitSqlTaskRequest::ConfParamsHasBeenSet() const
{
    return m_confParamsHasBeenSet;
}

bool SubmitSqlTaskRequest::GetScriptEncryption() const
{
    return m_scriptEncryption;
}

void SubmitSqlTaskRequest::SetScriptEncryption(const bool& _scriptEncryption)
{
    m_scriptEncryption = _scriptEncryption;
    m_scriptEncryptionHasBeenSet = true;
}

bool SubmitSqlTaskRequest::ScriptEncryptionHasBeenSet() const
{
    return m_scriptEncryptionHasBeenSet;
}


