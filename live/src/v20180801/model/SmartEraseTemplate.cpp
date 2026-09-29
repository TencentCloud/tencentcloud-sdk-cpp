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

#include <tencentcloud/live/v20180801/model/SmartEraseTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

SmartEraseTemplate::SmartEraseTemplate() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_auditConfIdHasBeenSet(false),
    m_imageBizTypeHasBeenSet(false),
    m_audioBizTypeHasBeenSet(false),
    m_audioTextBizTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_displayModeHasBeenSet(false),
    m_displayDelayTimeHasBeenSet(false),
    m_privacyProtectionHasBeenSet(false),
    m_audioErasureModeHasBeenSet(false)
{
}

CoreInternalOutcome SmartEraseTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.TemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetUint64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AuditConfId") && !value["AuditConfId"].IsNull())
    {
        if (!value["AuditConfId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.AuditConfId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_auditConfId = value["AuditConfId"].GetUint64();
        m_auditConfIdHasBeenSet = true;
    }

    if (value.HasMember("ImageBizType") && !value["ImageBizType"].IsNull())
    {
        if (!value["ImageBizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.ImageBizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageBizType = string(value["ImageBizType"].GetString());
        m_imageBizTypeHasBeenSet = true;
    }

    if (value.HasMember("AudioBizType") && !value["AudioBizType"].IsNull())
    {
        if (!value["AudioBizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.AudioBizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioBizType = string(value["AudioBizType"].GetString());
        m_audioBizTypeHasBeenSet = true;
    }

    if (value.HasMember("AudioTextBizType") && !value["AudioTextBizType"].IsNull())
    {
        if (!value["AudioTextBizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.AudioTextBizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioTextBizType = string(value["AudioTextBizType"].GetString());
        m_audioTextBizTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DisplayMode") && !value["DisplayMode"].IsNull())
    {
        if (!value["DisplayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.DisplayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_displayMode = value["DisplayMode"].GetInt64();
        m_displayModeHasBeenSet = true;
    }

    if (value.HasMember("DisplayDelayTime") && !value["DisplayDelayTime"].IsNull())
    {
        if (!value["DisplayDelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.DisplayDelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_displayDelayTime = value["DisplayDelayTime"].GetInt64();
        m_displayDelayTimeHasBeenSet = true;
    }

    if (value.HasMember("PrivacyProtection") && !value["PrivacyProtection"].IsNull())
    {
        if (!value["PrivacyProtection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.PrivacyProtection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privacyProtection = string(value["PrivacyProtection"].GetString());
        m_privacyProtectionHasBeenSet = true;
    }

    if (value.HasMember("AudioErasureMode") && !value["AudioErasureMode"].IsNull())
    {
        if (!value["AudioErasureMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartEraseTemplate.AudioErasureMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioErasureMode = value["AudioErasureMode"].GetUint64();
        m_audioErasureModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartEraseTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_auditConfIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditConfId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditConfId, allocator);
    }

    if (m_imageBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioBizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_audioTextBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTextBizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioTextBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_displayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displayMode, allocator);
    }

    if (m_displayDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displayDelayTime, allocator);
    }

    if (m_privacyProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privacyProtection.c_str(), allocator).Move(), allocator);
    }

    if (m_audioErasureModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioErasureMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioErasureMode, allocator);
    }

}


uint64_t SmartEraseTemplate::GetTemplateId() const
{
    return m_templateId;
}

void SmartEraseTemplate::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SmartEraseTemplate::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string SmartEraseTemplate::GetTemplateName() const
{
    return m_templateName;
}

void SmartEraseTemplate::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool SmartEraseTemplate::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string SmartEraseTemplate::GetDescription() const
{
    return m_description;
}

void SmartEraseTemplate::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SmartEraseTemplate::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SmartEraseTemplate::GetType() const
{
    return m_type;
}

void SmartEraseTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SmartEraseTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t SmartEraseTemplate::GetAuditConfId() const
{
    return m_auditConfId;
}

void SmartEraseTemplate::SetAuditConfId(const uint64_t& _auditConfId)
{
    m_auditConfId = _auditConfId;
    m_auditConfIdHasBeenSet = true;
}

bool SmartEraseTemplate::AuditConfIdHasBeenSet() const
{
    return m_auditConfIdHasBeenSet;
}

string SmartEraseTemplate::GetImageBizType() const
{
    return m_imageBizType;
}

void SmartEraseTemplate::SetImageBizType(const string& _imageBizType)
{
    m_imageBizType = _imageBizType;
    m_imageBizTypeHasBeenSet = true;
}

bool SmartEraseTemplate::ImageBizTypeHasBeenSet() const
{
    return m_imageBizTypeHasBeenSet;
}

string SmartEraseTemplate::GetAudioBizType() const
{
    return m_audioBizType;
}

void SmartEraseTemplate::SetAudioBizType(const string& _audioBizType)
{
    m_audioBizType = _audioBizType;
    m_audioBizTypeHasBeenSet = true;
}

bool SmartEraseTemplate::AudioBizTypeHasBeenSet() const
{
    return m_audioBizTypeHasBeenSet;
}

string SmartEraseTemplate::GetAudioTextBizType() const
{
    return m_audioTextBizType;
}

void SmartEraseTemplate::SetAudioTextBizType(const string& _audioTextBizType)
{
    m_audioTextBizType = _audioTextBizType;
    m_audioTextBizTypeHasBeenSet = true;
}

bool SmartEraseTemplate::AudioTextBizTypeHasBeenSet() const
{
    return m_audioTextBizTypeHasBeenSet;
}

string SmartEraseTemplate::GetCreateTime() const
{
    return m_createTime;
}

void SmartEraseTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SmartEraseTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SmartEraseTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void SmartEraseTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SmartEraseTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t SmartEraseTemplate::GetDisplayMode() const
{
    return m_displayMode;
}

void SmartEraseTemplate::SetDisplayMode(const int64_t& _displayMode)
{
    m_displayMode = _displayMode;
    m_displayModeHasBeenSet = true;
}

bool SmartEraseTemplate::DisplayModeHasBeenSet() const
{
    return m_displayModeHasBeenSet;
}

int64_t SmartEraseTemplate::GetDisplayDelayTime() const
{
    return m_displayDelayTime;
}

void SmartEraseTemplate::SetDisplayDelayTime(const int64_t& _displayDelayTime)
{
    m_displayDelayTime = _displayDelayTime;
    m_displayDelayTimeHasBeenSet = true;
}

bool SmartEraseTemplate::DisplayDelayTimeHasBeenSet() const
{
    return m_displayDelayTimeHasBeenSet;
}

string SmartEraseTemplate::GetPrivacyProtection() const
{
    return m_privacyProtection;
}

void SmartEraseTemplate::SetPrivacyProtection(const string& _privacyProtection)
{
    m_privacyProtection = _privacyProtection;
    m_privacyProtectionHasBeenSet = true;
}

bool SmartEraseTemplate::PrivacyProtectionHasBeenSet() const
{
    return m_privacyProtectionHasBeenSet;
}

uint64_t SmartEraseTemplate::GetAudioErasureMode() const
{
    return m_audioErasureMode;
}

void SmartEraseTemplate::SetAudioErasureMode(const uint64_t& _audioErasureMode)
{
    m_audioErasureMode = _audioErasureMode;
    m_audioErasureModeHasBeenSet = true;
}

bool SmartEraseTemplate::AudioErasureModeHasBeenSet() const
{
    return m_audioErasureModeHasBeenSet;
}

