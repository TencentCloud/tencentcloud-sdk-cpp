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

#include <tencentcloud/ams/v20200608/model/MediaModerationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace std;

MediaModerationConfig::MediaModerationConfig() :
    m_audioFrequencyHasBeenSet(false),
    m_imageFrequencyHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_segmentOutputHasBeenSet(false),
    m_useOCRHasBeenSet(false),
    m_useAudioHasBeenSet(false)
{
}

CoreInternalOutcome MediaModerationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioFrequency") && !value["AudioFrequency"].IsNull())
    {
        if (!value["AudioFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaModerationConfig.AudioFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioFrequency = value["AudioFrequency"].GetInt64();
        m_audioFrequencyHasBeenSet = true;
    }

    if (value.HasMember("ImageFrequency") && !value["ImageFrequency"].IsNull())
    {
        if (!value["ImageFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaModerationConfig.ImageFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageFrequency = value["ImageFrequency"].GetInt64();
        m_imageFrequencyHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaModerationConfig.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("SegmentOutput") && !value["SegmentOutput"].IsNull())
    {
        if (!value["SegmentOutput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaModerationConfig.SegmentOutput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_segmentOutput.Deserialize(value["SegmentOutput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_segmentOutputHasBeenSet = true;
    }

    if (value.HasMember("UseOCR") && !value["UseOCR"].IsNull())
    {
        if (!value["UseOCR"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MediaModerationConfig.UseOCR` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useOCR = value["UseOCR"].GetBool();
        m_useOCRHasBeenSet = true;
    }

    if (value.HasMember("UseAudio") && !value["UseAudio"].IsNull())
    {
        if (!value["UseAudio"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MediaModerationConfig.UseAudio` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useAudio = value["UseAudio"].GetBool();
        m_useAudioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaModerationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioFrequency, allocator);
    }

    if (m_imageFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageFrequency, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_segmentOutput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_useOCRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseOCR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useOCR, allocator);
    }

    if (m_useAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useAudio, allocator);
    }

}


int64_t MediaModerationConfig::GetAudioFrequency() const
{
    return m_audioFrequency;
}

void MediaModerationConfig::SetAudioFrequency(const int64_t& _audioFrequency)
{
    m_audioFrequency = _audioFrequency;
    m_audioFrequencyHasBeenSet = true;
}

bool MediaModerationConfig::AudioFrequencyHasBeenSet() const
{
    return m_audioFrequencyHasBeenSet;
}

int64_t MediaModerationConfig::GetImageFrequency() const
{
    return m_imageFrequency;
}

void MediaModerationConfig::SetImageFrequency(const int64_t& _imageFrequency)
{
    m_imageFrequency = _imageFrequency;
    m_imageFrequencyHasBeenSet = true;
}

bool MediaModerationConfig::ImageFrequencyHasBeenSet() const
{
    return m_imageFrequencyHasBeenSet;
}

string MediaModerationConfig::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void MediaModerationConfig::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool MediaModerationConfig::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

FileOutput MediaModerationConfig::GetSegmentOutput() const
{
    return m_segmentOutput;
}

void MediaModerationConfig::SetSegmentOutput(const FileOutput& _segmentOutput)
{
    m_segmentOutput = _segmentOutput;
    m_segmentOutputHasBeenSet = true;
}

bool MediaModerationConfig::SegmentOutputHasBeenSet() const
{
    return m_segmentOutputHasBeenSet;
}

bool MediaModerationConfig::GetUseOCR() const
{
    return m_useOCR;
}

void MediaModerationConfig::SetUseOCR(const bool& _useOCR)
{
    m_useOCR = _useOCR;
    m_useOCRHasBeenSet = true;
}

bool MediaModerationConfig::UseOCRHasBeenSet() const
{
    return m_useOCRHasBeenSet;
}

bool MediaModerationConfig::GetUseAudio() const
{
    return m_useAudio;
}

void MediaModerationConfig::SetUseAudio(const bool& _useAudio)
{
    m_useAudio = _useAudio;
    m_useAudioHasBeenSet = true;
}

bool MediaModerationConfig::UseAudioHasBeenSet() const
{
    return m_useAudioHasBeenSet;
}

