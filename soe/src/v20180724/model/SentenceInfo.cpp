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
using namespace rapidjson;
using namespace std;

SentenceInfo::SentenceInfo() :
    m_sentenceIdHasBeenSet(false),
    m_wordsHasBeenSet(false),
    m_pronAccuracyHasBeenSet(false),
    m_pronFluencyHasBeenSet(false),
    m_pronCompletionHasBeenSet(false),
    m_suggestedScoreHasBeenSet(false)
{
}

CoreInternalOutcome SentenceInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SentenceId") && !value["SentenceId"].IsNull())
    {
        if (!value["SentenceId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SentenceInfo.SentenceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sentenceId = value["SentenceId"].GetInt64();
        m_sentenceIdHasBeenSet = true;
    }

    if (value.HasMember("Words") && !value["Words"].IsNull())
    {
        if (!value["Words"].IsArray())
            return CoreInternalOutcome(Error("response `SentenceInfo.Words` is not array type"));

        const Value &tmpValue = value["Words"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
        if (!value["PronAccuracy"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SentenceInfo.PronAccuracy` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronAccuracy = value["PronAccuracy"].GetDouble();
        m_pronAccuracyHasBeenSet = true;
    }

    if (value.HasMember("PronFluency") && !value["PronFluency"].IsNull())
    {
        if (!value["PronFluency"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SentenceInfo.PronFluency` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronFluency = value["PronFluency"].GetDouble();
        m_pronFluencyHasBeenSet = true;
    }

    if (value.HasMember("PronCompletion") && !value["PronCompletion"].IsNull())
    {
        if (!value["PronCompletion"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SentenceInfo.PronCompletion` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pronCompletion = value["PronCompletion"].GetDouble();
        m_pronCompletionHasBeenSet = true;
    }

    if (value.HasMember("SuggestedScore") && !value["SuggestedScore"].IsNull())
    {
        if (!value["SuggestedScore"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SentenceInfo.SuggestedScore` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_suggestedScore = value["SuggestedScore"].GetDouble();
        m_suggestedScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SentenceInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_sentenceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SentenceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sentenceId, allocator);
    }

    if (m_wordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Words";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_words.begin(); itr != m_words.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pronAccuracyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PronAccuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronAccuracy, allocator);
    }

    if (m_pronFluencyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PronFluency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronFluency, allocator);
    }

    if (m_pronCompletionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PronCompletion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pronCompletion, allocator);
    }

    if (m_suggestedScoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SuggestedScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestedScore, allocator);
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

