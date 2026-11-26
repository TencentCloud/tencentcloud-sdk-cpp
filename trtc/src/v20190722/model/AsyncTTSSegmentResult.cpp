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

#include <tencentcloud/trtc/v20190722/model/AsyncTTSSegmentResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AsyncTTSSegmentResult::AsyncTTSSegmentResult() :
    m_textHasBeenSet(false),
    m_audioDownloadUrlHasBeenSet(false),
    m_durationMsHasBeenSet(false)
{
}

CoreInternalOutcome AsyncTTSSegmentResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncTTSSegmentResult.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("AudioDownloadUrl") && !value["AudioDownloadUrl"].IsNull())
    {
        if (!value["AudioDownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncTTSSegmentResult.AudioDownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioDownloadUrl = string(value["AudioDownloadUrl"].GetString());
        m_audioDownloadUrlHasBeenSet = true;
    }

    if (value.HasMember("DurationMs") && !value["DurationMs"].IsNull())
    {
        if (!value["DurationMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncTTSSegmentResult.DurationMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMs = value["DurationMs"].GetUint64();
        m_durationMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsyncTTSSegmentResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_audioDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioDownloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMs, allocator);
    }

}


string AsyncTTSSegmentResult::GetText() const
{
    return m_text;
}

void AsyncTTSSegmentResult::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool AsyncTTSSegmentResult::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string AsyncTTSSegmentResult::GetAudioDownloadUrl() const
{
    return m_audioDownloadUrl;
}

void AsyncTTSSegmentResult::SetAudioDownloadUrl(const string& _audioDownloadUrl)
{
    m_audioDownloadUrl = _audioDownloadUrl;
    m_audioDownloadUrlHasBeenSet = true;
}

bool AsyncTTSSegmentResult::AudioDownloadUrlHasBeenSet() const
{
    return m_audioDownloadUrlHasBeenSet;
}

uint64_t AsyncTTSSegmentResult::GetDurationMs() const
{
    return m_durationMs;
}

void AsyncTTSSegmentResult::SetDurationMs(const uint64_t& _durationMs)
{
    m_durationMs = _durationMs;
    m_durationMsHasBeenSet = true;
}

bool AsyncTTSSegmentResult::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}

