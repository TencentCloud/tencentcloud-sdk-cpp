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

#include <tencentcloud/ig/v20210518/model/GetLLMDiagnosisHealthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

GetLLMDiagnosisHealthRequest::GetLLMDiagnosisHealthRequest() :
    m_partnerIdHasBeenSet(false),
    m_partnerSecretHasBeenSet(false),
    m_hospitalAppIdHasBeenSet(false),
    m_dialogueIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_roundNumberHasBeenSet(false),
    m_outputStructuredHasBeenSet(false)
{
}

string GetLLMDiagnosisHealthRequest::ToJsonString() const
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

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sex, allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_age, allocator);
    }

    if (m_roundNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roundNumber, allocator);
    }

    if (m_outputStructuredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStructured";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputStructured, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetLLMDiagnosisHealthRequest::GetPartnerId() const
{
    return m_partnerId;
}

void GetLLMDiagnosisHealthRequest::SetPartnerId(const string& _partnerId)
{
    m_partnerId = _partnerId;
    m_partnerIdHasBeenSet = true;
}

bool GetLLMDiagnosisHealthRequest::PartnerIdHasBeenSet() const
{
    return m_partnerIdHasBeenSet;
}

string GetLLMDiagnosisHealthRequest::GetPartnerSecret() const
{
    return m_partnerSecret;
}

void GetLLMDiagnosisHealthRequest::SetPartnerSecret(const string& _partnerSecret)
{
    m_partnerSecret = _partnerSecret;
    m_partnerSecretHasBeenSet = true;
}

bool GetLLMDiagnosisHealthRequest::PartnerSecretHasBeenSet() const
{
    return m_partnerSecretHasBeenSet;
}

string GetLLMDiagnosisHealthRequest::GetHospitalAppId() const
{
    return m_hospitalAppId;
}

void GetLLMDiagnosisHealthRequest::SetHospitalAppId(const string& _hospitalAppId)
{
    m_hospitalAppId = _hospitalAppId;
    m_hospitalAppIdHasBeenSet = true;
}

bool GetLLMDiagnosisHealthRequest::HospitalAppIdHasBeenSet() const
{
    return m_hospitalAppIdHasBeenSet;
}

string GetLLMDiagnosisHealthRequest::GetDialogueId() const
{
    return m_dialogueId;
}

void GetLLMDiagnosisHealthRequest::SetDialogueId(const string& _dialogueId)
{
    m_dialogueId = _dialogueId;
    m_dialogueIdHasBeenSet = true;
}

bool GetLLMDiagnosisHealthRequest::DialogueIdHasBeenSet() const
{
    return m_dialogueIdHasBeenSet;
}

string GetLLMDiagnosisHealthRequest::GetMessage() const
{
    return m_message;
}

void GetLLMDiagnosisHealthRequest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool GetLLMDiagnosisHealthRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t GetLLMDiagnosisHealthRequest::GetResultType() const
{
    return m_resultType;
}

void GetLLMDiagnosisHealthRequest::SetResultType(const int64_t& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool GetLLMDiagnosisHealthRequest::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

int64_t GetLLMDiagnosisHealthRequest::GetSex() const
{
    return m_sex;
}

void GetLLMDiagnosisHealthRequest::SetSex(const int64_t& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool GetLLMDiagnosisHealthRequest::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

int64_t GetLLMDiagnosisHealthRequest::GetAge() const
{
    return m_age;
}

void GetLLMDiagnosisHealthRequest::SetAge(const int64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool GetLLMDiagnosisHealthRequest::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

int64_t GetLLMDiagnosisHealthRequest::GetRoundNumber() const
{
    return m_roundNumber;
}

void GetLLMDiagnosisHealthRequest::SetRoundNumber(const int64_t& _roundNumber)
{
    m_roundNumber = _roundNumber;
    m_roundNumberHasBeenSet = true;
}

bool GetLLMDiagnosisHealthRequest::RoundNumberHasBeenSet() const
{
    return m_roundNumberHasBeenSet;
}

int64_t GetLLMDiagnosisHealthRequest::GetOutputStructured() const
{
    return m_outputStructured;
}

void GetLLMDiagnosisHealthRequest::SetOutputStructured(const int64_t& _outputStructured)
{
    m_outputStructured = _outputStructured;
    m_outputStructuredHasBeenSet = true;
}

bool GetLLMDiagnosisHealthRequest::OutputStructuredHasBeenSet() const
{
    return m_outputStructuredHasBeenSet;
}


