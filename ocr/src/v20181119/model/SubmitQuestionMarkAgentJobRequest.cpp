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

#include <tencentcloud/ocr/v20181119/model/SubmitQuestionMarkAgentJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SubmitQuestionMarkAgentJobRequest::SubmitQuestionMarkAgentJobRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_boolSingleQuestionHasBeenSet(false),
    m_enableDeepThinkHasBeenSet(false),
    m_questionConfigMapHasBeenSet(false),
    m_referenceAnswerHasBeenSet(false)
{
}

string SubmitQuestionMarkAgentJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_pdfPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pdfPageNumber, allocator);
    }

    if (m_boolSingleQuestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoolSingleQuestion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_boolSingleQuestion, allocator);
    }

    if (m_enableDeepThinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeepThink";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDeepThink, allocator);
    }

    if (m_questionConfigMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionConfigMap";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_questionConfigMap.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceAnswerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceAnswer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_referenceAnswer.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitQuestionMarkAgentJobRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void SubmitQuestionMarkAgentJobRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool SubmitQuestionMarkAgentJobRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string SubmitQuestionMarkAgentJobRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void SubmitQuestionMarkAgentJobRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool SubmitQuestionMarkAgentJobRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t SubmitQuestionMarkAgentJobRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void SubmitQuestionMarkAgentJobRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool SubmitQuestionMarkAgentJobRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

bool SubmitQuestionMarkAgentJobRequest::GetBoolSingleQuestion() const
{
    return m_boolSingleQuestion;
}

void SubmitQuestionMarkAgentJobRequest::SetBoolSingleQuestion(const bool& _boolSingleQuestion)
{
    m_boolSingleQuestion = _boolSingleQuestion;
    m_boolSingleQuestionHasBeenSet = true;
}

bool SubmitQuestionMarkAgentJobRequest::BoolSingleQuestionHasBeenSet() const
{
    return m_boolSingleQuestionHasBeenSet;
}

bool SubmitQuestionMarkAgentJobRequest::GetEnableDeepThink() const
{
    return m_enableDeepThink;
}

void SubmitQuestionMarkAgentJobRequest::SetEnableDeepThink(const bool& _enableDeepThink)
{
    m_enableDeepThink = _enableDeepThink;
    m_enableDeepThinkHasBeenSet = true;
}

bool SubmitQuestionMarkAgentJobRequest::EnableDeepThinkHasBeenSet() const
{
    return m_enableDeepThinkHasBeenSet;
}

string SubmitQuestionMarkAgentJobRequest::GetQuestionConfigMap() const
{
    return m_questionConfigMap;
}

void SubmitQuestionMarkAgentJobRequest::SetQuestionConfigMap(const string& _questionConfigMap)
{
    m_questionConfigMap = _questionConfigMap;
    m_questionConfigMapHasBeenSet = true;
}

bool SubmitQuestionMarkAgentJobRequest::QuestionConfigMapHasBeenSet() const
{
    return m_questionConfigMapHasBeenSet;
}

string SubmitQuestionMarkAgentJobRequest::GetReferenceAnswer() const
{
    return m_referenceAnswer;
}

void SubmitQuestionMarkAgentJobRequest::SetReferenceAnswer(const string& _referenceAnswer)
{
    m_referenceAnswer = _referenceAnswer;
    m_referenceAnswerHasBeenSet = true;
}

bool SubmitQuestionMarkAgentJobRequest::ReferenceAnswerHasBeenSet() const
{
    return m_referenceAnswerHasBeenSet;
}


