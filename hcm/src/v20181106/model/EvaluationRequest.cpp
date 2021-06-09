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

#include <tencentcloud/hcm/v20181106/model/EvaluationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hcm::V20181106::Model;
using namespace std;

EvaluationRequest::EvaluationRequest() :
    m_sessionIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_hcmAppidHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_supportHorizontalImageHasBeenSet(false),
    m_rejectNonArithmeticImageHasBeenSet(false),
    m_isAsyncHasBeenSet(false),
    m_enableDispRelatedVerticalHasBeenSet(false),
    m_enableDispMidresultHasBeenSet(false),
    m_enablePdfRecognizeHasBeenSet(false),
    m_pdfPageIndexHasBeenSet(false),
    m_laTexHasBeenSet(false),
    m_rejectVagueArithmeticHasBeenSet(false)
{
}

string EvaluationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_hcmAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HcmAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hcmAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_supportHorizontalImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportHorizontalImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_supportHorizontalImage, allocator);
    }

    if (m_rejectNonArithmeticImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectNonArithmeticImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rejectNonArithmeticImage, allocator);
    }

    if (m_isAsyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAsync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAsync, allocator);
    }

    if (m_enableDispRelatedVerticalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDispRelatedVertical";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDispRelatedVertical, allocator);
    }

    if (m_enableDispMidresultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDispMidresult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDispMidresult, allocator);
    }

    if (m_enablePdfRecognizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePdfRecognize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePdfRecognize, allocator);
    }

    if (m_pdfPageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfPageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pdfPageIndex, allocator);
    }

    if (m_laTexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaTex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_laTex, allocator);
    }

    if (m_rejectVagueArithmeticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectVagueArithmetic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rejectVagueArithmetic, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EvaluationRequest::GetSessionId() const
{
    return m_sessionId;
}

void EvaluationRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool EvaluationRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string EvaluationRequest::GetImage() const
{
    return m_image;
}

void EvaluationRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool EvaluationRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string EvaluationRequest::GetHcmAppid() const
{
    return m_hcmAppid;
}

void EvaluationRequest::SetHcmAppid(const string& _hcmAppid)
{
    m_hcmAppid = _hcmAppid;
    m_hcmAppidHasBeenSet = true;
}

bool EvaluationRequest::HcmAppidHasBeenSet() const
{
    return m_hcmAppidHasBeenSet;
}

string EvaluationRequest::GetUrl() const
{
    return m_url;
}

void EvaluationRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool EvaluationRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

bool EvaluationRequest::GetSupportHorizontalImage() const
{
    return m_supportHorizontalImage;
}

void EvaluationRequest::SetSupportHorizontalImage(const bool& _supportHorizontalImage)
{
    m_supportHorizontalImage = _supportHorizontalImage;
    m_supportHorizontalImageHasBeenSet = true;
}

bool EvaluationRequest::SupportHorizontalImageHasBeenSet() const
{
    return m_supportHorizontalImageHasBeenSet;
}

bool EvaluationRequest::GetRejectNonArithmeticImage() const
{
    return m_rejectNonArithmeticImage;
}

void EvaluationRequest::SetRejectNonArithmeticImage(const bool& _rejectNonArithmeticImage)
{
    m_rejectNonArithmeticImage = _rejectNonArithmeticImage;
    m_rejectNonArithmeticImageHasBeenSet = true;
}

bool EvaluationRequest::RejectNonArithmeticImageHasBeenSet() const
{
    return m_rejectNonArithmeticImageHasBeenSet;
}

int64_t EvaluationRequest::GetIsAsync() const
{
    return m_isAsync;
}

void EvaluationRequest::SetIsAsync(const int64_t& _isAsync)
{
    m_isAsync = _isAsync;
    m_isAsyncHasBeenSet = true;
}

bool EvaluationRequest::IsAsyncHasBeenSet() const
{
    return m_isAsyncHasBeenSet;
}

bool EvaluationRequest::GetEnableDispRelatedVertical() const
{
    return m_enableDispRelatedVertical;
}

void EvaluationRequest::SetEnableDispRelatedVertical(const bool& _enableDispRelatedVertical)
{
    m_enableDispRelatedVertical = _enableDispRelatedVertical;
    m_enableDispRelatedVerticalHasBeenSet = true;
}

bool EvaluationRequest::EnableDispRelatedVerticalHasBeenSet() const
{
    return m_enableDispRelatedVerticalHasBeenSet;
}

bool EvaluationRequest::GetEnableDispMidresult() const
{
    return m_enableDispMidresult;
}

void EvaluationRequest::SetEnableDispMidresult(const bool& _enableDispMidresult)
{
    m_enableDispMidresult = _enableDispMidresult;
    m_enableDispMidresultHasBeenSet = true;
}

bool EvaluationRequest::EnableDispMidresultHasBeenSet() const
{
    return m_enableDispMidresultHasBeenSet;
}

bool EvaluationRequest::GetEnablePdfRecognize() const
{
    return m_enablePdfRecognize;
}

void EvaluationRequest::SetEnablePdfRecognize(const bool& _enablePdfRecognize)
{
    m_enablePdfRecognize = _enablePdfRecognize;
    m_enablePdfRecognizeHasBeenSet = true;
}

bool EvaluationRequest::EnablePdfRecognizeHasBeenSet() const
{
    return m_enablePdfRecognizeHasBeenSet;
}

int64_t EvaluationRequest::GetPdfPageIndex() const
{
    return m_pdfPageIndex;
}

void EvaluationRequest::SetPdfPageIndex(const int64_t& _pdfPageIndex)
{
    m_pdfPageIndex = _pdfPageIndex;
    m_pdfPageIndexHasBeenSet = true;
}

bool EvaluationRequest::PdfPageIndexHasBeenSet() const
{
    return m_pdfPageIndexHasBeenSet;
}

int64_t EvaluationRequest::GetLaTex() const
{
    return m_laTex;
}

void EvaluationRequest::SetLaTex(const int64_t& _laTex)
{
    m_laTex = _laTex;
    m_laTexHasBeenSet = true;
}

bool EvaluationRequest::LaTexHasBeenSet() const
{
    return m_laTexHasBeenSet;
}

bool EvaluationRequest::GetRejectVagueArithmetic() const
{
    return m_rejectVagueArithmetic;
}

void EvaluationRequest::SetRejectVagueArithmetic(const bool& _rejectVagueArithmetic)
{
    m_rejectVagueArithmetic = _rejectVagueArithmetic;
    m_rejectVagueArithmeticHasBeenSet = true;
}

bool EvaluationRequest::RejectVagueArithmeticHasBeenSet() const
{
    return m_rejectVagueArithmeticHasBeenSet;
}


