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

#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewaySecretKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateCloudNativeAPIGatewaySecretKeyRequest::CreateCloudNativeAPIGatewaySecretKeyRequest() :
    m_gatewayIdHasBeenSet(false),
    m_secretTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_generateTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_kmsKeyNameHasBeenSet(false),
    m_kmsKeyVersionHasBeenSet(false),
    m_secretValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_jWTCredentialConfigHasBeenSet(false),
    m_oAuthCredentialConfigHasBeenSet(false),
    m_oIDCCredentialConfigHasBeenSet(false),
    m_providerHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewaySecretKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_generateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_generateType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsKeyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_secretValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretValue.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_jWTCredentialConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JWTCredentialConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jWTCredentialConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_oAuthCredentialConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuthCredentialConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oAuthCredentialConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_oIDCCredentialConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OIDCCredentialConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oIDCCredentialConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudNativeAPIGatewaySecretKeyRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewaySecretKeyRequest::GetSecretType() const
{
    return m_secretType;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetSecretType(const string& _secretType)
{
    m_secretType = _secretType;
    m_secretTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::SecretTypeHasBeenSet() const
{
    return m_secretTypeHasBeenSet;
}

string CreateCloudNativeAPIGatewaySecretKeyRequest::GetName() const
{
    return m_name;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudNativeAPIGatewaySecretKeyRequest::GetGenerateType() const
{
    return m_generateType;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetGenerateType(const string& _generateType)
{
    m_generateType = _generateType;
    m_generateTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::GenerateTypeHasBeenSet() const
{
    return m_generateTypeHasBeenSet;
}

string CreateCloudNativeAPIGatewaySecretKeyRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CreateCloudNativeAPIGatewaySecretKeyRequest::GetKmsKeyName() const
{
    return m_kmsKeyName;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetKmsKeyName(const string& _kmsKeyName)
{
    m_kmsKeyName = _kmsKeyName;
    m_kmsKeyNameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::KmsKeyNameHasBeenSet() const
{
    return m_kmsKeyNameHasBeenSet;
}

string CreateCloudNativeAPIGatewaySecretKeyRequest::GetKmsKeyVersion() const
{
    return m_kmsKeyVersion;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetKmsKeyVersion(const string& _kmsKeyVersion)
{
    m_kmsKeyVersion = _kmsKeyVersion;
    m_kmsKeyVersionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::KmsKeyVersionHasBeenSet() const
{
    return m_kmsKeyVersionHasBeenSet;
}

string CreateCloudNativeAPIGatewaySecretKeyRequest::GetSecretValue() const
{
    return m_secretValue;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetSecretValue(const string& _secretValue)
{
    m_secretValue = _secretValue;
    m_secretValueHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::SecretValueHasBeenSet() const
{
    return m_secretValueHasBeenSet;
}

string CreateCloudNativeAPIGatewaySecretKeyRequest::GetDescription() const
{
    return m_description;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

AIGWJWTCredentialConfig CreateCloudNativeAPIGatewaySecretKeyRequest::GetJWTCredentialConfig() const
{
    return m_jWTCredentialConfig;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetJWTCredentialConfig(const AIGWJWTCredentialConfig& _jWTCredentialConfig)
{
    m_jWTCredentialConfig = _jWTCredentialConfig;
    m_jWTCredentialConfigHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::JWTCredentialConfigHasBeenSet() const
{
    return m_jWTCredentialConfigHasBeenSet;
}

AIGWOAuthCredentialConfig CreateCloudNativeAPIGatewaySecretKeyRequest::GetOAuthCredentialConfig() const
{
    return m_oAuthCredentialConfig;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetOAuthCredentialConfig(const AIGWOAuthCredentialConfig& _oAuthCredentialConfig)
{
    m_oAuthCredentialConfig = _oAuthCredentialConfig;
    m_oAuthCredentialConfigHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::OAuthCredentialConfigHasBeenSet() const
{
    return m_oAuthCredentialConfigHasBeenSet;
}

AIGWOIDCCredentialConfig CreateCloudNativeAPIGatewaySecretKeyRequest::GetOIDCCredentialConfig() const
{
    return m_oIDCCredentialConfig;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetOIDCCredentialConfig(const AIGWOIDCCredentialConfig& _oIDCCredentialConfig)
{
    m_oIDCCredentialConfig = _oIDCCredentialConfig;
    m_oIDCCredentialConfigHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::OIDCCredentialConfigHasBeenSet() const
{
    return m_oIDCCredentialConfigHasBeenSet;
}

string CreateCloudNativeAPIGatewaySecretKeyRequest::GetProvider() const
{
    return m_provider;
}

void CreateCloudNativeAPIGatewaySecretKeyRequest::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewaySecretKeyRequest::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}


