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

#include <tencentcloud/adp/v20260520/model/ConversationQuestionnaire.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationQuestionnaire::ConversationQuestionnaire() :
    m_titleHasBeenSet(false),
    m_answerListHasBeenSet(false),
    m_answersHasBeenSet(false),
    m_questionListHasBeenSet(false),
    m_questionsHasBeenSet(false)
{
}

CoreInternalOutcome ConversationQuestionnaire::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationQuestionnaire.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("AnswerList") && !value["AnswerList"].IsNull())
    {
        if (!value["AnswerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationQuestionnaire.AnswerList` is not array type"));

        const rapidjson::Value &tmpValue = value["AnswerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationQuestionAnswer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_answerList.push_back(item);
        }
        m_answerListHasBeenSet = true;
    }

    if (value.HasMember("Answers") && !value["Answers"].IsNull())
    {
        if (!value["Answers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationQuestionnaire.Answers` is not array type"));

        const rapidjson::Value &tmpValue = value["Answers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationQuestionAnswer item;
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

    if (value.HasMember("QuestionList") && !value["QuestionList"].IsNull())
    {
        if (!value["QuestionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationQuestionnaire.QuestionList` is not array type"));

        const rapidjson::Value &tmpValue = value["QuestionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationQuestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_questionList.push_back(item);
        }
        m_questionListHasBeenSet = true;
    }

    if (value.HasMember("Questions") && !value["Questions"].IsNull())
    {
        if (!value["Questions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationQuestionnaire.Questions` is not array type"));

        const rapidjson::Value &tmpValue = value["Questions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConversationQuestion item;
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


    return CoreInternalOutcome(true);
}

void ConversationQuestionnaire::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_answerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnswerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_answerList.begin(); itr != m_answerList.end(); ++itr, ++i)
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

    if (m_questionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_questionList.begin(); itr != m_questionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string ConversationQuestionnaire::GetTitle() const
{
    return m_title;
}

void ConversationQuestionnaire::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ConversationQuestionnaire::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

vector<ConversationQuestionAnswer> ConversationQuestionnaire::GetAnswerList() const
{
    return m_answerList;
}

void ConversationQuestionnaire::SetAnswerList(const vector<ConversationQuestionAnswer>& _answerList)
{
    m_answerList = _answerList;
    m_answerListHasBeenSet = true;
}

bool ConversationQuestionnaire::AnswerListHasBeenSet() const
{
    return m_answerListHasBeenSet;
}

vector<ConversationQuestionAnswer> ConversationQuestionnaire::GetAnswers() const
{
    return m_answers;
}

void ConversationQuestionnaire::SetAnswers(const vector<ConversationQuestionAnswer>& _answers)
{
    m_answers = _answers;
    m_answersHasBeenSet = true;
}

bool ConversationQuestionnaire::AnswersHasBeenSet() const
{
    return m_answersHasBeenSet;
}

vector<ConversationQuestion> ConversationQuestionnaire::GetQuestionList() const
{
    return m_questionList;
}

void ConversationQuestionnaire::SetQuestionList(const vector<ConversationQuestion>& _questionList)
{
    m_questionList = _questionList;
    m_questionListHasBeenSet = true;
}

bool ConversationQuestionnaire::QuestionListHasBeenSet() const
{
    return m_questionListHasBeenSet;
}

vector<ConversationQuestion> ConversationQuestionnaire::GetQuestions() const
{
    return m_questions;
}

void ConversationQuestionnaire::SetQuestions(const vector<ConversationQuestion>& _questions)
{
    m_questions = _questions;
    m_questionsHasBeenSet = true;
}

bool ConversationQuestionnaire::QuestionsHasBeenSet() const
{
    return m_questionsHasBeenSet;
}

