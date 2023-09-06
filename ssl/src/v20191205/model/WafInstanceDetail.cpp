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

#include <tencentcloud/ssl/v20191205/model/WafInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

WafInstanceDetail::WafInstanceDetail() :
    m_domainHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_keepaliveHasBeenSet(false)
{
}

CoreInternalOutcome WafInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafInstanceDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafInstanceDetail.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Keepalive") && !value["Keepalive"].IsNull())
    {
        if (!value["Keepalive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafInstanceDetail.Keepalive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_keepalive = value["Keepalive"].GetUint64();
        m_keepaliveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_keepaliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keepalive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepalive, allocator);
    }

}


string WafInstanceDetail::GetDomain() const
{
    return m_domain;
}

void WafInstanceDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool WafInstanceDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string WafInstanceDetail::GetCertId() const
{
    return m_certId;
}

void WafInstanceDetail::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool WafInstanceDetail::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

uint64_t WafInstanceDetail::GetKeepalive() const
{
    return m_keepalive;
}

void WafInstanceDetail::SetKeepalive(const uint64_t& _keepalive)
{
    m_keepalive = _keepalive;
    m_keepaliveHasBeenSet = true;
}

bool WafInstanceDetail::KeepaliveHasBeenSet() const
{
    return m_keepaliveHasBeenSet;
}

