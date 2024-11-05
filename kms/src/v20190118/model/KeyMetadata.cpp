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

#include <tencentcloud/kms/v20190118/model/KeyMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

KeyMetadata::KeyMetadata() :
    m_keyIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keyStateHasBeenSet(false),
    m_keyUsageHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_keyRotationEnabledHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_nextRotateTimeHasBeenSet(false),
    m_deletionDateHasBeenSet(false),
    m_originHasBeenSet(false),
    m_validToHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_hsmClusterIdHasBeenSet(false),
    m_rotateDaysHasBeenSet(false),
    m_lastRotateTimeHasBeenSet(false)
{
}

CoreInternalOutcome KeyMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("KeyState") && !value["KeyState"].IsNull())
    {
        if (!value["KeyState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.KeyState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyState = string(value["KeyState"].GetString());
        m_keyStateHasBeenSet = true;
    }

    if (value.HasMember("KeyUsage") && !value["KeyUsage"].IsNull())
    {
        if (!value["KeyUsage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.KeyUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyUsage = string(value["KeyUsage"].GetString());
        m_keyUsageHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.CreatorUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = value["CreatorUin"].GetUint64();
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("KeyRotationEnabled") && !value["KeyRotationEnabled"].IsNull())
    {
        if (!value["KeyRotationEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.KeyRotationEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_keyRotationEnabled = value["KeyRotationEnabled"].GetBool();
        m_keyRotationEnabledHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("NextRotateTime") && !value["NextRotateTime"].IsNull())
    {
        if (!value["NextRotateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.NextRotateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nextRotateTime = value["NextRotateTime"].GetUint64();
        m_nextRotateTimeHasBeenSet = true;
    }

    if (value.HasMember("DeletionDate") && !value["DeletionDate"].IsNull())
    {
        if (!value["DeletionDate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.DeletionDate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deletionDate = value["DeletionDate"].GetUint64();
        m_deletionDateHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("ValidTo") && !value["ValidTo"].IsNull())
    {
        if (!value["ValidTo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.ValidTo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validTo = value["ValidTo"].GetUint64();
        m_validToHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("HsmClusterId") && !value["HsmClusterId"].IsNull())
    {
        if (!value["HsmClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.HsmClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hsmClusterId = string(value["HsmClusterId"].GetString());
        m_hsmClusterIdHasBeenSet = true;
    }

    if (value.HasMember("RotateDays") && !value["RotateDays"].IsNull())
    {
        if (!value["RotateDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.RotateDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rotateDays = value["RotateDays"].GetUint64();
        m_rotateDaysHasBeenSet = true;
    }

    if (value.HasMember("LastRotateTime") && !value["LastRotateTime"].IsNull())
    {
        if (!value["LastRotateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KeyMetadata.LastRotateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastRotateTime = value["LastRotateTime"].GetUint64();
        m_lastRotateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_keyStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyState.c_str(), allocator).Move(), allocator);
    }

    if (m_keyUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creatorUin, allocator);
    }

    if (m_keyRotationEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyRotationEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyRotationEnabled, allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_nextRotateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextRotateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextRotateTime, allocator);
    }

    if (m_deletionDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletionDate, allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
    }

    if (m_validToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validTo, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_hsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hsmClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_rotateDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotateDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotateDays, allocator);
    }

    if (m_lastRotateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRotateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastRotateTime, allocator);
    }

}


string KeyMetadata::GetKeyId() const
{
    return m_keyId;
}

void KeyMetadata::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool KeyMetadata::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string KeyMetadata::GetAlias() const
{
    return m_alias;
}

void KeyMetadata::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool KeyMetadata::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t KeyMetadata::GetCreateTime() const
{
    return m_createTime;
}

void KeyMetadata::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool KeyMetadata::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string KeyMetadata::GetDescription() const
{
    return m_description;
}

void KeyMetadata::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool KeyMetadata::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string KeyMetadata::GetKeyState() const
{
    return m_keyState;
}

void KeyMetadata::SetKeyState(const string& _keyState)
{
    m_keyState = _keyState;
    m_keyStateHasBeenSet = true;
}

bool KeyMetadata::KeyStateHasBeenSet() const
{
    return m_keyStateHasBeenSet;
}

string KeyMetadata::GetKeyUsage() const
{
    return m_keyUsage;
}

void KeyMetadata::SetKeyUsage(const string& _keyUsage)
{
    m_keyUsage = _keyUsage;
    m_keyUsageHasBeenSet = true;
}

bool KeyMetadata::KeyUsageHasBeenSet() const
{
    return m_keyUsageHasBeenSet;
}

int64_t KeyMetadata::GetType() const
{
    return m_type;
}

void KeyMetadata::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool KeyMetadata::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t KeyMetadata::GetCreatorUin() const
{
    return m_creatorUin;
}

void KeyMetadata::SetCreatorUin(const uint64_t& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool KeyMetadata::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

bool KeyMetadata::GetKeyRotationEnabled() const
{
    return m_keyRotationEnabled;
}

void KeyMetadata::SetKeyRotationEnabled(const bool& _keyRotationEnabled)
{
    m_keyRotationEnabled = _keyRotationEnabled;
    m_keyRotationEnabledHasBeenSet = true;
}

bool KeyMetadata::KeyRotationEnabledHasBeenSet() const
{
    return m_keyRotationEnabledHasBeenSet;
}

string KeyMetadata::GetOwner() const
{
    return m_owner;
}

void KeyMetadata::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool KeyMetadata::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

uint64_t KeyMetadata::GetNextRotateTime() const
{
    return m_nextRotateTime;
}

void KeyMetadata::SetNextRotateTime(const uint64_t& _nextRotateTime)
{
    m_nextRotateTime = _nextRotateTime;
    m_nextRotateTimeHasBeenSet = true;
}

bool KeyMetadata::NextRotateTimeHasBeenSet() const
{
    return m_nextRotateTimeHasBeenSet;
}

uint64_t KeyMetadata::GetDeletionDate() const
{
    return m_deletionDate;
}

void KeyMetadata::SetDeletionDate(const uint64_t& _deletionDate)
{
    m_deletionDate = _deletionDate;
    m_deletionDateHasBeenSet = true;
}

bool KeyMetadata::DeletionDateHasBeenSet() const
{
    return m_deletionDateHasBeenSet;
}

string KeyMetadata::GetOrigin() const
{
    return m_origin;
}

void KeyMetadata::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool KeyMetadata::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

uint64_t KeyMetadata::GetValidTo() const
{
    return m_validTo;
}

void KeyMetadata::SetValidTo(const uint64_t& _validTo)
{
    m_validTo = _validTo;
    m_validToHasBeenSet = true;
}

bool KeyMetadata::ValidToHasBeenSet() const
{
    return m_validToHasBeenSet;
}

string KeyMetadata::GetResourceId() const
{
    return m_resourceId;
}

void KeyMetadata::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool KeyMetadata::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string KeyMetadata::GetHsmClusterId() const
{
    return m_hsmClusterId;
}

void KeyMetadata::SetHsmClusterId(const string& _hsmClusterId)
{
    m_hsmClusterId = _hsmClusterId;
    m_hsmClusterIdHasBeenSet = true;
}

bool KeyMetadata::HsmClusterIdHasBeenSet() const
{
    return m_hsmClusterIdHasBeenSet;
}

uint64_t KeyMetadata::GetRotateDays() const
{
    return m_rotateDays;
}

void KeyMetadata::SetRotateDays(const uint64_t& _rotateDays)
{
    m_rotateDays = _rotateDays;
    m_rotateDaysHasBeenSet = true;
}

bool KeyMetadata::RotateDaysHasBeenSet() const
{
    return m_rotateDaysHasBeenSet;
}

uint64_t KeyMetadata::GetLastRotateTime() const
{
    return m_lastRotateTime;
}

void KeyMetadata::SetLastRotateTime(const uint64_t& _lastRotateTime)
{
    m_lastRotateTime = _lastRotateTime;
    m_lastRotateTimeHasBeenSet = true;
}

bool KeyMetadata::LastRotateTimeHasBeenSet() const
{
    return m_lastRotateTimeHasBeenSet;
}

