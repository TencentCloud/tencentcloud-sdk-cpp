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

#include <tencentcloud/vod/v20180717/model/CreateQualityInspectTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateQualityInspectTemplateRequest::CreateQualityInspectTemplateRequest() :
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

string CreateQualityInspectTemplateRequest::ToJsonString() const
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


uint64_t CreateQualityInspectTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateQualityInspectTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateQualityInspectTemplateRequest::GetName() const
{
    return m_name;
}

void CreateQualityInspectTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateQualityInspectTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateQualityInspectTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

double CreateQualityInspectTemplateRequest::GetScreenshotInterval() const
{
    return m_screenshotInterval;
}

void CreateQualityInspectTemplateRequest::SetScreenshotInterval(const double& _screenshotInterval)
{
    m_screenshotInterval = _screenshotInterval;
    m_screenshotIntervalHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::ScreenshotIntervalHasBeenSet() const
{
    return m_screenshotIntervalHasBeenSet;
}

JitterConfigureInfo CreateQualityInspectTemplateRequest::GetJitterConfigure() const
{
    return m_jitterConfigure;
}

void CreateQualityInspectTemplateRequest::SetJitterConfigure(const JitterConfigureInfo& _jitterConfigure)
{
    m_jitterConfigure = _jitterConfigure;
    m_jitterConfigureHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::JitterConfigureHasBeenSet() const
{
    return m_jitterConfigureHasBeenSet;
}

BlurConfigureInfo CreateQualityInspectTemplateRequest::GetBlurConfigure() const
{
    return m_blurConfigure;
}

void CreateQualityInspectTemplateRequest::SetBlurConfigure(const BlurConfigureInfo& _blurConfigure)
{
    m_blurConfigure = _blurConfigure;
    m_blurConfigureHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::BlurConfigureHasBeenSet() const
{
    return m_blurConfigureHasBeenSet;
}

AbnormalLightingConfigureInfo CreateQualityInspectTemplateRequest::GetAbnormalLightingConfigure() const
{
    return m_abnormalLightingConfigure;
}

void CreateQualityInspectTemplateRequest::SetAbnormalLightingConfigure(const AbnormalLightingConfigureInfo& _abnormalLightingConfigure)
{
    m_abnormalLightingConfigure = _abnormalLightingConfigure;
    m_abnormalLightingConfigureHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::AbnormalLightingConfigureHasBeenSet() const
{
    return m_abnormalLightingConfigureHasBeenSet;
}

CrashScreenConfigureInfo CreateQualityInspectTemplateRequest::GetCrashScreenConfigure() const
{
    return m_crashScreenConfigure;
}

void CreateQualityInspectTemplateRequest::SetCrashScreenConfigure(const CrashScreenConfigureInfo& _crashScreenConfigure)
{
    m_crashScreenConfigure = _crashScreenConfigure;
    m_crashScreenConfigureHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::CrashScreenConfigureHasBeenSet() const
{
    return m_crashScreenConfigureHasBeenSet;
}

BlackWhiteEdgeConfigureInfo CreateQualityInspectTemplateRequest::GetBlackWhiteEdgeConfigure() const
{
    return m_blackWhiteEdgeConfigure;
}

void CreateQualityInspectTemplateRequest::SetBlackWhiteEdgeConfigure(const BlackWhiteEdgeConfigureInfo& _blackWhiteEdgeConfigure)
{
    m_blackWhiteEdgeConfigure = _blackWhiteEdgeConfigure;
    m_blackWhiteEdgeConfigureHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::BlackWhiteEdgeConfigureHasBeenSet() const
{
    return m_blackWhiteEdgeConfigureHasBeenSet;
}

NoiseConfigureInfo CreateQualityInspectTemplateRequest::GetNoiseConfigure() const
{
    return m_noiseConfigure;
}

void CreateQualityInspectTemplateRequest::SetNoiseConfigure(const NoiseConfigureInfo& _noiseConfigure)
{
    m_noiseConfigure = _noiseConfigure;
    m_noiseConfigureHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::NoiseConfigureHasBeenSet() const
{
    return m_noiseConfigureHasBeenSet;
}

MosaicConfigureInfo CreateQualityInspectTemplateRequest::GetMosaicConfigure() const
{
    return m_mosaicConfigure;
}

void CreateQualityInspectTemplateRequest::SetMosaicConfigure(const MosaicConfigureInfo& _mosaicConfigure)
{
    m_mosaicConfigure = _mosaicConfigure;
    m_mosaicConfigureHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::MosaicConfigureHasBeenSet() const
{
    return m_mosaicConfigureHasBeenSet;
}

QRCodeConfigureInfo CreateQualityInspectTemplateRequest::GetQRCodeConfigure() const
{
    return m_qRCodeConfigure;
}

void CreateQualityInspectTemplateRequest::SetQRCodeConfigure(const QRCodeConfigureInfo& _qRCodeConfigure)
{
    m_qRCodeConfigure = _qRCodeConfigure;
    m_qRCodeConfigureHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::QRCodeConfigureHasBeenSet() const
{
    return m_qRCodeConfigureHasBeenSet;
}

VoiceConfigureInfo CreateQualityInspectTemplateRequest::GetVoiceConfigure() const
{
    return m_voiceConfigure;
}

void CreateQualityInspectTemplateRequest::SetVoiceConfigure(const VoiceConfigureInfo& _voiceConfigure)
{
    m_voiceConfigure = _voiceConfigure;
    m_voiceConfigureHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::VoiceConfigureHasBeenSet() const
{
    return m_voiceConfigureHasBeenSet;
}

QualityEvaluationConfigureInfo CreateQualityInspectTemplateRequest::GetQualityEvaluationConfigure() const
{
    return m_qualityEvaluationConfigure;
}

void CreateQualityInspectTemplateRequest::SetQualityEvaluationConfigure(const QualityEvaluationConfigureInfo& _qualityEvaluationConfigure)
{
    m_qualityEvaluationConfigure = _qualityEvaluationConfigure;
    m_qualityEvaluationConfigureHasBeenSet = true;
}

bool CreateQualityInspectTemplateRequest::QualityEvaluationConfigureHasBeenSet() const
{
    return m_qualityEvaluationConfigureHasBeenSet;
}


