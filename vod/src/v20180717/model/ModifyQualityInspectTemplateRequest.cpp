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

#include <tencentcloud/vod/v20180717/model/ModifyQualityInspectTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyQualityInspectTemplateRequest::ModifyQualityInspectTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_screenshotIntervalHasBeenSet(false),
    m_jitterConfigureHasBeenSet(false),
    m_blurConfigureHasBeenSet(false),
    m_abnormalLightingConfigureHasBeenSet(false),
    m_crashScreenConfigureHasBeenSet(false),
    m_blackWhiteEdgeConfigureHasBeenSet(false),
    m_noiseConfigureHasBeenSet(false),
    m_mosaicConfigureHasBeenSet(false),
    m_qRCodeConfigureHasBeenSet(false),
    m_voiceConfigureHasBeenSet(false),
    m_qualityEvaluationConfigureHasBeenSet(false)
{
}

string ModifyQualityInspectTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_screenshotIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenshotInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_screenshotInterval, allocator);
    }

    if (m_jitterConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JitterConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jitterConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_blurConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlurConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blurConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_abnormalLightingConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalLightingConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_abnormalLightingConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_crashScreenConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrashScreenConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_crashScreenConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_blackWhiteEdgeConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackWhiteEdgeConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blackWhiteEdgeConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_noiseConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoiseConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_noiseConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mosaicConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MosaicConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mosaicConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_qRCodeConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qRCodeConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_voiceConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_qualityEvaluationConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityEvaluationConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qualityEvaluationConfigure.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyQualityInspectTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyQualityInspectTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

uint64_t ModifyQualityInspectTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyQualityInspectTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ModifyQualityInspectTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyQualityInspectTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyQualityInspectTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyQualityInspectTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

double ModifyQualityInspectTemplateRequest::GetScreenshotInterval() const
{
    return m_screenshotInterval;
}

void ModifyQualityInspectTemplateRequest::SetScreenshotInterval(const double& _screenshotInterval)
{
    m_screenshotInterval = _screenshotInterval;
    m_screenshotIntervalHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::ScreenshotIntervalHasBeenSet() const
{
    return m_screenshotIntervalHasBeenSet;
}

JitterConfigureInfoForUpdate ModifyQualityInspectTemplateRequest::GetJitterConfigure() const
{
    return m_jitterConfigure;
}

void ModifyQualityInspectTemplateRequest::SetJitterConfigure(const JitterConfigureInfoForUpdate& _jitterConfigure)
{
    m_jitterConfigure = _jitterConfigure;
    m_jitterConfigureHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::JitterConfigureHasBeenSet() const
{
    return m_jitterConfigureHasBeenSet;
}

BlurConfigureInfoForUpdate ModifyQualityInspectTemplateRequest::GetBlurConfigure() const
{
    return m_blurConfigure;
}

void ModifyQualityInspectTemplateRequest::SetBlurConfigure(const BlurConfigureInfoForUpdate& _blurConfigure)
{
    m_blurConfigure = _blurConfigure;
    m_blurConfigureHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::BlurConfigureHasBeenSet() const
{
    return m_blurConfigureHasBeenSet;
}

AbnormalLightingConfigureInfoForUpdate ModifyQualityInspectTemplateRequest::GetAbnormalLightingConfigure() const
{
    return m_abnormalLightingConfigure;
}

void ModifyQualityInspectTemplateRequest::SetAbnormalLightingConfigure(const AbnormalLightingConfigureInfoForUpdate& _abnormalLightingConfigure)
{
    m_abnormalLightingConfigure = _abnormalLightingConfigure;
    m_abnormalLightingConfigureHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::AbnormalLightingConfigureHasBeenSet() const
{
    return m_abnormalLightingConfigureHasBeenSet;
}

CrashScreenConfigureInfoForUpdate ModifyQualityInspectTemplateRequest::GetCrashScreenConfigure() const
{
    return m_crashScreenConfigure;
}

void ModifyQualityInspectTemplateRequest::SetCrashScreenConfigure(const CrashScreenConfigureInfoForUpdate& _crashScreenConfigure)
{
    m_crashScreenConfigure = _crashScreenConfigure;
    m_crashScreenConfigureHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::CrashScreenConfigureHasBeenSet() const
{
    return m_crashScreenConfigureHasBeenSet;
}

BlackWhiteEdgeConfigureInfoForUpdate ModifyQualityInspectTemplateRequest::GetBlackWhiteEdgeConfigure() const
{
    return m_blackWhiteEdgeConfigure;
}

void ModifyQualityInspectTemplateRequest::SetBlackWhiteEdgeConfigure(const BlackWhiteEdgeConfigureInfoForUpdate& _blackWhiteEdgeConfigure)
{
    m_blackWhiteEdgeConfigure = _blackWhiteEdgeConfigure;
    m_blackWhiteEdgeConfigureHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::BlackWhiteEdgeConfigureHasBeenSet() const
{
    return m_blackWhiteEdgeConfigureHasBeenSet;
}

NoiseConfigureInfoForUpdate ModifyQualityInspectTemplateRequest::GetNoiseConfigure() const
{
    return m_noiseConfigure;
}

void ModifyQualityInspectTemplateRequest::SetNoiseConfigure(const NoiseConfigureInfoForUpdate& _noiseConfigure)
{
    m_noiseConfigure = _noiseConfigure;
    m_noiseConfigureHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::NoiseConfigureHasBeenSet() const
{
    return m_noiseConfigureHasBeenSet;
}

MosaicConfigureInfoForUpdate ModifyQualityInspectTemplateRequest::GetMosaicConfigure() const
{
    return m_mosaicConfigure;
}

void ModifyQualityInspectTemplateRequest::SetMosaicConfigure(const MosaicConfigureInfoForUpdate& _mosaicConfigure)
{
    m_mosaicConfigure = _mosaicConfigure;
    m_mosaicConfigureHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::MosaicConfigureHasBeenSet() const
{
    return m_mosaicConfigureHasBeenSet;
}

QRCodeConfigureInfoForUpdate ModifyQualityInspectTemplateRequest::GetQRCodeConfigure() const
{
    return m_qRCodeConfigure;
}

void ModifyQualityInspectTemplateRequest::SetQRCodeConfigure(const QRCodeConfigureInfoForUpdate& _qRCodeConfigure)
{
    m_qRCodeConfigure = _qRCodeConfigure;
    m_qRCodeConfigureHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::QRCodeConfigureHasBeenSet() const
{
    return m_qRCodeConfigureHasBeenSet;
}

VoiceConfigureInfoForUpdate ModifyQualityInspectTemplateRequest::GetVoiceConfigure() const
{
    return m_voiceConfigure;
}

void ModifyQualityInspectTemplateRequest::SetVoiceConfigure(const VoiceConfigureInfoForUpdate& _voiceConfigure)
{
    m_voiceConfigure = _voiceConfigure;
    m_voiceConfigureHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::VoiceConfigureHasBeenSet() const
{
    return m_voiceConfigureHasBeenSet;
}

QualityEvaluationConfigureInfoForUpdate ModifyQualityInspectTemplateRequest::GetQualityEvaluationConfigure() const
{
    return m_qualityEvaluationConfigure;
}

void ModifyQualityInspectTemplateRequest::SetQualityEvaluationConfigure(const QualityEvaluationConfigureInfoForUpdate& _qualityEvaluationConfigure)
{
    m_qualityEvaluationConfigure = _qualityEvaluationConfigure;
    m_qualityEvaluationConfigureHasBeenSet = true;
}

bool ModifyQualityInspectTemplateRequest::QualityEvaluationConfigureHasBeenSet() const
{
    return m_qualityEvaluationConfigureHasBeenSet;
}


