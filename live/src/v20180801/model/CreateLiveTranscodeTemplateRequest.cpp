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

#include <tencentcloud/live/v20180801/model/CreateLiveTranscodeTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

CreateLiveTranscodeTemplateRequest::CreateLiveTranscodeTemplateRequest() :
    m_templateNameHasBeenSet(false),
    m_videoBitrateHasBeenSet(false),
    m_vcodecHasBeenSet(false),
    m_acodecHasBeenSet(false),
    m_audioBitrateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_needVideoHasBeenSet(false),
    m_needAudioHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_gopHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_bitrateToOrigHasBeenSet(false),
    m_heightToOrigHasBeenSet(false),
    m_fpsToOrigHasBeenSet(false),
    m_aiTransCodeHasBeenSet(false),
    m_adaptBitratePercentHasBeenSet(false)
{
}

string CreateLiveTranscodeTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_videoBitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_videoBitrate, allocator);
    }

    if (m_vcodecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vcodec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vcodec.c_str(), allocator).Move(), allocator);
    }

    if (m_acodecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Acodec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_acodec.c_str(), allocator).Move(), allocator);
    }

    if (m_audioBitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioBitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioBitrate, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_needVideoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedVideo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needVideo, allocator);
    }

    if (m_needAudioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedAudio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needAudio, allocator);
    }

    if (m_heightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_fpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fps, allocator);
    }

    if (m_gopHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Gop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gop, allocator);
    }

    if (m_rotateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rotate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rotate, allocator);
    }

    if (m_profileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateToOrigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BitrateToOrig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bitrateToOrig, allocator);
    }

    if (m_heightToOrigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HeightToOrig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_heightToOrig, allocator);
    }

    if (m_fpsToOrigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FpsToOrig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fpsToOrig, allocator);
    }

    if (m_aiTransCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AiTransCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aiTransCode, allocator);
    }

    if (m_adaptBitratePercentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdaptBitratePercent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_adaptBitratePercent, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveTranscodeTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void CreateLiveTranscodeTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetVideoBitrate() const
{
    return m_videoBitrate;
}

void CreateLiveTranscodeTemplateRequest::SetVideoBitrate(const int64_t& _videoBitrate)
{
    m_videoBitrate = _videoBitrate;
    m_videoBitrateHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::VideoBitrateHasBeenSet() const
{
    return m_videoBitrateHasBeenSet;
}

string CreateLiveTranscodeTemplateRequest::GetVcodec() const
{
    return m_vcodec;
}

void CreateLiveTranscodeTemplateRequest::SetVcodec(const string& _vcodec)
{
    m_vcodec = _vcodec;
    m_vcodecHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::VcodecHasBeenSet() const
{
    return m_vcodecHasBeenSet;
}

string CreateLiveTranscodeTemplateRequest::GetAcodec() const
{
    return m_acodec;
}

void CreateLiveTranscodeTemplateRequest::SetAcodec(const string& _acodec)
{
    m_acodec = _acodec;
    m_acodecHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::AcodecHasBeenSet() const
{
    return m_acodecHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetAudioBitrate() const
{
    return m_audioBitrate;
}

void CreateLiveTranscodeTemplateRequest::SetAudioBitrate(const int64_t& _audioBitrate)
{
    m_audioBitrate = _audioBitrate;
    m_audioBitrateHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::AudioBitrateHasBeenSet() const
{
    return m_audioBitrateHasBeenSet;
}

string CreateLiveTranscodeTemplateRequest::GetDescription() const
{
    return m_description;
}

void CreateLiveTranscodeTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetWidth() const
{
    return m_width;
}

void CreateLiveTranscodeTemplateRequest::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetNeedVideo() const
{
    return m_needVideo;
}

void CreateLiveTranscodeTemplateRequest::SetNeedVideo(const int64_t& _needVideo)
{
    m_needVideo = _needVideo;
    m_needVideoHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::NeedVideoHasBeenSet() const
{
    return m_needVideoHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetNeedAudio() const
{
    return m_needAudio;
}

void CreateLiveTranscodeTemplateRequest::SetNeedAudio(const int64_t& _needAudio)
{
    m_needAudio = _needAudio;
    m_needAudioHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::NeedAudioHasBeenSet() const
{
    return m_needAudioHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetHeight() const
{
    return m_height;
}

void CreateLiveTranscodeTemplateRequest::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetFps() const
{
    return m_fps;
}

void CreateLiveTranscodeTemplateRequest::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetGop() const
{
    return m_gop;
}

void CreateLiveTranscodeTemplateRequest::SetGop(const int64_t& _gop)
{
    m_gop = _gop;
    m_gopHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::GopHasBeenSet() const
{
    return m_gopHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetRotate() const
{
    return m_rotate;
}

void CreateLiveTranscodeTemplateRequest::SetRotate(const int64_t& _rotate)
{
    m_rotate = _rotate;
    m_rotateHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::RotateHasBeenSet() const
{
    return m_rotateHasBeenSet;
}

string CreateLiveTranscodeTemplateRequest::GetProfile() const
{
    return m_profile;
}

void CreateLiveTranscodeTemplateRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetBitrateToOrig() const
{
    return m_bitrateToOrig;
}

void CreateLiveTranscodeTemplateRequest::SetBitrateToOrig(const int64_t& _bitrateToOrig)
{
    m_bitrateToOrig = _bitrateToOrig;
    m_bitrateToOrigHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::BitrateToOrigHasBeenSet() const
{
    return m_bitrateToOrigHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetHeightToOrig() const
{
    return m_heightToOrig;
}

void CreateLiveTranscodeTemplateRequest::SetHeightToOrig(const int64_t& _heightToOrig)
{
    m_heightToOrig = _heightToOrig;
    m_heightToOrigHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::HeightToOrigHasBeenSet() const
{
    return m_heightToOrigHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetFpsToOrig() const
{
    return m_fpsToOrig;
}

void CreateLiveTranscodeTemplateRequest::SetFpsToOrig(const int64_t& _fpsToOrig)
{
    m_fpsToOrig = _fpsToOrig;
    m_fpsToOrigHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::FpsToOrigHasBeenSet() const
{
    return m_fpsToOrigHasBeenSet;
}

int64_t CreateLiveTranscodeTemplateRequest::GetAiTransCode() const
{
    return m_aiTransCode;
}

void CreateLiveTranscodeTemplateRequest::SetAiTransCode(const int64_t& _aiTransCode)
{
    m_aiTransCode = _aiTransCode;
    m_aiTransCodeHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::AiTransCodeHasBeenSet() const
{
    return m_aiTransCodeHasBeenSet;
}

double CreateLiveTranscodeTemplateRequest::GetAdaptBitratePercent() const
{
    return m_adaptBitratePercent;
}

void CreateLiveTranscodeTemplateRequest::SetAdaptBitratePercent(const double& _adaptBitratePercent)
{
    m_adaptBitratePercent = _adaptBitratePercent;
    m_adaptBitratePercentHasBeenSet = true;
}

bool CreateLiveTranscodeTemplateRequest::AdaptBitratePercentHasBeenSet() const
{
    return m_adaptBitratePercentHasBeenSet;
}


