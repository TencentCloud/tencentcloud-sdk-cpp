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

#include <tencentcloud/adp/v20260520/model/QACreateSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

QACreateSpec::QACreateSpec() :
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_docIdHasBeenSet(false),
    m_effectiveDomainHasBeenSet(false),
    m_expirationPolicyHasBeenSet(false),
    m_labelRefListHasBeenSet(false),
    m_questionDescriptionHasBeenSet(false),
    m_similarQuestionListHasBeenSet(false)
{
}

CoreInternalOutcome QACreateSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QACreateSpec.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QACreateSpec.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QACreateSpec.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QACreateSpec.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("EffectiveDomain") && !value["EffectiveDomain"].IsNull())
    {
        if (!value["EffectiveDomain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QACreateSpec.EffectiveDomain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveDomain = value["EffectiveDomain"].GetInt64();
        m_effectiveDomainHasBeenSet = true;
    }

    if (value.HasMember("ExpirationPolicy") && !value["ExpirationPolicy"].IsNull())
    {
        if (!value["ExpirationPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QACreateSpec.ExpirationPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_expirationPolicy.Deserialize(value["ExpirationPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_expirationPolicyHasBeenSet = true;
    }

    if (value.HasMember("LabelRefList") && !value["LabelRefList"].IsNull())
    {
        if (!value["LabelRefList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QACreateSpec.LabelRefList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelRefList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelRefIdentity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelRefList.push_back(item);
        }
        m_labelRefListHasBeenSet = true;
    }

    if (value.HasMember("QuestionDescription") && !value["QuestionDescription"].IsNull())
    {
        if (!value["QuestionDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QACreateSpec.QuestionDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionDescription = string(value["QuestionDescription"].GetString());
        m_questionDescriptionHasBeenSet = true;
    }

    if (value.HasMember("SimilarQuestionList") && !value["SimilarQuestionList"].IsNull())
    {
        if (!value["SimilarQuestionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QACreateSpec.SimilarQuestionList` is not array type"));

        const rapidjson::Value &tmpValue = value["SimilarQuestionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_similarQuestionList.push_back((*itr).GetString());
        }
        m_similarQuestionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QACreateSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveDomain, allocator);
    }

    if (m_expirationPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expirationPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_labelRefListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelRefList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelRefList.begin(); itr != m_labelRefList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_questionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_similarQuestionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_similarQuestionList.begin(); itr != m_similarQuestionList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string QACreateSpec::GetQuestion() const
{
    return m_question;
}

void QACreateSpec::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool QACreateSpec::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string QACreateSpec::GetAnswer() const
{
    return m_answer;
}

void QACreateSpec::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool QACreateSpec::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

string QACreateSpec::GetCategoryId() const
{
    return m_categoryId;
}

void QACreateSpec::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool QACreateSpec::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string QACreateSpec::GetDocId() const
{
    return m_docId;
}

void QACreateSpec::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool QACreateSpec::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

int64_t QACreateSpec::GetEffectiveDomain() const
{
    return m_effectiveDomain;
}

void QACreateSpec::SetEffectiveDomain(const int64_t& _effectiveDomain)
{
    m_effectiveDomain = _effectiveDomain;
    m_effectiveDomainHasBeenSet = true;
}

bool QACreateSpec::EffectiveDomainHasBeenSet() const
{
    return m_effectiveDomainHasBeenSet;
}

ExpirationPolicy QACreateSpec::GetExpirationPolicy() const
{
    return m_expirationPolicy;
}

void QACreateSpec::SetExpirationPolicy(const ExpirationPolicy& _expirationPolicy)
{
    m_expirationPolicy = _expirationPolicy;
    m_expirationPolicyHasBeenSet = true;
}

bool QACreateSpec::ExpirationPolicyHasBeenSet() const
{
    return m_expirationPolicyHasBeenSet;
}

vector<LabelRefIdentity> QACreateSpec::GetLabelRefList() const
{
    return m_labelRefList;
}

void QACreateSpec::SetLabelRefList(const vector<LabelRefIdentity>& _labelRefList)
{
    m_labelRefList = _labelRefList;
    m_labelRefListHasBeenSet = true;
}

bool QACreateSpec::LabelRefListHasBeenSet() const
{
    return m_labelRefListHasBeenSet;
}

string QACreateSpec::GetQuestionDescription() const
{
    return m_questionDescription;
}

void QACreateSpec::SetQuestionDescription(const string& _questionDescription)
{
    m_questionDescription = _questionDescription;
    m_questionDescriptionHasBeenSet = true;
}

bool QACreateSpec::QuestionDescriptionHasBeenSet() const
{
    return m_questionDescriptionHasBeenSet;
}

vector<string> QACreateSpec::GetSimilarQuestionList() const
{
    return m_similarQuestionList;
}

void QACreateSpec::SetSimilarQuestionList(const vector<string>& _similarQuestionList)
{
    m_similarQuestionList = _similarQuestionList;
    m_similarQuestionListHasBeenSet = true;
}

bool QACreateSpec::SimilarQuestionListHasBeenSet() const
{
    return m_similarQuestionListHasBeenSet;
}

