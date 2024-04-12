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
    m_bareAnswerHasBeenSet(false)
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

