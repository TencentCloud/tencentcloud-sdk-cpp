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

#include <tencentcloud/ecc/v20181213/model/ScoreCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

ScoreCategory::ScoreCategory() :
    m_wordsHasBeenSet(false),
    m_sentencesHasBeenSet(false),
    m_structureHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_percentageHasBeenSet(false)
{
}

CoreInternalOutcome ScoreCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Words") && !value["Words"].IsNull())
    {
        if (!value["Words"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreCategory.Words` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_words.Deserialize(value["Words"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wordsHasBeenSet = true;
    }

    if (value.HasMember("Sentences") && !value["Sentences"].IsNull())
    {
        if (!value["Sentences"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreCategory.Sentences` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sentences.Deserialize(value["Sentences"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sentencesHasBeenSet = true;
    }

    if (value.HasMember("Structure") && !value["Structure"].IsNull())
    {
        if (!value["Structure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreCategory.Structure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_structure.Deserialize(value["Structure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_structureHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreCategory.Content` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_content.Deserialize(value["Content"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreCategory.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Percentage") && !value["Percentage"].IsNull())
    {
        if (!value["Percentage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScoreCategory.Percentage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percentage = value["Percentage"].GetDouble();
        m_percentageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScoreCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Words";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_words.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sentencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sentences";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sentences.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_structureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Structure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_structure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_percentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentage, allocator);
    }

}


Aspect ScoreCategory::GetWords() const
{
    return m_words;
}

void ScoreCategory::SetWords(const Aspect& _words)
{
    m_words = _words;
    m_wordsHasBeenSet = true;
}

bool ScoreCategory::WordsHasBeenSet() const
{
    return m_wordsHasBeenSet;
}

Aspect ScoreCategory::GetSentences() const
{
    return m_sentences;
}

void ScoreCategory::SetSentences(const Aspect& _sentences)
{
    m_sentences = _sentences;
    m_sentencesHasBeenSet = true;
}

bool ScoreCategory::SentencesHasBeenSet() const
{
    return m_sentencesHasBeenSet;
}

Aspect ScoreCategory::GetStructure() const
{
    return m_structure;
}

void ScoreCategory::SetStructure(const Aspect& _structure)
{
    m_structure = _structure;
    m_structureHasBeenSet = true;
}

bool ScoreCategory::StructureHasBeenSet() const
{
    return m_structureHasBeenSet;
}

Aspect ScoreCategory::GetContent() const
{
    return m_content;
}

void ScoreCategory::SetContent(const Aspect& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ScoreCategory::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

double ScoreCategory::GetScore() const
{
    return m_score;
}

void ScoreCategory::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ScoreCategory::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

double ScoreCategory::GetPercentage() const
{
    return m_percentage;
}

void ScoreCategory::SetPercentage(const double& _percentage)
{
    m_percentage = _percentage;
    m_percentageHasBeenSet = true;
}

bool ScoreCategory::PercentageHasBeenSet() const
{
    return m_percentageHasBeenSet;
}

