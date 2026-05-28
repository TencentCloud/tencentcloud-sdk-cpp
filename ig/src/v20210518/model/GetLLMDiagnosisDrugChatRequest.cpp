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

#include <tencentcloud/ig/v20210518/model/GetLLMDiagnosisDrugChatRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

GetLLMDiagnosisDrugChatRequest::GetLLMDiagnosisDrugChatRequest() :
    m_partnerIdHasBeenSet(false),
    m_partnerSecretHasBeenSet(false),
    m_hospitalAppIdHasBeenSet(false),
    m_dialogueIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_promptHasBeenSet(false)
{
}

string GetLLMDiagnosisDrugChatRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_partnerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartnerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partnerId.c_str(), allocator).Move(), allocator);
    }

    if (m_partnerSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartnerSecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partnerSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_hospitalAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HospitalAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hospitalAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_dialogueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DialogueId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dialogueId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_resultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resultType, allocator);
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


string GetLLMDiagnosisDrugChatRequest::GetPartnerId() const
{
    return m_partnerId;
}

void GetLLMDiagnosisDrugChatRequest::SetPartnerId(const string& _partnerId)
{
    m_partnerId = _partnerId;
    m_partnerIdHasBeenSet = true;
}

bool GetLLMDiagnosisDrugChatRequest::PartnerIdHasBeenSet() const
{
    return m_partnerIdHasBeenSet;
}

string GetLLMDiagnosisDrugChatRequest::GetPartnerSecret() const
{
    return m_partnerSecret;
}

void GetLLMDiagnosisDrugChatRequest::SetPartnerSecret(const string& _partnerSecret)
{
    m_partnerSecret = _partnerSecret;
    m_partnerSecretHasBeenSet = true;
}

bool GetLLMDiagnosisDrugChatRequest::PartnerSecretHasBeenSet() const
{
    return m_partnerSecretHasBeenSet;
}

string GetLLMDiagnosisDrugChatRequest::GetHospitalAppId() const
{
    return m_hospitalAppId;
}

void GetLLMDiagnosisDrugChatRequest::SetHospitalAppId(const string& _hospitalAppId)
{
    m_hospitalAppId = _hospitalAppId;
    m_hospitalAppIdHasBeenSet = true;
}

bool GetLLMDiagnosisDrugChatRequest::HospitalAppIdHasBeenSet() const
{
    return m_hospitalAppIdHasBeenSet;
}

string GetLLMDiagnosisDrugChatRequest::GetDialogueId() const
{
    return m_dialogueId;
}

void GetLLMDiagnosisDrugChatRequest::SetDialogueId(const string& _dialogueId)
{
    m_dialogueId = _dialogueId;
    m_dialogueIdHasBeenSet = true;
}

bool GetLLMDiagnosisDrugChatRequest::DialogueIdHasBeenSet() const
{
    return m_dialogueIdHasBeenSet;
}

string GetLLMDiagnosisDrugChatRequest::GetMessage() const
{
    return m_message;
}

void GetLLMDiagnosisDrugChatRequest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool GetLLMDiagnosisDrugChatRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t GetLLMDiagnosisDrugChatRequest::GetResultType() const
{
    return m_resultType;
}

void GetLLMDiagnosisDrugChatRequest::SetResultType(const int64_t& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool GetLLMDiagnosisDrugChatRequest::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

string GetLLMDiagnosisDrugChatRequest::GetPrompt() const
{
    return m_prompt;
}

void GetLLMDiagnosisDrugChatRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool GetLLMDiagnosisDrugChatRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}


