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

#include <tencentcloud/ig/v20210518/model/LLMDiagnosisDrugData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

LLMDiagnosisDrugData::LLMDiagnosisDrugData() :
    m_contentHasBeenSet(false),
    m_thinkHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_isFinishHasBeenSet(false),
    m_isSensitiveHasBeenSet(false),
    m_referResourceItemsHasBeenSet(false),
    m_guessQuestionsHasBeenSet(false),
    m_highlightWordsHasBeenSet(false),
    m_drugListHasBeenSet(false)
{
}

CoreInternalOutcome LLMDiagnosisDrugData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisDrugData.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Think") && !value["Think"].IsNull())
    {
        if (!value["Think"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisDrugData.Think` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_think = string(value["Think"].GetString());
        m_thinkHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisDrugData.Sort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sort = value["Sort"].GetInt64();
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("IsFinish") && !value["IsFinish"].IsNull())
    {
        if (!value["IsFinish"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisDrugData.IsFinish` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFinish = value["IsFinish"].GetBool();
        m_isFinishHasBeenSet = true;
    }

    if (value.HasMember("IsSensitive") && !value["IsSensitive"].IsNull())
    {
        if (!value["IsSensitive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisDrugData.IsSensitive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSensitive = value["IsSensitive"].GetBool();
        m_isSensitiveHasBeenSet = true;
    }

    if (value.HasMember("ReferResourceItems") && !value["ReferResourceItems"].IsNull())
    {
        if (!value["ReferResourceItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisDrugData.ReferResourceItems` is not array type"));

        const rapidjson::Value &tmpValue = value["ReferResourceItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReferResourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_referResourceItems.push_back(item);
        }
        m_referResourceItemsHasBeenSet = true;
    }

    if (value.HasMember("GuessQuestions") && !value["GuessQuestions"].IsNull())
    {
        if (!value["GuessQuestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisDrugData.GuessQuestions` is not array type"));

        const rapidjson::Value &tmpValue = value["GuessQuestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GuessQuestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_guessQuestions.push_back(item);
        }
        m_guessQuestionsHasBeenSet = true;
    }

    if (value.HasMember("HighlightWords") && !value["HighlightWords"].IsNull())
    {
        if (!value["HighlightWords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisDrugData.HighlightWords` is not array type"));

        const rapidjson::Value &tmpValue = value["HighlightWords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HighlightWordInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highlightWords.push_back(item);
        }
        m_highlightWordsHasBeenSet = true;
    }

    if (value.HasMember("DrugList") && !value["DrugList"].IsNull())
    {
        if (!value["DrugList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisDrugData.DrugList` is not array type"));

        const rapidjson::Value &tmpValue = value["DrugList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StandardDrugCardInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugList.push_back(item);
        }
        m_drugListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMDiagnosisDrugData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_thinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Think";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_think.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sort, allocator);
    }

    if (m_isFinishHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFinish";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFinish, allocator);
    }

    if (m_isSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSensitive, allocator);
    }

    if (m_referResourceItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferResourceItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_referResourceItems.begin(); itr != m_referResourceItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_guessQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuessQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_guessQuestions.begin(); itr != m_guessQuestions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_highlightWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightWords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highlightWords.begin(); itr != m_highlightWords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_drugListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugList.begin(); itr != m_drugList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LLMDiagnosisDrugData::GetContent() const
{
    return m_content;
}

void LLMDiagnosisDrugData::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool LLMDiagnosisDrugData::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string LLMDiagnosisDrugData::GetThink() const
{
    return m_think;
}

void LLMDiagnosisDrugData::SetThink(const string& _think)
{
    m_think = _think;
    m_thinkHasBeenSet = true;
}

bool LLMDiagnosisDrugData::ThinkHasBeenSet() const
{
    return m_thinkHasBeenSet;
}

int64_t LLMDiagnosisDrugData::GetSort() const
{
    return m_sort;
}

void LLMDiagnosisDrugData::SetSort(const int64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool LLMDiagnosisDrugData::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

bool LLMDiagnosisDrugData::GetIsFinish() const
{
    return m_isFinish;
}

void LLMDiagnosisDrugData::SetIsFinish(const bool& _isFinish)
{
    m_isFinish = _isFinish;
    m_isFinishHasBeenSet = true;
}

bool LLMDiagnosisDrugData::IsFinishHasBeenSet() const
{
    return m_isFinishHasBeenSet;
}

bool LLMDiagnosisDrugData::GetIsSensitive() const
{
    return m_isSensitive;
}

void LLMDiagnosisDrugData::SetIsSensitive(const bool& _isSensitive)
{
    m_isSensitive = _isSensitive;
    m_isSensitiveHasBeenSet = true;
}

bool LLMDiagnosisDrugData::IsSensitiveHasBeenSet() const
{
    return m_isSensitiveHasBeenSet;
}

vector<ReferResourceInfo> LLMDiagnosisDrugData::GetReferResourceItems() const
{
    return m_referResourceItems;
}

void LLMDiagnosisDrugData::SetReferResourceItems(const vector<ReferResourceInfo>& _referResourceItems)
{
    m_referResourceItems = _referResourceItems;
    m_referResourceItemsHasBeenSet = true;
}

bool LLMDiagnosisDrugData::ReferResourceItemsHasBeenSet() const
{
    return m_referResourceItemsHasBeenSet;
}

vector<GuessQuestion> LLMDiagnosisDrugData::GetGuessQuestions() const
{
    return m_guessQuestions;
}

void LLMDiagnosisDrugData::SetGuessQuestions(const vector<GuessQuestion>& _guessQuestions)
{
    m_guessQuestions = _guessQuestions;
    m_guessQuestionsHasBeenSet = true;
}

bool LLMDiagnosisDrugData::GuessQuestionsHasBeenSet() const
{
    return m_guessQuestionsHasBeenSet;
}

vector<HighlightWordInfo> LLMDiagnosisDrugData::GetHighlightWords() const
{
    return m_highlightWords;
}

void LLMDiagnosisDrugData::SetHighlightWords(const vector<HighlightWordInfo>& _highlightWords)
{
    m_highlightWords = _highlightWords;
    m_highlightWordsHasBeenSet = true;
}

bool LLMDiagnosisDrugData::HighlightWordsHasBeenSet() const
{
    return m_highlightWordsHasBeenSet;
}

vector<StandardDrugCardInfo> LLMDiagnosisDrugData::GetDrugList() const
{
    return m_drugList;
}

void LLMDiagnosisDrugData::SetDrugList(const vector<StandardDrugCardInfo>& _drugList)
{
    m_drugList = _drugList;
    m_drugListHasBeenSet = true;
}

bool LLMDiagnosisDrugData::DrugListHasBeenSet() const
{
    return m_drugListHasBeenSet;
}

