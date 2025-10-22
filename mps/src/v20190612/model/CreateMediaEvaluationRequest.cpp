/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mps/v20190612/model/CreateMediaEvaluationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateMediaEvaluationRequest::CreateMediaEvaluationRequest() :
    m_inputInfoHasBeenSet(false),
    m_evaluationTaskHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputDirHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false)
{
}

string CreateMediaEvaluationRequest::ToJsonString() const
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

    if (m_evaluationTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvaluationTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_evaluationTask.ToJsonObject(d[key.c_str()], allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


MediaInputInfo CreateMediaEvaluationRequest::GetInputInfo() const
{
    return m_inputInfo;
}

void CreateMediaEvaluationRequest::SetInputInfo(const MediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool CreateMediaEvaluationRequest::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

EvaluationTaskInput CreateMediaEvaluationRequest::GetEvaluationTask() const
{
    return m_evaluationTask;
}

void CreateMediaEvaluationRequest::SetEvaluationTask(const EvaluationTaskInput& _evaluationTask)
{
    m_evaluationTask = _evaluationTask;
    m_evaluationTaskHasBeenSet = true;
}

bool CreateMediaEvaluationRequest::EvaluationTaskHasBeenSet() const
{
    return m_evaluationTaskHasBeenSet;
}

TaskOutputStorage CreateMediaEvaluationRequest::GetOutputStorage() const
{
    return m_outputStorage;
}

void CreateMediaEvaluationRequest::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool CreateMediaEvaluationRequest::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string CreateMediaEvaluationRequest::GetOutputDir() const
{
    return m_outputDir;
}

void CreateMediaEvaluationRequest::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool CreateMediaEvaluationRequest::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

TaskNotifyConfig CreateMediaEvaluationRequest::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void CreateMediaEvaluationRequest::SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool CreateMediaEvaluationRequest::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}

int64_t CreateMediaEvaluationRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void CreateMediaEvaluationRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool CreateMediaEvaluationRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string CreateMediaEvaluationRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateMediaEvaluationRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateMediaEvaluationRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateMediaEvaluationRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void CreateMediaEvaluationRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool CreateMediaEvaluationRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}


