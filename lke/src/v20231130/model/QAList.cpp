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

#include <tencentcloud/lke/v20231130/model/QAList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

QAList::QAList() :
    m_qaBizIdHasBeenSet(false),
    m_isAcceptedHasBeenSet(false),
    m_cateBizIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false)
{
}

CoreInternalOutcome QAList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QaBizId") && !value["QaBizId"].IsNull())
    {
        if (!value["QaBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAList.QaBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaBizId = string(value["QaBizId"].GetString());
        m_qaBizIdHasBeenSet = true;
    }

    if (value.HasMember("IsAccepted") && !value["IsAccepted"].IsNull())
    {
        if (!value["IsAccepted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QAList.IsAccepted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAccepted = value["IsAccepted"].GetBool();
        m_isAcceptedHasBeenSet = true;
    }

    if (value.HasMember("CateBizId") && !value["CateBizId"].IsNull())
    {
        if (!value["CateBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAList.CateBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cateBizId = string(value["CateBizId"].GetString());
        m_cateBizIdHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAList.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QAList.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QAList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qaBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_isAcceptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAccepted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAccepted, allocator);
    }

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

}


string QAList::GetQaBizId() const
{
    return m_qaBizId;
}

void QAList::SetQaBizId(const string& _qaBizId)
{
    m_qaBizId = _qaBizId;
    m_qaBizIdHasBeenSet = true;
}

bool QAList::QaBizIdHasBeenSet() const
{
    return m_qaBizIdHasBeenSet;
}

bool QAList::GetIsAccepted() const
{
    return m_isAccepted;
}

void QAList::SetIsAccepted(const bool& _isAccepted)
{
    m_isAccepted = _isAccepted;
    m_isAcceptedHasBeenSet = true;
}

bool QAList::IsAcceptedHasBeenSet() const
{
    return m_isAcceptedHasBeenSet;
}

string QAList::GetCateBizId() const
{
    return m_cateBizId;
}

void QAList::SetCateBizId(const string& _cateBizId)
{
    m_cateBizId = _cateBizId;
    m_cateBizIdHasBeenSet = true;
}

bool QAList::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

string QAList::GetQuestion() const
{
    return m_question;
}

void QAList::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool QAList::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string QAList::GetAnswer() const
{
    return m_answer;
}

void QAList::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool QAList::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

