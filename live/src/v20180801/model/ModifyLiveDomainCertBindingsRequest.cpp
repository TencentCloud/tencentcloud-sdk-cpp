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

#include <tencentcloud/live/v20180801/model/ModifyLiveDomainCertBindingsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLiveDomainCertBindingsRequest::ModifyLiveDomainCertBindingsRequest() :
    m_domainInfosHasBeenSet(false),
    m_cloudCertIdHasBeenSet(false),
    m_certificatePublicKeyHasBeenSet(false),
    m_certificatePrivateKeyHasBeenSet(false),
    m_certificateAliasHasBeenSet(false)
{
}

string ModifyLiveDomainCertBindingsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_domainInfos.begin(); itr != m_domainInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cloudCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudCertId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_certificateAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateAlias.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<LiveCertDomainInfo> ModifyLiveDomainCertBindingsRequest::GetDomainInfos() const
{
    return m_domainInfos;
}

void ModifyLiveDomainCertBindingsRequest::SetDomainInfos(const vector<LiveCertDomainInfo>& _domainInfos)
{
    m_domainInfos = _domainInfos;
    m_domainInfosHasBeenSet = true;
}

bool ModifyLiveDomainCertBindingsRequest::DomainInfosHasBeenSet() const
{
    return m_domainInfosHasBeenSet;
}

string ModifyLiveDomainCertBindingsRequest::GetCloudCertId() const
{
    return m_cloudCertId;
}

void ModifyLiveDomainCertBindingsRequest::SetCloudCertId(const string& _cloudCertId)
{
    m_cloudCertId = _cloudCertId;
    m_cloudCertIdHasBeenSet = true;
}

bool ModifyLiveDomainCertBindingsRequest::CloudCertIdHasBeenSet() const
{
    return m_cloudCertIdHasBeenSet;
}

string ModifyLiveDomainCertBindingsRequest::GetCertificatePublicKey() const
{
    return m_certificatePublicKey;
}

void ModifyLiveDomainCertBindingsRequest::SetCertificatePublicKey(const string& _certificatePublicKey)
{
    m_certificatePublicKey = _certificatePublicKey;
    m_certificatePublicKeyHasBeenSet = true;
}

bool ModifyLiveDomainCertBindingsRequest::CertificatePublicKeyHasBeenSet() const
{
    return m_certificatePublicKeyHasBeenSet;
}

string ModifyLiveDomainCertBindingsRequest::GetCertificatePrivateKey() const
{
    return m_certificatePrivateKey;
}

void ModifyLiveDomainCertBindingsRequest::SetCertificatePrivateKey(const string& _certificatePrivateKey)
{
    m_certificatePrivateKey = _certificatePrivateKey;
    m_certificatePrivateKeyHasBeenSet = true;
}

bool ModifyLiveDomainCertBindingsRequest::CertificatePrivateKeyHasBeenSet() const
{
    return m_certificatePrivateKeyHasBeenSet;
}

string ModifyLiveDomainCertBindingsRequest::GetCertificateAlias() const
{
    return m_certificateAlias;
}

void ModifyLiveDomainCertBindingsRequest::SetCertificateAlias(const string& _certificateAlias)
{
    m_certificateAlias = _certificateAlias;
    m_certificateAliasHasBeenSet = true;
}

bool ModifyLiveDomainCertBindingsRequest::CertificateAliasHasBeenSet() const
{
    return m_certificateAliasHasBeenSet;
}


