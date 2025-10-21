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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskHighlightInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskHighlightInput::AiAnalysisTaskHighlightInput() :
    m_definitionHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskHighlightInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskHighlightInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskHighlightInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

}


uint64_t AiAnalysisTaskHighlightInput::GetDefinition() const
{
    return m_definition;
}

void AiAnalysisTaskHighlightInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AiAnalysisTaskHighlightInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

