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

#include <tencentcloud/lke/v20231130/model/KnowledgeQaOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeQaOutput::KnowledgeQaOutput() :
    m_methodHasBeenSet(false),
    m_useGeneralKnowledgeHasBeenSet(false),
    m_bareAnswerHasBeenSet(false),
    m_showQuestionClarifyHasBeenSet(false),
    m_useQuestionClarifyHasBeenSet(false),
    m_questionClarifyKeywordsHasBeenSet(false),
    m_useRecommendedHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeQaOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaOutput.Method` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_method = value["Method"].GetUint64();
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("UseGeneralKnowledge") && !value["UseGeneralKnowledge"].IsNull())
    {
        if (!value["UseGeneralKnowledge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaOutput.UseGeneralKnowledge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useGeneralKnowledge = value["UseGeneralKnowledge"].GetBool();
        m_useGeneralKnowledgeHasBeenSet = true;
    }

    if (value.HasMember("BareAnswer") && !value["BareAnswer"].IsNull())
    {
        if (!value["BareAnswer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaOutput.BareAnswer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bareAnswer = string(value["BareAnswer"].GetString());
        m_bareAnswerHasBeenSet = true;
    }

    if (value.HasMember("ShowQuestionClarify") && !value["ShowQuestionClarify"].IsNull())
    {
        if (!value["ShowQuestionClarify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaOutput.ShowQuestionClarify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showQuestionClarify = value["ShowQuestionClarify"].GetBool();
        m_showQuestionClarifyHasBeenSet = true;
    }

    if (value.HasMember("UseQuestionClarify") && !value["UseQuestionClarify"].IsNull())
    {
        if (!value["UseQuestionClarify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaOutput.UseQuestionClarify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useQuestionClarify = value["UseQuestionClarify"].GetBool();
        m_useQuestionClarifyHasBeenSet = true;
    }

    if (value.HasMember("QuestionClarifyKeywords") && !value["QuestionClarifyKeywords"].IsNull())
    {
        if (!value["QuestionClarifyKeywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaOutput.QuestionClarifyKeywords` is not array type"));

        const rapidjson::Value &tmpValue = value["QuestionClarifyKeywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_questionClarifyKeywords.push_back((*itr).GetString());
        }
        m_questionClarifyKeywordsHasBeenSet = true;
    }

    if (value.HasMember("UseRecommended") && !value["UseRecommended"].IsNull())
    {
        if (!value["UseRecommended"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaOutput.UseRecommended` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useRecommended = value["UseRecommended"].GetBool();
        m_useRecommendedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeQaOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_method, allocator);
    }

    if (m_useGeneralKnowledgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseGeneralKnowledge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useGeneralKnowledge, allocator);
    }

    if (m_bareAnswerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BareAnswer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bareAnswer.c_str(), allocator).Move(), allocator);
    }

    if (m_showQuestionClarifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowQuestionClarify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showQuestionClarify, allocator);
    }

    if (m_useQuestionClarifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseQuestionClarify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useQuestionClarify, allocator);
    }

    if (m_questionClarifyKeywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionClarifyKeywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_questionClarifyKeywords.begin(); itr != m_questionClarifyKeywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_useRecommendedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseRecommended";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useRecommended, allocator);
    }

}


uint64_t KnowledgeQaOutput::GetMethod() const
{
    return m_method;
}

void KnowledgeQaOutput::SetMethod(const uint64_t& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool KnowledgeQaOutput::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

bool KnowledgeQaOutput::GetUseGeneralKnowledge() const
{
    return m_useGeneralKnowledge;
}

void KnowledgeQaOutput::SetUseGeneralKnowledge(const bool& _useGeneralKnowledge)
{
    m_useGeneralKnowledge = _useGeneralKnowledge;
    m_useGeneralKnowledgeHasBeenSet = true;
}

bool KnowledgeQaOutput::UseGeneralKnowledgeHasBeenSet() const
{
    return m_useGeneralKnowledgeHasBeenSet;
}

string KnowledgeQaOutput::GetBareAnswer() const
{
    return m_bareAnswer;
}

void KnowledgeQaOutput::SetBareAnswer(const string& _bareAnswer)
{
    m_bareAnswer = _bareAnswer;
    m_bareAnswerHasBeenSet = true;
}

bool KnowledgeQaOutput::BareAnswerHasBeenSet() const
{
    return m_bareAnswerHasBeenSet;
}

bool KnowledgeQaOutput::GetShowQuestionClarify() const
{
    return m_showQuestionClarify;
}

void KnowledgeQaOutput::SetShowQuestionClarify(const bool& _showQuestionClarify)
{
    m_showQuestionClarify = _showQuestionClarify;
    m_showQuestionClarifyHasBeenSet = true;
}

bool KnowledgeQaOutput::ShowQuestionClarifyHasBeenSet() const
{
    return m_showQuestionClarifyHasBeenSet;
}

bool KnowledgeQaOutput::GetUseQuestionClarify() const
{
    return m_useQuestionClarify;
}

void KnowledgeQaOutput::SetUseQuestionClarify(const bool& _useQuestionClarify)
{
    m_useQuestionClarify = _useQuestionClarify;
    m_useQuestionClarifyHasBeenSet = true;
}

bool KnowledgeQaOutput::UseQuestionClarifyHasBeenSet() const
{
    return m_useQuestionClarifyHasBeenSet;
}

vector<string> KnowledgeQaOutput::GetQuestionClarifyKeywords() const
{
    return m_questionClarifyKeywords;
}

void KnowledgeQaOutput::SetQuestionClarifyKeywords(const vector<string>& _questionClarifyKeywords)
{
    m_questionClarifyKeywords = _questionClarifyKeywords;
    m_questionClarifyKeywordsHasBeenSet = true;
}

bool KnowledgeQaOutput::QuestionClarifyKeywordsHasBeenSet() const
{
    return m_questionClarifyKeywordsHasBeenSet;
}

bool KnowledgeQaOutput::GetUseRecommended() const
{
    return m_useRecommended;
}

void KnowledgeQaOutput::SetUseRecommended(const bool& _useRecommended)
{
    m_useRecommended = _useRecommended;
    m_useRecommendedHasBeenSet = true;
}

bool KnowledgeQaOutput::UseRecommendedHasBeenSet() const
{
    return m_useRecommendedHasBeenSet;
}

