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

#include <tencentcloud/cfg/v20210820/model/CreateTaskFromActionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

CreateTaskFromActionRequest::CreateTaskFromActionRequest() :
    m_taskActionIdHasBeenSet(false),
    m_taskInstancesHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_taskActionGeneralConfigurationHasBeenSet(false),
    m_taskActionCustomConfigurationHasBeenSet(false),
    m_taskPauseDurationHasBeenSet(false)
{
}

string CreateTaskFromActionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskActionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskActionId, allocator);
    }

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

    if (m_taskActionGeneralConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskActionGeneralConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskActionGeneralConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_taskActionCustomConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskActionCustomConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskActionCustomConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_taskPauseDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPauseDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskPauseDuration, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateTaskFromActionRequest::GetTaskActionId() const
{
    return m_taskActionId;
}

void CreateTaskFromActionRequest::SetTaskActionId(const uint64_t& _taskActionId)
{
    m_taskActionId = _taskActionId;
    m_taskActionIdHasBeenSet = true;
}

bool CreateTaskFromActionRequest::TaskActionIdHasBeenSet() const
{
    return m_taskActionIdHasBeenSet;
}

vector<string> CreateTaskFromActionRequest::GetTaskInstances() const
{
    return m_taskInstances;
}

void CreateTaskFromActionRequest::SetTaskInstances(const vector<string>& _taskInstances)
{
    m_taskInstances = _taskInstances;
    m_taskInstancesHasBeenSet = true;
}

bool CreateTaskFromActionRequest::TaskInstancesHasBeenSet() const
{
    return m_taskInstancesHasBeenSet;
}

string CreateTaskFromActionRequest::GetTaskTitle() const
{
    return m_taskTitle;
}

void CreateTaskFromActionRequest::SetTaskTitle(const string& _taskTitle)
{
    m_taskTitle = _taskTitle;
    m_taskTitleHasBeenSet = true;
}

bool CreateTaskFromActionRequest::TaskTitleHasBeenSet() const
{
    return m_taskTitleHasBeenSet;
}

string CreateTaskFromActionRequest::GetTaskDescription() const
{
    return m_taskDescription;
}

void CreateTaskFromActionRequest::SetTaskDescription(const string& _taskDescription)
{
    m_taskDescription = _taskDescription;
    m_taskDescriptionHasBeenSet = true;
}

bool CreateTaskFromActionRequest::TaskDescriptionHasBeenSet() const
{
    return m_taskDescriptionHasBeenSet;
}

string CreateTaskFromActionRequest::GetTaskActionGeneralConfiguration() const
{
    return m_taskActionGeneralConfiguration;
}

void CreateTaskFromActionRequest::SetTaskActionGeneralConfiguration(const string& _taskActionGeneralConfiguration)
{
    m_taskActionGeneralConfiguration = _taskActionGeneralConfiguration;
    m_taskActionGeneralConfigurationHasBeenSet = true;
}

bool CreateTaskFromActionRequest::TaskActionGeneralConfigurationHasBeenSet() const
{
    return m_taskActionGeneralConfigurationHasBeenSet;
}

string CreateTaskFromActionRequest::GetTaskActionCustomConfiguration() const
{
    return m_taskActionCustomConfiguration;
}

void CreateTaskFromActionRequest::SetTaskActionCustomConfiguration(const string& _taskActionCustomConfiguration)
{
    m_taskActionCustomConfiguration = _taskActionCustomConfiguration;
    m_taskActionCustomConfigurationHasBeenSet = true;
}

bool CreateTaskFromActionRequest::TaskActionCustomConfigurationHasBeenSet() const
{
    return m_taskActionCustomConfigurationHasBeenSet;
}

uint64_t CreateTaskFromActionRequest::GetTaskPauseDuration() const
{
    return m_taskPauseDuration;
}

void CreateTaskFromActionRequest::SetTaskPauseDuration(const uint64_t& _taskPauseDuration)
{
    m_taskPauseDuration = _taskPauseDuration;
    m_taskPauseDurationHasBeenSet = true;
}

bool CreateTaskFromActionRequest::TaskPauseDurationHasBeenSet() const
{
    return m_taskPauseDurationHasBeenSet;
}


