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

#include <tencentcloud/lke/v20231130/model/CreateQARequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CreateQARequest::CreateQARequest() :
    m_botBizIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_attrRangeHasBeenSet(false),
    m_customParamHasBeenSet(false),
    m_attrLabelsHasBeenSet(false),
    m_docBizIdHasBeenSet(false),
    m_cateBizIdHasBeenSet(false),
    m_expireStartHasBeenSet(false),
    m_expireEndHasBeenSet(false),
    m_similarQuestionsHasBeenSet(false),
    m_questionDescHasBeenSet(false)
{
}

string CreateQARequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

    if (m_attrRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attrRange, allocator);
    }

    if (m_customParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customParam.c_str(), allocator).Move(), allocator);
    }

    if (m_attrLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrLabels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attrLabels.begin(); itr != m_attrLabels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_expireStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireStart.c_str(), allocator).Move(), allocator);
    }

    if (m_expireEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_similarQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_similarQuestions.begin(); itr != m_similarQuestions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_questionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_questionDesc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateQARequest::GetBotBizId() const
{
    return m_botBizId;
}

void CreateQARequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool CreateQARequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string CreateQARequest::GetQuestion() const
{
    return m_question;
}

void CreateQARequest::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool CreateQARequest::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string CreateQARequest::GetAnswer() const
{
    return m_answer;
}

void CreateQARequest::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool CreateQARequest::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

uint64_t CreateQARequest::GetAttrRange() const
{
    return m_attrRange;
}

void CreateQARequest::SetAttrRange(const uint64_t& _attrRange)
{
    m_attrRange = _attrRange;
    m_attrRangeHasBeenSet = true;
}

bool CreateQARequest::AttrRangeHasBeenSet() const
{
    return m_attrRangeHasBeenSet;
}

string CreateQARequest::GetCustomParam() const
{
    return m_customParam;
}

void CreateQARequest::SetCustomParam(const string& _customParam)
{
    m_customParam = _customParam;
    m_customParamHasBeenSet = true;
}

bool CreateQARequest::CustomParamHasBeenSet() const
{
    return m_customParamHasBeenSet;
}

vector<AttrLabelRefer> CreateQARequest::GetAttrLabels() const
{
    return m_attrLabels;
}

void CreateQARequest::SetAttrLabels(const vector<AttrLabelRefer>& _attrLabels)
{
    m_attrLabels = _attrLabels;
    m_attrLabelsHasBeenSet = true;
}

bool CreateQARequest::AttrLabelsHasBeenSet() const
{
    return m_attrLabelsHasBeenSet;
}

string CreateQARequest::GetDocBizId() const
{
    return m_docBizId;
}

void CreateQARequest::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool CreateQARequest::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string CreateQARequest::GetCateBizId() const
{
    return m_cateBizId;
}

void CreateQARequest::SetCateBizId(const string& _cateBizId)
{
    m_cateBizId = _cateBizId;
    m_cateBizIdHasBeenSet = true;
}

bool CreateQARequest::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

string CreateQARequest::GetExpireStart() const
{
    return m_expireStart;
}

void CreateQARequest::SetExpireStart(const string& _expireStart)
{
    m_expireStart = _expireStart;
    m_expireStartHasBeenSet = true;
}

bool CreateQARequest::ExpireStartHasBeenSet() const
{
    return m_expireStartHasBeenSet;
}

string CreateQARequest::GetExpireEnd() const
{
    return m_expireEnd;
}

void CreateQARequest::SetExpireEnd(const string& _expireEnd)
{
    m_expireEnd = _expireEnd;
    m_expireEndHasBeenSet = true;
}

bool CreateQARequest::ExpireEndHasBeenSet() const
{
    return m_expireEndHasBeenSet;
}

vector<string> CreateQARequest::GetSimilarQuestions() const
{
    return m_similarQuestions;
}

void CreateQARequest::SetSimilarQuestions(const vector<string>& _similarQuestions)
{
    m_similarQuestions = _similarQuestions;
    m_similarQuestionsHasBeenSet = true;
}

bool CreateQARequest::SimilarQuestionsHasBeenSet() const
{
    return m_similarQuestionsHasBeenSet;
}

string CreateQARequest::GetQuestionDesc() const
{
    return m_questionDesc;
}

void CreateQARequest::SetQuestionDesc(const string& _questionDesc)
{
    m_questionDesc = _questionDesc;
    m_questionDescHasBeenSet = true;
}

bool CreateQARequest::QuestionDescHasBeenSet() const
{
    return m_questionDescHasBeenSet;
}


