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

#include <tencentcloud/wedata/v20210820/model/BatchMakeUpIntegrationTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchMakeUpIntegrationTasksRequest::BatchMakeUpIntegrationTasksRequest() :
    m_taskIdsHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string BatchMakeUpIntegrationTasksRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchMakeUpIntegrationTasksRequest::GetTaskIds() const
{
    return m_taskIds;
}

void BatchMakeUpIntegrationTasksRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool BatchMakeUpIntegrationTasksRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

int64_t BatchMakeUpIntegrationTasksRequest::GetTaskType() const
{
    return m_taskType;
}

void BatchMakeUpIntegrationTasksRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool BatchMakeUpIntegrationTasksRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string BatchMakeUpIntegrationTasksRequest::GetStartTime() const
{
    return m_startTime;
}

void BatchMakeUpIntegrationTasksRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BatchMakeUpIntegrationTasksRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BatchMakeUpIntegrationTasksRequest::GetEndTime() const
{
    return m_endTime;
}

void BatchMakeUpIntegrationTasksRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BatchMakeUpIntegrationTasksRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string BatchMakeUpIntegrationTasksRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchMakeUpIntegrationTasksRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchMakeUpIntegrationTasksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


