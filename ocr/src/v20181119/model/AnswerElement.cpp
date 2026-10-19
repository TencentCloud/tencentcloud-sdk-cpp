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

#include <tencentcloud/ocr/v20181119/model/AnswerElement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

AnswerElement::AnswerElement() :
    m_isCorrectHasBeenSet(false),
    m_answerAnalysisHasBeenSet(false),
    m_rightAnswerHasBeenSet(false)
{
}

CoreInternalOutcome AnswerElement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsCorrect") && !value["IsCorrect"].IsNull())
    {
        if (!value["IsCorrect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerElement.IsCorrect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCorrect = value["IsCorrect"].GetBool();
        m_isCorrectHasBeenSet = true;
    }

    if (value.HasMember("AnswerAnalysis") && !value["AnswerAnalysis"].IsNull())
    {
        if (!value["AnswerAnalysis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerElement.AnswerAnalysis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answerAnalysis = string(value["AnswerAnalysis"].GetString());
        m_answerAnalysisHasBeenSet = true;
    }

    if (value.HasMember("RightAnswer") && !value["RightAnswer"].IsNull())
    {
        if (!value["RightAnswer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnswerElement.RightAnswer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rightAnswer = string(value["RightAnswer"].GetString());
        m_rightAnswerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnswerElement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isCorrectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCorrect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCorrect, allocator);
    }

    if (m_answerAnalysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnswerAnalysis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answerAnalysis.c_str(), allocator).Move(), allocator);
    }

    if (m_rightAnswerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightAnswer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rightAnswer.c_str(), allocator).Move(), allocator);
    }

}


bool AnswerElement::GetIsCorrect() const
{
    return m_isCorrect;
}

void AnswerElement::SetIsCorrect(const bool& _isCorrect)
{
    m_isCorrect = _isCorrect;
    m_isCorrectHasBeenSet = true;
}

bool AnswerElement::IsCorrectHasBeenSet() const
{
    return m_isCorrectHasBeenSet;
}

string AnswerElement::GetAnswerAnalysis() const
{
    return m_answerAnalysis;
}

void AnswerElement::SetAnswerAnalysis(const string& _answerAnalysis)
{
    m_answerAnalysis = _answerAnalysis;
    m_answerAnalysisHasBeenSet = true;
}

bool AnswerElement::AnswerAnalysisHasBeenSet() const
{
    return m_answerAnalysisHasBeenSet;
}

string AnswerElement::GetRightAnswer() const
{
    return m_rightAnswer;
}

void AnswerElement::SetRightAnswer(const string& _rightAnswer)
{
    m_rightAnswer = _rightAnswer;
    m_rightAnswerHasBeenSet = true;
}

bool AnswerElement::RightAnswerHasBeenSet() const
{
    return m_rightAnswerHasBeenSet;
}

