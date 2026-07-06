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

#include <tencentcloud/rce/v20250425/model/IpNetworkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20250425::Model;
using namespace std;

IpNetworkInfo::IpNetworkInfo() :
    m_iSPHasBeenSet(false),
    m_aSNHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_isReservedHasBeenSet(false),
    m_isGatewayHasBeenSet(false),
    m_isAnycastHasBeenSet(false),
    m_isMobileHasBeenSet(false),
    m_isDynamicHasBeenSet(false),
    m_isEgressHasBeenSet(false),
    m_isDNSHasBeenSet(false),
    m_isEducationHasBeenSet(false),
    m_isInstitutionHasBeenSet(false),
    m_isCompanyHasBeenSet(false),
    m_isResidenceHasBeenSet(false),
    m_isCloudServiceHasBeenSet(false),
    m_isInfrastructureHasBeenSet(false),
    m_isMXServerHasBeenSet(false)
{
}

CoreInternalOutcome IpNetworkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(value["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }

    if (value.HasMember("ASN") && !value["ASN"].IsNull())
    {
        if (!value["ASN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.ASN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aSN = string(value["ASN"].GetString());
        m_aSNHasBeenSet = true;
    }

    if (value.HasMember("Organization") && !value["Organization"].IsNull())
    {
        if (!value["Organization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.Organization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organization = string(value["Organization"].GetString());
        m_organizationHasBeenSet = true;
    }

    if (value.HasMember("IsReserved") && !value["IsReserved"].IsNull())
    {
        if (!value["IsReserved"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsReserved` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isReserved = value["IsReserved"].GetBool();
        m_isReservedHasBeenSet = true;
    }

    if (value.HasMember("IsGateway") && !value["IsGateway"].IsNull())
    {
        if (!value["IsGateway"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsGateway` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGateway = value["IsGateway"].GetBool();
        m_isGatewayHasBeenSet = true;
    }

    if (value.HasMember("IsAnycast") && !value["IsAnycast"].IsNull())
    {
        if (!value["IsAnycast"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsAnycast` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAnycast = value["IsAnycast"].GetBool();
        m_isAnycastHasBeenSet = true;
    }

    if (value.HasMember("IsMobile") && !value["IsMobile"].IsNull())
    {
        if (!value["IsMobile"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsMobile` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMobile = value["IsMobile"].GetBool();
        m_isMobileHasBeenSet = true;
    }

    if (value.HasMember("IsDynamic") && !value["IsDynamic"].IsNull())
    {
        if (!value["IsDynamic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsDynamic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDynamic = value["IsDynamic"].GetBool();
        m_isDynamicHasBeenSet = true;
    }

    if (value.HasMember("IsEgress") && !value["IsEgress"].IsNull())
    {
        if (!value["IsEgress"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsEgress` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEgress = value["IsEgress"].GetBool();
        m_isEgressHasBeenSet = true;
    }

    if (value.HasMember("IsDNS") && !value["IsDNS"].IsNull())
    {
        if (!value["IsDNS"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsDNS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDNS = value["IsDNS"].GetBool();
        m_isDNSHasBeenSet = true;
    }

    if (value.HasMember("IsEducation") && !value["IsEducation"].IsNull())
    {
        if (!value["IsEducation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsEducation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEducation = value["IsEducation"].GetBool();
        m_isEducationHasBeenSet = true;
    }

    if (value.HasMember("IsInstitution") && !value["IsInstitution"].IsNull())
    {
        if (!value["IsInstitution"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsInstitution` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isInstitution = value["IsInstitution"].GetBool();
        m_isInstitutionHasBeenSet = true;
    }

    if (value.HasMember("IsCompany") && !value["IsCompany"].IsNull())
    {
        if (!value["IsCompany"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsCompany` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCompany = value["IsCompany"].GetBool();
        m_isCompanyHasBeenSet = true;
    }

    if (value.HasMember("IsResidence") && !value["IsResidence"].IsNull())
    {
        if (!value["IsResidence"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsResidence` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isResidence = value["IsResidence"].GetBool();
        m_isResidenceHasBeenSet = true;
    }

    if (value.HasMember("IsCloudService") && !value["IsCloudService"].IsNull())
    {
        if (!value["IsCloudService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsCloudService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCloudService = value["IsCloudService"].GetBool();
        m_isCloudServiceHasBeenSet = true;
    }

    if (value.HasMember("IsInfrastructure") && !value["IsInfrastructure"].IsNull())
    {
        if (!value["IsInfrastructure"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsInfrastructure` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isInfrastructure = value["IsInfrastructure"].GetBool();
        m_isInfrastructureHasBeenSet = true;
    }

    if (value.HasMember("IsMXServer") && !value["IsMXServer"].IsNull())
    {
        if (!value["IsMXServer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IpNetworkInfo.IsMXServer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMXServer = value["IsMXServer"].GetBool();
        m_isMXServerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpNetworkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSP.c_str(), allocator).Move(), allocator);
    }

    if (m_aSNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ASN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aSN.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organization.c_str(), allocator).Move(), allocator);
    }

    if (m_isReservedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReserved";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReserved, allocator);
    }

    if (m_isGatewayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGateway";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGateway, allocator);
    }

    if (m_isAnycastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAnycast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAnycast, allocator);
    }

    if (m_isMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMobile, allocator);
    }

    if (m_isDynamicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDynamic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDynamic, allocator);
    }

    if (m_isEgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEgress, allocator);
    }

    if (m_isDNSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDNS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDNS, allocator);
    }

    if (m_isEducationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEducation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEducation, allocator);
    }

    if (m_isInstitutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInstitution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInstitution, allocator);
    }

    if (m_isCompanyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCompany";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCompany, allocator);
    }

    if (m_isResidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsResidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isResidence, allocator);
    }

    if (m_isCloudServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCloudService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCloudService, allocator);
    }

    if (m_isInfrastructureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInfrastructure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInfrastructure, allocator);
    }

    if (m_isMXServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMXServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMXServer, allocator);
    }

}


string IpNetworkInfo::GetISP() const
{
    return m_iSP;
}

void IpNetworkInfo::SetISP(const string& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool IpNetworkInfo::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

string IpNetworkInfo::GetASN() const
{
    return m_aSN;
}

void IpNetworkInfo::SetASN(const string& _aSN)
{
    m_aSN = _aSN;
    m_aSNHasBeenSet = true;
}

bool IpNetworkInfo::ASNHasBeenSet() const
{
    return m_aSNHasBeenSet;
}

string IpNetworkInfo::GetOrganization() const
{
    return m_organization;
}

void IpNetworkInfo::SetOrganization(const string& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool IpNetworkInfo::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

bool IpNetworkInfo::GetIsReserved() const
{
    return m_isReserved;
}

void IpNetworkInfo::SetIsReserved(const bool& _isReserved)
{
    m_isReserved = _isReserved;
    m_isReservedHasBeenSet = true;
}

bool IpNetworkInfo::IsReservedHasBeenSet() const
{
    return m_isReservedHasBeenSet;
}

bool IpNetworkInfo::GetIsGateway() const
{
    return m_isGateway;
}

void IpNetworkInfo::SetIsGateway(const bool& _isGateway)
{
    m_isGateway = _isGateway;
    m_isGatewayHasBeenSet = true;
}

bool IpNetworkInfo::IsGatewayHasBeenSet() const
{
    return m_isGatewayHasBeenSet;
}

bool IpNetworkInfo::GetIsAnycast() const
{
    return m_isAnycast;
}

void IpNetworkInfo::SetIsAnycast(const bool& _isAnycast)
{
    m_isAnycast = _isAnycast;
    m_isAnycastHasBeenSet = true;
}

bool IpNetworkInfo::IsAnycastHasBeenSet() const
{
    return m_isAnycastHasBeenSet;
}

bool IpNetworkInfo::GetIsMobile() const
{
    return m_isMobile;
}

void IpNetworkInfo::SetIsMobile(const bool& _isMobile)
{
    m_isMobile = _isMobile;
    m_isMobileHasBeenSet = true;
}

bool IpNetworkInfo::IsMobileHasBeenSet() const
{
    return m_isMobileHasBeenSet;
}

bool IpNetworkInfo::GetIsDynamic() const
{
    return m_isDynamic;
}

void IpNetworkInfo::SetIsDynamic(const bool& _isDynamic)
{
    m_isDynamic = _isDynamic;
    m_isDynamicHasBeenSet = true;
}

bool IpNetworkInfo::IsDynamicHasBeenSet() const
{
    return m_isDynamicHasBeenSet;
}

bool IpNetworkInfo::GetIsEgress() const
{
    return m_isEgress;
}

void IpNetworkInfo::SetIsEgress(const bool& _isEgress)
{
    m_isEgress = _isEgress;
    m_isEgressHasBeenSet = true;
}

bool IpNetworkInfo::IsEgressHasBeenSet() const
{
    return m_isEgressHasBeenSet;
}

bool IpNetworkInfo::GetIsDNS() const
{
    return m_isDNS;
}

void IpNetworkInfo::SetIsDNS(const bool& _isDNS)
{
    m_isDNS = _isDNS;
    m_isDNSHasBeenSet = true;
}

bool IpNetworkInfo::IsDNSHasBeenSet() const
{
    return m_isDNSHasBeenSet;
}

bool IpNetworkInfo::GetIsEducation() const
{
    return m_isEducation;
}

void IpNetworkInfo::SetIsEducation(const bool& _isEducation)
{
    m_isEducation = _isEducation;
    m_isEducationHasBeenSet = true;
}

bool IpNetworkInfo::IsEducationHasBeenSet() const
{
    return m_isEducationHasBeenSet;
}

bool IpNetworkInfo::GetIsInstitution() const
{
    return m_isInstitution;
}

void IpNetworkInfo::SetIsInstitution(const bool& _isInstitution)
{
    m_isInstitution = _isInstitution;
    m_isInstitutionHasBeenSet = true;
}

bool IpNetworkInfo::IsInstitutionHasBeenSet() const
{
    return m_isInstitutionHasBeenSet;
}

bool IpNetworkInfo::GetIsCompany() const
{
    return m_isCompany;
}

void IpNetworkInfo::SetIsCompany(const bool& _isCompany)
{
    m_isCompany = _isCompany;
    m_isCompanyHasBeenSet = true;
}

bool IpNetworkInfo::IsCompanyHasBeenSet() const
{
    return m_isCompanyHasBeenSet;
}

bool IpNetworkInfo::GetIsResidence() const
{
    return m_isResidence;
}

void IpNetworkInfo::SetIsResidence(const bool& _isResidence)
{
    m_isResidence = _isResidence;
    m_isResidenceHasBeenSet = true;
}

bool IpNetworkInfo::IsResidenceHasBeenSet() const
{
    return m_isResidenceHasBeenSet;
}

bool IpNetworkInfo::GetIsCloudService() const
{
    return m_isCloudService;
}

void IpNetworkInfo::SetIsCloudService(const bool& _isCloudService)
{
    m_isCloudService = _isCloudService;
    m_isCloudServiceHasBeenSet = true;
}

bool IpNetworkInfo::IsCloudServiceHasBeenSet() const
{
    return m_isCloudServiceHasBeenSet;
}

bool IpNetworkInfo::GetIsInfrastructure() const
{
    return m_isInfrastructure;
}

void IpNetworkInfo::SetIsInfrastructure(const bool& _isInfrastructure)
{
    m_isInfrastructure = _isInfrastructure;
    m_isInfrastructureHasBeenSet = true;
}

bool IpNetworkInfo::IsInfrastructureHasBeenSet() const
{
    return m_isInfrastructureHasBeenSet;
}

bool IpNetworkInfo::GetIsMXServer() const
{
    return m_isMXServer;
}

void IpNetworkInfo::SetIsMXServer(const bool& _isMXServer)
{
    m_isMXServer = _isMXServer;
    m_isMXServerHasBeenSet = true;
}

bool IpNetworkInfo::IsMXServerHasBeenSet() const
{
    return m_isMXServerHasBeenSet;
}

