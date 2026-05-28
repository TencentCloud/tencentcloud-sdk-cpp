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

#include <tencentcloud/ig/v20210518/model/LLMReportInterpretationData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

LLMReportInterpretationData::LLMReportInterpretationData() :
    m_contentHasBeenSet(false),
    m_thinkHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_isFinishHasBeenSet(false),
    m_isSensitiveHasBeenSet(false),
    m_isSupportFileHasBeenSet(false),
    m_reportInfosHasBeenSet(false),
    m_referResourceItemsHasBeenSet(false),
    m_guessQuestionsHasBeenSet(false),
    m_highlightWordsHasBeenSet(false)
{
}

CoreInternalOutcome LLMReportInterpretationData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMReportInterpretationData.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Think") && !value["Think"].IsNull())
    {
        if (!value["Think"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMReportInterpretationData.Think` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_think = string(value["Think"].GetString());
        m_thinkHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMReportInterpretationData.Sort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sort = value["Sort"].GetInt64();
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("IsFinish") && !value["IsFinish"].IsNull())
    {
        if (!value["IsFinish"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMReportInterpretationData.IsFinish` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFinish = value["IsFinish"].GetBool();
        m_isFinishHasBeenSet = true;
    }

    if (value.HasMember("IsSensitive") && !value["IsSensitive"].IsNull())
    {
        if (!value["IsSensitive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMReportInterpretationData.IsSensitive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSensitive = value["IsSensitive"].GetBool();
        m_isSensitiveHasBeenSet = true;
    }

    if (value.HasMember("IsSupportFile") && !value["IsSupportFile"].IsNull())
    {
        if (!value["IsSupportFile"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LLMReportInterpretationData.IsSupportFile` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportFile = value["IsSupportFile"].GetBool();
        m_isSupportFileHasBeenSet = true;
    }

    if (value.HasMember("ReportInfos") && !value["ReportInfos"].IsNull())
    {
        if (!value["ReportInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMReportInterpretationData.ReportInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ReportInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReportFileInfoRsp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_reportInfos.push_back(item);
        }
        m_reportInfosHasBeenSet = true;
    }

    if (value.HasMember("ReferResourceItems") && !value["ReferResourceItems"].IsNull())
    {
        if (!value["ReferResourceItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMReportInterpretationData.ReferResourceItems` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `LLMReportInterpretationData.GuessQuestions` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `LLMReportInterpretationData.HighlightWords` is not array type"));

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


    return CoreInternalOutcome(true);
}

void LLMReportInterpretationData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_isSupportFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportFile, allocator);
    }

    if (m_reportInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reportInfos.begin(); itr != m_reportInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string LLMReportInterpretationData::GetContent() const
{
    return m_content;
}

void LLMReportInterpretationData::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool LLMReportInterpretationData::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string LLMReportInterpretationData::GetThink() const
{
    return m_think;
}

void LLMReportInterpretationData::SetThink(const string& _think)
{
    m_think = _think;
    m_thinkHasBeenSet = true;
}

bool LLMReportInterpretationData::ThinkHasBeenSet() const
{
    return m_thinkHasBeenSet;
}

int64_t LLMReportInterpretationData::GetSort() const
{
    return m_sort;
}

void LLMReportInterpretationData::SetSort(const int64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool LLMReportInterpretationData::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

bool LLMReportInterpretationData::GetIsFinish() const
{
    return m_isFinish;
}

void LLMReportInterpretationData::SetIsFinish(const bool& _isFinish)
{
    m_isFinish = _isFinish;
    m_isFinishHasBeenSet = true;
}

bool LLMReportInterpretationData::IsFinishHasBeenSet() const
{
    return m_isFinishHasBeenSet;
}

bool LLMReportInterpretationData::GetIsSensitive() const
{
    return m_isSensitive;
}

void LLMReportInterpretationData::SetIsSensitive(const bool& _isSensitive)
{
    m_isSensitive = _isSensitive;
    m_isSensitiveHasBeenSet = true;
}

bool LLMReportInterpretationData::IsSensitiveHasBeenSet() const
{
    return m_isSensitiveHasBeenSet;
}

bool LLMReportInterpretationData::GetIsSupportFile() const
{
    return m_isSupportFile;
}

void LLMReportInterpretationData::SetIsSupportFile(const bool& _isSupportFile)
{
    m_isSupportFile = _isSupportFile;
    m_isSupportFileHasBeenSet = true;
}

bool LLMReportInterpretationData::IsSupportFileHasBeenSet() const
{
    return m_isSupportFileHasBeenSet;
}

vector<ReportFileInfoRsp> LLMReportInterpretationData::GetReportInfos() const
{
    return m_reportInfos;
}

void LLMReportInterpretationData::SetReportInfos(const vector<ReportFileInfoRsp>& _reportInfos)
{
    m_reportInfos = _reportInfos;
    m_reportInfosHasBeenSet = true;
}

bool LLMReportInterpretationData::ReportInfosHasBeenSet() const
{
    return m_reportInfosHasBeenSet;
}

vector<ReferResourceInfo> LLMReportInterpretationData::GetReferResourceItems() const
{
    return m_referResourceItems;
}

void LLMReportInterpretationData::SetReferResourceItems(const vector<ReferResourceInfo>& _referResourceItems)
{
    m_referResourceItems = _referResourceItems;
    m_referResourceItemsHasBeenSet = true;
}

bool LLMReportInterpretationData::ReferResourceItemsHasBeenSet() const
{
    return m_referResourceItemsHasBeenSet;
}

vector<GuessQuestion> LLMReportInterpretationData::GetGuessQuestions() const
{
    return m_guessQuestions;
}

void LLMReportInterpretationData::SetGuessQuestions(const vector<GuessQuestion>& _guessQuestions)
{
    m_guessQuestions = _guessQuestions;
    m_guessQuestionsHasBeenSet = true;
}

bool LLMReportInterpretationData::GuessQuestionsHasBeenSet() const
{
    return m_guessQuestionsHasBeenSet;
}

vector<HighlightWordInfo> LLMReportInterpretationData::GetHighlightWords() const
{
    return m_highlightWords;
}

void LLMReportInterpretationData::SetHighlightWords(const vector<HighlightWordInfo>& _highlightWords)
{
    m_highlightWords = _highlightWords;
    m_highlightWordsHasBeenSet = true;
}

bool LLMReportInterpretationData::HighlightWordsHasBeenSet() const
{
    return m_highlightWordsHasBeenSet;
}

