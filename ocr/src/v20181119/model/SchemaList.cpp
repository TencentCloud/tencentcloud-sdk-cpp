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

#include <tencentcloud/ocr/v20181119/model/SchemaList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SchemaList::SchemaList() :
    m_keyNameHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_keyPromptHasBeenSet(false),
    m_subItemsHasBeenSet(false)
{
}

CoreInternalOutcome SchemaList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaList.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("KeyType") && !value["KeyType"].IsNull())
    {
        if (!value["KeyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaList.KeyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyType = value["KeyType"].GetInt64();
        m_keyTypeHasBeenSet = true;
    }

    if (value.HasMember("KeyPrompt") && !value["KeyPrompt"].IsNull())
    {
        if (!value["KeyPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaList.KeyPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyPrompt = string(value["KeyPrompt"].GetString());
        m_keyPromptHasBeenSet = true;
    }

    if (value.HasMember("SubItems") && !value["SubItems"].IsNull())
    {
        if (!value["SubItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchemaList.SubItems` is not array type"));

        const rapidjson::Value &tmpValue = value["SubItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SchemaList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subItems.push_back(item);
        }
        m_subItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchemaList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_subItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subItems.begin(); itr != m_subItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SchemaList::GetKeyName() const
{
    return m_keyName;
}

void SchemaList::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool SchemaList::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

int64_t SchemaList::GetKeyType() const
{
    return m_keyType;
}

void SchemaList::SetKeyType(const int64_t& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool SchemaList::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

string SchemaList::GetKeyPrompt() const
{
    return m_keyPrompt;
}

void SchemaList::SetKeyPrompt(const string& _keyPrompt)
{
    m_keyPrompt = _keyPrompt;
    m_keyPromptHasBeenSet = true;
}

bool SchemaList::KeyPromptHasBeenSet() const
{
    return m_keyPromptHasBeenSet;
}

vector<SchemaList> SchemaList::GetSubItems() const
{
    return m_subItems;
}

void SchemaList::SetSubItems(const vector<SchemaList>& _subItems)
{
    m_subItems = _subItems;
    m_subItemsHasBeenSet = true;
}

bool SchemaList::SubItemsHasBeenSet() const
{
    return m_subItemsHasBeenSet;
}

