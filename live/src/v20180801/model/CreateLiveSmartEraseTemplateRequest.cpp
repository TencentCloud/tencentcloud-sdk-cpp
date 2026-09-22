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

#include <tencentcloud/live/v20180801/model/CreateLiveSmartEraseTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveSmartEraseTemplateRequest::CreateLiveSmartEraseTemplateRequest() :
    m_templateNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_auditConfIdHasBeenSet(false),
    m_imageBizTypeHasBeenSet(false),
    m_audioBizTypeHasBeenSet(false),
    m_audioTextBizTypeHasBeenSet(false),
    m_displayModeHasBeenSet(false),
    m_displayDelayTimeHasBeenSet(false),
    m_privacyProtectionHasBeenSet(false),
    m_audioErasureModeHasBeenSet(false)
{
}

string CreateLiveSmartEraseTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_auditConfIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditConfId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditConfId, allocator);
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


string CreateLiveSmartEraseTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void CreateLiveSmartEraseTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string CreateLiveSmartEraseTemplateRequest::GetType() const
{
    return m_type;
}

void CreateLiveSmartEraseTemplateRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateLiveSmartEraseTemplateRequest::GetDescription() const
{
    return m_description;
}

void CreateLiveSmartEraseTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CreateLiveSmartEraseTemplateRequest::GetAuditConfId() const
{
    return m_auditConfId;
}

void CreateLiveSmartEraseTemplateRequest::SetAuditConfId(const uint64_t& _auditConfId)
{
    m_auditConfId = _auditConfId;
    m_auditConfIdHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::AuditConfIdHasBeenSet() const
{
    return m_auditConfIdHasBeenSet;
}

string CreateLiveSmartEraseTemplateRequest::GetImageBizType() const
{
    return m_imageBizType;
}

void CreateLiveSmartEraseTemplateRequest::SetImageBizType(const string& _imageBizType)
{
    m_imageBizType = _imageBizType;
    m_imageBizTypeHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::ImageBizTypeHasBeenSet() const
{
    return m_imageBizTypeHasBeenSet;
}

string CreateLiveSmartEraseTemplateRequest::GetAudioBizType() const
{
    return m_audioBizType;
}

void CreateLiveSmartEraseTemplateRequest::SetAudioBizType(const string& _audioBizType)
{
    m_audioBizType = _audioBizType;
    m_audioBizTypeHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::AudioBizTypeHasBeenSet() const
{
    return m_audioBizTypeHasBeenSet;
}

string CreateLiveSmartEraseTemplateRequest::GetAudioTextBizType() const
{
    return m_audioTextBizType;
}

void CreateLiveSmartEraseTemplateRequest::SetAudioTextBizType(const string& _audioTextBizType)
{
    m_audioTextBizType = _audioTextBizType;
    m_audioTextBizTypeHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::AudioTextBizTypeHasBeenSet() const
{
    return m_audioTextBizTypeHasBeenSet;
}

int64_t CreateLiveSmartEraseTemplateRequest::GetDisplayMode() const
{
    return m_displayMode;
}

void CreateLiveSmartEraseTemplateRequest::SetDisplayMode(const int64_t& _displayMode)
{
    m_displayMode = _displayMode;
    m_displayModeHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::DisplayModeHasBeenSet() const
{
    return m_displayModeHasBeenSet;
}

int64_t CreateLiveSmartEraseTemplateRequest::GetDisplayDelayTime() const
{
    return m_displayDelayTime;
}

void CreateLiveSmartEraseTemplateRequest::SetDisplayDelayTime(const int64_t& _displayDelayTime)
{
    m_displayDelayTime = _displayDelayTime;
    m_displayDelayTimeHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::DisplayDelayTimeHasBeenSet() const
{
    return m_displayDelayTimeHasBeenSet;
}

string CreateLiveSmartEraseTemplateRequest::GetPrivacyProtection() const
{
    return m_privacyProtection;
}

void CreateLiveSmartEraseTemplateRequest::SetPrivacyProtection(const string& _privacyProtection)
{
    m_privacyProtection = _privacyProtection;
    m_privacyProtectionHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::PrivacyProtectionHasBeenSet() const
{
    return m_privacyProtectionHasBeenSet;
}

uint64_t CreateLiveSmartEraseTemplateRequest::GetAudioErasureMode() const
{
    return m_audioErasureMode;
}

void CreateLiveSmartEraseTemplateRequest::SetAudioErasureMode(const uint64_t& _audioErasureMode)
{
    m_audioErasureMode = _audioErasureMode;
    m_audioErasureModeHasBeenSet = true;
}

bool CreateLiveSmartEraseTemplateRequest::AudioErasureModeHasBeenSet() const
{
    return m_audioErasureModeHasBeenSet;
}


