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

#include <tencentcloud/mps/v20190612/model/ProcessLiveStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ProcessLiveStreamRequest::ProcessLiveStreamRequest() :
    m_urlHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputDirHasBeenSet(false),
    m_aiContentReviewTaskHasBeenSet(false),
    m_aiRecognitionTaskHasBeenSet(false),
    m_aiAnalysisTaskHasBeenSet(false),
    m_aiQualityControlTaskHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_scheduleIdHasBeenSet(false)
{
}

string ProcessLiveStreamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNotifyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNotifyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskNotifyConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outputDir.c_str(), allocator).Move(), allocator);
    }

    if (m_aiContentReviewTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiContentReviewTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiContentReviewTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aiRecognitionTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRecognitionTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiRecognitionTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aiAnalysisTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAnalysisTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiAnalysisTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aiQualityControlTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiQualityControlTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiQualityControlTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scheduleId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ProcessLiveStreamRequest::GetUrl() const
{
    return m_url;
}

void ProcessLiveStreamRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ProcessLiveStreamRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

LiveStreamTaskNotifyConfig ProcessLiveStreamRequest::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void ProcessLiveStreamRequest::SetTaskNotifyConfig(const LiveStreamTaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool ProcessLiveStreamRequest::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}

TaskOutputStorage ProcessLiveStreamRequest::GetOutputStorage() const
{
    return m_outputStorage;
}

void ProcessLiveStreamRequest::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool ProcessLiveStreamRequest::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string ProcessLiveStreamRequest::GetOutputDir() const
{
    return m_outputDir;
}

void ProcessLiveStreamRequest::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool ProcessLiveStreamRequest::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

AiContentReviewTaskInput ProcessLiveStreamRequest::GetAiContentReviewTask() const
{
    return m_aiContentReviewTask;
}

void ProcessLiveStreamRequest::SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask)
{
    m_aiContentReviewTask = _aiContentReviewTask;
    m_aiContentReviewTaskHasBeenSet = true;
}

bool ProcessLiveStreamRequest::AiContentReviewTaskHasBeenSet() const
{
    return m_aiContentReviewTaskHasBeenSet;
}

AiRecognitionTaskInput ProcessLiveStreamRequest::GetAiRecognitionTask() const
{
    return m_aiRecognitionTask;
}

void ProcessLiveStreamRequest::SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask)
{
    m_aiRecognitionTask = _aiRecognitionTask;
    m_aiRecognitionTaskHasBeenSet = true;
}

bool ProcessLiveStreamRequest::AiRecognitionTaskHasBeenSet() const
{
    return m_aiRecognitionTaskHasBeenSet;
}

AiAnalysisTaskInput ProcessLiveStreamRequest::GetAiAnalysisTask() const
{
    return m_aiAnalysisTask;
}

void ProcessLiveStreamRequest::SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask)
{
    m_aiAnalysisTask = _aiAnalysisTask;
    m_aiAnalysisTaskHasBeenSet = true;
}

bool ProcessLiveStreamRequest::AiAnalysisTaskHasBeenSet() const
{
    return m_aiAnalysisTaskHasBeenSet;
}

AiQualityControlTaskInput ProcessLiveStreamRequest::GetAiQualityControlTask() const
{
    return m_aiQualityControlTask;
}

void ProcessLiveStreamRequest::SetAiQualityControlTask(const AiQualityControlTaskInput& _aiQualityControlTask)
{
    m_aiQualityControlTask = _aiQualityControlTask;
    m_aiQualityControlTaskHasBeenSet = true;
}

bool ProcessLiveStreamRequest::AiQualityControlTaskHasBeenSet() const
{
    return m_aiQualityControlTaskHasBeenSet;
}

string ProcessLiveStreamRequest::GetSessionId() const
{
    return m_sessionId;
}

void ProcessLiveStreamRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ProcessLiveStreamRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ProcessLiveStreamRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void ProcessLiveStreamRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool ProcessLiveStreamRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t ProcessLiveStreamRequest::GetScheduleId() const
{
    return m_scheduleId;
}

void ProcessLiveStreamRequest::SetScheduleId(const int64_t& _scheduleId)
{
    m_scheduleId = _scheduleId;
    m_scheduleIdHasBeenSet = true;
}

bool ProcessLiveStreamRequest::ScheduleIdHasBeenSet() const
{
    return m_scheduleIdHasBeenSet;
}


