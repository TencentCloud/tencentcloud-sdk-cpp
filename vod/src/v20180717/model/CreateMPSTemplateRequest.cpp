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

#include <tencentcloud/vod/v20180717/model/CreateMPSTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateMPSTemplateRequest::CreateMPSTemplateRequest() :
    m_subAppIdHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_mPSCreateTemplateParamsHasBeenSet(false),
    m_aIAnalysisTemplateHasBeenSet(false),
    m_smartSubtitleTemplateHasBeenSet(false),
    m_smartEraseTemplateHasBeenSet(false)
{
}

string CreateMPSTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateType.c_str(), allocator).Move(), allocator);
    }

    if (m_mPSCreateTemplateParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MPSCreateTemplateParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mPSCreateTemplateParams.c_str(), allocator).Move(), allocator);
    }

    if (m_aIAnalysisTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIAnalysisTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aIAnalysisTemplate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_smartSubtitleTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartSubtitleTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartSubtitleTemplate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_smartEraseTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartEraseTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartEraseTemplate.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateMPSTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateMPSTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateMPSTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateMPSTemplateRequest::GetTemplateType() const
{
    return m_templateType;
}

void CreateMPSTemplateRequest::SetTemplateType(const string& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool CreateMPSTemplateRequest::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

string CreateMPSTemplateRequest::GetMPSCreateTemplateParams() const
{
    return m_mPSCreateTemplateParams;
}

void CreateMPSTemplateRequest::SetMPSCreateTemplateParams(const string& _mPSCreateTemplateParams)
{
    m_mPSCreateTemplateParams = _mPSCreateTemplateParams;
    m_mPSCreateTemplateParamsHasBeenSet = true;
}

bool CreateMPSTemplateRequest::MPSCreateTemplateParamsHasBeenSet() const
{
    return m_mPSCreateTemplateParamsHasBeenSet;
}

MPSAIAnalysisTemplate CreateMPSTemplateRequest::GetAIAnalysisTemplate() const
{
    return m_aIAnalysisTemplate;
}

void CreateMPSTemplateRequest::SetAIAnalysisTemplate(const MPSAIAnalysisTemplate& _aIAnalysisTemplate)
{
    m_aIAnalysisTemplate = _aIAnalysisTemplate;
    m_aIAnalysisTemplateHasBeenSet = true;
}

bool CreateMPSTemplateRequest::AIAnalysisTemplateHasBeenSet() const
{
    return m_aIAnalysisTemplateHasBeenSet;
}

MPSSmartSubtitleTemplate CreateMPSTemplateRequest::GetSmartSubtitleTemplate() const
{
    return m_smartSubtitleTemplate;
}

void CreateMPSTemplateRequest::SetSmartSubtitleTemplate(const MPSSmartSubtitleTemplate& _smartSubtitleTemplate)
{
    m_smartSubtitleTemplate = _smartSubtitleTemplate;
    m_smartSubtitleTemplateHasBeenSet = true;
}

bool CreateMPSTemplateRequest::SmartSubtitleTemplateHasBeenSet() const
{
    return m_smartSubtitleTemplateHasBeenSet;
}

MPSSmartEraseTemplate CreateMPSTemplateRequest::GetSmartEraseTemplate() const
{
    return m_smartEraseTemplate;
}

void CreateMPSTemplateRequest::SetSmartEraseTemplate(const MPSSmartEraseTemplate& _smartEraseTemplate)
{
    m_smartEraseTemplate = _smartEraseTemplate;
    m_smartEraseTemplateHasBeenSet = true;
}

bool CreateMPSTemplateRequest::SmartEraseTemplateHasBeenSet() const
{
    return m_smartEraseTemplateHasBeenSet;
}


