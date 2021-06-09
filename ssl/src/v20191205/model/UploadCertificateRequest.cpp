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

#include <tencentcloud/ssl/v20191205/model/UploadCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

UploadCertificateRequest::UploadCertificateRequest() :
    m_certificatePublicKeyHasBeenSet(false),
    m_certificatePrivateKeyHasBeenSet(false),
    m_certificateTypeHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_certificateUseHasBeenSet(false)
{
}

string UploadCertificateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certificatePublicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificatePublicKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificatePublicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_certificatePrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificatePrivateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificatePrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateType.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_certificateUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateUse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateUse.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadCertificateRequest::GetCertificatePublicKey() const
{
    return m_certificatePublicKey;
}

void UploadCertificateRequest::SetCertificatePublicKey(const string& _certificatePublicKey)
{
    m_certificatePublicKey = _certificatePublicKey;
    m_certificatePublicKeyHasBeenSet = true;
}

bool UploadCertificateRequest::CertificatePublicKeyHasBeenSet() const
{
    return m_certificatePublicKeyHasBeenSet;
}

string UploadCertificateRequest::GetCertificatePrivateKey() const
{
    return m_certificatePrivateKey;
}

void UploadCertificateRequest::SetCertificatePrivateKey(const string& _certificatePrivateKey)
{
    m_certificatePrivateKey = _certificatePrivateKey;
    m_certificatePrivateKeyHasBeenSet = true;
}

bool UploadCertificateRequest::CertificatePrivateKeyHasBeenSet() const
{
    return m_certificatePrivateKeyHasBeenSet;
}

string UploadCertificateRequest::GetCertificateType() const
{
    return m_certificateType;
}

void UploadCertificateRequest::SetCertificateType(const string& _certificateType)
{
    m_certificateType = _certificateType;
    m_certificateTypeHasBeenSet = true;
}

bool UploadCertificateRequest::CertificateTypeHasBeenSet() const
{
    return m_certificateTypeHasBeenSet;
}

string UploadCertificateRequest::GetAlias() const
{
    return m_alias;
}

void UploadCertificateRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool UploadCertificateRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t UploadCertificateRequest::GetProjectId() const
{
    return m_projectId;
}

void UploadCertificateRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UploadCertificateRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UploadCertificateRequest::GetCertificateUse() const
{
    return m_certificateUse;
}

void UploadCertificateRequest::SetCertificateUse(const string& _certificateUse)
{
    m_certificateUse = _certificateUse;
    m_certificateUseHasBeenSet = true;
}

bool UploadCertificateRequest::CertificateUseHasBeenSet() const
{
    return m_certificateUseHasBeenSet;
}


