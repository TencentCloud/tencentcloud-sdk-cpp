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

#include <tencentcloud/teo/v20220901/model/InferenceDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceDomain::InferenceDomain() :
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_authSwitchHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_ownershipVerificationHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome InferenceDomain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceDomain.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceDomain.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AuthSwitch") && !value["AuthSwitch"].IsNull())
    {
        if (!value["AuthSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceDomain.AuthSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSwitch = string(value["AuthSwitch"].GetString());
        m_authSwitchHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceDomain.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("OwnershipVerification") && !value["OwnershipVerification"].IsNull())
    {
        if (!value["OwnershipVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceDomain.OwnershipVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownershipVerification.Deserialize(value["OwnershipVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownershipVerificationHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceDomain.Certificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificate.Deserialize(value["Certificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceDomain.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceDomain.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceDomain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_authSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_ownershipVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnershipVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownershipVerification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string InferenceDomain::GetDomain() const
{
    return m_domain;
}

void InferenceDomain::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool InferenceDomain::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string InferenceDomain::GetStatus() const
{
    return m_status;
}

void InferenceDomain::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InferenceDomain::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InferenceDomain::GetAuthSwitch() const
{
    return m_authSwitch;
}

void InferenceDomain::SetAuthSwitch(const string& _authSwitch)
{
    m_authSwitch = _authSwitch;
    m_authSwitchHasBeenSet = true;
}

bool InferenceDomain::AuthSwitchHasBeenSet() const
{
    return m_authSwitchHasBeenSet;
}

string InferenceDomain::GetCname() const
{
    return m_cname;
}

void InferenceDomain::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool InferenceDomain::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

OwnershipVerification InferenceDomain::GetOwnershipVerification() const
{
    return m_ownershipVerification;
}

void InferenceDomain::SetOwnershipVerification(const OwnershipVerification& _ownershipVerification)
{
    m_ownershipVerification = _ownershipVerification;
    m_ownershipVerificationHasBeenSet = true;
}

bool InferenceDomain::OwnershipVerificationHasBeenSet() const
{
    return m_ownershipVerificationHasBeenSet;
}

HostsCertificate InferenceDomain::GetCertificate() const
{
    return m_certificate;
}

void InferenceDomain::SetCertificate(const HostsCertificate& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool InferenceDomain::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string InferenceDomain::GetCreateTime() const
{
    return m_createTime;
}

void InferenceDomain::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InferenceDomain::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InferenceDomain::GetUpdateTime() const
{
    return m_updateTime;
}

void InferenceDomain::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InferenceDomain::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

