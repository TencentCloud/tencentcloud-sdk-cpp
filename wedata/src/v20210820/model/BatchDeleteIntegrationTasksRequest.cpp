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

#include <tencentcloud/wedata/v20210820/model/BatchDeleteIntegrationTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchDeleteIntegrationTasksRequest::BatchDeleteIntegrationTasksRequest() :
    m_taskIdsHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_deleteKFFlagHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_taskNamesHasBeenSet(false)
{
}

string BatchDeleteIntegrationTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteKFFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteKFFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteKFFlag, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskNames.begin(); itr != m_taskNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchDeleteIntegrationTasksRequest::GetTaskIds() const
{
    return m_taskIds;
}

void BatchDeleteIntegrationTasksRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool BatchDeleteIntegrationTasksRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

int64_t BatchDeleteIntegrationTasksRequest::GetTaskType() const
{
    return m_taskType;
}

void BatchDeleteIntegrationTasksRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool BatchDeleteIntegrationTasksRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string BatchDeleteIntegrationTasksRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchDeleteIntegrationTasksRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchDeleteIntegrationTasksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t BatchDeleteIntegrationTasksRequest::GetDeleteKFFlag() const
{
    return m_deleteKFFlag;
}

void BatchDeleteIntegrationTasksRequest::SetDeleteKFFlag(const int64_t& _deleteKFFlag)
{
    m_deleteKFFlag = _deleteKFFlag;
    m_deleteKFFlagHasBeenSet = true;
}

bool BatchDeleteIntegrationTasksRequest::DeleteKFFlagHasBeenSet() const
{
    return m_deleteKFFlagHasBeenSet;
}

string BatchDeleteIntegrationTasksRequest::GetName() const
{
    return m_name;
}

void BatchDeleteIntegrationTasksRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BatchDeleteIntegrationTasksRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> BatchDeleteIntegrationTasksRequest::GetTaskNames() const
{
    return m_taskNames;
}

void BatchDeleteIntegrationTasksRequest::SetTaskNames(const vector<string>& _taskNames)
{
    m_taskNames = _taskNames;
    m_taskNamesHasBeenSet = true;
}

bool BatchDeleteIntegrationTasksRequest::TaskNamesHasBeenSet() const
{
    return m_taskNamesHasBeenSet;
}


