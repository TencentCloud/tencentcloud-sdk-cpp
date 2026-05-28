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

#include <tencentcloud/ig/v20210518/model/LLMDiagnosisHealthData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

LLMDiagnosisHealthData::LLMDiagnosisHealthData() :
    m_contentHasBeenSet(false),
    m_thinkHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_isFinishHasBeenSet(false),
    m_isSensitiveHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_riskReminderHasBeenSet(false),
    m_referResourceItemsHasBeenSet(false),
    m_guessQuestionsHasBeenSet(false),
    m_highlightWordsHasBeenSet(false),
    m_followUpQuestionsHasBeenSet(false),
    m_drugListHasBeenSet(false)
{
}

CoreInternalOutcome LLMDiagnosisHealthData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Think") && !value["Think"].IsNull())
    {
        if (!value["Think"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.Think` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_think = string(value["Think"].GetString());
        m_thinkHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.Sort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sort = value["Sort"].GetInt64();
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("IsFinish") && !value["IsFinish"].IsNull())
    {
        if (!value["IsFinish"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.IsFinish` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFinish = value["IsFinish"].GetBool();
        m_isFinishHasBeenSet = true;
    }

    if (value.HasMember("IsSensitive") && !value["IsSensitive"].IsNull())
    {
        if (!value["IsSensitive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.IsSensitive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSensitive = value["IsSensitive"].GetBool();
        m_isSensitiveHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.Kind` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_kind = value["Kind"].GetInt64();
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("RiskReminder") && !value["RiskReminder"].IsNull())
    {
        if (!value["RiskReminder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.RiskReminder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskReminder = string(value["RiskReminder"].GetString());
        m_riskReminderHasBeenSet = true;
    }

    if (value.HasMember("ReferResourceItems") && !value["ReferResourceItems"].IsNull())
    {
        if (!value["ReferResourceItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.ReferResourceItems` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.GuessQuestions` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.HighlightWords` is not array type"));

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

    if (value.HasMember("FollowUpQuestions") && !value["FollowUpQuestions"].IsNull())
    {
        if (!value["FollowUpQuestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.FollowUpQuestions` is not array type"));

        const rapidjson::Value &tmpValue = value["FollowUpQuestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HealthFollowUpQuestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_followUpQuestions.push_back(item);
        }
        m_followUpQuestionsHasBeenSet = true;
    }

    if (value.HasMember("DrugList") && !value["DrugList"].IsNull())
    {
        if (!value["DrugList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDiagnosisHealthData.DrugList` is not array type"));

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

void LLMDiagnosisHealthData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kind, allocator);
    }

    if (m_riskReminderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskReminder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskReminder.c_str(), allocator).Move(), allocator);
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

    if (m_followUpQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowUpQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_followUpQuestions.begin(); itr != m_followUpQuestions.end(); ++itr, ++i)
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


string LLMDiagnosisHealthData::GetContent() const
{
    return m_content;
}

void LLMDiagnosisHealthData::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool LLMDiagnosisHealthData::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string LLMDiagnosisHealthData::GetThink() const
{
    return m_think;
}

void LLMDiagnosisHealthData::SetThink(const string& _think)
{
    m_think = _think;
    m_thinkHasBeenSet = true;
}

bool LLMDiagnosisHealthData::ThinkHasBeenSet() const
{
    return m_thinkHasBeenSet;
}

int64_t LLMDiagnosisHealthData::GetSort() const
{
    return m_sort;
}

void LLMDiagnosisHealthData::SetSort(const int64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool LLMDiagnosisHealthData::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

bool LLMDiagnosisHealthData::GetIsFinish() const
{
    return m_isFinish;
}

void LLMDiagnosisHealthData::SetIsFinish(const bool& _isFinish)
{
    m_isFinish = _isFinish;
    m_isFinishHasBeenSet = true;
}

bool LLMDiagnosisHealthData::IsFinishHasBeenSet() const
{
    return m_isFinishHasBeenSet;
}

bool LLMDiagnosisHealthData::GetIsSensitive() const
{
    return m_isSensitive;
}

void LLMDiagnosisHealthData::SetIsSensitive(const bool& _isSensitive)
{
    m_isSensitive = _isSensitive;
    m_isSensitiveHasBeenSet = true;
}

bool LLMDiagnosisHealthData::IsSensitiveHasBeenSet() const
{
    return m_isSensitiveHasBeenSet;
}

int64_t LLMDiagnosisHealthData::GetKind() const
{
    return m_kind;
}

void LLMDiagnosisHealthData::SetKind(const int64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool LLMDiagnosisHealthData::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string LLMDiagnosisHealthData::GetRiskReminder() const
{
    return m_riskReminder;
}

void LLMDiagnosisHealthData::SetRiskReminder(const string& _riskReminder)
{
    m_riskReminder = _riskReminder;
    m_riskReminderHasBeenSet = true;
}

bool LLMDiagnosisHealthData::RiskReminderHasBeenSet() const
{
    return m_riskReminderHasBeenSet;
}

vector<ReferResourceInfo> LLMDiagnosisHealthData::GetReferResourceItems() const
{
    return m_referResourceItems;
}

void LLMDiagnosisHealthData::SetReferResourceItems(const vector<ReferResourceInfo>& _referResourceItems)
{
    m_referResourceItems = _referResourceItems;
    m_referResourceItemsHasBeenSet = true;
}

bool LLMDiagnosisHealthData::ReferResourceItemsHasBeenSet() const
{
    return m_referResourceItemsHasBeenSet;
}

vector<GuessQuestion> LLMDiagnosisHealthData::GetGuessQuestions() const
{
    return m_guessQuestions;
}

void LLMDiagnosisHealthData::SetGuessQuestions(const vector<GuessQuestion>& _guessQuestions)
{
    m_guessQuestions = _guessQuestions;
    m_guessQuestionsHasBeenSet = true;
}

bool LLMDiagnosisHealthData::GuessQuestionsHasBeenSet() const
{
    return m_guessQuestionsHasBeenSet;
}

vector<HighlightWordInfo> LLMDiagnosisHealthData::GetHighlightWords() const
{
    return m_highlightWords;
}

void LLMDiagnosisHealthData::SetHighlightWords(const vector<HighlightWordInfo>& _highlightWords)
{
    m_highlightWords = _highlightWords;
    m_highlightWordsHasBeenSet = true;
}

bool LLMDiagnosisHealthData::HighlightWordsHasBeenSet() const
{
    return m_highlightWordsHasBeenSet;
}

vector<HealthFollowUpQuestion> LLMDiagnosisHealthData::GetFollowUpQuestions() const
{
    return m_followUpQuestions;
}

void LLMDiagnosisHealthData::SetFollowUpQuestions(const vector<HealthFollowUpQuestion>& _followUpQuestions)
{
    m_followUpQuestions = _followUpQuestions;
    m_followUpQuestionsHasBeenSet = true;
}

bool LLMDiagnosisHealthData::FollowUpQuestionsHasBeenSet() const
{
    return m_followUpQuestionsHasBeenSet;
}

vector<StandardDrugCardInfo> LLMDiagnosisHealthData::GetDrugList() const
{
    return m_drugList;
}

void LLMDiagnosisHealthData::SetDrugList(const vector<StandardDrugCardInfo>& _drugList)
{
    m_drugList = _drugList;
    m_drugListHasBeenSet = true;
}

bool LLMDiagnosisHealthData::DrugListHasBeenSet() const
{
    return m_drugListHasBeenSet;
}

