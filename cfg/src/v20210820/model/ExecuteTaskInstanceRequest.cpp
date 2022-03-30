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

#include <tencentcloud/cfg/v20210820/model/ExecuteTaskInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

ExecuteTaskInstanceRequest::ExecuteTaskInstanceRequest() :
    m_taskIdHasBeenSet(false),
    m_taskActionIdHasBeenSet(false),
    m_taskInstanceIdsHasBeenSet(false),
    m_isOperateAllHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_taskGroupIdHasBeenSet(false)
{
}

string ExecuteTaskInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskActionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskActionId, allocator);
    }

    if (m_taskInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskInstanceIds.begin(); itr != m_taskInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_isOperateAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOperateAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOperateAll, allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionType, allocator);
    }

    if (m_taskGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskGroupId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ExecuteTaskInstanceRequest::GetTaskId() const
{
    return m_taskId;
}

void ExecuteTaskInstanceRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ExecuteTaskInstanceRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t ExecuteTaskInstanceRequest::GetTaskActionId() const
{
    return m_taskActionId;
}

void ExecuteTaskInstanceRequest::SetTaskActionId(const uint64_t& _taskActionId)
{
    m_taskActionId = _taskActionId;
    m_taskActionIdHasBeenSet = true;
}

bool ExecuteTaskInstanceRequest::TaskActionIdHasBeenSet() const
{
    return m_taskActionIdHasBeenSet;
}

vector<uint64_t> ExecuteTaskInstanceRequest::GetTaskInstanceIds() const
{
    return m_taskInstanceIds;
}

void ExecuteTaskInstanceRequest::SetTaskInstanceIds(const vector<uint64_t>& _taskInstanceIds)
{
    m_taskInstanceIds = _taskInstanceIds;
    m_taskInstanceIdsHasBeenSet = true;
}

bool ExecuteTaskInstanceRequest::TaskInstanceIdsHasBeenSet() const
{
    return m_taskInstanceIdsHasBeenSet;
}

bool ExecuteTaskInstanceRequest::GetIsOperateAll() const
{
    return m_isOperateAll;
}

void ExecuteTaskInstanceRequest::SetIsOperateAll(const bool& _isOperateAll)
{
    m_isOperateAll = _isOperateAll;
    m_isOperateAllHasBeenSet = true;
}

bool ExecuteTaskInstanceRequest::IsOperateAllHasBeenSet() const
{
    return m_isOperateAllHasBeenSet;
}

uint64_t ExecuteTaskInstanceRequest::GetActionType() const
{
    return m_actionType;
}

void ExecuteTaskInstanceRequest::SetActionType(const uint64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ExecuteTaskInstanceRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

uint64_t ExecuteTaskInstanceRequest::GetTaskGroupId() const
{
    return m_taskGroupId;
}

void ExecuteTaskInstanceRequest::SetTaskGroupId(const uint64_t& _taskGroupId)
{
    m_taskGroupId = _taskGroupId;
    m_taskGroupIdHasBeenSet = true;
}

bool ExecuteTaskInstanceRequest::TaskGroupIdHasBeenSet() const
{
    return m_taskGroupIdHasBeenSet;
}


