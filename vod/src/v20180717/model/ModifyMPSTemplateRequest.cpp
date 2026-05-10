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

#include <tencentcloud/vod/v20180717/model/ModifyMPSTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyMPSTemplateRequest::ModifyMPSTemplateRequest() :
    m_subAppIdHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_mPSModifyTemplateParamsHasBeenSet(false),
    m_aIAnalysisTemplateHasBeenSet(false),
    m_smartSubtitleTemplateHasBeenSet(false),
    m_smartEraseTemplateHasBeenSet(false)
{
}

string ModifyMPSTemplateRequest::ToJsonString() const
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

    if (m_mPSModifyTemplateParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MPSModifyTemplateParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mPSModifyTemplateParams.c_str(), allocator).Move(), allocator);
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


uint64_t ModifyMPSTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyMPSTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyMPSTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ModifyMPSTemplateRequest::GetTemplateType() const
{
    return m_templateType;
}

void ModifyMPSTemplateRequest::SetTemplateType(const string& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool ModifyMPSTemplateRequest::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

string ModifyMPSTemplateRequest::GetMPSModifyTemplateParams() const
{
    return m_mPSModifyTemplateParams;
}

void ModifyMPSTemplateRequest::SetMPSModifyTemplateParams(const string& _mPSModifyTemplateParams)
{
    m_mPSModifyTemplateParams = _mPSModifyTemplateParams;
    m_mPSModifyTemplateParamsHasBeenSet = true;
}

bool ModifyMPSTemplateRequest::MPSModifyTemplateParamsHasBeenSet() const
{
    return m_mPSModifyTemplateParamsHasBeenSet;
}

MPSAIAnalysisTemplateForUpdate ModifyMPSTemplateRequest::GetAIAnalysisTemplate() const
{
    return m_aIAnalysisTemplate;
}

void ModifyMPSTemplateRequest::SetAIAnalysisTemplate(const MPSAIAnalysisTemplateForUpdate& _aIAnalysisTemplate)
{
    m_aIAnalysisTemplate = _aIAnalysisTemplate;
    m_aIAnalysisTemplateHasBeenSet = true;
}

bool ModifyMPSTemplateRequest::AIAnalysisTemplateHasBeenSet() const
{
    return m_aIAnalysisTemplateHasBeenSet;
}

MPSSmartSubtitleTemplateForUpdate ModifyMPSTemplateRequest::GetSmartSubtitleTemplate() const
{
    return m_smartSubtitleTemplate;
}

void ModifyMPSTemplateRequest::SetSmartSubtitleTemplate(const MPSSmartSubtitleTemplateForUpdate& _smartSubtitleTemplate)
{
    m_smartSubtitleTemplate = _smartSubtitleTemplate;
    m_smartSubtitleTemplateHasBeenSet = true;
}

bool ModifyMPSTemplateRequest::SmartSubtitleTemplateHasBeenSet() const
{
    return m_smartSubtitleTemplateHasBeenSet;
}

MPSSmartEraseTemplateForUpdate ModifyMPSTemplateRequest::GetSmartEraseTemplate() const
{
    return m_smartEraseTemplate;
}

void ModifyMPSTemplateRequest::SetSmartEraseTemplate(const MPSSmartEraseTemplateForUpdate& _smartEraseTemplate)
{
    m_smartEraseTemplate = _smartEraseTemplate;
    m_smartEraseTemplateHasBeenSet = true;
}

bool ModifyMPSTemplateRequest::SmartEraseTemplateHasBeenSet() const
{
    return m_smartEraseTemplateHasBeenSet;
}


