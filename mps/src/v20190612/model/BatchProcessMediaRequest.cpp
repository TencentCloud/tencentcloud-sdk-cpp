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

#include <tencentcloud/mps/v20190612/model/BatchProcessMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

BatchProcessMediaRequest::BatchProcessMediaRequest() :
    m_inputInfoHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputDirHasBeenSet(false),
    m_smartSubtitlesTaskHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_skipMateDataHasBeenSet(false)
{
}

string BatchProcessMediaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputInfo.begin(); itr != m_inputInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_smartSubtitlesTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartSubtitlesTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartSubtitlesTask.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
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


vector<MediaInputInfo> BatchProcessMediaRequest::GetInputInfo() const
{
    return m_inputInfo;
}

void BatchProcessMediaRequest::SetInputInfo(const vector<MediaInputInfo>& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool BatchProcessMediaRequest::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

TaskOutputStorage BatchProcessMediaRequest::GetOutputStorage() const
{
    return m_outputStorage;
}

void BatchProcessMediaRequest::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool BatchProcessMediaRequest::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string BatchProcessMediaRequest::GetOutputDir() const
{
    return m_outputDir;
}

void BatchProcessMediaRequest::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool BatchProcessMediaRequest::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

SmartSubtitlesTaskInput BatchProcessMediaRequest::GetSmartSubtitlesTask() const
{
    return m_smartSubtitlesTask;
}

void BatchProcessMediaRequest::SetSmartSubtitlesTask(const SmartSubtitlesTaskInput& _smartSubtitlesTask)
{
    m_smartSubtitlesTask = _smartSubtitlesTask;
    m_smartSubtitlesTaskHasBeenSet = true;
}

bool BatchProcessMediaRequest::SmartSubtitlesTaskHasBeenSet() const
{
    return m_smartSubtitlesTaskHasBeenSet;
}

TaskNotifyConfig BatchProcessMediaRequest::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void BatchProcessMediaRequest::SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool BatchProcessMediaRequest::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}

int64_t BatchProcessMediaRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void BatchProcessMediaRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool BatchProcessMediaRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string BatchProcessMediaRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void BatchProcessMediaRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool BatchProcessMediaRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string BatchProcessMediaRequest::GetResourceId() const
{
    return m_resourceId;
}

void BatchProcessMediaRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BatchProcessMediaRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t BatchProcessMediaRequest::GetSkipMateData() const
{
    return m_skipMateData;
}

void BatchProcessMediaRequest::SetSkipMateData(const int64_t& _skipMateData)
{
    m_skipMateData = _skipMateData;
    m_skipMateDataHasBeenSet = true;
}

bool BatchProcessMediaRequest::SkipMateDataHasBeenSet() const
{
    return m_skipMateDataHasBeenSet;
}


