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

#include <tencentcloud/lke/v20231130/model/QuestionnaireQuestionAnswer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

QuestionnaireQuestionAnswer::QuestionnaireQuestionAnswer() :
    m_questionHasBeenSet(false),
    m_selectedLabelsHasBeenSet(false)
{
}

CoreInternalOutcome QuestionnaireQuestionAnswer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionnaireQuestionAnswer.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("SelectedLabels") && !value["SelectedLabels"].IsNull())
    {
        if (!value["SelectedLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QuestionnaireQuestionAnswer.SelectedLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["SelectedLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_selectedLabels.push_back((*itr).GetString());
        }
        m_selectedLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuestionnaireQuestionAnswer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
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


string QuestionnaireQuestionAnswer::GetQuestion() const
{
    return m_question;
}

void QuestionnaireQuestionAnswer::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool QuestionnaireQuestionAnswer::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

vector<string> QuestionnaireQuestionAnswer::GetSelectedLabels() const
{
    return m_selectedLabels;
}

void QuestionnaireQuestionAnswer::SetSelectedLabels(const vector<string>& _selectedLabels)
{
    m_selectedLabels = _selectedLabels;
    m_selectedLabelsHasBeenSet = true;
}

bool QuestionnaireQuestionAnswer::SelectedLabelsHasBeenSet() const
{
    return m_selectedLabelsHasBeenSet;
}

