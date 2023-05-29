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

#include <tencentcloud/vod/v20180717/model/EnhanceMediaByTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

EnhanceMediaByTemplateRequest::EnhanceMediaByTemplateRequest() :
    m_fileIdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string EnhanceMediaByTemplateRequest::ToJsonString() const
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

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeOffset, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnhanceMediaByTemplateRequest::GetFileId() const
{
    return m_fileId;
}

void EnhanceMediaByTemplateRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool EnhanceMediaByTemplateRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

int64_t EnhanceMediaByTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void EnhanceMediaByTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool EnhanceMediaByTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

uint64_t EnhanceMediaByTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void EnhanceMediaByTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool EnhanceMediaByTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

double EnhanceMediaByTemplateRequest::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void EnhanceMediaByTemplateRequest::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool EnhanceMediaByTemplateRequest::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double EnhanceMediaByTemplateRequest::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void EnhanceMediaByTemplateRequest::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool EnhanceMediaByTemplateRequest::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

RebuildMediaOutputConfig EnhanceMediaByTemplateRequest::GetOutputConfig() const
{
    return m_outputConfig;
}

void EnhanceMediaByTemplateRequest::SetOutputConfig(const RebuildMediaOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool EnhanceMediaByTemplateRequest::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

string EnhanceMediaByTemplateRequest::GetSessionId() const
{
    return m_sessionId;
}

void EnhanceMediaByTemplateRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool EnhanceMediaByTemplateRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string EnhanceMediaByTemplateRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void EnhanceMediaByTemplateRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool EnhanceMediaByTemplateRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t EnhanceMediaByTemplateRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void EnhanceMediaByTemplateRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool EnhanceMediaByTemplateRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string EnhanceMediaByTemplateRequest::GetExtInfo() const
{
    return m_extInfo;
}

void EnhanceMediaByTemplateRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool EnhanceMediaByTemplateRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


