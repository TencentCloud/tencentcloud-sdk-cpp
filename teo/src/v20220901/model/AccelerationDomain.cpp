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

#include <tencentcloud/teo/v20220901/model/AccelerationDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AccelerationDomain::AccelerationDomain() :
    m_zoneIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainStatusHasBeenSet(false),
    m_originDetailHasBeenSet(false),
    m_originProtocolHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_httpOriginPortHasBeenSet(false),
    m_httpsOriginPortHasBeenSet(false),
    m_iPv6StatusHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_identificationStatusHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false),
    m_ownershipVerificationHasBeenSet(false)
{
}

CoreInternalOutcome AccelerationDomain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("DomainStatus") && !value["DomainStatus"].IsNull())
    {
        if (!value["DomainStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.DomainStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainStatus = string(value["DomainStatus"].GetString());
        m_domainStatusHasBeenSet = true;
    }

    if (value.HasMember("OriginDetail") && !value["OriginDetail"].IsNull())
    {
        if (!value["OriginDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.OriginDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originDetail.Deserialize(value["OriginDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originDetailHasBeenSet = true;
    }

    if (value.HasMember("OriginProtocol") && !value["OriginProtocol"].IsNull())
    {
        if (!value["OriginProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.OriginProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originProtocol = string(value["OriginProtocol"].GetString());
        m_originProtocolHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.Certificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificate.Deserialize(value["Certificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("HttpOriginPort") && !value["HttpOriginPort"].IsNull())
    {
        if (!value["HttpOriginPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.HttpOriginPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpOriginPort = value["HttpOriginPort"].GetUint64();
        m_httpOriginPortHasBeenSet = true;
    }

    if (value.HasMember("HttpsOriginPort") && !value["HttpsOriginPort"].IsNull())
    {
        if (!value["HttpsOriginPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.HttpsOriginPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpsOriginPort = value["HttpsOriginPort"].GetUint64();
        m_httpsOriginPortHasBeenSet = true;
    }

    if (value.HasMember("IPv6Status") && !value["IPv6Status"].IsNull())
    {
        if (!value["IPv6Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.IPv6Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPv6Status = string(value["IPv6Status"].GetString());
        m_iPv6StatusHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("IdentificationStatus") && !value["IdentificationStatus"].IsNull())
    {
        if (!value["IdentificationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.IdentificationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identificationStatus = string(value["IdentificationStatus"].GetString());
        m_identificationStatusHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }

    if (value.HasMember("OwnershipVerification") && !value["OwnershipVerification"].IsNull())
    {
        if (!value["OwnershipVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerationDomain.OwnershipVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownershipVerification.Deserialize(value["OwnershipVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownershipVerificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccelerationDomain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_originDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_httpOriginPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpOriginPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpOriginPort, allocator);
    }

    if (m_httpsOriginPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsOriginPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpsOriginPort, allocator);
    }

    if (m_iPv6StatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPv6Status.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_identificationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentificationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identificationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_ownershipVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnershipVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownershipVerification.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AccelerationDomain::GetZoneId() const
{
    return m_zoneId;
}

void AccelerationDomain::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AccelerationDomain::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string AccelerationDomain::GetDomainName() const
{
    return m_domainName;
}

void AccelerationDomain::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool AccelerationDomain::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string AccelerationDomain::GetDomainStatus() const
{
    return m_domainStatus;
}

void AccelerationDomain::SetDomainStatus(const string& _domainStatus)
{
    m_domainStatus = _domainStatus;
    m_domainStatusHasBeenSet = true;
}

bool AccelerationDomain::DomainStatusHasBeenSet() const
{
    return m_domainStatusHasBeenSet;
}

OriginDetail AccelerationDomain::GetOriginDetail() const
{
    return m_originDetail;
}

void AccelerationDomain::SetOriginDetail(const OriginDetail& _originDetail)
{
    m_originDetail = _originDetail;
    m_originDetailHasBeenSet = true;
}

bool AccelerationDomain::OriginDetailHasBeenSet() const
{
    return m_originDetailHasBeenSet;
}

string AccelerationDomain::GetOriginProtocol() const
{
    return m_originProtocol;
}

void AccelerationDomain::SetOriginProtocol(const string& _originProtocol)
{
    m_originProtocol = _originProtocol;
    m_originProtocolHasBeenSet = true;
}

bool AccelerationDomain::OriginProtocolHasBeenSet() const
{
    return m_originProtocolHasBeenSet;
}

AccelerationDomainCertificate AccelerationDomain::GetCertificate() const
{
    return m_certificate;
}

void AccelerationDomain::SetCertificate(const AccelerationDomainCertificate& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool AccelerationDomain::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

uint64_t AccelerationDomain::GetHttpOriginPort() const
{
    return m_httpOriginPort;
}

void AccelerationDomain::SetHttpOriginPort(const uint64_t& _httpOriginPort)
{
    m_httpOriginPort = _httpOriginPort;
    m_httpOriginPortHasBeenSet = true;
}

bool AccelerationDomain::HttpOriginPortHasBeenSet() const
{
    return m_httpOriginPortHasBeenSet;
}

uint64_t AccelerationDomain::GetHttpsOriginPort() const
{
    return m_httpsOriginPort;
}

void AccelerationDomain::SetHttpsOriginPort(const uint64_t& _httpsOriginPort)
{
    m_httpsOriginPort = _httpsOriginPort;
    m_httpsOriginPortHasBeenSet = true;
}

bool AccelerationDomain::HttpsOriginPortHasBeenSet() const
{
    return m_httpsOriginPortHasBeenSet;
}

string AccelerationDomain::GetIPv6Status() const
{
    return m_iPv6Status;
}

void AccelerationDomain::SetIPv6Status(const string& _iPv6Status)
{
    m_iPv6Status = _iPv6Status;
    m_iPv6StatusHasBeenSet = true;
}

bool AccelerationDomain::IPv6StatusHasBeenSet() const
{
    return m_iPv6StatusHasBeenSet;
}

string AccelerationDomain::GetCname() const
{
    return m_cname;
}

void AccelerationDomain::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool AccelerationDomain::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string AccelerationDomain::GetIdentificationStatus() const
{
    return m_identificationStatus;
}

void AccelerationDomain::SetIdentificationStatus(const string& _identificationStatus)
{
    m_identificationStatus = _identificationStatus;
    m_identificationStatusHasBeenSet = true;
}

bool AccelerationDomain::IdentificationStatusHasBeenSet() const
{
    return m_identificationStatusHasBeenSet;
}

string AccelerationDomain::GetCreatedOn() const
{
    return m_createdOn;
}

void AccelerationDomain::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool AccelerationDomain::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string AccelerationDomain::GetModifiedOn() const
{
    return m_modifiedOn;
}

void AccelerationDomain::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool AccelerationDomain::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

OwnershipVerification AccelerationDomain::GetOwnershipVerification() const
{
    return m_ownershipVerification;
}

void AccelerationDomain::SetOwnershipVerification(const OwnershipVerification& _ownershipVerification)
{
    m_ownershipVerification = _ownershipVerification;
    m_ownershipVerificationHasBeenSet = true;
}

bool AccelerationDomain::OwnershipVerificationHasBeenSet() const
{
    return m_ownershipVerificationHasBeenSet;
}

