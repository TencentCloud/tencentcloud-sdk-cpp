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

#include <tencentcloud/ecc/v20181213/model/SentenceCom.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

SentenceCom::SentenceCom() :
    m_suggestionsHasBeenSet(false),
    m_sentenceHasBeenSet(false)
{
}

CoreInternalOutcome SentenceCom::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Suggestions") && !value["Suggestions"].IsNull())
    {
        if (!value["Suggestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SentenceCom.Suggestions` is not array type"));

        const rapidjson::Value &tmpValue = value["Suggestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SentenceSuggest item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_suggestions.push_back(item);
        }
        m_suggestionsHasBeenSet = true;
    }

    if (value.HasMember("Sentence") && !value["Sentence"].IsNull())
    {
        if (!value["Sentence"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceCom.Sentence` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sentence.Deserialize(value["Sentence"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sentenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SentenceCom::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_suggestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_suggestions.begin(); itr != m_suggestions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sentenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sentence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sentence.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<SentenceSuggest> SentenceCom::GetSuggestions() const
{
    return m_suggestions;
}

void SentenceCom::SetSuggestions(const vector<SentenceSuggest>& _suggestions)
{
    m_suggestions = _suggestions;
    m_suggestionsHasBeenSet = true;
}

bool SentenceCom::SuggestionsHasBeenSet() const
{
    return m_suggestionsHasBeenSet;
}

SentenceItem SentenceCom::GetSentence() const
{
    return m_sentence;
}

void SentenceCom::SetSentence(const SentenceItem& _sentence)
{
    m_sentence = _sentence;
    m_sentenceHasBeenSet = true;
}

bool SentenceCom::SentenceHasBeenSet() const
{
    return m_sentenceHasBeenSet;
}

