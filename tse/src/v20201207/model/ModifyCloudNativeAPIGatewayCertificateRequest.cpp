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

#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ModifyCloudNativeAPIGatewayCertificateRequest::ModifyCloudNativeAPIGatewayCertificateRequest() :
    m_gatewayIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_crtHasBeenSet(false),
    m_bindDomainsHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_certSourceHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayCertificateRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_certSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certSource.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayCertificateRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayCertificateRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCertificateRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayCertificateRequest::GetId() const
{
    return m_id;
}

void ModifyCloudNativeAPIGatewayCertificateRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCertificateRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyCloudNativeAPIGatewayCertificateRequest::GetName() const
{
    return m_name;
}

void ModifyCloudNativeAPIGatewayCertificateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCertificateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyCloudNativeAPIGatewayCertificateRequest::GetKey() const
{
    return m_key;
}

void ModifyCloudNativeAPIGatewayCertificateRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCertificateRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string ModifyCloudNativeAPIGatewayCertificateRequest::GetCrt() const
{
    return m_crt;
}

void ModifyCloudNativeAPIGatewayCertificateRequest::SetCrt(const string& _crt)
{
    m_crt = _crt;
    m_crtHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCertificateRequest::CrtHasBeenSet() const
{
    return m_crtHasBeenSet;
}

vector<string> ModifyCloudNativeAPIGatewayCertificateRequest::GetBindDomains() const
{
    return m_bindDomains;
}

void ModifyCloudNativeAPIGatewayCertificateRequest::SetBindDomains(const vector<string>& _bindDomains)
{
    m_bindDomains = _bindDomains;
    m_bindDomainsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCertificateRequest::BindDomainsHasBeenSet() const
{
    return m_bindDomainsHasBeenSet;
}

string ModifyCloudNativeAPIGatewayCertificateRequest::GetCertId() const
{
    return m_certId;
}

void ModifyCloudNativeAPIGatewayCertificateRequest::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCertificateRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayCertificateRequest::GetCertSource() const
{
    return m_certSource;
}

void ModifyCloudNativeAPIGatewayCertificateRequest::SetCertSource(const string& _certSource)
{
    m_certSource = _certSource;
    m_certSourceHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayCertificateRequest::CertSourceHasBeenSet() const
{
    return m_certSourceHasBeenSet;
}


