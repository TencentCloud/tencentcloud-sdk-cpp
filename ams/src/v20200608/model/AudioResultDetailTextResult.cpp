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

#include <tencentcloud/ams/v20200608/model/AudioResultDetailTextResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace std;

AudioResultDetailTextResult::AudioResultDetailTextResult() :
    m_labelHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_libIdHasBeenSet(false),
    m_libNameHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_libTypeHasBeenSet(false)
{
}

CoreInternalOutcome AudioResultDetailTextResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResultDetailTextResult.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioResultDetailTextResult.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("LibId") && !value["LibId"].IsNull())
    {
        if (!value["LibId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResultDetailTextResult.LibId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libId = string(value["LibId"].GetString());
        m_libIdHasBeenSet = true;
    }

    if (value.HasMember("LibName") && !value["LibName"].IsNull())
    {
        if (!value["LibName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResultDetailTextResult.LibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libName = string(value["LibName"].GetString());
        m_libNameHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResultDetailTextResult.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResultDetailTextResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("LibType") && !value["LibType"].IsNull())
    {
        if (!value["LibType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResultDetailTextResult.LibType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_libType = value["LibType"].GetInt64();
        m_libTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioResultDetailTextResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_libIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libId.c_str(), allocator).Move(), allocator);
    }

    if (m_libNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libName.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_libTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_libType, allocator);
    }

}


string AudioResultDetailTextResult::GetLabel() const
{
    return m_label;
}

void AudioResultDetailTextResult::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AudioResultDetailTextResult::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

vector<string> AudioResultDetailTextResult::GetKeywords() const
{
    return m_keywords;
}

void AudioResultDetailTextResult::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool AudioResultDetailTextResult::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string AudioResultDetailTextResult::GetLibId() const
{
    return m_libId;
}

void AudioResultDetailTextResult::SetLibId(const string& _libId)
{
    m_libId = _libId;
    m_libIdHasBeenSet = true;
}

bool AudioResultDetailTextResult::LibIdHasBeenSet() const
{
    return m_libIdHasBeenSet;
}

string AudioResultDetailTextResult::GetLibName() const
{
    return m_libName;
}

void AudioResultDetailTextResult::SetLibName(const string& _libName)
{
    m_libName = _libName;
    m_libNameHasBeenSet = true;
}

bool AudioResultDetailTextResult::LibNameHasBeenSet() const
{
    return m_libNameHasBeenSet;
}

int64_t AudioResultDetailTextResult::GetScore() const
{
    return m_score;
}

void AudioResultDetailTextResult::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool AudioResultDetailTextResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string AudioResultDetailTextResult::GetSuggestion() const
{
    return m_suggestion;
}

void AudioResultDetailTextResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool AudioResultDetailTextResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t AudioResultDetailTextResult::GetLibType() const
{
    return m_libType;
}

void AudioResultDetailTextResult::SetLibType(const int64_t& _libType)
{
    m_libType = _libType;
    m_libTypeHasBeenSet = true;
}

bool AudioResultDetailTextResult::LibTypeHasBeenSet() const
{
    return m_libTypeHasBeenSet;
}

