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

#include <tencentcloud/tcb/v20180608/model/CloudBaseGWService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseGWService::CloudBaseGWService() :
    m_serviceIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_openTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isPreemptedHasBeenSet(false),
    m_enableRegionHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_unionStatusHasBeenSet(false),
    m_cnameStatusHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_forceHttpsHasBeenSet(false),
    m_icpForbidStatusHasBeenSet(false),
    m_customRoutingRulesHasBeenSet(false),
    m_bindFlagHasBeenSet(false),
    m_originCnameHasBeenSet(false),
    m_customCnameHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseGWService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("OpenTime") && !value["OpenTime"].IsNull())
    {
        if (!value["OpenTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.OpenTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openTime = value["OpenTime"].GetUint64();
        m_openTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsPreempted") && !value["IsPreempted"].IsNull())
    {
        if (!value["IsPreempted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.IsPreempted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPreempted = value["IsPreempted"].GetBool();
        m_isPreemptedHasBeenSet = true;
    }

    if (value.HasMember("EnableRegion") && !value["EnableRegion"].IsNull())
    {
        if (!value["EnableRegion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.EnableRegion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRegion = value["EnableRegion"].GetBool();
        m_enableRegionHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("UnionStatus") && !value["UnionStatus"].IsNull())
    {
        if (!value["UnionStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.UnionStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unionStatus = value["UnionStatus"].GetInt64();
        m_unionStatusHasBeenSet = true;
    }

    if (value.HasMember("CnameStatus") && !value["CnameStatus"].IsNull())
    {
        if (!value["CnameStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.CnameStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cnameStatus = value["CnameStatus"].GetInt64();
        m_cnameStatusHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("ForceHttps") && !value["ForceHttps"].IsNull())
    {
        if (!value["ForceHttps"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.ForceHttps` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forceHttps = value["ForceHttps"].GetBool();
        m_forceHttpsHasBeenSet = true;
    }

    if (value.HasMember("IcpForbidStatus") && !value["IcpForbidStatus"].IsNull())
    {
        if (!value["IcpForbidStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.IcpForbidStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_icpForbidStatus = value["IcpForbidStatus"].GetInt64();
        m_icpForbidStatusHasBeenSet = true;
    }

    if (value.HasMember("CustomRoutingRules") && !value["CustomRoutingRules"].IsNull())
    {
        if (!value["CustomRoutingRules"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.CustomRoutingRules` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customRoutingRules = string(value["CustomRoutingRules"].GetString());
        m_customRoutingRulesHasBeenSet = true;
    }

    if (value.HasMember("BindFlag") && !value["BindFlag"].IsNull())
    {
        if (!value["BindFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.BindFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindFlag = value["BindFlag"].GetUint64();
        m_bindFlagHasBeenSet = true;
    }

    if (value.HasMember("OriginCname") && !value["OriginCname"].IsNull())
    {
        if (!value["OriginCname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.OriginCname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originCname = string(value["OriginCname"].GetString());
        m_originCnameHasBeenSet = true;
    }

    if (value.HasMember("CustomCname") && !value["CustomCname"].IsNull())
    {
        if (!value["CustomCname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseGWService.CustomCname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customCname = string(value["CustomCname"].GetString());
        m_customCnameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseGWService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_openTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isPreemptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPreempted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPreempted, allocator);
    }

    if (m_enableRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRegion, allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_unionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unionStatus, allocator);
    }

    if (m_cnameStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cnameStatus, allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_forceHttpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceHttps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forceHttps, allocator);
    }

    if (m_icpForbidStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IcpForbidStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_icpForbidStatus, allocator);
    }

    if (m_customRoutingRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRoutingRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customRoutingRules.c_str(), allocator).Move(), allocator);
    }

    if (m_bindFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindFlag, allocator);
    }

    if (m_originCnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginCname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originCname.c_str(), allocator).Move(), allocator);
    }

    if (m_customCnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomCname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customCname.c_str(), allocator).Move(), allocator);
    }

}


string CloudBaseGWService::GetServiceId() const
{
    return m_serviceId;
}

void CloudBaseGWService::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CloudBaseGWService::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CloudBaseGWService::GetDomain() const
{
    return m_domain;
}

void CloudBaseGWService::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CloudBaseGWService::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t CloudBaseGWService::GetOpenTime() const
{
    return m_openTime;
}

void CloudBaseGWService::SetOpenTime(const uint64_t& _openTime)
{
    m_openTime = _openTime;
    m_openTimeHasBeenSet = true;
}

bool CloudBaseGWService::OpenTimeHasBeenSet() const
{
    return m_openTimeHasBeenSet;
}

int64_t CloudBaseGWService::GetStatus() const
{
    return m_status;
}

void CloudBaseGWService::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudBaseGWService::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool CloudBaseGWService::GetIsPreempted() const
{
    return m_isPreempted;
}

void CloudBaseGWService::SetIsPreempted(const bool& _isPreempted)
{
    m_isPreempted = _isPreempted;
    m_isPreemptedHasBeenSet = true;
}

bool CloudBaseGWService::IsPreemptedHasBeenSet() const
{
    return m_isPreemptedHasBeenSet;
}

bool CloudBaseGWService::GetEnableRegion() const
{
    return m_enableRegion;
}

void CloudBaseGWService::SetEnableRegion(const bool& _enableRegion)
{
    m_enableRegion = _enableRegion;
    m_enableRegionHasBeenSet = true;
}

bool CloudBaseGWService::EnableRegionHasBeenSet() const
{
    return m_enableRegionHasBeenSet;
}

string CloudBaseGWService::GetCname() const
{
    return m_cname;
}

void CloudBaseGWService::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool CloudBaseGWService::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

int64_t CloudBaseGWService::GetUnionStatus() const
{
    return m_unionStatus;
}

void CloudBaseGWService::SetUnionStatus(const int64_t& _unionStatus)
{
    m_unionStatus = _unionStatus;
    m_unionStatusHasBeenSet = true;
}

bool CloudBaseGWService::UnionStatusHasBeenSet() const
{
    return m_unionStatusHasBeenSet;
}

int64_t CloudBaseGWService::GetCnameStatus() const
{
    return m_cnameStatus;
}

void CloudBaseGWService::SetCnameStatus(const int64_t& _cnameStatus)
{
    m_cnameStatus = _cnameStatus;
    m_cnameStatusHasBeenSet = true;
}

bool CloudBaseGWService::CnameStatusHasBeenSet() const
{
    return m_cnameStatusHasBeenSet;
}

string CloudBaseGWService::GetCertId() const
{
    return m_certId;
}

void CloudBaseGWService::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CloudBaseGWService::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

bool CloudBaseGWService::GetForceHttps() const
{
    return m_forceHttps;
}

void CloudBaseGWService::SetForceHttps(const bool& _forceHttps)
{
    m_forceHttps = _forceHttps;
    m_forceHttpsHasBeenSet = true;
}

bool CloudBaseGWService::ForceHttpsHasBeenSet() const
{
    return m_forceHttpsHasBeenSet;
}

int64_t CloudBaseGWService::GetIcpForbidStatus() const
{
    return m_icpForbidStatus;
}

void CloudBaseGWService::SetIcpForbidStatus(const int64_t& _icpForbidStatus)
{
    m_icpForbidStatus = _icpForbidStatus;
    m_icpForbidStatusHasBeenSet = true;
}

bool CloudBaseGWService::IcpForbidStatusHasBeenSet() const
{
    return m_icpForbidStatusHasBeenSet;
}

string CloudBaseGWService::GetCustomRoutingRules() const
{
    return m_customRoutingRules;
}

void CloudBaseGWService::SetCustomRoutingRules(const string& _customRoutingRules)
{
    m_customRoutingRules = _customRoutingRules;
    m_customRoutingRulesHasBeenSet = true;
}

bool CloudBaseGWService::CustomRoutingRulesHasBeenSet() const
{
    return m_customRoutingRulesHasBeenSet;
}

uint64_t CloudBaseGWService::GetBindFlag() const
{
    return m_bindFlag;
}

void CloudBaseGWService::SetBindFlag(const uint64_t& _bindFlag)
{
    m_bindFlag = _bindFlag;
    m_bindFlagHasBeenSet = true;
}

bool CloudBaseGWService::BindFlagHasBeenSet() const
{
    return m_bindFlagHasBeenSet;
}

string CloudBaseGWService::GetOriginCname() const
{
    return m_originCname;
}

void CloudBaseGWService::SetOriginCname(const string& _originCname)
{
    m_originCname = _originCname;
    m_originCnameHasBeenSet = true;
}

bool CloudBaseGWService::OriginCnameHasBeenSet() const
{
    return m_originCnameHasBeenSet;
}

string CloudBaseGWService::GetCustomCname() const
{
    return m_customCname;
}

void CloudBaseGWService::SetCustomCname(const string& _customCname)
{
    m_customCname = _customCname;
    m_customCnameHasBeenSet = true;
}

bool CloudBaseGWService::CustomCnameHasBeenSet() const
{
    return m_customCnameHasBeenSet;
}

