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

#include <tencentcloud/trtc/v20190722/model/ModifyVoiceConversationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ModifyVoiceConversationRequest::ModifyVoiceConversationRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_s2SConfigHasBeenSet(false),
    m_dialogConfigHasBeenSet(false)
{
}

string ModifyVoiceConversationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SequenceNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sequenceNumber, allocator);
    }

    if (m_lLMConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_s2SConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S2SConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_s2SConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dialogConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DialogConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dialogConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyVoiceConversationRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyVoiceConversationRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyVoiceConversationRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string ModifyVoiceConversationRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyVoiceConversationRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyVoiceConversationRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t ModifyVoiceConversationRequest::GetSequenceNumber() const
{
    return m_sequenceNumber;
}

void ModifyVoiceConversationRequest::SetSequenceNumber(const uint64_t& _sequenceNumber)
{
    m_sequenceNumber = _sequenceNumber;
    m_sequenceNumberHasBeenSet = true;
}

bool ModifyVoiceConversationRequest::SequenceNumberHasBeenSet() const
{
    return m_sequenceNumberHasBeenSet;
}

VoiceConversationLLMConfig ModifyVoiceConversationRequest::GetLLMConfig() const
{
    return m_lLMConfig;
}

void ModifyVoiceConversationRequest::SetLLMConfig(const VoiceConversationLLMConfig& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool ModifyVoiceConversationRequest::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

VoiceConversationS2SConfig ModifyVoiceConversationRequest::GetS2SConfig() const
{
    return m_s2SConfig;
}

void ModifyVoiceConversationRequest::SetS2SConfig(const VoiceConversationS2SConfig& _s2SConfig)
{
    m_s2SConfig = _s2SConfig;
    m_s2SConfigHasBeenSet = true;
}

bool ModifyVoiceConversationRequest::S2SConfigHasBeenSet() const
{
    return m_s2SConfigHasBeenSet;
}

VoiceConversationDialogConfig ModifyVoiceConversationRequest::GetDialogConfig() const
{
    return m_dialogConfig;
}

void ModifyVoiceConversationRequest::SetDialogConfig(const VoiceConversationDialogConfig& _dialogConfig)
{
    m_dialogConfig = _dialogConfig;
    m_dialogConfigHasBeenSet = true;
}

bool ModifyVoiceConversationRequest::DialogConfigHasBeenSet() const
{
    return m_dialogConfigHasBeenSet;
}


