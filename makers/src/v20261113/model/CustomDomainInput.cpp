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

#include <tencentcloud/makers/v20261113/model/CustomDomainInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

CustomDomainInput::CustomDomainInput() :
    m_domainHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_noCertificateHasBeenSet(false)
{
}

CoreInternalOutcome CustomDomainInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomDomainInput.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomDomainInput.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomDomainInput.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NoCertificate") && !value["NoCertificate"].IsNull())
    {
        if (!value["NoCertificate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomDomainInput.NoCertificate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noCertificate = value["NoCertificate"].GetBool();
        m_noCertificateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomDomainInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_noCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noCertificate, allocator);
    }

}


string CustomDomainInput::GetDomain() const
{
    return m_domain;
}

void CustomDomainInput::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CustomDomainInput::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CustomDomainInput::GetCertificateId() const
{
    return m_certificateId;
}

void CustomDomainInput::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool CustomDomainInput::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string CustomDomainInput::GetStatus() const
{
    return m_status;
}

void CustomDomainInput::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CustomDomainInput::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool CustomDomainInput::GetNoCertificate() const
{
    return m_noCertificate;
}

void CustomDomainInput::SetNoCertificate(const bool& _noCertificate)
{
    m_noCertificate = _noCertificate;
    m_noCertificateHasBeenSet = true;
}

bool CustomDomainInput::NoCertificateHasBeenSet() const
{
    return m_noCertificateHasBeenSet;
}

