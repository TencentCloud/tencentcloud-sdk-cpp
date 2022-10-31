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

#include <tencentcloud/soe/v20180724/model/SentenceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Soe::V20180724::Model;
using namespace std;

SentenceInfo::SentenceInfo() :
    m_sentenceIdHasBeenSet(false),
    m_wordsHasBeenSet(false),
    m_pronAccuracyHasBeenSet(false),
    m_pronFluencyHasBeenSet(false),
    m_pronCompletionHasBeenSet(false),
    m_suggestedScoreHasBeenSet(false),
    m_refTextIdHasBeenSet(false),
    m_keyWordHitsHasBeenSet(false),
    m_unKeyWordHitsHasBeenSet(false)
{
}

CoreInternalOutcome SentenceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SentenceId") && !value["SentenceId"].IsNull())
    {
        if (!value["SentenceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceInfo.SentenceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sentenceId = value["SentenceId"].GetInt64();
        m_sentenceIdHasBeenSet = true;
    }

    if (value.HasMember("Words") && !value["Words"].IsNull())
    {
        if (!value["Words"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SentenceInfo.Words` is not array type"));

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

    if (value.HasMember("PronAccuracy") && !value["PronAccuracy"].IsNull())
    {
        if (!value["PronAccuracy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceInfo.PronAccuracy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronAccuracy = value["PronAccuracy"].GetDouble();
        m_pronAccuracyHasBeenSet = true;
    }

    if (value.HasMember("PronFluency") && !value["PronFluency"].IsNull())
    {
        if (!value["PronFluency"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceInfo.PronFluency` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronFluency = value["PronFluency"].GetDouble();
        m_pronFluencyHasBeenSet = true;
    }

    if (value.HasMember("PronCompletion") && !value["PronCompletion"].IsNull())
    {
        if (!value["PronCompletion"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceInfo.PronCompletion` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronCompletion = value["PronCompletion"].GetDouble();
        m_pronCompletionHasBeenSet = true;
    }

    if (value.HasMember("SuggestedScore") && !value["SuggestedScore"].IsNull())
    {
        if (!value["SuggestedScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceInfo.SuggestedScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_suggestedScore = value["SuggestedScore"].GetDouble();
        m_suggestedScoreHasBeenSet = true;
    }

    if (value.HasMember("RefTextId") && !value["RefTextId"].IsNull())
    {
        if (!value["RefTextId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceInfo.RefTextId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refTextId = value["RefTextId"].GetInt64();
        m_refTextIdHasBeenSet = true;
    }

    if (value.HasMember("KeyWordHits") && !value["KeyWordHits"].IsNull())
    {
        if (!value["KeyWordHits"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SentenceInfo.KeyWordHits` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyWordHits"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyWordHits.push_back((*itr).GetDouble());
        }
        m_keyWordHitsHasBeenSet = true;
    }

    if (value.HasMember("UnKeyWordHits") && !value["UnKeyWordHits"].IsNull())
    {
        if (!value["UnKeyWordHits"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SentenceInfo.UnKeyWordHits` is not array type"));

        const rapidjson::Value &tmpValue = value["UnKeyWordHits"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_unKeyWordHits.push_back((*itr).GetDouble());
        }
        m_unKeyWordHitsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SentenceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sentenceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentenceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sentenceId, allocator);
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

    if (m_suggestedScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestedScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestedScore, allocator);
    }

    if (m_refTextIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefTextId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refTextId, allocator);
    }

    if (m_keyWordHitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordHits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyWordHits.begin(); itr != m_keyWordHits.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_unKeyWordHitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnKeyWordHits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unKeyWordHits.begin(); itr != m_unKeyWordHits.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


int64_t SentenceInfo::GetSentenceId() const
{
    return m_sentenceId;
}

void SentenceInfo::SetSentenceId(const int64_t& _sentenceId)
{
    m_sentenceId = _sentenceId;
    m_sentenceIdHasBeenSet = true;
}

bool SentenceInfo::SentenceIdHasBeenSet() const
{
    return m_sentenceIdHasBeenSet;
}

vector<WordRsp> SentenceInfo::GetWords() const
{
    return m_words;
}

void SentenceInfo::SetWords(const vector<WordRsp>& _words)
{
    m_words = _words;
    m_wordsHasBeenSet = true;
}

bool SentenceInfo::WordsHasBeenSet() const
{
    return m_wordsHasBeenSet;
}

double SentenceInfo::GetPronAccuracy() const
{
    return m_pronAccuracy;
}

void SentenceInfo::SetPronAccuracy(const double& _pronAccuracy)
{
    m_pronAccuracy = _pronAccuracy;
    m_pronAccuracyHasBeenSet = true;
}

bool SentenceInfo::PronAccuracyHasBeenSet() const
{
    return m_pronAccuracyHasBeenSet;
}

double SentenceInfo::GetPronFluency() const
{
    return m_pronFluency;
}

void SentenceInfo::SetPronFluency(const double& _pronFluency)
{
    m_pronFluency = _pronFluency;
    m_pronFluencyHasBeenSet = true;
}

bool SentenceInfo::PronFluencyHasBeenSet() const
{
    return m_pronFluencyHasBeenSet;
}

double SentenceInfo::GetPronCompletion() const
{
    return m_pronCompletion;
}

void SentenceInfo::SetPronCompletion(const double& _pronCompletion)
{
    m_pronCompletion = _pronCompletion;
    m_pronCompletionHasBeenSet = true;
}

bool SentenceInfo::PronCompletionHasBeenSet() const
{
    return m_pronCompletionHasBeenSet;
}

double SentenceInfo::GetSuggestedScore() const
{
    return m_suggestedScore;
}

void SentenceInfo::SetSuggestedScore(const double& _suggestedScore)
{
    m_suggestedScore = _suggestedScore;
    m_suggestedScoreHasBeenSet = true;
}

bool SentenceInfo::SuggestedScoreHasBeenSet() const
{
    return m_suggestedScoreHasBeenSet;
}

int64_t SentenceInfo::GetRefTextId() const
{
    return m_refTextId;
}

void SentenceInfo::SetRefTextId(const int64_t& _refTextId)
{
    m_refTextId = _refTextId;
    m_refTextIdHasBeenSet = true;
}

bool SentenceInfo::RefTextIdHasBeenSet() const
{
    return m_refTextIdHasBeenSet;
}

vector<double> SentenceInfo::GetKeyWordHits() const
{
    return m_keyWordHits;
}

void SentenceInfo::SetKeyWordHits(const vector<double>& _keyWordHits)
{
    m_keyWordHits = _keyWordHits;
    m_keyWordHitsHasBeenSet = true;
}

bool SentenceInfo::KeyWordHitsHasBeenSet() const
{
    return m_keyWordHitsHasBeenSet;
}

vector<double> SentenceInfo::GetUnKeyWordHits() const
{
    return m_unKeyWordHits;
}

void SentenceInfo::SetUnKeyWordHits(const vector<double>& _unKeyWordHits)
{
    m_unKeyWordHits = _unKeyWordHits;
    m_unKeyWordHitsHasBeenSet = true;
}

bool SentenceInfo::UnKeyWordHitsHasBeenSet() const
{
    return m_unKeyWordHitsHasBeenSet;
}

