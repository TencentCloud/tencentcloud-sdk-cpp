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

#include <tencentcloud/wedata/v20210820/model/BatchCreateTaskVersionAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchCreateTaskVersionAsyncRequest::BatchCreateTaskVersionAsyncRequest() :
    m_tasksHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_autoRunHasBeenSet(false),
    m_alarmWaysHasBeenSet(false),
    m_alarmRecipientTypesHasBeenSet(false),
    m_needCheckParentSubmittedHasBeenSet(false)
{
}

string BatchCreateTaskVersionAsyncRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRun, allocator);
    }

    if (m_alarmWaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmWays.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRecipientTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmRecipientTypes.c_str(), allocator).Move(), allocator);
    }

    if (m_needCheckParentSubmittedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedCheckParentSubmitted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needCheckParentSubmitted, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<BatchCreateTaskVersionDTO> BatchCreateTaskVersionAsyncRequest::GetTasks() const
{
    return m_tasks;
}

void BatchCreateTaskVersionAsyncRequest::SetTasks(const vector<BatchCreateTaskVersionDTO>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool BatchCreateTaskVersionAsyncRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string BatchCreateTaskVersionAsyncRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchCreateTaskVersionAsyncRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchCreateTaskVersionAsyncRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool BatchCreateTaskVersionAsyncRequest::GetAutoRun() const
{
    return m_autoRun;
}

void BatchCreateTaskVersionAsyncRequest::SetAutoRun(const bool& _autoRun)
{
    m_autoRun = _autoRun;
    m_autoRunHasBeenSet = true;
}

bool BatchCreateTaskVersionAsyncRequest::AutoRunHasBeenSet() const
{
    return m_autoRunHasBeenSet;
}

string BatchCreateTaskVersionAsyncRequest::GetAlarmWays() const
{
    return m_alarmWays;
}

void BatchCreateTaskVersionAsyncRequest::SetAlarmWays(const string& _alarmWays)
{
    m_alarmWays = _alarmWays;
    m_alarmWaysHasBeenSet = true;
}

bool BatchCreateTaskVersionAsyncRequest::AlarmWaysHasBeenSet() const
{
    return m_alarmWaysHasBeenSet;
}

string BatchCreateTaskVersionAsyncRequest::GetAlarmRecipientTypes() const
{
    return m_alarmRecipientTypes;
}

void BatchCreateTaskVersionAsyncRequest::SetAlarmRecipientTypes(const string& _alarmRecipientTypes)
{
    m_alarmRecipientTypes = _alarmRecipientTypes;
    m_alarmRecipientTypesHasBeenSet = true;
}

bool BatchCreateTaskVersionAsyncRequest::AlarmRecipientTypesHasBeenSet() const
{
    return m_alarmRecipientTypesHasBeenSet;
}

bool BatchCreateTaskVersionAsyncRequest::GetNeedCheckParentSubmitted() const
{
    return m_needCheckParentSubmitted;
}

void BatchCreateTaskVersionAsyncRequest::SetNeedCheckParentSubmitted(const bool& _needCheckParentSubmitted)
{
    m_needCheckParentSubmitted = _needCheckParentSubmitted;
    m_needCheckParentSubmittedHasBeenSet = true;
}

bool BatchCreateTaskVersionAsyncRequest::NeedCheckParentSubmittedHasBeenSet() const
{
    return m_needCheckParentSubmittedHasBeenSet;
}


