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

#include <tencentcloud/wedata/v20210820/model/CheckAlarmRegularNameExistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CheckAlarmRegularNameExistRequest::CheckAlarmRegularNameExistRequest() :
    m_projectIdHasBeenSet(false),
    m_alarmRegularNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_monitorTypeHasBeenSet(false)
{
}

string CheckAlarmRegularNameExistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRegularNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRegularName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmRegularName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckAlarmRegularNameExistRequest::GetProjectId() const
{
    return m_projectId;
}

void CheckAlarmRegularNameExistRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CheckAlarmRegularNameExistRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CheckAlarmRegularNameExistRequest::GetAlarmRegularName() const
{
    return m_alarmRegularName;
}

void CheckAlarmRegularNameExistRequest::SetAlarmRegularName(const string& _alarmRegularName)
{
    m_alarmRegularName = _alarmRegularName;
    m_alarmRegularNameHasBeenSet = true;
}

bool CheckAlarmRegularNameExistRequest::AlarmRegularNameHasBeenSet() const
{
    return m_alarmRegularNameHasBeenSet;
}

string CheckAlarmRegularNameExistRequest::GetTaskId() const
{
    return m_taskId;
}

void CheckAlarmRegularNameExistRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CheckAlarmRegularNameExistRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CheckAlarmRegularNameExistRequest::GetId() const
{
    return m_id;
}

void CheckAlarmRegularNameExistRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CheckAlarmRegularNameExistRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t CheckAlarmRegularNameExistRequest::GetTaskType() const
{
    return m_taskType;
}

void CheckAlarmRegularNameExistRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CheckAlarmRegularNameExistRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

uint64_t CheckAlarmRegularNameExistRequest::GetMonitorType() const
{
    return m_monitorType;
}

void CheckAlarmRegularNameExistRequest::SetMonitorType(const uint64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool CheckAlarmRegularNameExistRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}


