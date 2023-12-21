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

#include <tencentcloud/vod/v20180717/model/EnhanceMediaQualityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

EnhanceMediaQualityRequest::EnhanceMediaQualityRequest() :
    m_fileIdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false)
{
}

string EnhanceMediaQualityRequest::ToJsonString() const
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

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnhanceMediaQualityRequest::GetFileId() const
{
    return m_fileId;
}

void EnhanceMediaQualityRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool EnhanceMediaQualityRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

uint64_t EnhanceMediaQualityRequest::GetDefinition() const
{
    return m_definition;
}

void EnhanceMediaQualityRequest::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool EnhanceMediaQualityRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

uint64_t EnhanceMediaQualityRequest::GetSubAppId() const
{
    return m_subAppId;
}

void EnhanceMediaQualityRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool EnhanceMediaQualityRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

EnhanceMediaQualityOutputConfig EnhanceMediaQualityRequest::GetOutputConfig() const
{
    return m_outputConfig;
}

void EnhanceMediaQualityRequest::SetOutputConfig(const EnhanceMediaQualityOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool EnhanceMediaQualityRequest::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

string EnhanceMediaQualityRequest::GetSessionId() const
{
    return m_sessionId;
}

void EnhanceMediaQualityRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool EnhanceMediaQualityRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string EnhanceMediaQualityRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void EnhanceMediaQualityRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool EnhanceMediaQualityRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t EnhanceMediaQualityRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void EnhanceMediaQualityRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool EnhanceMediaQualityRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}


