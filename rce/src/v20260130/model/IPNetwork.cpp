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

#include <tencentcloud/rce/v20260130/model/IPNetwork.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

IPNetwork::IPNetwork() :
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

CoreInternalOutcome IPNetwork::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(value["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }

    if (value.HasMember("ASN") && !value["ASN"].IsNull())
    {
        if (!value["ASN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.ASN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aSN = string(value["ASN"].GetString());
        m_aSNHasBeenSet = true;
    }

    if (value.HasMember("Organization") && !value["Organization"].IsNull())
    {
        if (!value["Organization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.Organization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organization = string(value["Organization"].GetString());
        m_organizationHasBeenSet = true;
    }

    if (value.HasMember("IsReserved") && !value["IsReserved"].IsNull())
    {
        if (!value["IsReserved"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsReserved` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isReserved = value["IsReserved"].GetBool();
        m_isReservedHasBeenSet = true;
    }

    if (value.HasMember("IsGateway") && !value["IsGateway"].IsNull())
    {
        if (!value["IsGateway"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsGateway` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGateway = value["IsGateway"].GetBool();
        m_isGatewayHasBeenSet = true;
    }

    if (value.HasMember("IsAnycast") && !value["IsAnycast"].IsNull())
    {
        if (!value["IsAnycast"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsAnycast` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAnycast = value["IsAnycast"].GetBool();
        m_isAnycastHasBeenSet = true;
    }

    if (value.HasMember("IsMobile") && !value["IsMobile"].IsNull())
    {
        if (!value["IsMobile"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsMobile` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMobile = value["IsMobile"].GetBool();
        m_isMobileHasBeenSet = true;
    }

    if (value.HasMember("IsDynamic") && !value["IsDynamic"].IsNull())
    {
        if (!value["IsDynamic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsDynamic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDynamic = value["IsDynamic"].GetBool();
        m_isDynamicHasBeenSet = true;
    }

    if (value.HasMember("IsEgress") && !value["IsEgress"].IsNull())
    {
        if (!value["IsEgress"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsEgress` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEgress = value["IsEgress"].GetBool();
        m_isEgressHasBeenSet = true;
    }

    if (value.HasMember("IsDNS") && !value["IsDNS"].IsNull())
    {
        if (!value["IsDNS"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsDNS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDNS = value["IsDNS"].GetBool();
        m_isDNSHasBeenSet = true;
    }

    if (value.HasMember("IsEducation") && !value["IsEducation"].IsNull())
    {
        if (!value["IsEducation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsEducation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEducation = value["IsEducation"].GetBool();
        m_isEducationHasBeenSet = true;
    }

    if (value.HasMember("IsInstitution") && !value["IsInstitution"].IsNull())
    {
        if (!value["IsInstitution"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsInstitution` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isInstitution = value["IsInstitution"].GetBool();
        m_isInstitutionHasBeenSet = true;
    }

    if (value.HasMember("IsCompany") && !value["IsCompany"].IsNull())
    {
        if (!value["IsCompany"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsCompany` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCompany = value["IsCompany"].GetBool();
        m_isCompanyHasBeenSet = true;
    }

    if (value.HasMember("IsResidence") && !value["IsResidence"].IsNull())
    {
        if (!value["IsResidence"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsResidence` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isResidence = value["IsResidence"].GetBool();
        m_isResidenceHasBeenSet = true;
    }

    if (value.HasMember("IsCloudService") && !value["IsCloudService"].IsNull())
    {
        if (!value["IsCloudService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsCloudService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCloudService = value["IsCloudService"].GetBool();
        m_isCloudServiceHasBeenSet = true;
    }

    if (value.HasMember("IsInfrastructure") && !value["IsInfrastructure"].IsNull())
    {
        if (!value["IsInfrastructure"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsInfrastructure` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isInfrastructure = value["IsInfrastructure"].GetBool();
        m_isInfrastructureHasBeenSet = true;
    }

    if (value.HasMember("IsMXServer") && !value["IsMXServer"].IsNull())
    {
        if (!value["IsMXServer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IPNetwork.IsMXServer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMXServer = value["IsMXServer"].GetBool();
        m_isMXServerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPNetwork::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string IPNetwork::GetISP() const
{
    return m_iSP;
}

void IPNetwork::SetISP(const string& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool IPNetwork::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

string IPNetwork::GetASN() const
{
    return m_aSN;
}

void IPNetwork::SetASN(const string& _aSN)
{
    m_aSN = _aSN;
    m_aSNHasBeenSet = true;
}

bool IPNetwork::ASNHasBeenSet() const
{
    return m_aSNHasBeenSet;
}

string IPNetwork::GetOrganization() const
{
    return m_organization;
}

void IPNetwork::SetOrganization(const string& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool IPNetwork::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

bool IPNetwork::GetIsReserved() const
{
    return m_isReserved;
}

void IPNetwork::SetIsReserved(const bool& _isReserved)
{
    m_isReserved = _isReserved;
    m_isReservedHasBeenSet = true;
}

bool IPNetwork::IsReservedHasBeenSet() const
{
    return m_isReservedHasBeenSet;
}

bool IPNetwork::GetIsGateway() const
{
    return m_isGateway;
}

void IPNetwork::SetIsGateway(const bool& _isGateway)
{
    m_isGateway = _isGateway;
    m_isGatewayHasBeenSet = true;
}

bool IPNetwork::IsGatewayHasBeenSet() const
{
    return m_isGatewayHasBeenSet;
}

bool IPNetwork::GetIsAnycast() const
{
    return m_isAnycast;
}

void IPNetwork::SetIsAnycast(const bool& _isAnycast)
{
    m_isAnycast = _isAnycast;
    m_isAnycastHasBeenSet = true;
}

bool IPNetwork::IsAnycastHasBeenSet() const
{
    return m_isAnycastHasBeenSet;
}

bool IPNetwork::GetIsMobile() const
{
    return m_isMobile;
}

void IPNetwork::SetIsMobile(const bool& _isMobile)
{
    m_isMobile = _isMobile;
    m_isMobileHasBeenSet = true;
}

bool IPNetwork::IsMobileHasBeenSet() const
{
    return m_isMobileHasBeenSet;
}

bool IPNetwork::GetIsDynamic() const
{
    return m_isDynamic;
}

void IPNetwork::SetIsDynamic(const bool& _isDynamic)
{
    m_isDynamic = _isDynamic;
    m_isDynamicHasBeenSet = true;
}

bool IPNetwork::IsDynamicHasBeenSet() const
{
    return m_isDynamicHasBeenSet;
}

bool IPNetwork::GetIsEgress() const
{
    return m_isEgress;
}

void IPNetwork::SetIsEgress(const bool& _isEgress)
{
    m_isEgress = _isEgress;
    m_isEgressHasBeenSet = true;
}

bool IPNetwork::IsEgressHasBeenSet() const
{
    return m_isEgressHasBeenSet;
}

bool IPNetwork::GetIsDNS() const
{
    return m_isDNS;
}

void IPNetwork::SetIsDNS(const bool& _isDNS)
{
    m_isDNS = _isDNS;
    m_isDNSHasBeenSet = true;
}

bool IPNetwork::IsDNSHasBeenSet() const
{
    return m_isDNSHasBeenSet;
}

bool IPNetwork::GetIsEducation() const
{
    return m_isEducation;
}

void IPNetwork::SetIsEducation(const bool& _isEducation)
{
    m_isEducation = _isEducation;
    m_isEducationHasBeenSet = true;
}

bool IPNetwork::IsEducationHasBeenSet() const
{
    return m_isEducationHasBeenSet;
}

bool IPNetwork::GetIsInstitution() const
{
    return m_isInstitution;
}

void IPNetwork::SetIsInstitution(const bool& _isInstitution)
{
    m_isInstitution = _isInstitution;
    m_isInstitutionHasBeenSet = true;
}

bool IPNetwork::IsInstitutionHasBeenSet() const
{
    return m_isInstitutionHasBeenSet;
}

bool IPNetwork::GetIsCompany() const
{
    return m_isCompany;
}

void IPNetwork::SetIsCompany(const bool& _isCompany)
{
    m_isCompany = _isCompany;
    m_isCompanyHasBeenSet = true;
}

bool IPNetwork::IsCompanyHasBeenSet() const
{
    return m_isCompanyHasBeenSet;
}

bool IPNetwork::GetIsResidence() const
{
    return m_isResidence;
}

void IPNetwork::SetIsResidence(const bool& _isResidence)
{
    m_isResidence = _isResidence;
    m_isResidenceHasBeenSet = true;
}

bool IPNetwork::IsResidenceHasBeenSet() const
{
    return m_isResidenceHasBeenSet;
}

bool IPNetwork::GetIsCloudService() const
{
    return m_isCloudService;
}

void IPNetwork::SetIsCloudService(const bool& _isCloudService)
{
    m_isCloudService = _isCloudService;
    m_isCloudServiceHasBeenSet = true;
}

bool IPNetwork::IsCloudServiceHasBeenSet() const
{
    return m_isCloudServiceHasBeenSet;
}

bool IPNetwork::GetIsInfrastructure() const
{
    return m_isInfrastructure;
}

void IPNetwork::SetIsInfrastructure(const bool& _isInfrastructure)
{
    m_isInfrastructure = _isInfrastructure;
    m_isInfrastructureHasBeenSet = true;
}

bool IPNetwork::IsInfrastructureHasBeenSet() const
{
    return m_isInfrastructureHasBeenSet;
}

bool IPNetwork::GetIsMXServer() const
{
    return m_isMXServer;
}

void IPNetwork::SetIsMXServer(const bool& _isMXServer)
{
    m_isMXServer = _isMXServer;
    m_isMXServerHasBeenSet = true;
}

bool IPNetwork::IsMXServerHasBeenSet() const
{
    return m_isMXServerHasBeenSet;
}

