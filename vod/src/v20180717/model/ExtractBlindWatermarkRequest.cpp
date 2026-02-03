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

#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ExtractBlindWatermarkRequest::ExtractBlindWatermarkRequest() :
    m_typeHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_extractBlindWatermarkConfigHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false)
{
}

string ExtractBlindWatermarkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_extractBlindWatermarkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractBlindWatermarkConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractBlindWatermarkConfig.ToJsonObject(d[key.c_str()], allocator);
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


string ExtractBlindWatermarkRequest::GetType() const
{
    return m_type;
}

void ExtractBlindWatermarkRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ExtractBlindWatermarkInputInfo ExtractBlindWatermarkRequest::GetInputInfo() const
{
    return m_inputInfo;
}

void ExtractBlindWatermarkRequest::SetInputInfo(const ExtractBlindWatermarkInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

uint64_t ExtractBlindWatermarkRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ExtractBlindWatermarkRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

ExtractBlindWatermarkTaskConfig ExtractBlindWatermarkRequest::GetExtractBlindWatermarkConfig() const
{
    return m_extractBlindWatermarkConfig;
}

void ExtractBlindWatermarkRequest::SetExtractBlindWatermarkConfig(const ExtractBlindWatermarkTaskConfig& _extractBlindWatermarkConfig)
{
    m_extractBlindWatermarkConfig = _extractBlindWatermarkConfig;
    m_extractBlindWatermarkConfigHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::ExtractBlindWatermarkConfigHasBeenSet() const
{
    return m_extractBlindWatermarkConfigHasBeenSet;
}

string ExtractBlindWatermarkRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void ExtractBlindWatermarkRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string ExtractBlindWatermarkRequest::GetSessionId() const
{
    return m_sessionId;
}

void ExtractBlindWatermarkRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t ExtractBlindWatermarkRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void ExtractBlindWatermarkRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool ExtractBlindWatermarkRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}


