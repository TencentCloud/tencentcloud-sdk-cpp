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

#include <tencentcloud/wedata/v20210820/model/BatchUpdateIntegrationTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchUpdateIntegrationTasksRequest::BatchUpdateIntegrationTasksRequest() :
    m_taskIdsHasBeenSet(false),
    m_inchargeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_inchargeIdsHasBeenSet(false),
    m_taskNamesHasBeenSet(false)
{
}

string BatchUpdateIntegrationTasksRequest::ToJsonString() const
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

    if (m_inchargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Incharge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_incharge.c_str(), allocator).Move(), allocator);
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

    if (m_inchargeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InchargeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inchargeIds.c_str(), allocator).Move(), allocator);
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


vector<string> BatchUpdateIntegrationTasksRequest::GetTaskIds() const
{
    return m_taskIds;
}

void BatchUpdateIntegrationTasksRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool BatchUpdateIntegrationTasksRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string BatchUpdateIntegrationTasksRequest::GetIncharge() const
{
    return m_incharge;
}

void BatchUpdateIntegrationTasksRequest::SetIncharge(const string& _incharge)
{
    m_incharge = _incharge;
    m_inchargeHasBeenSet = true;
}

bool BatchUpdateIntegrationTasksRequest::InchargeHasBeenSet() const
{
    return m_inchargeHasBeenSet;
}

int64_t BatchUpdateIntegrationTasksRequest::GetTaskType() const
{
    return m_taskType;
}

void BatchUpdateIntegrationTasksRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool BatchUpdateIntegrationTasksRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string BatchUpdateIntegrationTasksRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchUpdateIntegrationTasksRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchUpdateIntegrationTasksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string BatchUpdateIntegrationTasksRequest::GetInchargeIds() const
{
    return m_inchargeIds;
}

void BatchUpdateIntegrationTasksRequest::SetInchargeIds(const string& _inchargeIds)
{
    m_inchargeIds = _inchargeIds;
    m_inchargeIdsHasBeenSet = true;
}

bool BatchUpdateIntegrationTasksRequest::InchargeIdsHasBeenSet() const
{
    return m_inchargeIdsHasBeenSet;
}

vector<string> BatchUpdateIntegrationTasksRequest::GetTaskNames() const
{
    return m_taskNames;
}

void BatchUpdateIntegrationTasksRequest::SetTaskNames(const vector<string>& _taskNames)
{
    m_taskNames = _taskNames;
    m_taskNamesHasBeenSet = true;
}

bool BatchUpdateIntegrationTasksRequest::TaskNamesHasBeenSet() const
{
    return m_taskNamesHasBeenSet;
}


