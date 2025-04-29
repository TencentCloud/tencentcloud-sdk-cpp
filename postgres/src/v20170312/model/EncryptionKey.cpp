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

#include <tencentcloud/postgres/v20170312/model/EncryptionKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

EncryptionKey::EncryptionKey() :
    m_keyIdHasBeenSet(false),
    m_keyAliasHasBeenSet(false),
    m_dEKCipherTextBlobHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_keyRegionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_kMSClusterIdHasBeenSet(false)
{
}

CoreInternalOutcome EncryptionKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionKey.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("KeyAlias") && !value["KeyAlias"].IsNull())
    {
        if (!value["KeyAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionKey.KeyAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyAlias = string(value["KeyAlias"].GetString());
        m_keyAliasHasBeenSet = true;
    }

    if (value.HasMember("DEKCipherTextBlob") && !value["DEKCipherTextBlob"].IsNull())
    {
        if (!value["DEKCipherTextBlob"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionKey.DEKCipherTextBlob` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dEKCipherTextBlob = string(value["DEKCipherTextBlob"].GetString());
        m_dEKCipherTextBlobHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionKey.IsEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetInt64();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("KeyRegion") && !value["KeyRegion"].IsNull())
    {
        if (!value["KeyRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionKey.KeyRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyRegion = string(value["KeyRegion"].GetString());
        m_keyRegionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionKey.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("KMSClusterId") && !value["KMSClusterId"].IsNull())
    {
        if (!value["KMSClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionKey.KMSClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kMSClusterId = string(value["KMSClusterId"].GetString());
        m_kMSClusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EncryptionKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_dEKCipherTextBlobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DEKCipherTextBlob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dEKCipherTextBlob.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_keyRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_kMSClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KMSClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kMSClusterId.c_str(), allocator).Move(), allocator);
    }

}


string EncryptionKey::GetKeyId() const
{
    return m_keyId;
}

void EncryptionKey::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool EncryptionKey::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string EncryptionKey::GetKeyAlias() const
{
    return m_keyAlias;
}

void EncryptionKey::SetKeyAlias(const string& _keyAlias)
{
    m_keyAlias = _keyAlias;
    m_keyAliasHasBeenSet = true;
}

bool EncryptionKey::KeyAliasHasBeenSet() const
{
    return m_keyAliasHasBeenSet;
}

string EncryptionKey::GetDEKCipherTextBlob() const
{
    return m_dEKCipherTextBlob;
}

void EncryptionKey::SetDEKCipherTextBlob(const string& _dEKCipherTextBlob)
{
    m_dEKCipherTextBlob = _dEKCipherTextBlob;
    m_dEKCipherTextBlobHasBeenSet = true;
}

bool EncryptionKey::DEKCipherTextBlobHasBeenSet() const
{
    return m_dEKCipherTextBlobHasBeenSet;
}

int64_t EncryptionKey::GetIsEnabled() const
{
    return m_isEnabled;
}

void EncryptionKey::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool EncryptionKey::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

string EncryptionKey::GetKeyRegion() const
{
    return m_keyRegion;
}

void EncryptionKey::SetKeyRegion(const string& _keyRegion)
{
    m_keyRegion = _keyRegion;
    m_keyRegionHasBeenSet = true;
}

bool EncryptionKey::KeyRegionHasBeenSet() const
{
    return m_keyRegionHasBeenSet;
}

string EncryptionKey::GetCreateTime() const
{
    return m_createTime;
}

void EncryptionKey::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EncryptionKey::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string EncryptionKey::GetKMSClusterId() const
{
    return m_kMSClusterId;
}

void EncryptionKey::SetKMSClusterId(const string& _kMSClusterId)
{
    m_kMSClusterId = _kMSClusterId;
    m_kMSClusterIdHasBeenSet = true;
}

bool EncryptionKey::KMSClusterIdHasBeenSet() const
{
    return m_kMSClusterIdHasBeenSet;
}

