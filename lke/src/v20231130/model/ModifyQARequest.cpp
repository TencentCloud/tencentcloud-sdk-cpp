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

#include <tencentcloud/lke/v20231130/model/ModifyQARequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ModifyQARequest::ModifyQARequest() :
    m_botBizIdHasBeenSet(false),
    m_qaBizIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_customParamHasBeenSet(false),
    m_attrRangeHasBeenSet(false),
    m_attrLabelsHasBeenSet(false),
    m_docBizIdHasBeenSet(false),
    m_cateBizIdHasBeenSet(false),
    m_expireStartHasBeenSet(false),
    m_expireEndHasBeenSet(false),
    m_similarQuestionModifyHasBeenSet(false),
    m_questionDescHasBeenSet(false)
{
}

string ModifyQARequest::ToJsonString() const
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

    if (m_qaBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qaBizId.c_str(), allocator).Move(), allocator);
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

    if (m_customParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customParam.c_str(), allocator).Move(), allocator);
    }

    if (m_attrRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attrRange, allocator);
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

    if (m_similarQuestionModifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestionModify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_similarQuestionModify.ToJsonObject(d[key.c_str()], allocator);
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


string ModifyQARequest::GetBotBizId() const
{
    return m_botBizId;
}

void ModifyQARequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ModifyQARequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

string ModifyQARequest::GetQaBizId() const
{
    return m_qaBizId;
}

void ModifyQARequest::SetQaBizId(const string& _qaBizId)
{
    m_qaBizId = _qaBizId;
    m_qaBizIdHasBeenSet = true;
}

bool ModifyQARequest::QaBizIdHasBeenSet() const
{
    return m_qaBizIdHasBeenSet;
}

string ModifyQARequest::GetQuestion() const
{
    return m_question;
}

void ModifyQARequest::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool ModifyQARequest::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string ModifyQARequest::GetAnswer() const
{
    return m_answer;
}

void ModifyQARequest::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool ModifyQARequest::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

string ModifyQARequest::GetCustomParam() const
{
    return m_customParam;
}

void ModifyQARequest::SetCustomParam(const string& _customParam)
{
    m_customParam = _customParam;
    m_customParamHasBeenSet = true;
}

bool ModifyQARequest::CustomParamHasBeenSet() const
{
    return m_customParamHasBeenSet;
}

uint64_t ModifyQARequest::GetAttrRange() const
{
    return m_attrRange;
}

void ModifyQARequest::SetAttrRange(const uint64_t& _attrRange)
{
    m_attrRange = _attrRange;
    m_attrRangeHasBeenSet = true;
}

bool ModifyQARequest::AttrRangeHasBeenSet() const
{
    return m_attrRangeHasBeenSet;
}

vector<AttrLabelRefer> ModifyQARequest::GetAttrLabels() const
{
    return m_attrLabels;
}

void ModifyQARequest::SetAttrLabels(const vector<AttrLabelRefer>& _attrLabels)
{
    m_attrLabels = _attrLabels;
    m_attrLabelsHasBeenSet = true;
}

bool ModifyQARequest::AttrLabelsHasBeenSet() const
{
    return m_attrLabelsHasBeenSet;
}

string ModifyQARequest::GetDocBizId() const
{
    return m_docBizId;
}

void ModifyQARequest::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool ModifyQARequest::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string ModifyQARequest::GetCateBizId() const
{
    return m_cateBizId;
}

void ModifyQARequest::SetCateBizId(const string& _cateBizId)
{
    m_cateBizId = _cateBizId;
    m_cateBizIdHasBeenSet = true;
}

bool ModifyQARequest::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

string ModifyQARequest::GetExpireStart() const
{
    return m_expireStart;
}

void ModifyQARequest::SetExpireStart(const string& _expireStart)
{
    m_expireStart = _expireStart;
    m_expireStartHasBeenSet = true;
}

bool ModifyQARequest::ExpireStartHasBeenSet() const
{
    return m_expireStartHasBeenSet;
}

string ModifyQARequest::GetExpireEnd() const
{
    return m_expireEnd;
}

void ModifyQARequest::SetExpireEnd(const string& _expireEnd)
{
    m_expireEnd = _expireEnd;
    m_expireEndHasBeenSet = true;
}

bool ModifyQARequest::ExpireEndHasBeenSet() const
{
    return m_expireEndHasBeenSet;
}

SimilarQuestionModify ModifyQARequest::GetSimilarQuestionModify() const
{
    return m_similarQuestionModify;
}

void ModifyQARequest::SetSimilarQuestionModify(const SimilarQuestionModify& _similarQuestionModify)
{
    m_similarQuestionModify = _similarQuestionModify;
    m_similarQuestionModifyHasBeenSet = true;
}

bool ModifyQARequest::SimilarQuestionModifyHasBeenSet() const
{
    return m_similarQuestionModifyHasBeenSet;
}

string ModifyQARequest::GetQuestionDesc() const
{
    return m_questionDesc;
}

void ModifyQARequest::SetQuestionDesc(const string& _questionDesc)
{
    m_questionDesc = _questionDesc;
    m_questionDescHasBeenSet = true;
}

bool ModifyQARequest::QuestionDescHasBeenSet() const
{
    return m_questionDescHasBeenSet;
}


