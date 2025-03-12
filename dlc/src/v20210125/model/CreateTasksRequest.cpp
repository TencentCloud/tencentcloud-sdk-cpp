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

#include <tencentcloud/dlc/v20210125/model/CreateTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateTasksRequest::CreateTasksRequest() :
    m_databaseNameHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_isMultiStatementHasBeenSet(false),
    m_sourceInfoHasBeenSet(false)
{
}

string CreateTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tasks.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_isMultiStatementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMultiStatement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isMultiStatement, allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceInfo.begin(); itr != m_sourceInfo.end(); ++itr, ++i)
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


string CreateTasksRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void CreateTasksRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool CreateTasksRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

TasksInfo CreateTasksRequest::GetTasks() const
{
    return m_tasks;
}

void CreateTasksRequest::SetTasks(const TasksInfo& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CreateTasksRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string CreateTasksRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void CreateTasksRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool CreateTasksRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

string CreateTasksRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void CreateTasksRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool CreateTasksRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string CreateTasksRequest::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void CreateTasksRequest::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool CreateTasksRequest::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

bool CreateTasksRequest::GetIsMultiStatement() const
{
    return m_isMultiStatement;
}

void CreateTasksRequest::SetIsMultiStatement(const bool& _isMultiStatement)
{
    m_isMultiStatement = _isMultiStatement;
    m_isMultiStatementHasBeenSet = true;
}

bool CreateTasksRequest::IsMultiStatementHasBeenSet() const
{
    return m_isMultiStatementHasBeenSet;
}

vector<KVPair> CreateTasksRequest::GetSourceInfo() const
{
    return m_sourceInfo;
}

void CreateTasksRequest::SetSourceInfo(const vector<KVPair>& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool CreateTasksRequest::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}


