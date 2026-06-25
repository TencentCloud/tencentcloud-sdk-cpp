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

#include <tencentcloud/clb/v20180317/model/CreatedKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CreatedKey::CreatedKey() :
    m_keyHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyNameHasBeenSet(false)
{
}

CoreInternalOutcome CreatedKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedKey.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedKey.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedKey.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreatedKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

}


string CreatedKey::GetKey() const
{
    return m_key;
}

void CreatedKey::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool CreatedKey::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string CreatedKey::GetKeyId() const
{
    return m_keyId;
}

void CreatedKey::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool CreatedKey::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string CreatedKey::GetKeyName() const
{
    return m_keyName;
}

void CreatedKey::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool CreatedKey::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

