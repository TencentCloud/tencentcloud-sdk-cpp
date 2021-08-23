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

#include <tencentcloud/ie/v20200304/model/QualityControlInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

QualityControlInfo::QualityControlInfo() :
    m_intervalHasBeenSet(false),
    m_videoShotHasBeenSet(false),
    m_jitterHasBeenSet(false),
    m_blurHasBeenSet(false),
    m_abnormalLightingHasBeenSet(false),
    m_crashScreenHasBeenSet(false),
    m_blackWhiteEdgeHasBeenSet(false),
    m_noiseHasBeenSet(false),
    m_mosaicHasBeenSet(false),
    m_qRCodeHasBeenSet(false),
    m_qualityEvaluationHasBeenSet(false),
    m_qualityEvalScoreHasBeenSet(false),
    m_voiceHasBeenSet(false)
{
}

CoreInternalOutcome QualityControlInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("VideoShot") && !value["VideoShot"].IsNull())
    {
        if (!value["VideoShot"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.VideoShot` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_videoShot = value["VideoShot"].GetBool();
        m_videoShotHasBeenSet = true;
    }

    if (value.HasMember("Jitter") && !value["Jitter"].IsNull())
    {
        if (!value["Jitter"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.Jitter` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_jitter = value["Jitter"].GetBool();
        m_jitterHasBeenSet = true;
    }

    if (value.HasMember("Blur") && !value["Blur"].IsNull())
    {
        if (!value["Blur"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.Blur` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_blur = value["Blur"].GetBool();
        m_blurHasBeenSet = true;
    }

    if (value.HasMember("AbnormalLighting") && !value["AbnormalLighting"].IsNull())
    {
        if (!value["AbnormalLighting"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.AbnormalLighting` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalLighting = value["AbnormalLighting"].GetBool();
        m_abnormalLightingHasBeenSet = true;
    }

    if (value.HasMember("CrashScreen") && !value["CrashScreen"].IsNull())
    {
        if (!value["CrashScreen"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.CrashScreen` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_crashScreen = value["CrashScreen"].GetBool();
        m_crashScreenHasBeenSet = true;
    }

    if (value.HasMember("BlackWhiteEdge") && !value["BlackWhiteEdge"].IsNull())
    {
        if (!value["BlackWhiteEdge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.BlackWhiteEdge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_blackWhiteEdge = value["BlackWhiteEdge"].GetBool();
        m_blackWhiteEdgeHasBeenSet = true;
    }

    if (value.HasMember("Noise") && !value["Noise"].IsNull())
    {
        if (!value["Noise"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.Noise` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noise = value["Noise"].GetBool();
        m_noiseHasBeenSet = true;
    }

    if (value.HasMember("Mosaic") && !value["Mosaic"].IsNull())
    {
        if (!value["Mosaic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.Mosaic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mosaic = value["Mosaic"].GetBool();
        m_mosaicHasBeenSet = true;
    }

    if (value.HasMember("QRCode") && !value["QRCode"].IsNull())
    {
        if (!value["QRCode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.QRCode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_qRCode = value["QRCode"].GetBool();
        m_qRCodeHasBeenSet = true;
    }

    if (value.HasMember("QualityEvaluation") && !value["QualityEvaluation"].IsNull())
    {
        if (!value["QualityEvaluation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.QualityEvaluation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_qualityEvaluation = value["QualityEvaluation"].GetBool();
        m_qualityEvaluationHasBeenSet = true;
    }

    if (value.HasMember("QualityEvalScore") && !value["QualityEvalScore"].IsNull())
    {
        if (!value["QualityEvalScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.QualityEvalScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityEvalScore = value["QualityEvalScore"].GetUint64();
        m_qualityEvalScoreHasBeenSet = true;
    }

    if (value.HasMember("Voice") && !value["Voice"].IsNull())
    {
        if (!value["Voice"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QualityControlInfo.Voice` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_voice = value["Voice"].GetBool();
        m_voiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityControlInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_videoShotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoShot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoShot, allocator);
    }

    if (m_jitterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Jitter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jitter, allocator);
    }

    if (m_blurHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blur";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blur, allocator);
    }

    if (m_abnormalLightingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalLighting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalLighting, allocator);
    }

    if (m_crashScreenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrashScreen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crashScreen, allocator);
    }

    if (m_blackWhiteEdgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackWhiteEdge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blackWhiteEdge, allocator);
    }

    if (m_noiseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Noise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noise, allocator);
    }

    if (m_mosaicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mosaic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mosaic, allocator);
    }

    if (m_qRCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qRCode, allocator);
    }

    if (m_qualityEvaluationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityEvaluation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityEvaluation, allocator);
    }

    if (m_qualityEvalScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityEvalScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityEvalScore, allocator);
    }

    if (m_voiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Voice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voice, allocator);
    }

}


uint64_t QualityControlInfo::GetInterval() const
{
    return m_interval;
}

void QualityControlInfo::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool QualityControlInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

bool QualityControlInfo::GetVideoShot() const
{
    return m_videoShot;
}

void QualityControlInfo::SetVideoShot(const bool& _videoShot)
{
    m_videoShot = _videoShot;
    m_videoShotHasBeenSet = true;
}

bool QualityControlInfo::VideoShotHasBeenSet() const
{
    return m_videoShotHasBeenSet;
}

bool QualityControlInfo::GetJitter() const
{
    return m_jitter;
}

void QualityControlInfo::SetJitter(const bool& _jitter)
{
    m_jitter = _jitter;
    m_jitterHasBeenSet = true;
}

bool QualityControlInfo::JitterHasBeenSet() const
{
    return m_jitterHasBeenSet;
}

bool QualityControlInfo::GetBlur() const
{
    return m_blur;
}

void QualityControlInfo::SetBlur(const bool& _blur)
{
    m_blur = _blur;
    m_blurHasBeenSet = true;
}

bool QualityControlInfo::BlurHasBeenSet() const
{
    return m_blurHasBeenSet;
}

bool QualityControlInfo::GetAbnormalLighting() const
{
    return m_abnormalLighting;
}

void QualityControlInfo::SetAbnormalLighting(const bool& _abnormalLighting)
{
    m_abnormalLighting = _abnormalLighting;
    m_abnormalLightingHasBeenSet = true;
}

bool QualityControlInfo::AbnormalLightingHasBeenSet() const
{
    return m_abnormalLightingHasBeenSet;
}

bool QualityControlInfo::GetCrashScreen() const
{
    return m_crashScreen;
}

void QualityControlInfo::SetCrashScreen(const bool& _crashScreen)
{
    m_crashScreen = _crashScreen;
    m_crashScreenHasBeenSet = true;
}

bool QualityControlInfo::CrashScreenHasBeenSet() const
{
    return m_crashScreenHasBeenSet;
}

bool QualityControlInfo::GetBlackWhiteEdge() const
{
    return m_blackWhiteEdge;
}

void QualityControlInfo::SetBlackWhiteEdge(const bool& _blackWhiteEdge)
{
    m_blackWhiteEdge = _blackWhiteEdge;
    m_blackWhiteEdgeHasBeenSet = true;
}

bool QualityControlInfo::BlackWhiteEdgeHasBeenSet() const
{
    return m_blackWhiteEdgeHasBeenSet;
}

bool QualityControlInfo::GetNoise() const
{
    return m_noise;
}

void QualityControlInfo::SetNoise(const bool& _noise)
{
    m_noise = _noise;
    m_noiseHasBeenSet = true;
}

bool QualityControlInfo::NoiseHasBeenSet() const
{
    return m_noiseHasBeenSet;
}

bool QualityControlInfo::GetMosaic() const
{
    return m_mosaic;
}

void QualityControlInfo::SetMosaic(const bool& _mosaic)
{
    m_mosaic = _mosaic;
    m_mosaicHasBeenSet = true;
}

bool QualityControlInfo::MosaicHasBeenSet() const
{
    return m_mosaicHasBeenSet;
}

bool QualityControlInfo::GetQRCode() const
{
    return m_qRCode;
}

void QualityControlInfo::SetQRCode(const bool& _qRCode)
{
    m_qRCode = _qRCode;
    m_qRCodeHasBeenSet = true;
}

bool QualityControlInfo::QRCodeHasBeenSet() const
{
    return m_qRCodeHasBeenSet;
}

bool QualityControlInfo::GetQualityEvaluation() const
{
    return m_qualityEvaluation;
}

void QualityControlInfo::SetQualityEvaluation(const bool& _qualityEvaluation)
{
    m_qualityEvaluation = _qualityEvaluation;
    m_qualityEvaluationHasBeenSet = true;
}

bool QualityControlInfo::QualityEvaluationHasBeenSet() const
{
    return m_qualityEvaluationHasBeenSet;
}

uint64_t QualityControlInfo::GetQualityEvalScore() const
{
    return m_qualityEvalScore;
}

void QualityControlInfo::SetQualityEvalScore(const uint64_t& _qualityEvalScore)
{
    m_qualityEvalScore = _qualityEvalScore;
    m_qualityEvalScoreHasBeenSet = true;
}

bool QualityControlInfo::QualityEvalScoreHasBeenSet() const
{
    return m_qualityEvalScoreHasBeenSet;
}

bool QualityControlInfo::GetVoice() const
{
    return m_voice;
}

void QualityControlInfo::SetVoice(const bool& _voice)
{
    m_voice = _voice;
    m_voiceHasBeenSet = true;
}

bool QualityControlInfo::VoiceHasBeenSet() const
{
    return m_voiceHasBeenSet;
}

