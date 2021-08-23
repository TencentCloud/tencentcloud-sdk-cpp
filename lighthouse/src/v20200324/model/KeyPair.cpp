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

#include <tencentcloud/lighthouse/v20200324/model/KeyPair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

KeyPair::KeyPair() :
    m_keyIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_associatedInstanceIdsHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_privateKeyHasBeenSet(false)
{
}

CoreInternalOutcome KeyPair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyPair.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyPair.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("PublicKey") && !value["PublicKey"].IsNull())
    {
        if (!value["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyPair.PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(value["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }

    if (value.HasMember("AssociatedInstanceIds") && !value["AssociatedInstanceIds"].IsNull())
    {
        if (!value["AssociatedInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeyPair.AssociatedInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AssociatedInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_associatedInstanceIds.push_back((*itr).GetString());
        }
        m_associatedInstanceIdsHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyPair.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("PrivateKey") && !value["PrivateKey"].IsNull())
    {
        if (!value["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyPair.PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(value["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyPair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_associatedInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_associatedInstanceIds.begin(); itr != m_associatedInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

}


string KeyPair::GetKeyId() const
{
    return m_keyId;
}

void KeyPair::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool KeyPair::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string KeyPair::GetKeyName() const
{
    return m_keyName;
}

void KeyPair::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool KeyPair::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

string KeyPair::GetPublicKey() const
{
    return m_publicKey;
}

void KeyPair::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool KeyPair::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

vector<string> KeyPair::GetAssociatedInstanceIds() const
{
    return m_associatedInstanceIds;
}

void KeyPair::SetAssociatedInstanceIds(const vector<string>& _associatedInstanceIds)
{
    m_associatedInstanceIds = _associatedInstanceIds;
    m_associatedInstanceIdsHasBeenSet = true;
}

bool KeyPair::AssociatedInstanceIdsHasBeenSet() const
{
    return m_associatedInstanceIdsHasBeenSet;
}

string KeyPair::GetCreatedTime() const
{
    return m_createdTime;
}

void KeyPair::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool KeyPair::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string KeyPair::GetPrivateKey() const
{
    return m_privateKey;
}

void KeyPair::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool KeyPair::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

