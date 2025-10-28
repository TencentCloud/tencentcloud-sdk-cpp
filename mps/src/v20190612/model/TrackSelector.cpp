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

#include <tencentcloud/mps/v20190612/model/TrackSelector.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TrackSelector::TrackSelector() :
    m_videoIndexHasBeenSet(false),
    m_audioIndexHasBeenSet(false)
{
}

CoreInternalOutcome TrackSelector::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoIndex") && !value["VideoIndex"].IsNull())
    {
        if (!value["VideoIndex"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrackSelector.VideoIndex` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoIndex"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videoIndex.push_back((*itr).GetInt64());
        }
        m_videoIndexHasBeenSet = true;
    }

    if (value.HasMember("AudioIndex") && !value["AudioIndex"].IsNull())
    {
        if (!value["AudioIndex"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrackSelector.AudioIndex` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioIndex"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_audioIndex.push_back((*itr).GetInt64());
        }
        m_audioIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrackSelector::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoIndex.begin(); itr != m_videoIndex.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_audioIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_audioIndex.begin(); itr != m_audioIndex.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> TrackSelector::GetVideoIndex() const
{
    return m_videoIndex;
}

void TrackSelector::SetVideoIndex(const vector<int64_t>& _videoIndex)
{
    m_videoIndex = _videoIndex;
    m_videoIndexHasBeenSet = true;
}

bool TrackSelector::VideoIndexHasBeenSet() const
{
    return m_videoIndexHasBeenSet;
}

vector<int64_t> TrackSelector::GetAudioIndex() const
{
    return m_audioIndex;
}

void TrackSelector::SetAudioIndex(const vector<int64_t>& _audioIndex)
{
    m_audioIndex = _audioIndex;
    m_audioIndexHasBeenSet = true;
}

bool TrackSelector::AudioIndexHasBeenSet() const
{
    return m_audioIndexHasBeenSet;
}

