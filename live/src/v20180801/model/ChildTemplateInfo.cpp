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

#include <tencentcloud/live/v20180801/model/ChildTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ChildTemplateInfo::ChildTemplateInfo() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_vcodecHasBeenSet(false),
    m_videoBitrateHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_gopHasBeenSet(false),
    m_needVideoHasBeenSet(false),
    m_needAudioHasBeenSet(false),
    m_bitrateToOrigHasBeenSet(false),
    m_heightToOrigHasBeenSet(false),
    m_fpsToOrigHasBeenSet(false),
    m_shortEdgeAsHeightHasBeenSet(false),
    m_hlsContainerFormatHasBeenSet(false),
    m_hlsMp4VideoCodecTagHasBeenSet(false)
{
}

CoreInternalOutcome ChildTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Vcodec") && !value["Vcodec"].IsNull())
    {
        if (!value["Vcodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.Vcodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vcodec = string(value["Vcodec"].GetString());
        m_vcodecHasBeenSet = true;
    }

    if (value.HasMember("VideoBitrate") && !value["VideoBitrate"].IsNull())
    {
        if (!value["VideoBitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.VideoBitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoBitrate = value["VideoBitrate"].GetInt64();
        m_videoBitrateHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Gop") && !value["Gop"].IsNull())
    {
        if (!value["Gop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.Gop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gop = value["Gop"].GetInt64();
        m_gopHasBeenSet = true;
    }

    if (value.HasMember("NeedVideo") && !value["NeedVideo"].IsNull())
    {
        if (!value["NeedVideo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.NeedVideo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needVideo = value["NeedVideo"].GetInt64();
        m_needVideoHasBeenSet = true;
    }

    if (value.HasMember("NeedAudio") && !value["NeedAudio"].IsNull())
    {
        if (!value["NeedAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.NeedAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needAudio = value["NeedAudio"].GetInt64();
        m_needAudioHasBeenSet = true;
    }

    if (value.HasMember("BitrateToOrig") && !value["BitrateToOrig"].IsNull())
    {
        if (!value["BitrateToOrig"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.BitrateToOrig` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrateToOrig = value["BitrateToOrig"].GetInt64();
        m_bitrateToOrigHasBeenSet = true;
    }

    if (value.HasMember("HeightToOrig") && !value["HeightToOrig"].IsNull())
    {
        if (!value["HeightToOrig"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.HeightToOrig` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_heightToOrig = value["HeightToOrig"].GetInt64();
        m_heightToOrigHasBeenSet = true;
    }

    if (value.HasMember("FpsToOrig") && !value["FpsToOrig"].IsNull())
    {
        if (!value["FpsToOrig"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.FpsToOrig` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fpsToOrig = value["FpsToOrig"].GetInt64();
        m_fpsToOrigHasBeenSet = true;
    }

    if (value.HasMember("ShortEdgeAsHeight") && !value["ShortEdgeAsHeight"].IsNull())
    {
        if (!value["ShortEdgeAsHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.ShortEdgeAsHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shortEdgeAsHeight = value["ShortEdgeAsHeight"].GetInt64();
        m_shortEdgeAsHeightHasBeenSet = true;
    }

    if (value.HasMember("HlsContainerFormat") && !value["HlsContainerFormat"].IsNull())
    {
        if (!value["HlsContainerFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.HlsContainerFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hlsContainerFormat = string(value["HlsContainerFormat"].GetString());
        m_hlsContainerFormatHasBeenSet = true;
    }

    if (value.HasMember("HlsMp4VideoCodecTag") && !value["HlsMp4VideoCodecTag"].IsNull())
    {
        if (!value["HlsMp4VideoCodecTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChildTemplateInfo.HlsMp4VideoCodecTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hlsMp4VideoCodecTag = string(value["HlsMp4VideoCodecTag"].GetString());
        m_hlsMp4VideoCodecTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChildTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_shortEdgeAsHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortEdgeAsHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shortEdgeAsHeight, allocator);
    }

    if (m_hlsContainerFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsContainerFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hlsContainerFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_hlsMp4VideoCodecTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsMp4VideoCodecTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hlsMp4VideoCodecTag.c_str(), allocator).Move(), allocator);
    }

}


int64_t ChildTemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void ChildTemplateInfo::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ChildTemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ChildTemplateInfo::GetTemplateName() const
{
    return m_templateName;
}

void ChildTemplateInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ChildTemplateInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string ChildTemplateInfo::GetVcodec() const
{
    return m_vcodec;
}

void ChildTemplateInfo::SetVcodec(const string& _vcodec)
{
    m_vcodec = _vcodec;
    m_vcodecHasBeenSet = true;
}

bool ChildTemplateInfo::VcodecHasBeenSet() const
{
    return m_vcodecHasBeenSet;
}

int64_t ChildTemplateInfo::GetVideoBitrate() const
{
    return m_videoBitrate;
}

void ChildTemplateInfo::SetVideoBitrate(const int64_t& _videoBitrate)
{
    m_videoBitrate = _videoBitrate;
    m_videoBitrateHasBeenSet = true;
}

bool ChildTemplateInfo::VideoBitrateHasBeenSet() const
{
    return m_videoBitrateHasBeenSet;
}

int64_t ChildTemplateInfo::GetWidth() const
{
    return m_width;
}

void ChildTemplateInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ChildTemplateInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t ChildTemplateInfo::GetHeight() const
{
    return m_height;
}

void ChildTemplateInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ChildTemplateInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t ChildTemplateInfo::GetFps() const
{
    return m_fps;
}

void ChildTemplateInfo::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool ChildTemplateInfo::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t ChildTemplateInfo::GetGop() const
{
    return m_gop;
}

void ChildTemplateInfo::SetGop(const int64_t& _gop)
{
    m_gop = _gop;
    m_gopHasBeenSet = true;
}

bool ChildTemplateInfo::GopHasBeenSet() const
{
    return m_gopHasBeenSet;
}

int64_t ChildTemplateInfo::GetNeedVideo() const
{
    return m_needVideo;
}

void ChildTemplateInfo::SetNeedVideo(const int64_t& _needVideo)
{
    m_needVideo = _needVideo;
    m_needVideoHasBeenSet = true;
}

bool ChildTemplateInfo::NeedVideoHasBeenSet() const
{
    return m_needVideoHasBeenSet;
}

int64_t ChildTemplateInfo::GetNeedAudio() const
{
    return m_needAudio;
}

void ChildTemplateInfo::SetNeedAudio(const int64_t& _needAudio)
{
    m_needAudio = _needAudio;
    m_needAudioHasBeenSet = true;
}

bool ChildTemplateInfo::NeedAudioHasBeenSet() const
{
    return m_needAudioHasBeenSet;
}

int64_t ChildTemplateInfo::GetBitrateToOrig() const
{
    return m_bitrateToOrig;
}

void ChildTemplateInfo::SetBitrateToOrig(const int64_t& _bitrateToOrig)
{
    m_bitrateToOrig = _bitrateToOrig;
    m_bitrateToOrigHasBeenSet = true;
}

bool ChildTemplateInfo::BitrateToOrigHasBeenSet() const
{
    return m_bitrateToOrigHasBeenSet;
}

int64_t ChildTemplateInfo::GetHeightToOrig() const
{
    return m_heightToOrig;
}

void ChildTemplateInfo::SetHeightToOrig(const int64_t& _heightToOrig)
{
    m_heightToOrig = _heightToOrig;
    m_heightToOrigHasBeenSet = true;
}

bool ChildTemplateInfo::HeightToOrigHasBeenSet() const
{
    return m_heightToOrigHasBeenSet;
}

int64_t ChildTemplateInfo::GetFpsToOrig() const
{
    return m_fpsToOrig;
}

void ChildTemplateInfo::SetFpsToOrig(const int64_t& _fpsToOrig)
{
    m_fpsToOrig = _fpsToOrig;
    m_fpsToOrigHasBeenSet = true;
}

bool ChildTemplateInfo::FpsToOrigHasBeenSet() const
{
    return m_fpsToOrigHasBeenSet;
}

int64_t ChildTemplateInfo::GetShortEdgeAsHeight() const
{
    return m_shortEdgeAsHeight;
}

void ChildTemplateInfo::SetShortEdgeAsHeight(const int64_t& _shortEdgeAsHeight)
{
    m_shortEdgeAsHeight = _shortEdgeAsHeight;
    m_shortEdgeAsHeightHasBeenSet = true;
}

bool ChildTemplateInfo::ShortEdgeAsHeightHasBeenSet() const
{
    return m_shortEdgeAsHeightHasBeenSet;
}

string ChildTemplateInfo::GetHlsContainerFormat() const
{
    return m_hlsContainerFormat;
}

void ChildTemplateInfo::SetHlsContainerFormat(const string& _hlsContainerFormat)
{
    m_hlsContainerFormat = _hlsContainerFormat;
    m_hlsContainerFormatHasBeenSet = true;
}

bool ChildTemplateInfo::HlsContainerFormatHasBeenSet() const
{
    return m_hlsContainerFormatHasBeenSet;
}

string ChildTemplateInfo::GetHlsMp4VideoCodecTag() const
{
    return m_hlsMp4VideoCodecTag;
}

void ChildTemplateInfo::SetHlsMp4VideoCodecTag(const string& _hlsMp4VideoCodecTag)
{
    m_hlsMp4VideoCodecTag = _hlsMp4VideoCodecTag;
    m_hlsMp4VideoCodecTagHasBeenSet = true;
}

bool ChildTemplateInfo::HlsMp4VideoCodecTagHasBeenSet() const
{
    return m_hlsMp4VideoCodecTagHasBeenSet;
}

