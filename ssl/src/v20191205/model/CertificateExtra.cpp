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

#include <tencentcloud/ssl/v20191205/model/CertificateExtra.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CertificateExtra::CertificateExtra() :
    m_domainNumberHasBeenSet(false),
    m_originCertificateIdHasBeenSet(false),
    m_replacedByHasBeenSet(false),
    m_replacedForHasBeenSet(false),
    m_renewOrderHasBeenSet(false),
    m_sMCertHasBeenSet(false),
    m_companyTypeHasBeenSet(false)
{
}

CoreInternalOutcome CertificateExtra::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainNumber") && !value["DomainNumber"].IsNull())
    {
        if (!value["DomainNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateExtra.DomainNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainNumber = string(value["DomainNumber"].GetString());
        m_domainNumberHasBeenSet = true;
    }

    if (value.HasMember("OriginCertificateId") && !value["OriginCertificateId"].IsNull())
    {
        if (!value["OriginCertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateExtra.OriginCertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originCertificateId = string(value["OriginCertificateId"].GetString());
        m_originCertificateIdHasBeenSet = true;
    }

    if (value.HasMember("ReplacedBy") && !value["ReplacedBy"].IsNull())
    {
        if (!value["ReplacedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateExtra.ReplacedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replacedBy = string(value["ReplacedBy"].GetString());
        m_replacedByHasBeenSet = true;
    }

    if (value.HasMember("ReplacedFor") && !value["ReplacedFor"].IsNull())
    {
        if (!value["ReplacedFor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateExtra.ReplacedFor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replacedFor = string(value["ReplacedFor"].GetString());
        m_replacedForHasBeenSet = true;
    }

    if (value.HasMember("RenewOrder") && !value["RenewOrder"].IsNull())
    {
        if (!value["RenewOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateExtra.RenewOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewOrder = string(value["RenewOrder"].GetString());
        m_renewOrderHasBeenSet = true;
    }

    if (value.HasMember("SMCert") && !value["SMCert"].IsNull())
    {
        if (!value["SMCert"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateExtra.SMCert` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sMCert = value["SMCert"].GetInt64();
        m_sMCertHasBeenSet = true;
    }

    if (value.HasMember("CompanyType") && !value["CompanyType"].IsNull())
    {
        if (!value["CompanyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateExtra.CompanyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companyType = value["CompanyType"].GetInt64();
        m_companyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertificateExtra::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_originCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginCertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_replacedByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplacedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replacedBy.c_str(), allocator).Move(), allocator);
    }

    if (m_replacedForHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplacedFor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replacedFor.c_str(), allocator).Move(), allocator);
    }

    if (m_renewOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_sMCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SMCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sMCert, allocator);
    }

    if (m_companyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companyType, allocator);
    }

}


string CertificateExtra::GetDomainNumber() const
{
    return m_domainNumber;
}

void CertificateExtra::SetDomainNumber(const string& _domainNumber)
{
    m_domainNumber = _domainNumber;
    m_domainNumberHasBeenSet = true;
}

bool CertificateExtra::DomainNumberHasBeenSet() const
{
    return m_domainNumberHasBeenSet;
}

string CertificateExtra::GetOriginCertificateId() const
{
    return m_originCertificateId;
}

void CertificateExtra::SetOriginCertificateId(const string& _originCertificateId)
{
    m_originCertificateId = _originCertificateId;
    m_originCertificateIdHasBeenSet = true;
}

bool CertificateExtra::OriginCertificateIdHasBeenSet() const
{
    return m_originCertificateIdHasBeenSet;
}

string CertificateExtra::GetReplacedBy() const
{
    return m_replacedBy;
}

void CertificateExtra::SetReplacedBy(const string& _replacedBy)
{
    m_replacedBy = _replacedBy;
    m_replacedByHasBeenSet = true;
}

bool CertificateExtra::ReplacedByHasBeenSet() const
{
    return m_replacedByHasBeenSet;
}

string CertificateExtra::GetReplacedFor() const
{
    return m_replacedFor;
}

void CertificateExtra::SetReplacedFor(const string& _replacedFor)
{
    m_replacedFor = _replacedFor;
    m_replacedForHasBeenSet = true;
}

bool CertificateExtra::ReplacedForHasBeenSet() const
{
    return m_replacedForHasBeenSet;
}

string CertificateExtra::GetRenewOrder() const
{
    return m_renewOrder;
}

void CertificateExtra::SetRenewOrder(const string& _renewOrder)
{
    m_renewOrder = _renewOrder;
    m_renewOrderHasBeenSet = true;
}

bool CertificateExtra::RenewOrderHasBeenSet() const
{
    return m_renewOrderHasBeenSet;
}

int64_t CertificateExtra::GetSMCert() const
{
    return m_sMCert;
}

void CertificateExtra::SetSMCert(const int64_t& _sMCert)
{
    m_sMCert = _sMCert;
    m_sMCertHasBeenSet = true;
}

bool CertificateExtra::SMCertHasBeenSet() const
{
    return m_sMCertHasBeenSet;
}

int64_t CertificateExtra::GetCompanyType() const
{
    return m_companyType;
}

void CertificateExtra::SetCompanyType(const int64_t& _companyType)
{
    m_companyType = _companyType;
    m_companyTypeHasBeenSet = true;
}

bool CertificateExtra::CompanyTypeHasBeenSet() const
{
    return m_companyTypeHasBeenSet;
}

