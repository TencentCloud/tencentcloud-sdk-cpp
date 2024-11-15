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

#include <tencentcloud/vod/v20180717/model/ModifyVodDomainConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyVodDomainConfigRequest::ModifyVodDomainConfigRequest() :
    m_domainHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_refererAuthPolicyHasBeenSet(false),
    m_urlSignatureAuthPolicyHasBeenSet(false),
    m_qUICConfigHasBeenSet(false),
    m_iPFilterPolicyHasBeenSet(false)
{
}

string ModifyVodDomainConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_refererAuthPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefererAuthPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_refererAuthPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_urlSignatureAuthPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlSignatureAuthPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_urlSignatureAuthPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_qUICConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUICConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qUICConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_iPFilterPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPFilterPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPFilterPolicy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVodDomainConfigRequest::GetDomain() const
{
    return m_domain;
}

void ModifyVodDomainConfigRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyVodDomainConfigRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ModifyVodDomainConfigRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyVodDomainConfigRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyVodDomainConfigRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

RefererAuthPolicy ModifyVodDomainConfigRequest::GetRefererAuthPolicy() const
{
    return m_refererAuthPolicy;
}

void ModifyVodDomainConfigRequest::SetRefererAuthPolicy(const RefererAuthPolicy& _refererAuthPolicy)
{
    m_refererAuthPolicy = _refererAuthPolicy;
    m_refererAuthPolicyHasBeenSet = true;
}

bool ModifyVodDomainConfigRequest::RefererAuthPolicyHasBeenSet() const
{
    return m_refererAuthPolicyHasBeenSet;
}

UrlSignatureAuthPolicy ModifyVodDomainConfigRequest::GetUrlSignatureAuthPolicy() const
{
    return m_urlSignatureAuthPolicy;
}

void ModifyVodDomainConfigRequest::SetUrlSignatureAuthPolicy(const UrlSignatureAuthPolicy& _urlSignatureAuthPolicy)
{
    m_urlSignatureAuthPolicy = _urlSignatureAuthPolicy;
    m_urlSignatureAuthPolicyHasBeenSet = true;
}

bool ModifyVodDomainConfigRequest::UrlSignatureAuthPolicyHasBeenSet() const
{
    return m_urlSignatureAuthPolicyHasBeenSet;
}

DomainQUICConfig ModifyVodDomainConfigRequest::GetQUICConfig() const
{
    return m_qUICConfig;
}

void ModifyVodDomainConfigRequest::SetQUICConfig(const DomainQUICConfig& _qUICConfig)
{
    m_qUICConfig = _qUICConfig;
    m_qUICConfigHasBeenSet = true;
}

bool ModifyVodDomainConfigRequest::QUICConfigHasBeenSet() const
{
    return m_qUICConfigHasBeenSet;
}

IPFilterPolicy ModifyVodDomainConfigRequest::GetIPFilterPolicy() const
{
    return m_iPFilterPolicy;
}

void ModifyVodDomainConfigRequest::SetIPFilterPolicy(const IPFilterPolicy& _iPFilterPolicy)
{
    m_iPFilterPolicy = _iPFilterPolicy;
    m_iPFilterPolicyHasBeenSet = true;
}

bool ModifyVodDomainConfigRequest::IPFilterPolicyHasBeenSet() const
{
    return m_iPFilterPolicyHasBeenSet;
}


