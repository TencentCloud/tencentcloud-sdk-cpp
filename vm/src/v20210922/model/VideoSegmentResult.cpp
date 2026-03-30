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

#include <tencentcloud/vm/v20210922/model/VideoSegmentResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

VideoSegmentResult::VideoSegmentResult() :
    m_hitFlagHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_textHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_videoUrlHasBeenSet(false),
    m_audioUrlHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

CoreInternalOutcome VideoSegmentResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HitFlag") && !value["HitFlag"].IsNull())
    {
        if (!value["HitFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSegmentResult.HitFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitFlag = value["HitFlag"].GetInt64();
        m_hitFlagHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSegmentResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSegmentResult.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoSegmentResult.Detail` is not array type"));

        const rapidjson::Value &tmpValue = value["Detail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoLLMDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detail.push_back(item);
        }
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("VideoUrl") && !value["VideoUrl"].IsNull())
    {
        if (!value["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSegmentResult.VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(value["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }

    if (value.HasMember("AudioUrl") && !value["AudioUrl"].IsNull())
    {
        if (!value["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSegmentResult.AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(value["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSegmentResult.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSegmentResult.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoSegmentResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hitFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitFlag, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detail.begin(); itr != m_detail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

}


int64_t VideoSegmentResult::GetHitFlag() const
{
    return m_hitFlag;
}

void VideoSegmentResult::SetHitFlag(const int64_t& _hitFlag)
{
    m_hitFlag = _hitFlag;
    m_hitFlagHasBeenSet = true;
}

bool VideoSegmentResult::HitFlagHasBeenSet() const
{
    return m_hitFlagHasBeenSet;
}

string VideoSegmentResult::GetSuggestion() const
{
    return m_suggestion;
}

void VideoSegmentResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool VideoSegmentResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string VideoSegmentResult::GetText() const
{
    return m_text;
}

void VideoSegmentResult::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool VideoSegmentResult::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<VideoLLMDetail> VideoSegmentResult::GetDetail() const
{
    return m_detail;
}

void VideoSegmentResult::SetDetail(const vector<VideoLLMDetail>& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool VideoSegmentResult::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string VideoSegmentResult::GetVideoUrl() const
{
    return m_videoUrl;
}

void VideoSegmentResult::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool VideoSegmentResult::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string VideoSegmentResult::GetAudioUrl() const
{
    return m_audioUrl;
}

void VideoSegmentResult::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool VideoSegmentResult::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

string VideoSegmentResult::GetDuration() const
{
    return m_duration;
}

void VideoSegmentResult::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool VideoSegmentResult::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string VideoSegmentResult::GetRequestId() const
{
    return m_requestId;
}

void VideoSegmentResult::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool VideoSegmentResult::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

