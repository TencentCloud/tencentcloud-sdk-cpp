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

#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateCloudNativeAPIGatewayCertificateRequest::CreateCloudNativeAPIGatewayCertificateRequest() :
    m_gatewayIdHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_bindDomainsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_certUsageHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_crtHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayCertificateRequest::ToJsonString() const
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

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindDomains.begin(); itr != m_bindDomains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certType.c_str(), allocator).Move(), allocator);
    }

    if (m_certUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertUsage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_crtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Crt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crt.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudNativeAPIGatewayCertificateRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayCertificateRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCertificateRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayCertificateRequest::GetCertId() const
{
    return m_certId;
}

void CreateCloudNativeAPIGatewayCertificateRequest::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCertificateRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

vector<string> CreateCloudNativeAPIGatewayCertificateRequest::GetBindDomains() const
{
    return m_bindDomains;
}

void CreateCloudNativeAPIGatewayCertificateRequest::SetBindDomains(const vector<string>& _bindDomains)
{
    m_bindDomains = _bindDomains;
    m_bindDomainsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCertificateRequest::BindDomainsHasBeenSet() const
{
    return m_bindDomainsHasBeenSet;
}

string CreateCloudNativeAPIGatewayCertificateRequest::GetName() const
{
    return m_name;
}

void CreateCloudNativeAPIGatewayCertificateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCertificateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudNativeAPIGatewayCertificateRequest::GetCertType() const
{
    return m_certType;
}

void CreateCloudNativeAPIGatewayCertificateRequest::SetCertType(const string& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCertificateRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string CreateCloudNativeAPIGatewayCertificateRequest::GetCertUsage() const
{
    return m_certUsage;
}

void CreateCloudNativeAPIGatewayCertificateRequest::SetCertUsage(const string& _certUsage)
{
    m_certUsage = _certUsage;
    m_certUsageHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCertificateRequest::CertUsageHasBeenSet() const
{
    return m_certUsageHasBeenSet;
}

string CreateCloudNativeAPIGatewayCertificateRequest::GetKey() const
{
    return m_key;
}

void CreateCloudNativeAPIGatewayCertificateRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCertificateRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string CreateCloudNativeAPIGatewayCertificateRequest::GetCrt() const
{
    return m_crt;
}

void CreateCloudNativeAPIGatewayCertificateRequest::SetCrt(const string& _crt)
{
    m_crt = _crt;
    m_crtHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayCertificateRequest::CrtHasBeenSet() const
{
    return m_crtHasBeenSet;
}


