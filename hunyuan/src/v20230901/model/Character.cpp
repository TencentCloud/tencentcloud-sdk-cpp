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

#include <tencentcloud/hunyuan/v20230901/model/Character.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Character::Character() :
    m_nameHasBeenSet(false),
    m_systemPromptHasBeenSet(false)
{
}

CoreInternalOutcome Character::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Character.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SystemPrompt") && !value["SystemPrompt"].IsNull())
    {
        if (!value["SystemPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Character.SystemPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemPrompt = string(value["SystemPrompt"].GetString());
        m_systemPromptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Character::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_systemPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemPrompt.c_str(), allocator).Move(), allocator);
    }

}


string Character::GetName() const
{
    return m_name;
}

void Character::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Character::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Character::GetSystemPrompt() const
{
    return m_systemPrompt;
}

void Character::SetSystemPrompt(const string& _systemPrompt)
{
    m_systemPrompt = _systemPrompt;
    m_systemPromptHasBeenSet = true;
}

bool Character::SystemPromptHasBeenSet() const
{
    return m_systemPromptHasBeenSet;
}

