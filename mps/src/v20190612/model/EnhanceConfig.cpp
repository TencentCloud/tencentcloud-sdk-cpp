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

#include <tencentcloud/mps/v20190612/model/EnhanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

EnhanceConfig::EnhanceConfig() :
    m_videoEnhanceHasBeenSet(false),
    m_audioEnhanceHasBeenSet(false)
{
}

CoreInternalOutcome EnhanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoEnhance") && !value["VideoEnhance"].IsNull())
    {
        if (!value["VideoEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnhanceConfig.VideoEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoEnhance.Deserialize(value["VideoEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoEnhanceHasBeenSet = true;
    }

    if (value.HasMember("AudioEnhance") && !value["AudioEnhance"].IsNull())
    {
        if (!value["AudioEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnhanceConfig.AudioEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioEnhance.Deserialize(value["AudioEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioEnhanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnhanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

}


VideoEnhanceConfig EnhanceConfig::GetVideoEnhance() const
{
    return m_videoEnhance;
}

void EnhanceConfig::SetVideoEnhance(const VideoEnhanceConfig& _videoEnhance)
{
    m_videoEnhance = _videoEnhance;
    m_videoEnhanceHasBeenSet = true;
}

bool EnhanceConfig::VideoEnhanceHasBeenSet() const
{
    return m_videoEnhanceHasBeenSet;
}

AudioEnhanceConfig EnhanceConfig::GetAudioEnhance() const
{
    return m_audioEnhance;
}

void EnhanceConfig::SetAudioEnhance(const AudioEnhanceConfig& _audioEnhance)
{
    m_audioEnhance = _audioEnhance;
    m_audioEnhanceHasBeenSet = true;
}

bool EnhanceConfig::AudioEnhanceHasBeenSet() const
{
    return m_audioEnhanceHasBeenSet;
}

