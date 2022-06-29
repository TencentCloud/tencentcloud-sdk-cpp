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

#include <tencentcloud/vod/v20180717/model/ProcessMediaByProcedureRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProcessMediaByProcedureRequest::ProcessMediaByProcedureRequest() :
    m_fileIdHasBeenSet(false),
    m_procedureNameHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_tasksNotifyModeHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string ProcessMediaByProcedureRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_procedureNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_procedureName.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_tasksPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tasksPriority, allocator);
    }

    if (m_tasksNotifyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksNotifyMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tasksNotifyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ProcessMediaByProcedureRequest::GetFileId() const
{
    return m_fileId;
}

void ProcessMediaByProcedureRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ProcessMediaByProcedureRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string ProcessMediaByProcedureRequest::GetProcedureName() const
{
    return m_procedureName;
}

void ProcessMediaByProcedureRequest::SetProcedureName(const string& _procedureName)
{
    m_procedureName = _procedureName;
    m_procedureNameHasBeenSet = true;
}

bool ProcessMediaByProcedureRequest::ProcedureNameHasBeenSet() const
{
    return m_procedureNameHasBeenSet;
}

uint64_t ProcessMediaByProcedureRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ProcessMediaByProcedureRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ProcessMediaByProcedureRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

int64_t ProcessMediaByProcedureRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void ProcessMediaByProcedureRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool ProcessMediaByProcedureRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string ProcessMediaByProcedureRequest::GetTasksNotifyMode() const
{
    return m_tasksNotifyMode;
}

void ProcessMediaByProcedureRequest::SetTasksNotifyMode(const string& _tasksNotifyMode)
{
    m_tasksNotifyMode = _tasksNotifyMode;
    m_tasksNotifyModeHasBeenSet = true;
}

bool ProcessMediaByProcedureRequest::TasksNotifyModeHasBeenSet() const
{
    return m_tasksNotifyModeHasBeenSet;
}

string ProcessMediaByProcedureRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void ProcessMediaByProcedureRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool ProcessMediaByProcedureRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string ProcessMediaByProcedureRequest::GetSessionId() const
{
    return m_sessionId;
}

void ProcessMediaByProcedureRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ProcessMediaByProcedureRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ProcessMediaByProcedureRequest::GetExtInfo() const
{
    return m_extInfo;
}

void ProcessMediaByProcedureRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool ProcessMediaByProcedureRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


