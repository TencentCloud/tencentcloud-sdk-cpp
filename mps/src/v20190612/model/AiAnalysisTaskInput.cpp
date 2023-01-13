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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskInput::AiAnalysisTaskInput() :
    m_definitionHasBeenSet(false),
    m_extendedParameterHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("ExtendedParameter") && !value["ExtendedParameter"].IsNull())
    {
        if (!value["ExtendedParameter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskInput.ExtendedParameter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendedParameter = string(value["ExtendedParameter"].GetString());
        m_extendedParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_extendedParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendedParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendedParameter.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AiAnalysisTaskInput::GetDefinition() const
{
    return m_definition;
}

void AiAnalysisTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AiAnalysisTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string AiAnalysisTaskInput::GetExtendedParameter() const
{
    return m_extendedParameter;
}

void AiAnalysisTaskInput::SetExtendedParameter(const string& _extendedParameter)
{
    m_extendedParameter = _extendedParameter;
    m_extendedParameterHasBeenSet = true;
}

bool AiAnalysisTaskInput::ExtendedParameterHasBeenSet() const
{
    return m_extendedParameterHasBeenSet;
}

