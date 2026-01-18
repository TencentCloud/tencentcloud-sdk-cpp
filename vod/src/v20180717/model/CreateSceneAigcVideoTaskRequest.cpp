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

#include <tencentcloud/vod/v20180717/model/CreateSceneAigcVideoTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateSceneAigcVideoTaskRequest::CreateSceneAigcVideoTaskRequest() :
    m_subAppIdHasBeenSet(false),
    m_sceneInfoHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_fileInfosHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_promptHasBeenSet(false)
{
}

string CreateSceneAigcVideoTaskRequest::ToJsonString() const
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

    if (m_sceneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sceneInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateSceneAigcVideoTaskRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateSceneAigcVideoTaskRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateSceneAigcVideoTaskRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

AigcVideoSceneInfo CreateSceneAigcVideoTaskRequest::GetSceneInfo() const
{
    return m_sceneInfo;
}

void CreateSceneAigcVideoTaskRequest::SetSceneInfo(const AigcVideoSceneInfo& _sceneInfo)
{
    m_sceneInfo = _sceneInfo;
    m_sceneInfoHasBeenSet = true;
}

bool CreateSceneAigcVideoTaskRequest::SceneInfoHasBeenSet() const
{
    return m_sceneInfoHasBeenSet;
}

SceneAigcVideoOutputConfig CreateSceneAigcVideoTaskRequest::GetOutputConfig() const
{
    return m_outputConfig;
}

void CreateSceneAigcVideoTaskRequest::SetOutputConfig(const SceneAigcVideoOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool CreateSceneAigcVideoTaskRequest::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

vector<SceneAigcVideoTaskInputFileInfo> CreateSceneAigcVideoTaskRequest::GetFileInfos() const
{
    return m_fileInfos;
}

void CreateSceneAigcVideoTaskRequest::SetFileInfos(const vector<SceneAigcVideoTaskInputFileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool CreateSceneAigcVideoTaskRequest::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

string CreateSceneAigcVideoTaskRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateSceneAigcVideoTaskRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateSceneAigcVideoTaskRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateSceneAigcVideoTaskRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void CreateSceneAigcVideoTaskRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool CreateSceneAigcVideoTaskRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t CreateSceneAigcVideoTaskRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void CreateSceneAigcVideoTaskRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool CreateSceneAigcVideoTaskRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string CreateSceneAigcVideoTaskRequest::GetExtInfo() const
{
    return m_extInfo;
}

void CreateSceneAigcVideoTaskRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool CreateSceneAigcVideoTaskRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

string CreateSceneAigcVideoTaskRequest::GetPrompt() const
{
    return m_prompt;
}

void CreateSceneAigcVideoTaskRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateSceneAigcVideoTaskRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}


