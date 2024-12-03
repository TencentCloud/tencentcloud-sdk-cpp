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

#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiRecognitionTaskInput::AiRecognitionTaskInput() :
    m_definitionHasBeenSet(false),
    m_userExtParaHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("UserExtPara") && !value["UserExtPara"].IsNull())
    {
        if (!value["UserExtPara"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskInput.UserExtPara` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userExtPara = string(value["UserExtPara"].GetString());
        m_userExtParaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_userExtParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserExtPara";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userExtPara.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AiRecognitionTaskInput::GetDefinition() const
{
    return m_definition;
}

void AiRecognitionTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AiRecognitionTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string AiRecognitionTaskInput::GetUserExtPara() const
{
    return m_userExtPara;
}

void AiRecognitionTaskInput::SetUserExtPara(const string& _userExtPara)
{
    m_userExtPara = _userExtPara;
    m_userExtParaHasBeenSet = true;
}

bool AiRecognitionTaskInput::UserExtParaHasBeenSet() const
{
    return m_userExtParaHasBeenSet;
}

