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

#include <tencentcloud/live/v20180801/model/ModifyLiveSmartEraseTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLiveSmartEraseTemplateRequest::ModifyLiveSmartEraseTemplateRequest() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_auditConfIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageBizTypeHasBeenSet(false),
    m_audioBizTypeHasBeenSet(false),
    m_audioTextBizTypeHasBeenSet(false),
    m_displayModeHasBeenSet(false),
    m_displayDelayTimeHasBeenSet(false),
    m_privacyProtectionHasBeenSet(false),
    m_audioErasureModeHasBeenSet(false)
{
}

string ModifyLiveSmartEraseTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_auditConfIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditConfId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditConfId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioBizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_audioTextBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTextBizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioTextBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_displayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_displayMode, allocator);
    }

    if (m_displayDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayDelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_displayDelayTime, allocator);
    }

    if (m_privacyProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privacyProtection.c_str(), allocator).Move(), allocator);
    }

    if (m_audioErasureModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioErasureMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioErasureMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyLiveSmartEraseTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void ModifyLiveSmartEraseTemplateRequest::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ModifyLiveSmartEraseTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void ModifyLiveSmartEraseTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string ModifyLiveSmartEraseTemplateRequest::GetType() const
{
    return m_type;
}

void ModifyLiveSmartEraseTemplateRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ModifyLiveSmartEraseTemplateRequest::GetAuditConfId() const
{
    return m_auditConfId;
}

void ModifyLiveSmartEraseTemplateRequest::SetAuditConfId(const uint64_t& _auditConfId)
{
    m_auditConfId = _auditConfId;
    m_auditConfIdHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::AuditConfIdHasBeenSet() const
{
    return m_auditConfIdHasBeenSet;
}

string ModifyLiveSmartEraseTemplateRequest::GetDescription() const
{
    return m_description;
}

void ModifyLiveSmartEraseTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyLiveSmartEraseTemplateRequest::GetImageBizType() const
{
    return m_imageBizType;
}

void ModifyLiveSmartEraseTemplateRequest::SetImageBizType(const string& _imageBizType)
{
    m_imageBizType = _imageBizType;
    m_imageBizTypeHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::ImageBizTypeHasBeenSet() const
{
    return m_imageBizTypeHasBeenSet;
}

string ModifyLiveSmartEraseTemplateRequest::GetAudioBizType() const
{
    return m_audioBizType;
}

void ModifyLiveSmartEraseTemplateRequest::SetAudioBizType(const string& _audioBizType)
{
    m_audioBizType = _audioBizType;
    m_audioBizTypeHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::AudioBizTypeHasBeenSet() const
{
    return m_audioBizTypeHasBeenSet;
}

string ModifyLiveSmartEraseTemplateRequest::GetAudioTextBizType() const
{
    return m_audioTextBizType;
}

void ModifyLiveSmartEraseTemplateRequest::SetAudioTextBizType(const string& _audioTextBizType)
{
    m_audioTextBizType = _audioTextBizType;
    m_audioTextBizTypeHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::AudioTextBizTypeHasBeenSet() const
{
    return m_audioTextBizTypeHasBeenSet;
}

int64_t ModifyLiveSmartEraseTemplateRequest::GetDisplayMode() const
{
    return m_displayMode;
}

void ModifyLiveSmartEraseTemplateRequest::SetDisplayMode(const int64_t& _displayMode)
{
    m_displayMode = _displayMode;
    m_displayModeHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::DisplayModeHasBeenSet() const
{
    return m_displayModeHasBeenSet;
}

int64_t ModifyLiveSmartEraseTemplateRequest::GetDisplayDelayTime() const
{
    return m_displayDelayTime;
}

void ModifyLiveSmartEraseTemplateRequest::SetDisplayDelayTime(const int64_t& _displayDelayTime)
{
    m_displayDelayTime = _displayDelayTime;
    m_displayDelayTimeHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::DisplayDelayTimeHasBeenSet() const
{
    return m_displayDelayTimeHasBeenSet;
}

string ModifyLiveSmartEraseTemplateRequest::GetPrivacyProtection() const
{
    return m_privacyProtection;
}

void ModifyLiveSmartEraseTemplateRequest::SetPrivacyProtection(const string& _privacyProtection)
{
    m_privacyProtection = _privacyProtection;
    m_privacyProtectionHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::PrivacyProtectionHasBeenSet() const
{
    return m_privacyProtectionHasBeenSet;
}

uint64_t ModifyLiveSmartEraseTemplateRequest::GetAudioErasureMode() const
{
    return m_audioErasureMode;
}

void ModifyLiveSmartEraseTemplateRequest::SetAudioErasureMode(const uint64_t& _audioErasureMode)
{
    m_audioErasureMode = _audioErasureMode;
    m_audioErasureModeHasBeenSet = true;
}

bool ModifyLiveSmartEraseTemplateRequest::AudioErasureModeHasBeenSet() const
{
    return m_audioErasureModeHasBeenSet;
}


