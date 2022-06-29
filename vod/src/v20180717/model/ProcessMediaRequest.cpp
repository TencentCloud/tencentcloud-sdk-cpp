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

#include <tencentcloud/vod/v20180717/model/ProcessMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProcessMediaRequest::ProcessMediaRequest() :
    m_fileIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_mediaProcessTaskHasBeenSet(false),
    m_aiContentReviewTaskHasBeenSet(false),
    m_aiAnalysisTaskHasBeenSet(false),
    m_aiRecognitionTaskHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_tasksNotifyModeHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string ProcessMediaRequest::ToJsonString() const
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

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_mediaProcessTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaProcessTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaProcessTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aiContentReviewTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiContentReviewTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiContentReviewTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aiAnalysisTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAnalysisTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiAnalysisTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aiRecognitionTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRecognitionTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiRecognitionTask.ToJsonObject(d[key.c_str()], allocator);
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


string ProcessMediaRequest::GetFileId() const
{
    return m_fileId;
}

void ProcessMediaRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ProcessMediaRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

uint64_t ProcessMediaRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ProcessMediaRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ProcessMediaRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

MediaProcessTaskInput ProcessMediaRequest::GetMediaProcessTask() const
{
    return m_mediaProcessTask;
}

void ProcessMediaRequest::SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask)
{
    m_mediaProcessTask = _mediaProcessTask;
    m_mediaProcessTaskHasBeenSet = true;
}

bool ProcessMediaRequest::MediaProcessTaskHasBeenSet() const
{
    return m_mediaProcessTaskHasBeenSet;
}

AiContentReviewTaskInput ProcessMediaRequest::GetAiContentReviewTask() const
{
    return m_aiContentReviewTask;
}

void ProcessMediaRequest::SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask)
{
    m_aiContentReviewTask = _aiContentReviewTask;
    m_aiContentReviewTaskHasBeenSet = true;
}

bool ProcessMediaRequest::AiContentReviewTaskHasBeenSet() const
{
    return m_aiContentReviewTaskHasBeenSet;
}

AiAnalysisTaskInput ProcessMediaRequest::GetAiAnalysisTask() const
{
    return m_aiAnalysisTask;
}

void ProcessMediaRequest::SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask)
{
    m_aiAnalysisTask = _aiAnalysisTask;
    m_aiAnalysisTaskHasBeenSet = true;
}

bool ProcessMediaRequest::AiAnalysisTaskHasBeenSet() const
{
    return m_aiAnalysisTaskHasBeenSet;
}

AiRecognitionTaskInput ProcessMediaRequest::GetAiRecognitionTask() const
{
    return m_aiRecognitionTask;
}

void ProcessMediaRequest::SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask)
{
    m_aiRecognitionTask = _aiRecognitionTask;
    m_aiRecognitionTaskHasBeenSet = true;
}

bool ProcessMediaRequest::AiRecognitionTaskHasBeenSet() const
{
    return m_aiRecognitionTaskHasBeenSet;
}

int64_t ProcessMediaRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void ProcessMediaRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool ProcessMediaRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string ProcessMediaRequest::GetTasksNotifyMode() const
{
    return m_tasksNotifyMode;
}

void ProcessMediaRequest::SetTasksNotifyMode(const string& _tasksNotifyMode)
{
    m_tasksNotifyMode = _tasksNotifyMode;
    m_tasksNotifyModeHasBeenSet = true;
}

bool ProcessMediaRequest::TasksNotifyModeHasBeenSet() const
{
    return m_tasksNotifyModeHasBeenSet;
}

string ProcessMediaRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void ProcessMediaRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool ProcessMediaRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string ProcessMediaRequest::GetSessionId() const
{
    return m_sessionId;
}

void ProcessMediaRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ProcessMediaRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ProcessMediaRequest::GetExtInfo() const
{
    return m_extInfo;
}

void ProcessMediaRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool ProcessMediaRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


