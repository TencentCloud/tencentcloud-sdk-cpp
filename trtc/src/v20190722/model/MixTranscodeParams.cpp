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

#include <tencentcloud/trtc/v20190722/model/MixTranscodeParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

MixTranscodeParams::MixTranscodeParams() :
    m_videoParamsHasBeenSet(false),
    m_audioParamsHasBeenSet(false)
{
}

CoreInternalOutcome MixTranscodeParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoParams") && !value["VideoParams"].IsNull())
    {
        if (!value["VideoParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MixTranscodeParams.VideoParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoParams.Deserialize(value["VideoParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoParamsHasBeenSet = true;
    }

    if (value.HasMember("AudioParams") && !value["AudioParams"].IsNull())
    {
        if (!value["AudioParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MixTranscodeParams.AudioParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioParams.Deserialize(value["AudioParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MixTranscodeParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


VideoParams MixTranscodeParams::GetVideoParams() const
{
    return m_videoParams;
}

void MixTranscodeParams::SetVideoParams(const VideoParams& _videoParams)
{
    m_videoParams = _videoParams;
    m_videoParamsHasBeenSet = true;
}

bool MixTranscodeParams::VideoParamsHasBeenSet() const
{
    return m_videoParamsHasBeenSet;
}

AudioParams MixTranscodeParams::GetAudioParams() const
{
    return m_audioParams;
}

void MixTranscodeParams::SetAudioParams(const AudioParams& _audioParams)
{
    m_audioParams = _audioParams;
    m_audioParamsHasBeenSet = true;
}

bool MixTranscodeParams::AudioParamsHasBeenSet() const
{
    return m_audioParamsHasBeenSet;
}

