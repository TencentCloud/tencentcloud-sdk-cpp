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

#include <tencentcloud/vod/v20180717/model/QualityInspectTemplateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

QualityInspectTemplateItem::QualityInspectTemplateItem() :
    m_definitionHasBeenSet(false),
    m_typeHasBeenSet(false),
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
    m_qualityEvaluationConfigureHasBeenSet(false),
    m_voiceConfigureHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome QualityInspectTemplateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("ScreenshotInterval") && !value["ScreenshotInterval"].IsNull())
    {
        if (!value["ScreenshotInterval"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.ScreenshotInterval` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_screenshotInterval = value["ScreenshotInterval"].GetDouble();
        m_screenshotIntervalHasBeenSet = true;
    }

    if (value.HasMember("JitterConfigure") && !value["JitterConfigure"].IsNull())
    {
        if (!value["JitterConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.JitterConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jitterConfigure.Deserialize(value["JitterConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jitterConfigureHasBeenSet = true;
    }

    if (value.HasMember("BlurConfigure") && !value["BlurConfigure"].IsNull())
    {
        if (!value["BlurConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.BlurConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blurConfigure.Deserialize(value["BlurConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blurConfigureHasBeenSet = true;
    }

    if (value.HasMember("AbnormalLightingConfigure") && !value["AbnormalLightingConfigure"].IsNull())
    {
        if (!value["AbnormalLightingConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.AbnormalLightingConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_abnormalLightingConfigure.Deserialize(value["AbnormalLightingConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_abnormalLightingConfigureHasBeenSet = true;
    }

    if (value.HasMember("CrashScreenConfigure") && !value["CrashScreenConfigure"].IsNull())
    {
        if (!value["CrashScreenConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.CrashScreenConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_crashScreenConfigure.Deserialize(value["CrashScreenConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_crashScreenConfigureHasBeenSet = true;
    }

    if (value.HasMember("BlackWhiteEdgeConfigure") && !value["BlackWhiteEdgeConfigure"].IsNull())
    {
        if (!value["BlackWhiteEdgeConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.BlackWhiteEdgeConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blackWhiteEdgeConfigure.Deserialize(value["BlackWhiteEdgeConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blackWhiteEdgeConfigureHasBeenSet = true;
    }

    if (value.HasMember("NoiseConfigure") && !value["NoiseConfigure"].IsNull())
    {
        if (!value["NoiseConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.NoiseConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_noiseConfigure.Deserialize(value["NoiseConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_noiseConfigureHasBeenSet = true;
    }

    if (value.HasMember("MosaicConfigure") && !value["MosaicConfigure"].IsNull())
    {
        if (!value["MosaicConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.MosaicConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mosaicConfigure.Deserialize(value["MosaicConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mosaicConfigureHasBeenSet = true;
    }

    if (value.HasMember("QRCodeConfigure") && !value["QRCodeConfigure"].IsNull())
    {
        if (!value["QRCodeConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.QRCodeConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qRCodeConfigure.Deserialize(value["QRCodeConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qRCodeConfigureHasBeenSet = true;
    }

    if (value.HasMember("QualityEvaluationConfigure") && !value["QualityEvaluationConfigure"].IsNull())
    {
        if (!value["QualityEvaluationConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.QualityEvaluationConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qualityEvaluationConfigure.Deserialize(value["QualityEvaluationConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qualityEvaluationConfigureHasBeenSet = true;
    }

    if (value.HasMember("VoiceConfigure") && !value["VoiceConfigure"].IsNull())
    {
        if (!value["VoiceConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.VoiceConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voiceConfigure.Deserialize(value["VoiceConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceConfigureHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectTemplateItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityInspectTemplateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_screenshotIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenshotInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_screenshotInterval, allocator);
    }

    if (m_jitterConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JitterConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jitterConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_blurConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlurConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blurConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_abnormalLightingConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalLightingConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_abnormalLightingConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_crashScreenConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrashScreenConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_crashScreenConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_blackWhiteEdgeConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackWhiteEdgeConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blackWhiteEdgeConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noiseConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoiseConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_noiseConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mosaicConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MosaicConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mosaicConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qRCodeConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qRCodeConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qualityEvaluationConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityEvaluationConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qualityEvaluationConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_voiceConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceConfigure.ToJsonObject(value[key.c_str()], allocator);
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

}


int64_t QualityInspectTemplateItem::GetDefinition() const
{
    return m_definition;
}

void QualityInspectTemplateItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool QualityInspectTemplateItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string QualityInspectTemplateItem::GetType() const
{
    return m_type;
}

void QualityInspectTemplateItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool QualityInspectTemplateItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string QualityInspectTemplateItem::GetName() const
{
    return m_name;
}

void QualityInspectTemplateItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QualityInspectTemplateItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string QualityInspectTemplateItem::GetComment() const
{
    return m_comment;
}

void QualityInspectTemplateItem::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool QualityInspectTemplateItem::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

double QualityInspectTemplateItem::GetScreenshotInterval() const
{
    return m_screenshotInterval;
}

void QualityInspectTemplateItem::SetScreenshotInterval(const double& _screenshotInterval)
{
    m_screenshotInterval = _screenshotInterval;
    m_screenshotIntervalHasBeenSet = true;
}

bool QualityInspectTemplateItem::ScreenshotIntervalHasBeenSet() const
{
    return m_screenshotIntervalHasBeenSet;
}

JitterConfigureInfo QualityInspectTemplateItem::GetJitterConfigure() const
{
    return m_jitterConfigure;
}

void QualityInspectTemplateItem::SetJitterConfigure(const JitterConfigureInfo& _jitterConfigure)
{
    m_jitterConfigure = _jitterConfigure;
    m_jitterConfigureHasBeenSet = true;
}

bool QualityInspectTemplateItem::JitterConfigureHasBeenSet() const
{
    return m_jitterConfigureHasBeenSet;
}

BlurConfigureInfo QualityInspectTemplateItem::GetBlurConfigure() const
{
    return m_blurConfigure;
}

void QualityInspectTemplateItem::SetBlurConfigure(const BlurConfigureInfo& _blurConfigure)
{
    m_blurConfigure = _blurConfigure;
    m_blurConfigureHasBeenSet = true;
}

bool QualityInspectTemplateItem::BlurConfigureHasBeenSet() const
{
    return m_blurConfigureHasBeenSet;
}

AbnormalLightingConfigureInfo QualityInspectTemplateItem::GetAbnormalLightingConfigure() const
{
    return m_abnormalLightingConfigure;
}

void QualityInspectTemplateItem::SetAbnormalLightingConfigure(const AbnormalLightingConfigureInfo& _abnormalLightingConfigure)
{
    m_abnormalLightingConfigure = _abnormalLightingConfigure;
    m_abnormalLightingConfigureHasBeenSet = true;
}

bool QualityInspectTemplateItem::AbnormalLightingConfigureHasBeenSet() const
{
    return m_abnormalLightingConfigureHasBeenSet;
}

CrashScreenConfigureInfo QualityInspectTemplateItem::GetCrashScreenConfigure() const
{
    return m_crashScreenConfigure;
}

void QualityInspectTemplateItem::SetCrashScreenConfigure(const CrashScreenConfigureInfo& _crashScreenConfigure)
{
    m_crashScreenConfigure = _crashScreenConfigure;
    m_crashScreenConfigureHasBeenSet = true;
}

bool QualityInspectTemplateItem::CrashScreenConfigureHasBeenSet() const
{
    return m_crashScreenConfigureHasBeenSet;
}

BlackWhiteEdgeConfigureInfo QualityInspectTemplateItem::GetBlackWhiteEdgeConfigure() const
{
    return m_blackWhiteEdgeConfigure;
}

void QualityInspectTemplateItem::SetBlackWhiteEdgeConfigure(const BlackWhiteEdgeConfigureInfo& _blackWhiteEdgeConfigure)
{
    m_blackWhiteEdgeConfigure = _blackWhiteEdgeConfigure;
    m_blackWhiteEdgeConfigureHasBeenSet = true;
}

bool QualityInspectTemplateItem::BlackWhiteEdgeConfigureHasBeenSet() const
{
    return m_blackWhiteEdgeConfigureHasBeenSet;
}

NoiseConfigureInfo QualityInspectTemplateItem::GetNoiseConfigure() const
{
    return m_noiseConfigure;
}

void QualityInspectTemplateItem::SetNoiseConfigure(const NoiseConfigureInfo& _noiseConfigure)
{
    m_noiseConfigure = _noiseConfigure;
    m_noiseConfigureHasBeenSet = true;
}

bool QualityInspectTemplateItem::NoiseConfigureHasBeenSet() const
{
    return m_noiseConfigureHasBeenSet;
}

MosaicConfigureInfo QualityInspectTemplateItem::GetMosaicConfigure() const
{
    return m_mosaicConfigure;
}

void QualityInspectTemplateItem::SetMosaicConfigure(const MosaicConfigureInfo& _mosaicConfigure)
{
    m_mosaicConfigure = _mosaicConfigure;
    m_mosaicConfigureHasBeenSet = true;
}

bool QualityInspectTemplateItem::MosaicConfigureHasBeenSet() const
{
    return m_mosaicConfigureHasBeenSet;
}

QRCodeConfigureInfo QualityInspectTemplateItem::GetQRCodeConfigure() const
{
    return m_qRCodeConfigure;
}

void QualityInspectTemplateItem::SetQRCodeConfigure(const QRCodeConfigureInfo& _qRCodeConfigure)
{
    m_qRCodeConfigure = _qRCodeConfigure;
    m_qRCodeConfigureHasBeenSet = true;
}

bool QualityInspectTemplateItem::QRCodeConfigureHasBeenSet() const
{
    return m_qRCodeConfigureHasBeenSet;
}

QualityEvaluationConfigureInfo QualityInspectTemplateItem::GetQualityEvaluationConfigure() const
{
    return m_qualityEvaluationConfigure;
}

void QualityInspectTemplateItem::SetQualityEvaluationConfigure(const QualityEvaluationConfigureInfo& _qualityEvaluationConfigure)
{
    m_qualityEvaluationConfigure = _qualityEvaluationConfigure;
    m_qualityEvaluationConfigureHasBeenSet = true;
}

bool QualityInspectTemplateItem::QualityEvaluationConfigureHasBeenSet() const
{
    return m_qualityEvaluationConfigureHasBeenSet;
}

VoiceConfigureInfo QualityInspectTemplateItem::GetVoiceConfigure() const
{
    return m_voiceConfigure;
}

void QualityInspectTemplateItem::SetVoiceConfigure(const VoiceConfigureInfo& _voiceConfigure)
{
    m_voiceConfigure = _voiceConfigure;
    m_voiceConfigureHasBeenSet = true;
}

bool QualityInspectTemplateItem::VoiceConfigureHasBeenSet() const
{
    return m_voiceConfigureHasBeenSet;
}

string QualityInspectTemplateItem::GetCreateTime() const
{
    return m_createTime;
}

void QualityInspectTemplateItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool QualityInspectTemplateItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string QualityInspectTemplateItem::GetUpdateTime() const
{
    return m_updateTime;
}

void QualityInspectTemplateItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool QualityInspectTemplateItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

