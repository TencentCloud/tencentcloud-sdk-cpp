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

#include <tencentcloud/wedata/v20210820/model/CreateOfflineTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateOfflineTaskRequest::CreateOfflineTaskRequest() :
    m_projectIdHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_notesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_taskModeHasBeenSet(false),
    m_taskImportInfoHasBeenSet(false)
{
}

string CreateOfflineTaskRequest::ToJsonString() const
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

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_notesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notes.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_typeId, allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_taskModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskMode.c_str(), allocator).Move(), allocator);
    }

    if (m_taskImportInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskImportInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskImportInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateOfflineTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateOfflineTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateOfflineTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateOfflineTaskRequest::GetCycleStep() const
{
    return m_cycleStep;
}

void CreateOfflineTaskRequest::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool CreateOfflineTaskRequest::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

int64_t CreateOfflineTaskRequest::GetDelayTime() const
{
    return m_delayTime;
}

void CreateOfflineTaskRequest::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool CreateOfflineTaskRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string CreateOfflineTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateOfflineTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateOfflineTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateOfflineTaskRequest::GetNotes() const
{
    return m_notes;
}

void CreateOfflineTaskRequest::SetNotes(const string& _notes)
{
    m_notes = _notes;
    m_notesHasBeenSet = true;
}

bool CreateOfflineTaskRequest::NotesHasBeenSet() const
{
    return m_notesHasBeenSet;
}

string CreateOfflineTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateOfflineTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateOfflineTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateOfflineTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateOfflineTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateOfflineTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t CreateOfflineTaskRequest::GetTypeId() const
{
    return m_typeId;
}

void CreateOfflineTaskRequest::SetTypeId(const int64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool CreateOfflineTaskRequest::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string CreateOfflineTaskRequest::GetTaskAction() const
{
    return m_taskAction;
}

void CreateOfflineTaskRequest::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool CreateOfflineTaskRequest::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string CreateOfflineTaskRequest::GetTaskMode() const
{
    return m_taskMode;
}

void CreateOfflineTaskRequest::SetTaskMode(const string& _taskMode)
{
    m_taskMode = _taskMode;
    m_taskModeHasBeenSet = true;
}

bool CreateOfflineTaskRequest::TaskModeHasBeenSet() const
{
    return m_taskModeHasBeenSet;
}

TaskImportInfo CreateOfflineTaskRequest::GetTaskImportInfo() const
{
    return m_taskImportInfo;
}

void CreateOfflineTaskRequest::SetTaskImportInfo(const TaskImportInfo& _taskImportInfo)
{
    m_taskImportInfo = _taskImportInfo;
    m_taskImportInfoHasBeenSet = true;
}

bool CreateOfflineTaskRequest::TaskImportInfoHasBeenSet() const
{
    return m_taskImportInfoHasBeenSet;
}


