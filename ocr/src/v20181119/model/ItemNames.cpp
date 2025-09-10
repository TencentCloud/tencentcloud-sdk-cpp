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

#include <tencentcloud/ocr/v20181119/model/ItemNames.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ItemNames::ItemNames() :
    m_keyNameHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_keyPromptHasBeenSet(false)
{
}

CoreInternalOutcome ItemNames::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ItemNames.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("KeyType") && !value["KeyType"].IsNull())
    {
        if (!value["KeyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ItemNames.KeyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyType = value["KeyType"].GetInt64();
        m_keyTypeHasBeenSet = true;
    }

    if (value.HasMember("KeyPrompt") && !value["KeyPrompt"].IsNull())
    {
        if (!value["KeyPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ItemNames.KeyPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyPrompt = string(value["KeyPrompt"].GetString());
        m_keyPromptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ItemNames::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyType, allocator);
    }

    if (m_keyPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyPrompt.c_str(), allocator).Move(), allocator);
    }

}


string ItemNames::GetKeyName() const
{
    return m_keyName;
}

void ItemNames::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool ItemNames::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

int64_t ItemNames::GetKeyType() const
{
    return m_keyType;
}

void ItemNames::SetKeyType(const int64_t& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool ItemNames::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

string ItemNames::GetKeyPrompt() const
{
    return m_keyPrompt;
}

void ItemNames::SetKeyPrompt(const string& _keyPrompt)
{
    m_keyPrompt = _keyPrompt;
    m_keyPromptHasBeenSet = true;
}

bool ItemNames::KeyPromptHasBeenSet() const
{
    return m_keyPromptHasBeenSet;
}

