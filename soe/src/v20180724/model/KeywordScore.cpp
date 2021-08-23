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

#include <tencentcloud/soe/v20180724/model/KeywordScore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

KeywordScore::KeywordScore() :
    m_keywordHasBeenSet(false),
    m_pronAccuracyHasBeenSet(false),
    m_pronFluencyHasBeenSet(false),
    m_pronCompletionHasBeenSet(false),
    m_wordsHasBeenSet(false),
    m_suggestedScoreHasBeenSet(false)
{
}

CoreInternalOutcome KeywordScore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordScore.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("PronAccuracy") && !value["PronAccuracy"].IsNull())
    {
        if (!value["PronAccuracy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordScore.PronAccuracy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronAccuracy = value["PronAccuracy"].GetDouble();
        m_pronAccuracyHasBeenSet = true;
    }

    if (value.HasMember("PronFluency") && !value["PronFluency"].IsNull())
    {
        if (!value["PronFluency"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordScore.PronFluency` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronFluency = value["PronFluency"].GetDouble();
        m_pronFluencyHasBeenSet = true;
    }

    if (value.HasMember("PronCompletion") && !value["PronCompletion"].IsNull())
    {
        if (!value["PronCompletion"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordScore.PronCompletion` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronCompletion = value["PronCompletion"].GetDouble();
        m_pronCompletionHasBeenSet = true;
    }

    if (value.HasMember("Words") && !value["Words"].IsNull())
    {
        if (!value["Words"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeywordScore.Words` is not array type"));

        const rapidjson::Value &tmpValue = value["Words"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WordRsp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_words.push_back(item);
        }
        m_wordsHasBeenSet = true;
    }

    if (value.HasMember("SuggestedScore") && !value["SuggestedScore"].IsNull())
    {
        if (!value["SuggestedScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KeywordScore.SuggestedScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_suggestedScore = value["SuggestedScore"].GetDouble();
        m_suggestedScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeywordScore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_pronAccuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PronAccuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronAccuracy, allocator);
    }

    if (m_pronFluencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PronFluency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronFluency, allocator);
    }

    if (m_pronCompletionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PronCompletion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronCompletion, allocator);
    }

    if (m_wordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Words";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_words.begin(); itr != m_words.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_suggestedScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestedScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestedScore, allocator);
    }

}


string KeywordScore::GetKeyword() const
{
    return m_keyword;
}

void KeywordScore::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool KeywordScore::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

double KeywordScore::GetPronAccuracy() const
{
    return m_pronAccuracy;
}

void KeywordScore::SetPronAccuracy(const double& _pronAccuracy)
{
    m_pronAccuracy = _pronAccuracy;
    m_pronAccuracyHasBeenSet = true;
}

bool KeywordScore::PronAccuracyHasBeenSet() const
{
    return m_pronAccuracyHasBeenSet;
}

double KeywordScore::GetPronFluency() const
{
    return m_pronFluency;
}

void KeywordScore::SetPronFluency(const double& _pronFluency)
{
    m_pronFluency = _pronFluency;
    m_pronFluencyHasBeenSet = true;
}

bool KeywordScore::PronFluencyHasBeenSet() const
{
    return m_pronFluencyHasBeenSet;
}

double KeywordScore::GetPronCompletion() const
{
    return m_pronCompletion;
}

void KeywordScore::SetPronCompletion(const double& _pronCompletion)
{
    m_pronCompletion = _pronCompletion;
    m_pronCompletionHasBeenSet = true;
}

bool KeywordScore::PronCompletionHasBeenSet() const
{
    return m_pronCompletionHasBeenSet;
}

vector<WordRsp> KeywordScore::GetWords() const
{
    return m_words;
}

void KeywordScore::SetWords(const vector<WordRsp>& _words)
{
    m_words = _words;
    m_wordsHasBeenSet = true;
}

bool KeywordScore::WordsHasBeenSet() const
{
    return m_wordsHasBeenSet;
}

double KeywordScore::GetSuggestedScore() const
{
    return m_suggestedScore;
}

void KeywordScore::SetSuggestedScore(const double& _suggestedScore)
{
    m_suggestedScore = _suggestedScore;
    m_suggestedScoreHasBeenSet = true;
}

bool KeywordScore::SuggestedScoreHasBeenSet() const
{
    return m_suggestedScoreHasBeenSet;
}

