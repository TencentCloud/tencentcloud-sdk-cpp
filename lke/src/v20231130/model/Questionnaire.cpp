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

#include <tencentcloud/lke/v20231130/model/Questionnaire.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Questionnaire::Questionnaire() :
    m_titleHasBeenSet(false),
    m_questionsHasBeenSet(false),
    m_answersHasBeenSet(false)
{
}

CoreInternalOutcome Questionnaire::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Questionnaire.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Questions") && !value["Questions"].IsNull())
    {
        if (!value["Questions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Questionnaire.Questions` is not array type"));

        const rapidjson::Value &tmpValue = value["Questions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuestionnaireQuestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_questions.push_back(item);
        }
        m_questionsHasBeenSet = true;
    }

    if (value.HasMember("Answers") && !value["Answers"].IsNull())
    {
        if (!value["Answers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Questionnaire.Answers` is not array type"));

        const rapidjson::Value &tmpValue = value["Answers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuestionnaireQuestionAnswer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_answers.push_back(item);
        }
        m_answersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Questionnaire::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_questionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Questions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_questions.begin(); itr != m_questions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_answersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_answers.begin(); itr != m_answers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Questionnaire::GetTitle() const
{
    return m_title;
}

void Questionnaire::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool Questionnaire::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

vector<QuestionnaireQuestion> Questionnaire::GetQuestions() const
{
    return m_questions;
}

void Questionnaire::SetQuestions(const vector<QuestionnaireQuestion>& _questions)
{
    m_questions = _questions;
    m_questionsHasBeenSet = true;
}

bool Questionnaire::QuestionsHasBeenSet() const
{
    return m_questionsHasBeenSet;
}

vector<QuestionnaireQuestionAnswer> Questionnaire::GetAnswers() const
{
    return m_answers;
}

void Questionnaire::SetAnswers(const vector<QuestionnaireQuestionAnswer>& _answers)
{
    m_answers = _answers;
    m_answersHasBeenSet = true;
}

bool Questionnaire::AnswersHasBeenSet() const
{
    return m_answersHasBeenSet;
}

