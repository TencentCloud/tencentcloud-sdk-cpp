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

#include <tencentcloud/es/v20180416/model/ProcessDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ProcessDetail::ProcessDetail() :
    m_completedHasBeenSet(false),
    m_remainHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

CoreInternalOutcome ProcessDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Completed") && !value["Completed"].IsNull())
    {
        if (!value["Completed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetail.Completed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completed = value["Completed"].GetInt64();
        m_completedHasBeenSet = true;
    }

    if (value.HasMember("Remain") && !value["Remain"].IsNull())
    {
        if (!value["Remain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetail.Remain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remain = value["Remain"].GetInt64();
        m_remainHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetail.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessDetail.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_completedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Completed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completed, allocator);
    }

    if (m_remainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remain, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

}


int64_t ProcessDetail::GetCompleted() const
{
    return m_completed;
}

void ProcessDetail::SetCompleted(const int64_t& _completed)
{
    m_completed = _completed;
    m_completedHasBeenSet = true;
}

bool ProcessDetail::CompletedHasBeenSet() const
{
    return m_completedHasBeenSet;
}

int64_t ProcessDetail::GetRemain() const
{
    return m_remain;
}

void ProcessDetail::SetRemain(const int64_t& _remain)
{
    m_remain = _remain;
    m_remainHasBeenSet = true;
}

bool ProcessDetail::RemainHasBeenSet() const
{
    return m_remainHasBeenSet;
}

int64_t ProcessDetail::GetTotal() const
{
    return m_total;
}

void ProcessDetail::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ProcessDetail::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t ProcessDetail::GetTaskType() const
{
    return m_taskType;
}

void ProcessDetail::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ProcessDetail::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

