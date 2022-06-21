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

#include <tencentcloud/live/v20180801/model/TemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TemplateInfo::TemplateInfo() :
    m_vcodecHasBeenSet(false),
    m_videoBitrateHasBeenSet(false),
    m_acodecHasBeenSet(false),
    m_audioBitrateHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_gopHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_bitrateToOrigHasBeenSet(false),
    m_heightToOrigHasBeenSet(false),
    m_fpsToOrigHasBeenSet(false),
    m_needVideoHasBeenSet(false),
    m_needAudioHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_aiTransCodeHasBeenSet(false),
    m_adaptBitratePercentHasBeenSet(false),
    m_shortEdgeAsHeightHasBeenSet(false),
    m_dRMTypeHasBeenSet(false),
    m_dRMTracksHasBeenSet(false)
{
}

CoreInternalOutcome TemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vcodec") && !value["Vcodec"].IsNull())
    {
        if (!value["Vcodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Vcodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vcodec = string(value["Vcodec"].GetString());
        m_vcodecHasBeenSet = true;
    }

    if (value.HasMember("VideoBitrate") && !value["VideoBitrate"].IsNull())
    {
        if (!value["VideoBitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.VideoBitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoBitrate = value["VideoBitrate"].GetInt64();
        m_videoBitrateHasBeenSet = true;
    }

    if (value.HasMember("Acodec") && !value["Acodec"].IsNull())
    {
        if (!value["Acodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Acodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acodec = string(value["Acodec"].GetString());
        m_acodecHasBeenSet = true;
    }

    if (value.HasMember("AudioBitrate") && !value["AudioBitrate"].IsNull())
    {
        if (!value["AudioBitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.AudioBitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioBitrate = value["AudioBitrate"].GetInt64();
        m_audioBitrateHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Gop") && !value["Gop"].IsNull())
    {
        if (!value["Gop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Gop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gop = value["Gop"].GetInt64();
        m_gopHasBeenSet = true;
    }

    if (value.HasMember("Rotate") && !value["Rotate"].IsNull())
    {
        if (!value["Rotate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Rotate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rotate = value["Rotate"].GetInt64();
        m_rotateHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Profile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profile = string(value["Profile"].GetString());
        m_profileHasBeenSet = true;
    }

    if (value.HasMember("BitrateToOrig") && !value["BitrateToOrig"].IsNull())
    {
        if (!value["BitrateToOrig"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.BitrateToOrig` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrateToOrig = value["BitrateToOrig"].GetInt64();
        m_bitrateToOrigHasBeenSet = true;
    }

    if (value.HasMember("HeightToOrig") && !value["HeightToOrig"].IsNull())
    {
        if (!value["HeightToOrig"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.HeightToOrig` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_heightToOrig = value["HeightToOrig"].GetInt64();
        m_heightToOrigHasBeenSet = true;
    }

    if (value.HasMember("FpsToOrig") && !value["FpsToOrig"].IsNull())
    {
        if (!value["FpsToOrig"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.FpsToOrig` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fpsToOrig = value["FpsToOrig"].GetInt64();
        m_fpsToOrigHasBeenSet = true;
    }

    if (value.HasMember("NeedVideo") && !value["NeedVideo"].IsNull())
    {
        if (!value["NeedVideo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.NeedVideo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needVideo = value["NeedVideo"].GetInt64();
        m_needVideoHasBeenSet = true;
    }

    if (value.HasMember("NeedAudio") && !value["NeedAudio"].IsNull())
    {
        if (!value["NeedAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.NeedAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needAudio = value["NeedAudio"].GetInt64();
        m_needAudioHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AiTransCode") && !value["AiTransCode"].IsNull())
    {
        if (!value["AiTransCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.AiTransCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aiTransCode = value["AiTransCode"].GetInt64();
        m_aiTransCodeHasBeenSet = true;
    }

    if (value.HasMember("AdaptBitratePercent") && !value["AdaptBitratePercent"].IsNull())
    {
        if (!value["AdaptBitratePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.AdaptBitratePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_adaptBitratePercent = value["AdaptBitratePercent"].GetDouble();
        m_adaptBitratePercentHasBeenSet = true;
    }

    if (value.HasMember("ShortEdgeAsHeight") && !value["ShortEdgeAsHeight"].IsNull())
    {
        if (!value["ShortEdgeAsHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.ShortEdgeAsHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shortEdgeAsHeight = value["ShortEdgeAsHeight"].GetInt64();
        m_shortEdgeAsHeightHasBeenSet = true;
    }

    if (value.HasMember("DRMType") && !value["DRMType"].IsNull())
    {
        if (!value["DRMType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.DRMType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dRMType = string(value["DRMType"].GetString());
        m_dRMTypeHasBeenSet = true;
    }

    if (value.HasMember("DRMTracks") && !value["DRMTracks"].IsNull())
    {
        if (!value["DRMTracks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.DRMTracks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dRMTracks = string(value["DRMTracks"].GetString());
        m_dRMTracksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vcodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vcodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vcodec.c_str(), allocator).Move(), allocator);
    }

    if (m_videoBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoBitrate, allocator);
    }

    if (m_acodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Acodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acodec.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioBitrate, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_gopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gop, allocator);
    }

    if (m_rotateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rotate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotate, allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateToOrigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitrateToOrig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrateToOrig, allocator);
    }

    if (m_heightToOrigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeightToOrig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heightToOrig, allocator);
    }

    if (m_fpsToOrigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FpsToOrig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fpsToOrig, allocator);
    }

    if (m_needVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needVideo, allocator);
    }

    if (m_needAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needAudio, allocator);
    }

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

    if (m_aiTransCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiTransCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aiTransCode, allocator);
    }

    if (m_adaptBitratePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptBitratePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adaptBitratePercent, allocator);
    }

    if (m_shortEdgeAsHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortEdgeAsHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shortEdgeAsHeight, allocator);
    }

    if (m_dRMTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DRMType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dRMType.c_str(), allocator).Move(), allocator);
    }

    if (m_dRMTracksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DRMTracks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dRMTracks.c_str(), allocator).Move(), allocator);
    }

}


string TemplateInfo::GetVcodec() const
{
    return m_vcodec;
}

void TemplateInfo::SetVcodec(const string& _vcodec)
{
    m_vcodec = _vcodec;
    m_vcodecHasBeenSet = true;
}

bool TemplateInfo::VcodecHasBeenSet() const
{
    return m_vcodecHasBeenSet;
}

int64_t TemplateInfo::GetVideoBitrate() const
{
    return m_videoBitrate;
}

void TemplateInfo::SetVideoBitrate(const int64_t& _videoBitrate)
{
    m_videoBitrate = _videoBitrate;
    m_videoBitrateHasBeenSet = true;
}

bool TemplateInfo::VideoBitrateHasBeenSet() const
{
    return m_videoBitrateHasBeenSet;
}

string TemplateInfo::GetAcodec() const
{
    return m_acodec;
}

void TemplateInfo::SetAcodec(const string& _acodec)
{
    m_acodec = _acodec;
    m_acodecHasBeenSet = true;
}

bool TemplateInfo::AcodecHasBeenSet() const
{
    return m_acodecHasBeenSet;
}

int64_t TemplateInfo::GetAudioBitrate() const
{
    return m_audioBitrate;
}

void TemplateInfo::SetAudioBitrate(const int64_t& _audioBitrate)
{
    m_audioBitrate = _audioBitrate;
    m_audioBitrateHasBeenSet = true;
}

bool TemplateInfo::AudioBitrateHasBeenSet() const
{
    return m_audioBitrateHasBeenSet;
}

int64_t TemplateInfo::GetWidth() const
{
    return m_width;
}

void TemplateInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool TemplateInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t TemplateInfo::GetHeight() const
{
    return m_height;
}

void TemplateInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool TemplateInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t TemplateInfo::GetFps() const
{
    return m_fps;
}

void TemplateInfo::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool TemplateInfo::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t TemplateInfo::GetGop() const
{
    return m_gop;
}

void TemplateInfo::SetGop(const int64_t& _gop)
{
    m_gop = _gop;
    m_gopHasBeenSet = true;
}

bool TemplateInfo::GopHasBeenSet() const
{
    return m_gopHasBeenSet;
}

int64_t TemplateInfo::GetRotate() const
{
    return m_rotate;
}

void TemplateInfo::SetRotate(const int64_t& _rotate)
{
    m_rotate = _rotate;
    m_rotateHasBeenSet = true;
}

bool TemplateInfo::RotateHasBeenSet() const
{
    return m_rotateHasBeenSet;
}

string TemplateInfo::GetProfile() const
{
    return m_profile;
}

void TemplateInfo::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool TemplateInfo::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

int64_t TemplateInfo::GetBitrateToOrig() const
{
    return m_bitrateToOrig;
}

void TemplateInfo::SetBitrateToOrig(const int64_t& _bitrateToOrig)
{
    m_bitrateToOrig = _bitrateToOrig;
    m_bitrateToOrigHasBeenSet = true;
}

bool TemplateInfo::BitrateToOrigHasBeenSet() const
{
    return m_bitrateToOrigHasBeenSet;
}

int64_t TemplateInfo::GetHeightToOrig() const
{
    return m_heightToOrig;
}

void TemplateInfo::SetHeightToOrig(const int64_t& _heightToOrig)
{
    m_heightToOrig = _heightToOrig;
    m_heightToOrigHasBeenSet = true;
}

bool TemplateInfo::HeightToOrigHasBeenSet() const
{
    return m_heightToOrigHasBeenSet;
}

int64_t TemplateInfo::GetFpsToOrig() const
{
    return m_fpsToOrig;
}

void TemplateInfo::SetFpsToOrig(const int64_t& _fpsToOrig)
{
    m_fpsToOrig = _fpsToOrig;
    m_fpsToOrigHasBeenSet = true;
}

bool TemplateInfo::FpsToOrigHasBeenSet() const
{
    return m_fpsToOrigHasBeenSet;
}

int64_t TemplateInfo::GetNeedVideo() const
{
    return m_needVideo;
}

void TemplateInfo::SetNeedVideo(const int64_t& _needVideo)
{
    m_needVideo = _needVideo;
    m_needVideoHasBeenSet = true;
}

bool TemplateInfo::NeedVideoHasBeenSet() const
{
    return m_needVideoHasBeenSet;
}

int64_t TemplateInfo::GetNeedAudio() const
{
    return m_needAudio;
}

void TemplateInfo::SetNeedAudio(const int64_t& _needAudio)
{
    m_needAudio = _needAudio;
    m_needAudioHasBeenSet = true;
}

bool TemplateInfo::NeedAudioHasBeenSet() const
{
    return m_needAudioHasBeenSet;
}

int64_t TemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void TemplateInfo::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string TemplateInfo::GetTemplateName() const
{
    return m_templateName;
}

void TemplateInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool TemplateInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string TemplateInfo::GetDescription() const
{
    return m_description;
}

void TemplateInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TemplateInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t TemplateInfo::GetAiTransCode() const
{
    return m_aiTransCode;
}

void TemplateInfo::SetAiTransCode(const int64_t& _aiTransCode)
{
    m_aiTransCode = _aiTransCode;
    m_aiTransCodeHasBeenSet = true;
}

bool TemplateInfo::AiTransCodeHasBeenSet() const
{
    return m_aiTransCodeHasBeenSet;
}

double TemplateInfo::GetAdaptBitratePercent() const
{
    return m_adaptBitratePercent;
}

void TemplateInfo::SetAdaptBitratePercent(const double& _adaptBitratePercent)
{
    m_adaptBitratePercent = _adaptBitratePercent;
    m_adaptBitratePercentHasBeenSet = true;
}

bool TemplateInfo::AdaptBitratePercentHasBeenSet() const
{
    return m_adaptBitratePercentHasBeenSet;
}

int64_t TemplateInfo::GetShortEdgeAsHeight() const
{
    return m_shortEdgeAsHeight;
}

void TemplateInfo::SetShortEdgeAsHeight(const int64_t& _shortEdgeAsHeight)
{
    m_shortEdgeAsHeight = _shortEdgeAsHeight;
    m_shortEdgeAsHeightHasBeenSet = true;
}

bool TemplateInfo::ShortEdgeAsHeightHasBeenSet() const
{
    return m_shortEdgeAsHeightHasBeenSet;
}

string TemplateInfo::GetDRMType() const
{
    return m_dRMType;
}

void TemplateInfo::SetDRMType(const string& _dRMType)
{
    m_dRMType = _dRMType;
    m_dRMTypeHasBeenSet = true;
}

bool TemplateInfo::DRMTypeHasBeenSet() const
{
    return m_dRMTypeHasBeenSet;
}

string TemplateInfo::GetDRMTracks() const
{
    return m_dRMTracks;
}

void TemplateInfo::SetDRMTracks(const string& _dRMTracks)
{
    m_dRMTracks = _dRMTracks;
    m_dRMTracksHasBeenSet = true;
}

bool TemplateInfo::DRMTracksHasBeenSet() const
{
    return m_dRMTracksHasBeenSet;
}

