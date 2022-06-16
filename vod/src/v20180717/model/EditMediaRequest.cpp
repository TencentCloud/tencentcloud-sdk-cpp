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

#include <tencentcloud/vod/v20180717/model/EditMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

EditMediaRequest::EditMediaRequest() :
    m_inputTypeHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_fileInfosHasBeenSet(false),
    m_streamInfosHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_procedureNameHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string EditMediaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
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

    if (m_streamInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_streamInfos.begin(); itr != m_streamInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_procedureNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_procedureName.c_str(), allocator).Move(), allocator);
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(d[key.c_str()], allocator);
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


string EditMediaRequest::GetInputType() const
{
    return m_inputType;
}

void EditMediaRequest::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool EditMediaRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

uint64_t EditMediaRequest::GetSubAppId() const
{
    return m_subAppId;
}

void EditMediaRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool EditMediaRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

vector<EditMediaFileInfo> EditMediaRequest::GetFileInfos() const
{
    return m_fileInfos;
}

void EditMediaRequest::SetFileInfos(const vector<EditMediaFileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool EditMediaRequest::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

vector<EditMediaStreamInfo> EditMediaRequest::GetStreamInfos() const
{
    return m_streamInfos;
}

void EditMediaRequest::SetStreamInfos(const vector<EditMediaStreamInfo>& _streamInfos)
{
    m_streamInfos = _streamInfos;
    m_streamInfosHasBeenSet = true;
}

bool EditMediaRequest::StreamInfosHasBeenSet() const
{
    return m_streamInfosHasBeenSet;
}

uint64_t EditMediaRequest::GetDefinition() const
{
    return m_definition;
}

void EditMediaRequest::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool EditMediaRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string EditMediaRequest::GetProcedureName() const
{
    return m_procedureName;
}

void EditMediaRequest::SetProcedureName(const string& _procedureName)
{
    m_procedureName = _procedureName;
    m_procedureNameHasBeenSet = true;
}

bool EditMediaRequest::ProcedureNameHasBeenSet() const
{
    return m_procedureNameHasBeenSet;
}

EditMediaOutputConfig EditMediaRequest::GetOutputConfig() const
{
    return m_outputConfig;
}

void EditMediaRequest::SetOutputConfig(const EditMediaOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool EditMediaRequest::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

string EditMediaRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void EditMediaRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool EditMediaRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t EditMediaRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void EditMediaRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool EditMediaRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string EditMediaRequest::GetSessionId() const
{
    return m_sessionId;
}

void EditMediaRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool EditMediaRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string EditMediaRequest::GetExtInfo() const
{
    return m_extInfo;
}

void EditMediaRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool EditMediaRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


