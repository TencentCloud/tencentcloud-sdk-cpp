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

#include <tencentcloud/ams/v20201229/model/TextResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20201229::Model;
using namespace std;

TextResult::TextResult() :
    m_labelHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_libIdHasBeenSet(false),
    m_libNameHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_libTypeHasBeenSet(false),
    m_subLabelHasBeenSet(false)
{
}

CoreInternalOutcome TextResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextResult.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextResult.Keywords` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `TextResult.LibId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libId = string(value["LibId"].GetString());
        m_libIdHasBeenSet = true;
    }

    if (value.HasMember("LibName") && !value["LibName"].IsNull())
    {
        if (!value["LibName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextResult.LibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libName = string(value["LibName"].GetString());
        m_libNameHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextResult.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("LibType") && !value["LibType"].IsNull())
    {
        if (!value["LibType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextResult.LibType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_libType = value["LibType"].GetInt64();
        m_libTypeHasBeenSet = true;
    }

    if (value.HasMember("SubLabel") && !value["SubLabel"].IsNull())
    {
        if (!value["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextResult.SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(value["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

}


string TextResult::GetLabel() const
{
    return m_label;
}

void TextResult::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool TextResult::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

vector<string> TextResult::GetKeywords() const
{
    return m_keywords;
}

void TextResult::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool TextResult::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string TextResult::GetLibId() const
{
    return m_libId;
}

void TextResult::SetLibId(const string& _libId)
{
    m_libId = _libId;
    m_libIdHasBeenSet = true;
}

bool TextResult::LibIdHasBeenSet() const
{
    return m_libIdHasBeenSet;
}

string TextResult::GetLibName() const
{
    return m_libName;
}

void TextResult::SetLibName(const string& _libName)
{
    m_libName = _libName;
    m_libNameHasBeenSet = true;
}

bool TextResult::LibNameHasBeenSet() const
{
    return m_libNameHasBeenSet;
}

int64_t TextResult::GetScore() const
{
    return m_score;
}

void TextResult::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool TextResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string TextResult::GetSuggestion() const
{
    return m_suggestion;
}

void TextResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool TextResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t TextResult::GetLibType() const
{
    return m_libType;
}

void TextResult::SetLibType(const int64_t& _libType)
{
    m_libType = _libType;
    m_libTypeHasBeenSet = true;
}

bool TextResult::LibTypeHasBeenSet() const
{
    return m_libTypeHasBeenSet;
}

string TextResult::GetSubLabel() const
{
    return m_subLabel;
}

void TextResult::SetSubLabel(const string& _subLabel)
{
    m_subLabel = _subLabel;
    m_subLabelHasBeenSet = true;
}

bool TextResult::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

