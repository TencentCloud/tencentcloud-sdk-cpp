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

#include <tencentcloud/ssl/v20191205/model/CdnInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CdnInstanceDetail::CdnInstanceDetail() :
    m_domainHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_httpsBillingSwitchHasBeenSet(false)
{
}

CoreInternalOutcome CdnInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdnInstanceDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdnInstanceDetail.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdnInstanceDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("HttpsBillingSwitch") && !value["HttpsBillingSwitch"].IsNull())
    {
        if (!value["HttpsBillingSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdnInstanceDetail.HttpsBillingSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpsBillingSwitch = string(value["HttpsBillingSwitch"].GetString());
        m_httpsBillingSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdnInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsBillingSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsBillingSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpsBillingSwitch.c_str(), allocator).Move(), allocator);
    }

}


string CdnInstanceDetail::GetDomain() const
{
    return m_domain;
}

void CdnInstanceDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CdnInstanceDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CdnInstanceDetail::GetCertId() const
{
    return m_certId;
}

void CdnInstanceDetail::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CdnInstanceDetail::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CdnInstanceDetail::GetStatus() const
{
    return m_status;
}

void CdnInstanceDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CdnInstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CdnInstanceDetail::GetHttpsBillingSwitch() const
{
    return m_httpsBillingSwitch;
}

void CdnInstanceDetail::SetHttpsBillingSwitch(const string& _httpsBillingSwitch)
{
    m_httpsBillingSwitch = _httpsBillingSwitch;
    m_httpsBillingSwitchHasBeenSet = true;
}

bool CdnInstanceDetail::HttpsBillingSwitchHasBeenSet() const
{
    return m_httpsBillingSwitchHasBeenSet;
}

