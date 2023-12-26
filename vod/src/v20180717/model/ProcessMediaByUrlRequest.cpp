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

#include <tencentcloud/vod/v20180717/model/ProcessMediaByUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProcessMediaByUrlRequest::ProcessMediaByUrlRequest() :
    m_subAppIdHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_outputInfoHasBeenSet(false),
    m_aiContentReviewTaskHasBeenSet(false),
    m_aiAnalysisTaskHasBeenSet(false),
    m_aiRecognitionTaskHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_tasksNotifyModeHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

string ProcessMediaByUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputInfo.ToJsonObject(d[key.c_str()], allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ProcessMediaByUrlRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ProcessMediaByUrlRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ProcessMediaByUrlRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

MediaInputInfo ProcessMediaByUrlRequest::GetInputInfo() const
{
    return m_inputInfo;
}

void ProcessMediaByUrlRequest::SetInputInfo(const MediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool ProcessMediaByUrlRequest::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

MediaOutputInfo ProcessMediaByUrlRequest::GetOutputInfo() const
{
    return m_outputInfo;
}

void ProcessMediaByUrlRequest::SetOutputInfo(const MediaOutputInfo& _outputInfo)
{
    m_outputInfo = _outputInfo;
    m_outputInfoHasBeenSet = true;
}

bool ProcessMediaByUrlRequest::OutputInfoHasBeenSet() const
{
    return m_outputInfoHasBeenSet;
}

AiContentReviewTaskInput ProcessMediaByUrlRequest::GetAiContentReviewTask() const
{
    return m_aiContentReviewTask;
}

void ProcessMediaByUrlRequest::SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask)
{
    m_aiContentReviewTask = _aiContentReviewTask;
    m_aiContentReviewTaskHasBeenSet = true;
}

bool ProcessMediaByUrlRequest::AiContentReviewTaskHasBeenSet() const
{
    return m_aiContentReviewTaskHasBeenSet;
}

AiAnalysisTaskInput ProcessMediaByUrlRequest::GetAiAnalysisTask() const
{
    return m_aiAnalysisTask;
}

void ProcessMediaByUrlRequest::SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask)
{
    m_aiAnalysisTask = _aiAnalysisTask;
    m_aiAnalysisTaskHasBeenSet = true;
}

bool ProcessMediaByUrlRequest::AiAnalysisTaskHasBeenSet() const
{
    return m_aiAnalysisTaskHasBeenSet;
}

AiRecognitionTaskInput ProcessMediaByUrlRequest::GetAiRecognitionTask() const
{
    return m_aiRecognitionTask;
}

void ProcessMediaByUrlRequest::SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask)
{
    m_aiRecognitionTask = _aiRecognitionTask;
    m_aiRecognitionTaskHasBeenSet = true;
}

bool ProcessMediaByUrlRequest::AiRecognitionTaskHasBeenSet() const
{
    return m_aiRecognitionTaskHasBeenSet;
}

int64_t ProcessMediaByUrlRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void ProcessMediaByUrlRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool ProcessMediaByUrlRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string ProcessMediaByUrlRequest::GetTasksNotifyMode() const
{
    return m_tasksNotifyMode;
}

void ProcessMediaByUrlRequest::SetTasksNotifyMode(const string& _tasksNotifyMode)
{
    m_tasksNotifyMode = _tasksNotifyMode;
    m_tasksNotifyModeHasBeenSet = true;
}

bool ProcessMediaByUrlRequest::TasksNotifyModeHasBeenSet() const
{
    return m_tasksNotifyModeHasBeenSet;
}

string ProcessMediaByUrlRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void ProcessMediaByUrlRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool ProcessMediaByUrlRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string ProcessMediaByUrlRequest::GetSessionId() const
{
    return m_sessionId;
}

void ProcessMediaByUrlRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ProcessMediaByUrlRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


