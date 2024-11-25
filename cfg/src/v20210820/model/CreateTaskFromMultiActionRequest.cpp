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

#include <tencentcloud/cfg/v20210820/model/CreateTaskFromMultiActionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

CreateTaskFromMultiActionRequest::CreateTaskFromMultiActionRequest() :
    m_taskInstancesHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_taskPauseDurationHasBeenSet(false),
    m_taskActionHasBeenSet(false)
{
}

string CreateTaskFromMultiActionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskInstances.begin(); itr != m_taskInstances.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_taskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_taskPauseDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPauseDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskPauseDuration, allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskAction.begin(); itr != m_taskAction.end(); ++itr, ++i)
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


vector<string> CreateTaskFromMultiActionRequest::GetTaskInstances() const
{
    return m_taskInstances;
}

void CreateTaskFromMultiActionRequest::SetTaskInstances(const vector<string>& _taskInstances)
{
    m_taskInstances = _taskInstances;
    m_taskInstancesHasBeenSet = true;
}

bool CreateTaskFromMultiActionRequest::TaskInstancesHasBeenSet() const
{
    return m_taskInstancesHasBeenSet;
}

string CreateTaskFromMultiActionRequest::GetTaskTitle() const
{
    return m_taskTitle;
}

void CreateTaskFromMultiActionRequest::SetTaskTitle(const string& _taskTitle)
{
    m_taskTitle = _taskTitle;
    m_taskTitleHasBeenSet = true;
}

bool CreateTaskFromMultiActionRequest::TaskTitleHasBeenSet() const
{
    return m_taskTitleHasBeenSet;
}

string CreateTaskFromMultiActionRequest::GetTaskDescription() const
{
    return m_taskDescription;
}

void CreateTaskFromMultiActionRequest::SetTaskDescription(const string& _taskDescription)
{
    m_taskDescription = _taskDescription;
    m_taskDescriptionHasBeenSet = true;
}

bool CreateTaskFromMultiActionRequest::TaskDescriptionHasBeenSet() const
{
    return m_taskDescriptionHasBeenSet;
}

uint64_t CreateTaskFromMultiActionRequest::GetTaskPauseDuration() const
{
    return m_taskPauseDuration;
}

void CreateTaskFromMultiActionRequest::SetTaskPauseDuration(const uint64_t& _taskPauseDuration)
{
    m_taskPauseDuration = _taskPauseDuration;
    m_taskPauseDurationHasBeenSet = true;
}

bool CreateTaskFromMultiActionRequest::TaskPauseDurationHasBeenSet() const
{
    return m_taskPauseDurationHasBeenSet;
}

vector<TaskGroupForAction> CreateTaskFromMultiActionRequest::GetTaskAction() const
{
    return m_taskAction;
}

void CreateTaskFromMultiActionRequest::SetTaskAction(const vector<TaskGroupForAction>& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool CreateTaskFromMultiActionRequest::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}


