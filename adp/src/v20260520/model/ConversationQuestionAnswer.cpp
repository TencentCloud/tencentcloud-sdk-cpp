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

#include <tencentcloud/adp/v20260520/model/ConversationQuestionAnswer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationQuestionAnswer::ConversationQuestionAnswer() :
    m_questionHasBeenSet(false),
    m_selectedLabelListHasBeenSet(false),
    m_selectedLabelsHasBeenSet(false)
{
}

CoreInternalOutcome ConversationQuestionAnswer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationQuestionAnswer.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("SelectedLabelList") && !value["SelectedLabelList"].IsNull())
    {
        if (!value["SelectedLabelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationQuestionAnswer.SelectedLabelList` is not array type"));

        const rapidjson::Value &tmpValue = value["SelectedLabelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_selectedLabelList.push_back((*itr).GetString());
        }
        m_selectedLabelListHasBeenSet = true;
    }

    if (value.HasMember("SelectedLabels") && !value["SelectedLabels"].IsNull())
    {
        if (!value["SelectedLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationQuestionAnswer.SelectedLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["SelectedLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_selectedLabels.push_back((*itr).GetString());
        }
        m_selectedLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationQuestionAnswer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedLabelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedLabelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selectedLabelList.begin(); itr != m_selectedLabelList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_selectedLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selectedLabels.begin(); itr != m_selectedLabels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ConversationQuestionAnswer::GetQuestion() const
{
    return m_question;
}

void ConversationQuestionAnswer::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool ConversationQuestionAnswer::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

vector<string> ConversationQuestionAnswer::GetSelectedLabelList() const
{
    return m_selectedLabelList;
}

void ConversationQuestionAnswer::SetSelectedLabelList(const vector<string>& _selectedLabelList)
{
    m_selectedLabelList = _selectedLabelList;
    m_selectedLabelListHasBeenSet = true;
}

bool ConversationQuestionAnswer::SelectedLabelListHasBeenSet() const
{
    return m_selectedLabelListHasBeenSet;
}

vector<string> ConversationQuestionAnswer::GetSelectedLabels() const
{
    return m_selectedLabels;
}

void ConversationQuestionAnswer::SetSelectedLabels(const vector<string>& _selectedLabels)
{
    m_selectedLabels = _selectedLabels;
    m_selectedLabelsHasBeenSet = true;
}

bool ConversationQuestionAnswer::SelectedLabelsHasBeenSet() const
{
    return m_selectedLabelsHasBeenSet;
}

