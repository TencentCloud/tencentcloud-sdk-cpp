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

#include <tencentcloud/vod/v20180717/model/CreateAigcVideoTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcVideoTaskRequest::CreateAigcVideoTaskRequest() :
    m_subAppIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_fileInfosHasBeenSet(false),
    m_lastFrameFileIdHasBeenSet(false),
    m_lastFrameUrlHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_enhancePromptHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_inputRegionHasBeenSet(false)
{
}

string CreateAigcVideoTaskRequest::ToJsonString() const
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

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_fileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_lastFrameFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFrameFileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lastFrameFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastFrameUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFrameUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lastFrameUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_negativePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NegativePrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_negativePrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_enhancePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancePrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enhancePrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_tasksPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tasksPriority, allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_inputRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateAigcVideoTaskRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateAigcVideoTaskRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetModelName() const
{
    return m_modelName;
}

void CreateAigcVideoTaskRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void CreateAigcVideoTaskRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

vector<AigcVideoTaskInputFileInfo> CreateAigcVideoTaskRequest::GetFileInfos() const
{
    return m_fileInfos;
}

void CreateAigcVideoTaskRequest::SetFileInfos(const vector<AigcVideoTaskInputFileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetLastFrameFileId() const
{
    return m_lastFrameFileId;
}

void CreateAigcVideoTaskRequest::SetLastFrameFileId(const string& _lastFrameFileId)
{
    m_lastFrameFileId = _lastFrameFileId;
    m_lastFrameFileIdHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::LastFrameFileIdHasBeenSet() const
{
    return m_lastFrameFileIdHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetLastFrameUrl() const
{
    return m_lastFrameUrl;
}

void CreateAigcVideoTaskRequest::SetLastFrameUrl(const string& _lastFrameUrl)
{
    m_lastFrameUrl = _lastFrameUrl;
    m_lastFrameUrlHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::LastFrameUrlHasBeenSet() const
{
    return m_lastFrameUrlHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetPrompt() const
{
    return m_prompt;
}

void CreateAigcVideoTaskRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void CreateAigcVideoTaskRequest::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetEnhancePrompt() const
{
    return m_enhancePrompt;
}

void CreateAigcVideoTaskRequest::SetEnhancePrompt(const string& _enhancePrompt)
{
    m_enhancePrompt = _enhancePrompt;
    m_enhancePromptHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::EnhancePromptHasBeenSet() const
{
    return m_enhancePromptHasBeenSet;
}

AigcVideoOutputConfig CreateAigcVideoTaskRequest::GetOutputConfig() const
{
    return m_outputConfig;
}

void CreateAigcVideoTaskRequest::SetOutputConfig(const AigcVideoOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateAigcVideoTaskRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void CreateAigcVideoTaskRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t CreateAigcVideoTaskRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void CreateAigcVideoTaskRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetExtInfo() const
{
    return m_extInfo;
}

void CreateAigcVideoTaskRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetInputRegion() const
{
    return m_inputRegion;
}

void CreateAigcVideoTaskRequest::SetInputRegion(const string& _inputRegion)
{
    m_inputRegion = _inputRegion;
    m_inputRegionHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::InputRegionHasBeenSet() const
{
    return m_inputRegionHasBeenSet;
}


