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

#include <tencentcloud/makers/v20261113/model/ZoneDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

ZoneDomain::ZoneDomain() :
    m_typeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_envHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_mainDomainHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_http2HasBeenSet(false),
    m_ocspStaplingHasBeenSet(false),
    m_forceRedirectHasBeenSet(false),
    m_hstsHasBeenSet(false),
    m_ownershipVerificationHasBeenSet(false)
{
}

CoreInternalOutcome ZoneDomain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.Env` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_env = string(value["Env"].GetString());
        m_envHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("MainDomain") && !value["MainDomain"].IsNull())
    {
        if (!value["MainDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.MainDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainDomain = string(value["MainDomain"].GetString());
        m_mainDomainHasBeenSet = true;
    }

    if (value.HasMember("Ipv6") && !value["Ipv6"].IsNull())
    {
        if (!value["Ipv6"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.Ipv6` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipv6.Deserialize(value["Ipv6"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipv6HasBeenSet = true;
    }

    if (value.HasMember("Http2") && !value["Http2"].IsNull())
    {
        if (!value["Http2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.Http2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_http2.Deserialize(value["Http2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_http2HasBeenSet = true;
    }

    if (value.HasMember("OcspStapling") && !value["OcspStapling"].IsNull())
    {
        if (!value["OcspStapling"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.OcspStapling` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ocspStapling.Deserialize(value["OcspStapling"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ocspStaplingHasBeenSet = true;
    }

    if (value.HasMember("ForceRedirect") && !value["ForceRedirect"].IsNull())
    {
        if (!value["ForceRedirect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.ForceRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forceRedirect.Deserialize(value["ForceRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forceRedirectHasBeenSet = true;
    }

    if (value.HasMember("Hsts") && !value["Hsts"].IsNull())
    {
        if (!value["Hsts"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.Hsts` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hsts.Deserialize(value["Hsts"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hstsHasBeenSet = true;
    }

    if (value.HasMember("OwnershipVerification") && !value["OwnershipVerification"].IsNull())
    {
        if (!value["OwnershipVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneDomain.OwnershipVerification` is not object type").SetRequestId(requestId));
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

void ZoneDomain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

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

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_mainDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipv6.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_http2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_http2.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ocspStaplingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcspStapling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ocspStapling.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hstsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hsts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hsts.ToJsonObject(value[key.c_str()], allocator);
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


string ZoneDomain::GetType() const
{
    return m_type;
}

void ZoneDomain::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ZoneDomain::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ZoneDomain::GetDomain() const
{
    return m_domain;
}

void ZoneDomain::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ZoneDomain::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ZoneDomain::GetStatus() const
{
    return m_status;
}

void ZoneDomain::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ZoneDomain::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ZoneDomain::GetEnv() const
{
    return m_env;
}

void ZoneDomain::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool ZoneDomain::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string ZoneDomain::GetZoneId() const
{
    return m_zoneId;
}

void ZoneDomain::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneDomain::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ZoneDomain::GetArea() const
{
    return m_area;
}

void ZoneDomain::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ZoneDomain::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string ZoneDomain::GetCname() const
{
    return m_cname;
}

void ZoneDomain::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool ZoneDomain::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string ZoneDomain::GetMainDomain() const
{
    return m_mainDomain;
}

void ZoneDomain::SetMainDomain(const string& _mainDomain)
{
    m_mainDomain = _mainDomain;
    m_mainDomainHasBeenSet = true;
}

bool ZoneDomain::MainDomainHasBeenSet() const
{
    return m_mainDomainHasBeenSet;
}

SwitchConfig ZoneDomain::GetIpv6() const
{
    return m_ipv6;
}

void ZoneDomain::SetIpv6(const SwitchConfig& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool ZoneDomain::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

SwitchConfig ZoneDomain::GetHttp2() const
{
    return m_http2;
}

void ZoneDomain::SetHttp2(const SwitchConfig& _http2)
{
    m_http2 = _http2;
    m_http2HasBeenSet = true;
}

bool ZoneDomain::Http2HasBeenSet() const
{
    return m_http2HasBeenSet;
}

SwitchConfig ZoneDomain::GetOcspStapling() const
{
    return m_ocspStapling;
}

void ZoneDomain::SetOcspStapling(const SwitchConfig& _ocspStapling)
{
    m_ocspStapling = _ocspStapling;
    m_ocspStaplingHasBeenSet = true;
}

bool ZoneDomain::OcspStaplingHasBeenSet() const
{
    return m_ocspStaplingHasBeenSet;
}

ForceRedirectConfig ZoneDomain::GetForceRedirect() const
{
    return m_forceRedirect;
}

void ZoneDomain::SetForceRedirect(const ForceRedirectConfig& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool ZoneDomain::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

HstsConfig ZoneDomain::GetHsts() const
{
    return m_hsts;
}

void ZoneDomain::SetHsts(const HstsConfig& _hsts)
{
    m_hsts = _hsts;
    m_hstsHasBeenSet = true;
}

bool ZoneDomain::HstsHasBeenSet() const
{
    return m_hstsHasBeenSet;
}

OwnershipVerification ZoneDomain::GetOwnershipVerification() const
{
    return m_ownershipVerification;
}

void ZoneDomain::SetOwnershipVerification(const OwnershipVerification& _ownershipVerification)
{
    m_ownershipVerification = _ownershipVerification;
    m_ownershipVerificationHasBeenSet = true;
}

bool ZoneDomain::OwnershipVerificationHasBeenSet() const
{
    return m_ownershipVerificationHasBeenSet;
}

