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

#include <tencentcloud/mps/v20190612/model/ProcessMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ProcessMediaRequest::ProcessMediaRequest() :
    m_inputInfoHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputDirHasBeenSet(false),
    m_scheduleIdHasBeenSet(false),
    m_mediaProcessTaskHasBeenSet(false),
    m_aiContentReviewTaskHasBeenSet(false),
    m_aiAnalysisTaskHasBeenSet(false),
    m_aiRecognitionTaskHasBeenSet(false),
    m_aiQualityControlTaskHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_smartSubtitlesTaskHasBeenSet(false),
    m_skipMateDataHasBeenSet(false)
{
}

string ProcessMediaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_scheduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scheduleId, allocator);
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

    if (m_aiQualityControlTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiQualityControlTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiQualityControlTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskNotifyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNotifyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskNotifyConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tasksPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tasksPriority, allocator);
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

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_smartSubtitlesTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartSubtitlesTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartSubtitlesTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_skipMateDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipMateData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipMateData, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


MediaInputInfo ProcessMediaRequest::GetInputInfo() const
{
    return m_inputInfo;
}

void ProcessMediaRequest::SetInputInfo(const MediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool ProcessMediaRequest::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

TaskOutputStorage ProcessMediaRequest::GetOutputStorage() const
{
    return m_outputStorage;
}

void ProcessMediaRequest::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool ProcessMediaRequest::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string ProcessMediaRequest::GetOutputDir() const
{
    return m_outputDir;
}

void ProcessMediaRequest::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool ProcessMediaRequest::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

int64_t ProcessMediaRequest::GetScheduleId() const
{
    return m_scheduleId;
}

void ProcessMediaRequest::SetScheduleId(const int64_t& _scheduleId)
{
    m_scheduleId = _scheduleId;
    m_scheduleIdHasBeenSet = true;
}

bool ProcessMediaRequest::ScheduleIdHasBeenSet() const
{
    return m_scheduleIdHasBeenSet;
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

AiQualityControlTaskInput ProcessMediaRequest::GetAiQualityControlTask() const
{
    return m_aiQualityControlTask;
}

void ProcessMediaRequest::SetAiQualityControlTask(const AiQualityControlTaskInput& _aiQualityControlTask)
{
    m_aiQualityControlTask = _aiQualityControlTask;
    m_aiQualityControlTaskHasBeenSet = true;
}

bool ProcessMediaRequest::AiQualityControlTaskHasBeenSet() const
{
    return m_aiQualityControlTaskHasBeenSet;
}

TaskNotifyConfig ProcessMediaRequest::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void ProcessMediaRequest::SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool ProcessMediaRequest::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
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

string ProcessMediaRequest::GetTaskType() const
{
    return m_taskType;
}

void ProcessMediaRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ProcessMediaRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string ProcessMediaRequest::GetResourceId() const
{
    return m_resourceId;
}

void ProcessMediaRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ProcessMediaRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

SmartSubtitlesTaskInput ProcessMediaRequest::GetSmartSubtitlesTask() const
{
    return m_smartSubtitlesTask;
}

void ProcessMediaRequest::SetSmartSubtitlesTask(const SmartSubtitlesTaskInput& _smartSubtitlesTask)
{
    m_smartSubtitlesTask = _smartSubtitlesTask;
    m_smartSubtitlesTaskHasBeenSet = true;
}

bool ProcessMediaRequest::SmartSubtitlesTaskHasBeenSet() const
{
    return m_smartSubtitlesTaskHasBeenSet;
}

int64_t ProcessMediaRequest::GetSkipMateData() const
{
    return m_skipMateData;
}

void ProcessMediaRequest::SetSkipMateData(const int64_t& _skipMateData)
{
    m_skipMateData = _skipMateData;
    m_skipMateDataHasBeenSet = true;
}

bool ProcessMediaRequest::SkipMateDataHasBeenSet() const
{
    return m_skipMateDataHasBeenSet;
}


