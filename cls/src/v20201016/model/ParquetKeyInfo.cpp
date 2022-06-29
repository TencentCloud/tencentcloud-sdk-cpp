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

#include <tencentcloud/cls/v20201016/model/ParquetKeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ParquetKeyInfo::ParquetKeyInfo() :
    m_keyNameHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_keyNonExistingFieldHasBeenSet(false)
{
}

CoreInternalOutcome ParquetKeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParquetKeyInfo.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("KeyType") && !value["KeyType"].IsNull())
    {
        if (!value["KeyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParquetKeyInfo.KeyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyType = string(value["KeyType"].GetString());
        m_keyTypeHasBeenSet = true;
    }

    if (value.HasMember("KeyNonExistingField") && !value["KeyNonExistingField"].IsNull())
    {
        if (!value["KeyNonExistingField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParquetKeyInfo.KeyNonExistingField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyNonExistingField = string(value["KeyNonExistingField"].GetString());
        m_keyNonExistingFieldHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParquetKeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_keyType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyNonExistingFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyNonExistingField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyNonExistingField.c_str(), allocator).Move(), allocator);
    }

}


string ParquetKeyInfo::GetKeyName() const
{
    return m_keyName;
}

void ParquetKeyInfo::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool ParquetKeyInfo::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

string ParquetKeyInfo::GetKeyType() const
{
    return m_keyType;
}

void ParquetKeyInfo::SetKeyType(const string& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool ParquetKeyInfo::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

string ParquetKeyInfo::GetKeyNonExistingField() const
{
    return m_keyNonExistingField;
}

void ParquetKeyInfo::SetKeyNonExistingField(const string& _keyNonExistingField)
{
    m_keyNonExistingField = _keyNonExistingField;
    m_keyNonExistingFieldHasBeenSet = true;
}

bool ParquetKeyInfo::KeyNonExistingFieldHasBeenSet() const
{
    return m_keyNonExistingFieldHasBeenSet;
}

