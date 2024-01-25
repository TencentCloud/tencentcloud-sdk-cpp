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

#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskAdvancedSettingsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UpdateBatchTaskAdvancedSettingsRequest::UpdateBatchTaskAdvancedSettingsRequest() :
    m_taskIdsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_retryWaitHasBeenSet(false),
    m_tryLimitHasBeenSet(false),
    m_runPriorityHasBeenSet(false),
    m_executionTTLHasBeenSet(false)
{
}

string UpdateBatchTaskAdvancedSettingsRequest::ToJsonString() const
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_retryWaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryWait";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryWait, allocator);
    }

    if (m_tryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tryLimit, allocator);
    }

    if (m_runPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runPriority, allocator);
    }

    if (m_executionTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_executionTTL, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UpdateBatchTaskAdvancedSettingsRequest::GetTaskIds() const
{
    return m_taskIds;
}

void UpdateBatchTaskAdvancedSettingsRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool UpdateBatchTaskAdvancedSettingsRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string UpdateBatchTaskAdvancedSettingsRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateBatchTaskAdvancedSettingsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateBatchTaskAdvancedSettingsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t UpdateBatchTaskAdvancedSettingsRequest::GetRetryWait() const
{
    return m_retryWait;
}

void UpdateBatchTaskAdvancedSettingsRequest::SetRetryWait(const int64_t& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool UpdateBatchTaskAdvancedSettingsRequest::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

int64_t UpdateBatchTaskAdvancedSettingsRequest::GetTryLimit() const
{
    return m_tryLimit;
}

void UpdateBatchTaskAdvancedSettingsRequest::SetTryLimit(const int64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool UpdateBatchTaskAdvancedSettingsRequest::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

int64_t UpdateBatchTaskAdvancedSettingsRequest::GetRunPriority() const
{
    return m_runPriority;
}

void UpdateBatchTaskAdvancedSettingsRequest::SetRunPriority(const int64_t& _runPriority)
{
    m_runPriority = _runPriority;
    m_runPriorityHasBeenSet = true;
}

bool UpdateBatchTaskAdvancedSettingsRequest::RunPriorityHasBeenSet() const
{
    return m_runPriorityHasBeenSet;
}

int64_t UpdateBatchTaskAdvancedSettingsRequest::GetExecutionTTL() const
{
    return m_executionTTL;
}

void UpdateBatchTaskAdvancedSettingsRequest::SetExecutionTTL(const int64_t& _executionTTL)
{
    m_executionTTL = _executionTTL;
    m_executionTTLHasBeenSet = true;
}

bool UpdateBatchTaskAdvancedSettingsRequest::ExecutionTTLHasBeenSet() const
{
    return m_executionTTLHasBeenSet;
}


