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

#include <tencentcloud/tse/v20201207/model/CNAPIGwSecretKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CNAPIGwSecretKey::CNAPIGwSecretKey() :
    m_secretKeyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_secretTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_generateTypeHasBeenSet(false),
    m_secretValueHasBeenSet(false),
    m_kmsKeyNameHasBeenSet(false),
    m_kmsKeyVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_canBindHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_bindCountHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_jWTCredentialConfigHasBeenSet(false),
    m_oAuthCredentialConfigHasBeenSet(false),
    m_oIDCCredentialConfigHasBeenSet(false),
    m_providerHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwSecretKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretKeyId") && !value["SecretKeyId"].IsNull())
    {
        if (!value["SecretKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.SecretKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKeyId = string(value["SecretKeyId"].GetString());
        m_secretKeyIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SecretType") && !value["SecretType"].IsNull())
    {
        if (!value["SecretType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.SecretType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretType = string(value["SecretType"].GetString());
        m_secretTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("GenerateType") && !value["GenerateType"].IsNull())
    {
        if (!value["GenerateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.GenerateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generateType = string(value["GenerateType"].GetString());
        m_generateTypeHasBeenSet = true;
    }

    if (value.HasMember("SecretValue") && !value["SecretValue"].IsNull())
    {
        if (!value["SecretValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.SecretValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretValue = string(value["SecretValue"].GetString());
        m_secretValueHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyName") && !value["KmsKeyName"].IsNull())
    {
        if (!value["KmsKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.KmsKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyName = string(value["KmsKeyName"].GetString());
        m_kmsKeyNameHasBeenSet = true;
    }

    if (value.HasMember("KmsKeyVersion") && !value["KmsKeyVersion"].IsNull())
    {
        if (!value["KmsKeyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.KmsKeyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyVersion = string(value["KmsKeyVersion"].GetString());
        m_kmsKeyVersionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CanBind") && !value["CanBind"].IsNull())
    {
        if (!value["CanBind"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.CanBind` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canBind = value["CanBind"].GetBool();
        m_canBindHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("BindCount") && !value["BindCount"].IsNull())
    {
        if (!value["BindCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.BindCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindCount = value["BindCount"].GetUint64();
        m_bindCountHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("JWTCredentialConfig") && !value["JWTCredentialConfig"].IsNull())
    {
        if (!value["JWTCredentialConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.JWTCredentialConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jWTCredentialConfig.Deserialize(value["JWTCredentialConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jWTCredentialConfigHasBeenSet = true;
    }

    if (value.HasMember("OAuthCredentialConfig") && !value["OAuthCredentialConfig"].IsNull())
    {
        if (!value["OAuthCredentialConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.OAuthCredentialConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oAuthCredentialConfig.Deserialize(value["OAuthCredentialConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oAuthCredentialConfigHasBeenSet = true;
    }

    if (value.HasMember("OIDCCredentialConfig") && !value["OIDCCredentialConfig"].IsNull())
    {
        if (!value["OIDCCredentialConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.OIDCCredentialConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oIDCCredentialConfig.Deserialize(value["OIDCCredentialConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oIDCCredentialConfigHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwSecretKey.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwSecretKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_secretTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_generateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generateType.c_str(), allocator).Move(), allocator);
    }

    if (m_secretValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretValue.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_canBindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanBind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canBind, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bindCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindCount, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_jWTCredentialConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JWTCredentialConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jWTCredentialConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oAuthCredentialConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuthCredentialConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oAuthCredentialConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oIDCCredentialConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OIDCCredentialConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oIDCCredentialConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

}


string CNAPIGwSecretKey::GetSecretKeyId() const
{
    return m_secretKeyId;
}

void CNAPIGwSecretKey::SetSecretKeyId(const string& _secretKeyId)
{
    m_secretKeyId = _secretKeyId;
    m_secretKeyIdHasBeenSet = true;
}

bool CNAPIGwSecretKey::SecretKeyIdHasBeenSet() const
{
    return m_secretKeyIdHasBeenSet;
}

string CNAPIGwSecretKey::GetName() const
{
    return m_name;
}

void CNAPIGwSecretKey::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CNAPIGwSecretKey::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CNAPIGwSecretKey::GetSecretType() const
{
    return m_secretType;
}

void CNAPIGwSecretKey::SetSecretType(const string& _secretType)
{
    m_secretType = _secretType;
    m_secretTypeHasBeenSet = true;
}

bool CNAPIGwSecretKey::SecretTypeHasBeenSet() const
{
    return m_secretTypeHasBeenSet;
}

string CNAPIGwSecretKey::GetStatus() const
{
    return m_status;
}

void CNAPIGwSecretKey::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CNAPIGwSecretKey::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CNAPIGwSecretKey::GetGenerateType() const
{
    return m_generateType;
}

void CNAPIGwSecretKey::SetGenerateType(const string& _generateType)
{
    m_generateType = _generateType;
    m_generateTypeHasBeenSet = true;
}

bool CNAPIGwSecretKey::GenerateTypeHasBeenSet() const
{
    return m_generateTypeHasBeenSet;
}

string CNAPIGwSecretKey::GetSecretValue() const
{
    return m_secretValue;
}

void CNAPIGwSecretKey::SetSecretValue(const string& _secretValue)
{
    m_secretValue = _secretValue;
    m_secretValueHasBeenSet = true;
}

bool CNAPIGwSecretKey::SecretValueHasBeenSet() const
{
    return m_secretValueHasBeenSet;
}

string CNAPIGwSecretKey::GetKmsKeyName() const
{
    return m_kmsKeyName;
}

void CNAPIGwSecretKey::SetKmsKeyName(const string& _kmsKeyName)
{
    m_kmsKeyName = _kmsKeyName;
    m_kmsKeyNameHasBeenSet = true;
}

bool CNAPIGwSecretKey::KmsKeyNameHasBeenSet() const
{
    return m_kmsKeyNameHasBeenSet;
}

string CNAPIGwSecretKey::GetKmsKeyVersion() const
{
    return m_kmsKeyVersion;
}

void CNAPIGwSecretKey::SetKmsKeyVersion(const string& _kmsKeyVersion)
{
    m_kmsKeyVersion = _kmsKeyVersion;
    m_kmsKeyVersionHasBeenSet = true;
}

bool CNAPIGwSecretKey::KmsKeyVersionHasBeenSet() const
{
    return m_kmsKeyVersionHasBeenSet;
}

string CNAPIGwSecretKey::GetDescription() const
{
    return m_description;
}

void CNAPIGwSecretKey::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CNAPIGwSecretKey::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CNAPIGwSecretKey::GetCanBind() const
{
    return m_canBind;
}

void CNAPIGwSecretKey::SetCanBind(const bool& _canBind)
{
    m_canBind = _canBind;
    m_canBindHasBeenSet = true;
}

bool CNAPIGwSecretKey::CanBindHasBeenSet() const
{
    return m_canBindHasBeenSet;
}

string CNAPIGwSecretKey::GetCreateTime() const
{
    return m_createTime;
}

void CNAPIGwSecretKey::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CNAPIGwSecretKey::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CNAPIGwSecretKey::GetModifyTime() const
{
    return m_modifyTime;
}

void CNAPIGwSecretKey::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CNAPIGwSecretKey::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t CNAPIGwSecretKey::GetBindCount() const
{
    return m_bindCount;
}

void CNAPIGwSecretKey::SetBindCount(const uint64_t& _bindCount)
{
    m_bindCount = _bindCount;
    m_bindCountHasBeenSet = true;
}

bool CNAPIGwSecretKey::BindCountHasBeenSet() const
{
    return m_bindCountHasBeenSet;
}

string CNAPIGwSecretKey::GetResourceType() const
{
    return m_resourceType;
}

void CNAPIGwSecretKey::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CNAPIGwSecretKey::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

AIGWJWTCredentialConfig CNAPIGwSecretKey::GetJWTCredentialConfig() const
{
    return m_jWTCredentialConfig;
}

void CNAPIGwSecretKey::SetJWTCredentialConfig(const AIGWJWTCredentialConfig& _jWTCredentialConfig)
{
    m_jWTCredentialConfig = _jWTCredentialConfig;
    m_jWTCredentialConfigHasBeenSet = true;
}

bool CNAPIGwSecretKey::JWTCredentialConfigHasBeenSet() const
{
    return m_jWTCredentialConfigHasBeenSet;
}

AIGWOAuthCredentialConfig CNAPIGwSecretKey::GetOAuthCredentialConfig() const
{
    return m_oAuthCredentialConfig;
}

void CNAPIGwSecretKey::SetOAuthCredentialConfig(const AIGWOAuthCredentialConfig& _oAuthCredentialConfig)
{
    m_oAuthCredentialConfig = _oAuthCredentialConfig;
    m_oAuthCredentialConfigHasBeenSet = true;
}

bool CNAPIGwSecretKey::OAuthCredentialConfigHasBeenSet() const
{
    return m_oAuthCredentialConfigHasBeenSet;
}

AIGWOIDCCredentialConfig CNAPIGwSecretKey::GetOIDCCredentialConfig() const
{
    return m_oIDCCredentialConfig;
}

void CNAPIGwSecretKey::SetOIDCCredentialConfig(const AIGWOIDCCredentialConfig& _oIDCCredentialConfig)
{
    m_oIDCCredentialConfig = _oIDCCredentialConfig;
    m_oIDCCredentialConfigHasBeenSet = true;
}

bool CNAPIGwSecretKey::OIDCCredentialConfigHasBeenSet() const
{
    return m_oIDCCredentialConfigHasBeenSet;
}

string CNAPIGwSecretKey::GetProvider() const
{
    return m_provider;
}

void CNAPIGwSecretKey::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool CNAPIGwSecretKey::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

