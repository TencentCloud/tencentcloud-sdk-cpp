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

#include <tencentcloud/organization/v20210331/model/SetExternalSAMLIdentityProviderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

SetExternalSAMLIdentityProviderRequest::SetExternalSAMLIdentityProviderRequest() :
    m_zoneIdHasBeenSet(false),
    m_encodedMetadataDocumentHasBeenSet(false),
    m_sSOStatusHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_loginUrlHasBeenSet(false),
    m_x509CertificateHasBeenSet(false)
{
}

string SetExternalSAMLIdentityProviderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_encodedMetadataDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodedMetadataDocument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encodedMetadataDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_sSOStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSOStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sSOStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_loginUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_x509CertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X509Certificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_x509Certificate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetExternalSAMLIdentityProviderRequest::GetZoneId() const
{
    return m_zoneId;
}

void SetExternalSAMLIdentityProviderRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool SetExternalSAMLIdentityProviderRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string SetExternalSAMLIdentityProviderRequest::GetEncodedMetadataDocument() const
{
    return m_encodedMetadataDocument;
}

void SetExternalSAMLIdentityProviderRequest::SetEncodedMetadataDocument(const string& _encodedMetadataDocument)
{
    m_encodedMetadataDocument = _encodedMetadataDocument;
    m_encodedMetadataDocumentHasBeenSet = true;
}

bool SetExternalSAMLIdentityProviderRequest::EncodedMetadataDocumentHasBeenSet() const
{
    return m_encodedMetadataDocumentHasBeenSet;
}

string SetExternalSAMLIdentityProviderRequest::GetSSOStatus() const
{
    return m_sSOStatus;
}

void SetExternalSAMLIdentityProviderRequest::SetSSOStatus(const string& _sSOStatus)
{
    m_sSOStatus = _sSOStatus;
    m_sSOStatusHasBeenSet = true;
}

bool SetExternalSAMLIdentityProviderRequest::SSOStatusHasBeenSet() const
{
    return m_sSOStatusHasBeenSet;
}

string SetExternalSAMLIdentityProviderRequest::GetEntityId() const
{
    return m_entityId;
}

void SetExternalSAMLIdentityProviderRequest::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool SetExternalSAMLIdentityProviderRequest::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string SetExternalSAMLIdentityProviderRequest::GetLoginUrl() const
{
    return m_loginUrl;
}

void SetExternalSAMLIdentityProviderRequest::SetLoginUrl(const string& _loginUrl)
{
    m_loginUrl = _loginUrl;
    m_loginUrlHasBeenSet = true;
}

bool SetExternalSAMLIdentityProviderRequest::LoginUrlHasBeenSet() const
{
    return m_loginUrlHasBeenSet;
}

string SetExternalSAMLIdentityProviderRequest::GetX509Certificate() const
{
    return m_x509Certificate;
}

void SetExternalSAMLIdentityProviderRequest::SetX509Certificate(const string& _x509Certificate)
{
    m_x509Certificate = _x509Certificate;
    m_x509CertificateHasBeenSet = true;
}

bool SetExternalSAMLIdentityProviderRequest::X509CertificateHasBeenSet() const
{
    return m_x509CertificateHasBeenSet;
}


