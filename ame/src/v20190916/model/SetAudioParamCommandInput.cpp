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

#include <tencentcloud/ame/v20190916/model/SetAudioParamCommandInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

SetAudioParamCommandInput::SetAudioParamCommandInput() :
    m_definitionHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome SetAudioParamCommandInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetAudioParamCommandInput.Definition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_definition = string(value["Definition"].GetString());
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetAudioParamCommandInput.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetAudioParamCommandInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_definition.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string SetAudioParamCommandInput::GetDefinition() const
{
    return m_definition;
}

void SetAudioParamCommandInput::SetDefinition(const string& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool SetAudioParamCommandInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string SetAudioParamCommandInput::GetType() const
{
    return m_type;
}

void SetAudioParamCommandInput::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SetAudioParamCommandInput::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

