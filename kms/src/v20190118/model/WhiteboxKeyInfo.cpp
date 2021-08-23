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

#include <tencentcloud/kms/v20190118/model/WhiteboxKeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

WhiteboxKeyInfo::WhiteboxKeyInfo() :
    m_keyIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_encryptKeyHasBeenSet(false),
    m_decryptKeyHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_deviceFingerprintBindHasBeenSet(false)
{
}

CoreInternalOutcome WhiteboxKeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.CreatorUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = value["CreatorUin"].GetUint64();
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.OwnerUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetUint64();
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Algorithm") && !value["Algorithm"].IsNull())
    {
        if (!value["Algorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.Algorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithm = string(value["Algorithm"].GetString());
        m_algorithmHasBeenSet = true;
    }

    if (value.HasMember("EncryptKey") && !value["EncryptKey"].IsNull())
    {
        if (!value["EncryptKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.EncryptKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptKey = string(value["EncryptKey"].GetString());
        m_encryptKeyHasBeenSet = true;
    }

    if (value.HasMember("DecryptKey") && !value["DecryptKey"].IsNull())
    {
        if (!value["DecryptKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.DecryptKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_decryptKey = string(value["DecryptKey"].GetString());
        m_decryptKeyHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceFingerprintBind") && !value["DeviceFingerprintBind"].IsNull())
    {
        if (!value["DeviceFingerprintBind"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboxKeyInfo.DeviceFingerprintBind` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deviceFingerprintBind = value["DeviceFingerprintBind"].GetBool();
        m_deviceFingerprintBindHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WhiteboxKeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creatorUin, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptKey.c_str(), allocator).Move(), allocator);
    }

    if (m_decryptKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecryptKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_decryptKey.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceFingerprintBindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceFingerprintBind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceFingerprintBind, allocator);
    }

}


string WhiteboxKeyInfo::GetKeyId() const
{
    return m_keyId;
}

void WhiteboxKeyInfo::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool WhiteboxKeyInfo::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string WhiteboxKeyInfo::GetAlias() const
{
    return m_alias;
}

void WhiteboxKeyInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool WhiteboxKeyInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t WhiteboxKeyInfo::GetCreatorUin() const
{
    return m_creatorUin;
}

void WhiteboxKeyInfo::SetCreatorUin(const uint64_t& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool WhiteboxKeyInfo::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string WhiteboxKeyInfo::GetDescription() const
{
    return m_description;
}

void WhiteboxKeyInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WhiteboxKeyInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t WhiteboxKeyInfo::GetCreateTime() const
{
    return m_createTime;
}

void WhiteboxKeyInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WhiteboxKeyInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WhiteboxKeyInfo::GetStatus() const
{
    return m_status;
}

void WhiteboxKeyInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WhiteboxKeyInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t WhiteboxKeyInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void WhiteboxKeyInfo::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool WhiteboxKeyInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string WhiteboxKeyInfo::GetAlgorithm() const
{
    return m_algorithm;
}

void WhiteboxKeyInfo::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool WhiteboxKeyInfo::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

string WhiteboxKeyInfo::GetEncryptKey() const
{
    return m_encryptKey;
}

void WhiteboxKeyInfo::SetEncryptKey(const string& _encryptKey)
{
    m_encryptKey = _encryptKey;
    m_encryptKeyHasBeenSet = true;
}

bool WhiteboxKeyInfo::EncryptKeyHasBeenSet() const
{
    return m_encryptKeyHasBeenSet;
}

string WhiteboxKeyInfo::GetDecryptKey() const
{
    return m_decryptKey;
}

void WhiteboxKeyInfo::SetDecryptKey(const string& _decryptKey)
{
    m_decryptKey = _decryptKey;
    m_decryptKeyHasBeenSet = true;
}

bool WhiteboxKeyInfo::DecryptKeyHasBeenSet() const
{
    return m_decryptKeyHasBeenSet;
}

string WhiteboxKeyInfo::GetResourceId() const
{
    return m_resourceId;
}

void WhiteboxKeyInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool WhiteboxKeyInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

bool WhiteboxKeyInfo::GetDeviceFingerprintBind() const
{
    return m_deviceFingerprintBind;
}

void WhiteboxKeyInfo::SetDeviceFingerprintBind(const bool& _deviceFingerprintBind)
{
    m_deviceFingerprintBind = _deviceFingerprintBind;
    m_deviceFingerprintBindHasBeenSet = true;
}

bool WhiteboxKeyInfo::DeviceFingerprintBindHasBeenSet() const
{
    return m_deviceFingerprintBindHasBeenSet;
}

