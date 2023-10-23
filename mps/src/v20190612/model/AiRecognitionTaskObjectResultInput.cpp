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

#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskObjectResultInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiRecognitionTaskObjectResultInput::AiRecognitionTaskObjectResultInput() :
    m_definitionHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskObjectResultInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskObjectResultInput.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskObjectResultInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

}


int64_t AiRecognitionTaskObjectResultInput::GetDefinition() const
{
    return m_definition;
}

void AiRecognitionTaskObjectResultInput::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AiRecognitionTaskObjectResultInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

