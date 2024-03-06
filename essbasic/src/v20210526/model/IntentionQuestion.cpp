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

#include <tencentcloud/essbasic/v20210526/model/IntentionQuestion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

IntentionQuestion::IntentionQuestion() :
    m_questionHasBeenSet(false),
    m_answersHasBeenSet(false)
{
}

CoreInternalOutcome IntentionQuestion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionQuestion.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Answers") && !value["Answers"].IsNull())
    {
        if (!value["Answers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntentionQuestion.Answers` is not array type"));

        const rapidjson::Value &tmpValue = value["Answers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_answers.push_back((*itr).GetString());
        }
        m_answersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntentionQuestion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_answersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_answers.begin(); itr != m_answers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string IntentionQuestion::GetQuestion() const
{
    return m_question;
}

void IntentionQuestion::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool IntentionQuestion::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

vector<string> IntentionQuestion::GetAnswers() const
{
    return m_answers;
}

void IntentionQuestion::SetAnswers(const vector<string>& _answers)
{
    m_answers = _answers;
    m_answersHasBeenSet = true;
}

bool IntentionQuestion::AnswersHasBeenSet() const
{
    return m_answersHasBeenSet;
}

