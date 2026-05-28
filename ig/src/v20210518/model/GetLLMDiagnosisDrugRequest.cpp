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

#include <tencentcloud/ig/v20210518/model/GetLLMDiagnosisDrugRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

GetLLMDiagnosisDrugRequest::GetLLMDiagnosisDrugRequest() :
    m_partnerIdHasBeenSet(false),
    m_partnerSecretHasBeenSet(false),
    m_hospitalAppIdHasBeenSet(false),
    m_dialogueIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_promptHasBeenSet(false)
{
}

string GetLLMDiagnosisDrugRequest::ToJsonString() const
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

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
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


string GetLLMDiagnosisDrugRequest::GetPartnerId() const
{
    return m_partnerId;
}

void GetLLMDiagnosisDrugRequest::SetPartnerId(const string& _partnerId)
{
    m_partnerId = _partnerId;
    m_partnerIdHasBeenSet = true;
}

bool GetLLMDiagnosisDrugRequest::PartnerIdHasBeenSet() const
{
    return m_partnerIdHasBeenSet;
}

string GetLLMDiagnosisDrugRequest::GetPartnerSecret() const
{
    return m_partnerSecret;
}

void GetLLMDiagnosisDrugRequest::SetPartnerSecret(const string& _partnerSecret)
{
    m_partnerSecret = _partnerSecret;
    m_partnerSecretHasBeenSet = true;
}

bool GetLLMDiagnosisDrugRequest::PartnerSecretHasBeenSet() const
{
    return m_partnerSecretHasBeenSet;
}

string GetLLMDiagnosisDrugRequest::GetHospitalAppId() const
{
    return m_hospitalAppId;
}

void GetLLMDiagnosisDrugRequest::SetHospitalAppId(const string& _hospitalAppId)
{
    m_hospitalAppId = _hospitalAppId;
    m_hospitalAppIdHasBeenSet = true;
}

bool GetLLMDiagnosisDrugRequest::HospitalAppIdHasBeenSet() const
{
    return m_hospitalAppIdHasBeenSet;
}

string GetLLMDiagnosisDrugRequest::GetDialogueId() const
{
    return m_dialogueId;
}

void GetLLMDiagnosisDrugRequest::SetDialogueId(const string& _dialogueId)
{
    m_dialogueId = _dialogueId;
    m_dialogueIdHasBeenSet = true;
}

bool GetLLMDiagnosisDrugRequest::DialogueIdHasBeenSet() const
{
    return m_dialogueIdHasBeenSet;
}

string GetLLMDiagnosisDrugRequest::GetMessage() const
{
    return m_message;
}

void GetLLMDiagnosisDrugRequest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool GetLLMDiagnosisDrugRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string GetLLMDiagnosisDrugRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void GetLLMDiagnosisDrugRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool GetLLMDiagnosisDrugRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t GetLLMDiagnosisDrugRequest::GetResultType() const
{
    return m_resultType;
}

void GetLLMDiagnosisDrugRequest::SetResultType(const int64_t& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool GetLLMDiagnosisDrugRequest::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

string GetLLMDiagnosisDrugRequest::GetPrompt() const
{
    return m_prompt;
}

void GetLLMDiagnosisDrugRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool GetLLMDiagnosisDrugRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}


