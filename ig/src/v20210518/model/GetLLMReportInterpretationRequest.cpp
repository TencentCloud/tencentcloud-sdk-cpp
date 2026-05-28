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

#include <tencentcloud/ig/v20210518/model/GetLLMReportInterpretationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

GetLLMReportInterpretationRequest::GetLLMReportInterpretationRequest() :
    m_partnerIdHasBeenSet(false),
    m_partnerSecretHasBeenSet(false),
    m_hospitalIdHasBeenSet(false),
    m_dialogueIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reportFileInfosHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_qaPromptHasBeenSet(false)
{
}

string GetLLMReportInterpretationRequest::ToJsonString() const
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

    if (m_hospitalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HospitalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hospitalId.c_str(), allocator).Move(), allocator);
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

    if (m_reportFileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportFileInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reportFileInfos.begin(); itr != m_reportFileInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_qaPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaPrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qaPrompt.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetLLMReportInterpretationRequest::GetPartnerId() const
{
    return m_partnerId;
}

void GetLLMReportInterpretationRequest::SetPartnerId(const string& _partnerId)
{
    m_partnerId = _partnerId;
    m_partnerIdHasBeenSet = true;
}

bool GetLLMReportInterpretationRequest::PartnerIdHasBeenSet() const
{
    return m_partnerIdHasBeenSet;
}

string GetLLMReportInterpretationRequest::GetPartnerSecret() const
{
    return m_partnerSecret;
}

void GetLLMReportInterpretationRequest::SetPartnerSecret(const string& _partnerSecret)
{
    m_partnerSecret = _partnerSecret;
    m_partnerSecretHasBeenSet = true;
}

bool GetLLMReportInterpretationRequest::PartnerSecretHasBeenSet() const
{
    return m_partnerSecretHasBeenSet;
}

string GetLLMReportInterpretationRequest::GetHospitalId() const
{
    return m_hospitalId;
}

void GetLLMReportInterpretationRequest::SetHospitalId(const string& _hospitalId)
{
    m_hospitalId = _hospitalId;
    m_hospitalIdHasBeenSet = true;
}

bool GetLLMReportInterpretationRequest::HospitalIdHasBeenSet() const
{
    return m_hospitalIdHasBeenSet;
}

string GetLLMReportInterpretationRequest::GetDialogueId() const
{
    return m_dialogueId;
}

void GetLLMReportInterpretationRequest::SetDialogueId(const string& _dialogueId)
{
    m_dialogueId = _dialogueId;
    m_dialogueIdHasBeenSet = true;
}

bool GetLLMReportInterpretationRequest::DialogueIdHasBeenSet() const
{
    return m_dialogueIdHasBeenSet;
}

string GetLLMReportInterpretationRequest::GetMessage() const
{
    return m_message;
}

void GetLLMReportInterpretationRequest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool GetLLMReportInterpretationRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<ReportFileInfoReq> GetLLMReportInterpretationRequest::GetReportFileInfos() const
{
    return m_reportFileInfos;
}

void GetLLMReportInterpretationRequest::SetReportFileInfos(const vector<ReportFileInfoReq>& _reportFileInfos)
{
    m_reportFileInfos = _reportFileInfos;
    m_reportFileInfosHasBeenSet = true;
}

bool GetLLMReportInterpretationRequest::ReportFileInfosHasBeenSet() const
{
    return m_reportFileInfosHasBeenSet;
}

int64_t GetLLMReportInterpretationRequest::GetResultType() const
{
    return m_resultType;
}

void GetLLMReportInterpretationRequest::SetResultType(const int64_t& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool GetLLMReportInterpretationRequest::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

string GetLLMReportInterpretationRequest::GetPrompt() const
{
    return m_prompt;
}

void GetLLMReportInterpretationRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool GetLLMReportInterpretationRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string GetLLMReportInterpretationRequest::GetQaPrompt() const
{
    return m_qaPrompt;
}

void GetLLMReportInterpretationRequest::SetQaPrompt(const string& _qaPrompt)
{
    m_qaPrompt = _qaPrompt;
    m_qaPromptHasBeenSet = true;
}

bool GetLLMReportInterpretationRequest::QaPromptHasBeenSet() const
{
    return m_qaPromptHasBeenSet;
}


