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

#include <tencentcloud/ig/v20210518/model/HealthFollowUpQuestion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

HealthFollowUpQuestion::HealthFollowUpQuestion() :
    m_promptTypeHasBeenSet(false),
    m_choicesHasBeenSet(false),
    m_questionTypeHasBeenSet(false),
    m_specialTypeHasBeenSet(false),
    m_questionHasBeenSet(false)
{
}

CoreInternalOutcome HealthFollowUpQuestion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromptType") && !value["PromptType"].IsNull())
    {
        if (!value["PromptType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthFollowUpQuestion.PromptType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptType = string(value["PromptType"].GetString());
        m_promptTypeHasBeenSet = true;
    }

    if (value.HasMember("Choices") && !value["Choices"].IsNull())
    {
        if (!value["Choices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthFollowUpQuestion.Choices` is not array type"));

        const rapidjson::Value &tmpValue = value["Choices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_choices.push_back((*itr).GetString());
        }
        m_choicesHasBeenSet = true;
    }

    if (value.HasMember("QuestionType") && !value["QuestionType"].IsNull())
    {
        if (!value["QuestionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthFollowUpQuestion.QuestionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionType = string(value["QuestionType"].GetString());
        m_questionTypeHasBeenSet = true;
    }

    if (value.HasMember("SpecialType") && !value["SpecialType"].IsNull())
    {
        if (!value["SpecialType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthFollowUpQuestion.SpecialType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specialType = string(value["SpecialType"].GetString());
        m_specialTypeHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthFollowUpQuestion.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthFollowUpQuestion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptType.c_str(), allocator).Move(), allocator);
    }

    if (m_choicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Choices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_choices.begin(); itr != m_choices.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_questionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionType.c_str(), allocator).Move(), allocator);
    }

    if (m_specialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specialType.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

}


string HealthFollowUpQuestion::GetPromptType() const
{
    return m_promptType;
}

void HealthFollowUpQuestion::SetPromptType(const string& _promptType)
{
    m_promptType = _promptType;
    m_promptTypeHasBeenSet = true;
}

bool HealthFollowUpQuestion::PromptTypeHasBeenSet() const
{
    return m_promptTypeHasBeenSet;
}

vector<string> HealthFollowUpQuestion::GetChoices() const
{
    return m_choices;
}

void HealthFollowUpQuestion::SetChoices(const vector<string>& _choices)
{
    m_choices = _choices;
    m_choicesHasBeenSet = true;
}

bool HealthFollowUpQuestion::ChoicesHasBeenSet() const
{
    return m_choicesHasBeenSet;
}

string HealthFollowUpQuestion::GetQuestionType() const
{
    return m_questionType;
}

void HealthFollowUpQuestion::SetQuestionType(const string& _questionType)
{
    m_questionType = _questionType;
    m_questionTypeHasBeenSet = true;
}

bool HealthFollowUpQuestion::QuestionTypeHasBeenSet() const
{
    return m_questionTypeHasBeenSet;
}

string HealthFollowUpQuestion::GetSpecialType() const
{
    return m_specialType;
}

void HealthFollowUpQuestion::SetSpecialType(const string& _specialType)
{
    m_specialType = _specialType;
    m_specialTypeHasBeenSet = true;
}

bool HealthFollowUpQuestion::SpecialTypeHasBeenSet() const
{
    return m_specialTypeHasBeenSet;
}

string HealthFollowUpQuestion::GetQuestion() const
{
    return m_question;
}

void HealthFollowUpQuestion::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool HealthFollowUpQuestion::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

