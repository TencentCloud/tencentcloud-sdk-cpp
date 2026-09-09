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

#include <tencentcloud/ioa/v20220601/model/DescribeBusinessResourceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeBusinessResourceData::DescribeBusinessResourceData() :
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_serviceAddressHasBeenSet(false),
    m_servicePortHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_areaIdHasBeenSet(false),
    m_smartGateIdsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_levelsHasBeenSet(false),
    m_smartGateNamesHasBeenSet(false),
    m_directConnHasBeenSet(false),
    m_detectStateHasBeenSet(false),
    m_detectInfoHasBeenSet(false),
    m_detectTimeHasBeenSet(false),
    m_connectorGroupIdHasBeenSet(false),
    m_connectorGroupNameHasBeenSet(false),
    m_reachableTimeHasBeenSet(false),
    m_reachableStateHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_backendSchemeHasBeenSet(false),
    m_backendPathHasBeenSet(false),
    m_frontSchemeHasBeenSet(false),
    m_frontHostHasBeenSet(false),
    m_frontPortHasBeenSet(false),
    m_frontPathHasBeenSet(false),
    m_disableFrontHasBeenSet(false),
    m_customDomainHasBeenSet(false),
    m_customHostHasBeenSet(false),
    m_cnameStatusHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_webGwResourceTypeHasBeenSet(false),
    m_aPISecretIdHasBeenSet(false),
    m_areaNameHasBeenSet(false),
    m_sSLCertIdHasBeenSet(false),
    m_enableDependentAddrHasBeenSet(false),
    m_dependentAddrHasBeenSet(false),
    m_webGwNoAuthHasBeenSet(false),
    m_connectorGroupTypeHasBeenSet(false),
    m_domainSuffixHasBeenSet(false),
    m_connectivityCheckSwitchHasBeenSet(false),
    m_connectivityCheckIntervalHasBeenSet(false),
    m_connectivityCheckIntervalUnitHasBeenSet(false),
    m_uRLAuditStateHasBeenSet(false),
    m_uRLAuditIdHasBeenSet(false),
    m_uRLPathHasBeenSet(false),
    m_reachableTypeHasBeenSet(false),
    m_aPISecretNameHasBeenSet(false),
    m_aPISecretKeyHasBeenSet(false),
    m_enableSensitiveResHasBeenSet(false),
    m_enableIPPolicyHasBeenSet(false),
    m_iPPolicyAttrHasBeenSet(false),
    m_iPPolicyIdsHasBeenSet(false),
    m_iPPolicyNamesHasBeenSet(false),
    m_enableUserAgentHasBeenSet(false),
    m_userAgentAttrHasBeenSet(false),
    m_userAgentIdsHasBeenSet(false),
    m_userAgentNamesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBusinessResourceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ServiceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = value["ServiceId"].GetInt64();
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceAddress") && !value["ServiceAddress"].IsNull())
    {
        if (!value["ServiceAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ServiceAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceAddress = string(value["ServiceAddress"].GetString());
        m_serviceAddressHasBeenSet = true;
    }

    if (value.HasMember("ServicePort") && !value["ServicePort"].IsNull())
    {
        if (!value["ServicePort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ServicePort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_servicePort = string(value["ServicePort"].GetString());
        m_servicePortHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AreaId") && !value["AreaId"].IsNull())
    {
        if (!value["AreaId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.AreaId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_areaId = value["AreaId"].GetInt64();
        m_areaIdHasBeenSet = true;
    }

    if (value.HasMember("SmartGateIds") && !value["SmartGateIds"].IsNull())
    {
        if (!value["SmartGateIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.SmartGateIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SmartGateIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_smartGateIds.push_back((*itr).GetInt64());
        }
        m_smartGateIdsHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.Protocol` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = value["Protocol"].GetInt64();
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Levels") && !value["Levels"].IsNull())
    {
        if (!value["Levels"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.Levels` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levels = value["Levels"].GetInt64();
        m_levelsHasBeenSet = true;
    }

    if (value.HasMember("SmartGateNames") && !value["SmartGateNames"].IsNull())
    {
        if (!value["SmartGateNames"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.SmartGateNames` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_smartGateNames = string(value["SmartGateNames"].GetString());
        m_smartGateNamesHasBeenSet = true;
    }

    if (value.HasMember("DirectConn") && !value["DirectConn"].IsNull())
    {
        if (!value["DirectConn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.DirectConn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_directConn = value["DirectConn"].GetInt64();
        m_directConnHasBeenSet = true;
    }

    if (value.HasMember("DetectState") && !value["DetectState"].IsNull())
    {
        if (!value["DetectState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.DetectState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectState = value["DetectState"].GetInt64();
        m_detectStateHasBeenSet = true;
    }

    if (value.HasMember("DetectInfo") && !value["DetectInfo"].IsNull())
    {
        if (!value["DetectInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.DetectInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectInfo = string(value["DetectInfo"].GetString());
        m_detectInfoHasBeenSet = true;
    }

    if (value.HasMember("DetectTime") && !value["DetectTime"].IsNull())
    {
        if (!value["DetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.DetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectTime = string(value["DetectTime"].GetString());
        m_detectTimeHasBeenSet = true;
    }

    if (value.HasMember("ConnectorGroupId") && !value["ConnectorGroupId"].IsNull())
    {
        if (!value["ConnectorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ConnectorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorGroupId = string(value["ConnectorGroupId"].GetString());
        m_connectorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ConnectorGroupName") && !value["ConnectorGroupName"].IsNull())
    {
        if (!value["ConnectorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ConnectorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorGroupName = string(value["ConnectorGroupName"].GetString());
        m_connectorGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ReachableTime") && !value["ReachableTime"].IsNull())
    {
        if (!value["ReachableTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ReachableTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reachableTime = string(value["ReachableTime"].GetString());
        m_reachableTimeHasBeenSet = true;
    }

    if (value.HasMember("ReachableState") && !value["ReachableState"].IsNull())
    {
        if (!value["ReachableState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ReachableState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reachableState = value["ReachableState"].GetInt64();
        m_reachableStateHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("BackendScheme") && !value["BackendScheme"].IsNull())
    {
        if (!value["BackendScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.BackendScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backendScheme = string(value["BackendScheme"].GetString());
        m_backendSchemeHasBeenSet = true;
    }

    if (value.HasMember("BackendPath") && !value["BackendPath"].IsNull())
    {
        if (!value["BackendPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.BackendPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backendPath = string(value["BackendPath"].GetString());
        m_backendPathHasBeenSet = true;
    }

    if (value.HasMember("FrontScheme") && !value["FrontScheme"].IsNull())
    {
        if (!value["FrontScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.FrontScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontScheme = string(value["FrontScheme"].GetString());
        m_frontSchemeHasBeenSet = true;
    }

    if (value.HasMember("FrontHost") && !value["FrontHost"].IsNull())
    {
        if (!value["FrontHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.FrontHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontHost = string(value["FrontHost"].GetString());
        m_frontHostHasBeenSet = true;
    }

    if (value.HasMember("FrontPort") && !value["FrontPort"].IsNull())
    {
        if (!value["FrontPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.FrontPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frontPort = value["FrontPort"].GetInt64();
        m_frontPortHasBeenSet = true;
    }

    if (value.HasMember("FrontPath") && !value["FrontPath"].IsNull())
    {
        if (!value["FrontPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.FrontPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontPath = string(value["FrontPath"].GetString());
        m_frontPathHasBeenSet = true;
    }

    if (value.HasMember("DisableFront") && !value["DisableFront"].IsNull())
    {
        if (!value["DisableFront"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.DisableFront` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disableFront = value["DisableFront"].GetInt64();
        m_disableFrontHasBeenSet = true;
    }

    if (value.HasMember("CustomDomain") && !value["CustomDomain"].IsNull())
    {
        if (!value["CustomDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.CustomDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customDomain = string(value["CustomDomain"].GetString());
        m_customDomainHasBeenSet = true;
    }

    if (value.HasMember("CustomHost") && !value["CustomHost"].IsNull())
    {
        if (!value["CustomHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.CustomHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customHost = string(value["CustomHost"].GetString());
        m_customHostHasBeenSet = true;
    }

    if (value.HasMember("CnameStatus") && !value["CnameStatus"].IsNull())
    {
        if (!value["CnameStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.CnameStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cnameStatus = value["CnameStatus"].GetInt64();
        m_cnameStatusHasBeenSet = true;
    }

    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.CertificateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = value["CertificateId"].GetInt64();
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("WebGwResourceType") && !value["WebGwResourceType"].IsNull())
    {
        if (!value["WebGwResourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.WebGwResourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webGwResourceType = value["WebGwResourceType"].GetInt64();
        m_webGwResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("APISecretId") && !value["APISecretId"].IsNull())
    {
        if (!value["APISecretId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.APISecretId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aPISecretId = value["APISecretId"].GetInt64();
        m_aPISecretIdHasBeenSet = true;
    }

    if (value.HasMember("AreaName") && !value["AreaName"].IsNull())
    {
        if (!value["AreaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.AreaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaName = string(value["AreaName"].GetString());
        m_areaNameHasBeenSet = true;
    }

    if (value.HasMember("SSLCertId") && !value["SSLCertId"].IsNull())
    {
        if (!value["SSLCertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.SSLCertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLCertId = string(value["SSLCertId"].GetString());
        m_sSLCertIdHasBeenSet = true;
    }

    if (value.HasMember("EnableDependentAddr") && !value["EnableDependentAddr"].IsNull())
    {
        if (!value["EnableDependentAddr"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.EnableDependentAddr` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableDependentAddr = value["EnableDependentAddr"].GetInt64();
        m_enableDependentAddrHasBeenSet = true;
    }

    if (value.HasMember("DependentAddr") && !value["DependentAddr"].IsNull())
    {
        if (!value["DependentAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.DependentAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependentAddr = string(value["DependentAddr"].GetString());
        m_dependentAddrHasBeenSet = true;
    }

    if (value.HasMember("WebGwNoAuth") && !value["WebGwNoAuth"].IsNull())
    {
        if (!value["WebGwNoAuth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.WebGwNoAuth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webGwNoAuth = value["WebGwNoAuth"].GetInt64();
        m_webGwNoAuthHasBeenSet = true;
    }

    if (value.HasMember("ConnectorGroupType") && !value["ConnectorGroupType"].IsNull())
    {
        if (!value["ConnectorGroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ConnectorGroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorGroupType = string(value["ConnectorGroupType"].GetString());
        m_connectorGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("DomainSuffix") && !value["DomainSuffix"].IsNull())
    {
        if (!value["DomainSuffix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.DomainSuffix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainSuffix = string(value["DomainSuffix"].GetString());
        m_domainSuffixHasBeenSet = true;
    }

    if (value.HasMember("ConnectivityCheckSwitch") && !value["ConnectivityCheckSwitch"].IsNull())
    {
        if (!value["ConnectivityCheckSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ConnectivityCheckSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectivityCheckSwitch = value["ConnectivityCheckSwitch"].GetInt64();
        m_connectivityCheckSwitchHasBeenSet = true;
    }

    if (value.HasMember("ConnectivityCheckInterval") && !value["ConnectivityCheckInterval"].IsNull())
    {
        if (!value["ConnectivityCheckInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ConnectivityCheckInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectivityCheckInterval = value["ConnectivityCheckInterval"].GetInt64();
        m_connectivityCheckIntervalHasBeenSet = true;
    }

    if (value.HasMember("ConnectivityCheckIntervalUnit") && !value["ConnectivityCheckIntervalUnit"].IsNull())
    {
        if (!value["ConnectivityCheckIntervalUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ConnectivityCheckIntervalUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectivityCheckIntervalUnit = string(value["ConnectivityCheckIntervalUnit"].GetString());
        m_connectivityCheckIntervalUnitHasBeenSet = true;
    }

    if (value.HasMember("URLAuditState") && !value["URLAuditState"].IsNull())
    {
        if (!value["URLAuditState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.URLAuditState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uRLAuditState = value["URLAuditState"].GetInt64();
        m_uRLAuditStateHasBeenSet = true;
    }

    if (value.HasMember("URLAuditId") && !value["URLAuditId"].IsNull())
    {
        if (!value["URLAuditId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.URLAuditId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRLAuditId = string(value["URLAuditId"].GetString());
        m_uRLAuditIdHasBeenSet = true;
    }

    if (value.HasMember("URLPath") && !value["URLPath"].IsNull())
    {
        if (!value["URLPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.URLPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRLPath = string(value["URLPath"].GetString());
        m_uRLPathHasBeenSet = true;
    }

    if (value.HasMember("ReachableType") && !value["ReachableType"].IsNull())
    {
        if (!value["ReachableType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.ReachableType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reachableType = value["ReachableType"].GetInt64();
        m_reachableTypeHasBeenSet = true;
    }

    if (value.HasMember("APISecretName") && !value["APISecretName"].IsNull())
    {
        if (!value["APISecretName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.APISecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPISecretName = string(value["APISecretName"].GetString());
        m_aPISecretNameHasBeenSet = true;
    }

    if (value.HasMember("APISecretKey") && !value["APISecretKey"].IsNull())
    {
        if (!value["APISecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.APISecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aPISecretKey = string(value["APISecretKey"].GetString());
        m_aPISecretKeyHasBeenSet = true;
    }

    if (value.HasMember("EnableSensitiveRes") && !value["EnableSensitiveRes"].IsNull())
    {
        if (!value["EnableSensitiveRes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.EnableSensitiveRes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableSensitiveRes = value["EnableSensitiveRes"].GetInt64();
        m_enableSensitiveResHasBeenSet = true;
    }

    if (value.HasMember("EnableIPPolicy") && !value["EnableIPPolicy"].IsNull())
    {
        if (!value["EnableIPPolicy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.EnableIPPolicy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableIPPolicy = value["EnableIPPolicy"].GetInt64();
        m_enableIPPolicyHasBeenSet = true;
    }

    if (value.HasMember("IPPolicyAttr") && !value["IPPolicyAttr"].IsNull())
    {
        if (!value["IPPolicyAttr"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.IPPolicyAttr` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iPPolicyAttr = value["IPPolicyAttr"].GetInt64();
        m_iPPolicyAttrHasBeenSet = true;
    }

    if (value.HasMember("IPPolicyIds") && !value["IPPolicyIds"].IsNull())
    {
        if (!value["IPPolicyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.IPPolicyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["IPPolicyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPPolicyIds.push_back((*itr).GetInt64());
        }
        m_iPPolicyIdsHasBeenSet = true;
    }

    if (value.HasMember("IPPolicyNames") && !value["IPPolicyNames"].IsNull())
    {
        if (!value["IPPolicyNames"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.IPPolicyNames` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPPolicyNames = string(value["IPPolicyNames"].GetString());
        m_iPPolicyNamesHasBeenSet = true;
    }

    if (value.HasMember("EnableUserAgent") && !value["EnableUserAgent"].IsNull())
    {
        if (!value["EnableUserAgent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.EnableUserAgent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableUserAgent = value["EnableUserAgent"].GetInt64();
        m_enableUserAgentHasBeenSet = true;
    }

    if (value.HasMember("UserAgentAttr") && !value["UserAgentAttr"].IsNull())
    {
        if (!value["UserAgentAttr"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.UserAgentAttr` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userAgentAttr = value["UserAgentAttr"].GetInt64();
        m_userAgentAttrHasBeenSet = true;
    }

    if (value.HasMember("UserAgentIds") && !value["UserAgentIds"].IsNull())
    {
        if (!value["UserAgentIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.UserAgentIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UserAgentIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userAgentIds.push_back((*itr).GetString());
        }
        m_userAgentIdsHasBeenSet = true;
    }

    if (value.HasMember("UserAgentNames") && !value["UserAgentNames"].IsNull())
    {
        if (!value["UserAgentNames"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBusinessResourceData.UserAgentNames` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgentNames = string(value["UserAgentNames"].GetString());
        m_userAgentNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeBusinessResourceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceId, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_servicePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_servicePort.c_str(), allocator).Move(), allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_areaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_areaId, allocator);
    }

    if (m_smartGateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartGateIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_smartGateIds.begin(); itr != m_smartGateIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protocol, allocator);
    }

    if (m_levelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Levels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levels, allocator);
    }

    if (m_smartGateNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartGateNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_smartGateNames.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_directConn, allocator);
    }

    if (m_detectStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectState, allocator);
    }

    if (m_detectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_detectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_reachableTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReachableTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reachableTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reachableStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReachableState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reachableState, allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_backendSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackendScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backendScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_backendPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackendPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backendPath.c_str(), allocator).Move(), allocator);
    }

    if (m_frontSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frontScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_frontHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frontHost.c_str(), allocator).Move(), allocator);
    }

    if (m_frontPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frontPort, allocator);
    }

    if (m_frontPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frontPath.c_str(), allocator).Move(), allocator);
    }

    if (m_disableFrontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableFront";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableFront, allocator);
    }

    if (m_customDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_customHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customHost.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cnameStatus, allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certificateId, allocator);
    }

    if (m_webGwResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebGwResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webGwResourceType, allocator);
    }

    if (m_aPISecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APISecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aPISecretId, allocator);
    }

    if (m_areaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaName.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLCertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLCertId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDependentAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDependentAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDependentAddr, allocator);
    }

    if (m_dependentAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependentAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependentAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_webGwNoAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebGwNoAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webGwNoAuth, allocator);
    }

    if (m_connectorGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_domainSuffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainSuffix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainSuffix.c_str(), allocator).Move(), allocator);
    }

    if (m_connectivityCheckSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectivityCheckSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectivityCheckSwitch, allocator);
    }

    if (m_connectivityCheckIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectivityCheckInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectivityCheckInterval, allocator);
    }

    if (m_connectivityCheckIntervalUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectivityCheckIntervalUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectivityCheckIntervalUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLAuditStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLAuditState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uRLAuditState, allocator);
    }

    if (m_uRLAuditIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLAuditId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRLAuditId.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRLPath.c_str(), allocator).Move(), allocator);
    }

    if (m_reachableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReachableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reachableType, allocator);
    }

    if (m_aPISecretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APISecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPISecretName.c_str(), allocator).Move(), allocator);
    }

    if (m_aPISecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APISecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aPISecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSensitiveResHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSensitiveRes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSensitiveRes, allocator);
    }

    if (m_enableIPPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableIPPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableIPPolicy, allocator);
    }

    if (m_iPPolicyAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPPolicyAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPPolicyAttr, allocator);
    }

    if (m_iPPolicyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPPolicyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPPolicyIds.begin(); itr != m_iPPolicyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_iPPolicyNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPPolicyNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPPolicyNames.c_str(), allocator).Move(), allocator);
    }

    if (m_enableUserAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableUserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableUserAgent, allocator);
    }

    if (m_userAgentAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgentAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userAgentAttr, allocator);
    }

    if (m_userAgentIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgentIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userAgentIds.begin(); itr != m_userAgentIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userAgentNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgentNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAgentNames.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeBusinessResourceData::GetServiceId() const
{
    return m_serviceId;
}

void DescribeBusinessResourceData::SetServiceId(const int64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeBusinessResourceData::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DescribeBusinessResourceData::GetServiceName() const
{
    return m_serviceName;
}

void DescribeBusinessResourceData::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeBusinessResourceData::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeBusinessResourceData::GetServiceType() const
{
    return m_serviceType;
}

void DescribeBusinessResourceData::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool DescribeBusinessResourceData::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string DescribeBusinessResourceData::GetServiceAddress() const
{
    return m_serviceAddress;
}

void DescribeBusinessResourceData::SetServiceAddress(const string& _serviceAddress)
{
    m_serviceAddress = _serviceAddress;
    m_serviceAddressHasBeenSet = true;
}

bool DescribeBusinessResourceData::ServiceAddressHasBeenSet() const
{
    return m_serviceAddressHasBeenSet;
}

string DescribeBusinessResourceData::GetServicePort() const
{
    return m_servicePort;
}

void DescribeBusinessResourceData::SetServicePort(const string& _servicePort)
{
    m_servicePort = _servicePort;
    m_servicePortHasBeenSet = true;
}

bool DescribeBusinessResourceData::ServicePortHasBeenSet() const
{
    return m_servicePortHasBeenSet;
}

string DescribeBusinessResourceData::GetCreateTime() const
{
    return m_createTime;
}

void DescribeBusinessResourceData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeBusinessResourceData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeBusinessResourceData::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeBusinessResourceData::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeBusinessResourceData::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeBusinessResourceData::GetRemark() const
{
    return m_remark;
}

void DescribeBusinessResourceData::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DescribeBusinessResourceData::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetAreaId() const
{
    return m_areaId;
}

void DescribeBusinessResourceData::SetAreaId(const int64_t& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool DescribeBusinessResourceData::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

vector<int64_t> DescribeBusinessResourceData::GetSmartGateIds() const
{
    return m_smartGateIds;
}

void DescribeBusinessResourceData::SetSmartGateIds(const vector<int64_t>& _smartGateIds)
{
    m_smartGateIds = _smartGateIds;
    m_smartGateIdsHasBeenSet = true;
}

bool DescribeBusinessResourceData::SmartGateIdsHasBeenSet() const
{
    return m_smartGateIdsHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetProtocol() const
{
    return m_protocol;
}

void DescribeBusinessResourceData::SetProtocol(const int64_t& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeBusinessResourceData::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetLevels() const
{
    return m_levels;
}

void DescribeBusinessResourceData::SetLevels(const int64_t& _levels)
{
    m_levels = _levels;
    m_levelsHasBeenSet = true;
}

bool DescribeBusinessResourceData::LevelsHasBeenSet() const
{
    return m_levelsHasBeenSet;
}

string DescribeBusinessResourceData::GetSmartGateNames() const
{
    return m_smartGateNames;
}

void DescribeBusinessResourceData::SetSmartGateNames(const string& _smartGateNames)
{
    m_smartGateNames = _smartGateNames;
    m_smartGateNamesHasBeenSet = true;
}

bool DescribeBusinessResourceData::SmartGateNamesHasBeenSet() const
{
    return m_smartGateNamesHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetDirectConn() const
{
    return m_directConn;
}

void DescribeBusinessResourceData::SetDirectConn(const int64_t& _directConn)
{
    m_directConn = _directConn;
    m_directConnHasBeenSet = true;
}

bool DescribeBusinessResourceData::DirectConnHasBeenSet() const
{
    return m_directConnHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetDetectState() const
{
    return m_detectState;
}

void DescribeBusinessResourceData::SetDetectState(const int64_t& _detectState)
{
    m_detectState = _detectState;
    m_detectStateHasBeenSet = true;
}

bool DescribeBusinessResourceData::DetectStateHasBeenSet() const
{
    return m_detectStateHasBeenSet;
}

string DescribeBusinessResourceData::GetDetectInfo() const
{
    return m_detectInfo;
}

void DescribeBusinessResourceData::SetDetectInfo(const string& _detectInfo)
{
    m_detectInfo = _detectInfo;
    m_detectInfoHasBeenSet = true;
}

bool DescribeBusinessResourceData::DetectInfoHasBeenSet() const
{
    return m_detectInfoHasBeenSet;
}

string DescribeBusinessResourceData::GetDetectTime() const
{
    return m_detectTime;
}

void DescribeBusinessResourceData::SetDetectTime(const string& _detectTime)
{
    m_detectTime = _detectTime;
    m_detectTimeHasBeenSet = true;
}

bool DescribeBusinessResourceData::DetectTimeHasBeenSet() const
{
    return m_detectTimeHasBeenSet;
}

string DescribeBusinessResourceData::GetConnectorGroupId() const
{
    return m_connectorGroupId;
}

void DescribeBusinessResourceData::SetConnectorGroupId(const string& _connectorGroupId)
{
    m_connectorGroupId = _connectorGroupId;
    m_connectorGroupIdHasBeenSet = true;
}

bool DescribeBusinessResourceData::ConnectorGroupIdHasBeenSet() const
{
    return m_connectorGroupIdHasBeenSet;
}

string DescribeBusinessResourceData::GetConnectorGroupName() const
{
    return m_connectorGroupName;
}

void DescribeBusinessResourceData::SetConnectorGroupName(const string& _connectorGroupName)
{
    m_connectorGroupName = _connectorGroupName;
    m_connectorGroupNameHasBeenSet = true;
}

bool DescribeBusinessResourceData::ConnectorGroupNameHasBeenSet() const
{
    return m_connectorGroupNameHasBeenSet;
}

string DescribeBusinessResourceData::GetReachableTime() const
{
    return m_reachableTime;
}

void DescribeBusinessResourceData::SetReachableTime(const string& _reachableTime)
{
    m_reachableTime = _reachableTime;
    m_reachableTimeHasBeenSet = true;
}

bool DescribeBusinessResourceData::ReachableTimeHasBeenSet() const
{
    return m_reachableTimeHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetReachableState() const
{
    return m_reachableState;
}

void DescribeBusinessResourceData::SetReachableState(const int64_t& _reachableState)
{
    m_reachableState = _reachableState;
    m_reachableStateHasBeenSet = true;
}

bool DescribeBusinessResourceData::ReachableStateHasBeenSet() const
{
    return m_reachableStateHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetAccessType() const
{
    return m_accessType;
}

void DescribeBusinessResourceData::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool DescribeBusinessResourceData::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string DescribeBusinessResourceData::GetBackendScheme() const
{
    return m_backendScheme;
}

void DescribeBusinessResourceData::SetBackendScheme(const string& _backendScheme)
{
    m_backendScheme = _backendScheme;
    m_backendSchemeHasBeenSet = true;
}

bool DescribeBusinessResourceData::BackendSchemeHasBeenSet() const
{
    return m_backendSchemeHasBeenSet;
}

string DescribeBusinessResourceData::GetBackendPath() const
{
    return m_backendPath;
}

void DescribeBusinessResourceData::SetBackendPath(const string& _backendPath)
{
    m_backendPath = _backendPath;
    m_backendPathHasBeenSet = true;
}

bool DescribeBusinessResourceData::BackendPathHasBeenSet() const
{
    return m_backendPathHasBeenSet;
}

string DescribeBusinessResourceData::GetFrontScheme() const
{
    return m_frontScheme;
}

void DescribeBusinessResourceData::SetFrontScheme(const string& _frontScheme)
{
    m_frontScheme = _frontScheme;
    m_frontSchemeHasBeenSet = true;
}

bool DescribeBusinessResourceData::FrontSchemeHasBeenSet() const
{
    return m_frontSchemeHasBeenSet;
}

string DescribeBusinessResourceData::GetFrontHost() const
{
    return m_frontHost;
}

void DescribeBusinessResourceData::SetFrontHost(const string& _frontHost)
{
    m_frontHost = _frontHost;
    m_frontHostHasBeenSet = true;
}

bool DescribeBusinessResourceData::FrontHostHasBeenSet() const
{
    return m_frontHostHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetFrontPort() const
{
    return m_frontPort;
}

void DescribeBusinessResourceData::SetFrontPort(const int64_t& _frontPort)
{
    m_frontPort = _frontPort;
    m_frontPortHasBeenSet = true;
}

bool DescribeBusinessResourceData::FrontPortHasBeenSet() const
{
    return m_frontPortHasBeenSet;
}

string DescribeBusinessResourceData::GetFrontPath() const
{
    return m_frontPath;
}

void DescribeBusinessResourceData::SetFrontPath(const string& _frontPath)
{
    m_frontPath = _frontPath;
    m_frontPathHasBeenSet = true;
}

bool DescribeBusinessResourceData::FrontPathHasBeenSet() const
{
    return m_frontPathHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetDisableFront() const
{
    return m_disableFront;
}

void DescribeBusinessResourceData::SetDisableFront(const int64_t& _disableFront)
{
    m_disableFront = _disableFront;
    m_disableFrontHasBeenSet = true;
}

bool DescribeBusinessResourceData::DisableFrontHasBeenSet() const
{
    return m_disableFrontHasBeenSet;
}

string DescribeBusinessResourceData::GetCustomDomain() const
{
    return m_customDomain;
}

void DescribeBusinessResourceData::SetCustomDomain(const string& _customDomain)
{
    m_customDomain = _customDomain;
    m_customDomainHasBeenSet = true;
}

bool DescribeBusinessResourceData::CustomDomainHasBeenSet() const
{
    return m_customDomainHasBeenSet;
}

string DescribeBusinessResourceData::GetCustomHost() const
{
    return m_customHost;
}

void DescribeBusinessResourceData::SetCustomHost(const string& _customHost)
{
    m_customHost = _customHost;
    m_customHostHasBeenSet = true;
}

bool DescribeBusinessResourceData::CustomHostHasBeenSet() const
{
    return m_customHostHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetCnameStatus() const
{
    return m_cnameStatus;
}

void DescribeBusinessResourceData::SetCnameStatus(const int64_t& _cnameStatus)
{
    m_cnameStatus = _cnameStatus;
    m_cnameStatusHasBeenSet = true;
}

bool DescribeBusinessResourceData::CnameStatusHasBeenSet() const
{
    return m_cnameStatusHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetCertificateId() const
{
    return m_certificateId;
}

void DescribeBusinessResourceData::SetCertificateId(const int64_t& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool DescribeBusinessResourceData::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetWebGwResourceType() const
{
    return m_webGwResourceType;
}

void DescribeBusinessResourceData::SetWebGwResourceType(const int64_t& _webGwResourceType)
{
    m_webGwResourceType = _webGwResourceType;
    m_webGwResourceTypeHasBeenSet = true;
}

bool DescribeBusinessResourceData::WebGwResourceTypeHasBeenSet() const
{
    return m_webGwResourceTypeHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetAPISecretId() const
{
    return m_aPISecretId;
}

void DescribeBusinessResourceData::SetAPISecretId(const int64_t& _aPISecretId)
{
    m_aPISecretId = _aPISecretId;
    m_aPISecretIdHasBeenSet = true;
}

bool DescribeBusinessResourceData::APISecretIdHasBeenSet() const
{
    return m_aPISecretIdHasBeenSet;
}

string DescribeBusinessResourceData::GetAreaName() const
{
    return m_areaName;
}

void DescribeBusinessResourceData::SetAreaName(const string& _areaName)
{
    m_areaName = _areaName;
    m_areaNameHasBeenSet = true;
}

bool DescribeBusinessResourceData::AreaNameHasBeenSet() const
{
    return m_areaNameHasBeenSet;
}

string DescribeBusinessResourceData::GetSSLCertId() const
{
    return m_sSLCertId;
}

void DescribeBusinessResourceData::SetSSLCertId(const string& _sSLCertId)
{
    m_sSLCertId = _sSLCertId;
    m_sSLCertIdHasBeenSet = true;
}

bool DescribeBusinessResourceData::SSLCertIdHasBeenSet() const
{
    return m_sSLCertIdHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetEnableDependentAddr() const
{
    return m_enableDependentAddr;
}

void DescribeBusinessResourceData::SetEnableDependentAddr(const int64_t& _enableDependentAddr)
{
    m_enableDependentAddr = _enableDependentAddr;
    m_enableDependentAddrHasBeenSet = true;
}

bool DescribeBusinessResourceData::EnableDependentAddrHasBeenSet() const
{
    return m_enableDependentAddrHasBeenSet;
}

string DescribeBusinessResourceData::GetDependentAddr() const
{
    return m_dependentAddr;
}

void DescribeBusinessResourceData::SetDependentAddr(const string& _dependentAddr)
{
    m_dependentAddr = _dependentAddr;
    m_dependentAddrHasBeenSet = true;
}

bool DescribeBusinessResourceData::DependentAddrHasBeenSet() const
{
    return m_dependentAddrHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetWebGwNoAuth() const
{
    return m_webGwNoAuth;
}

void DescribeBusinessResourceData::SetWebGwNoAuth(const int64_t& _webGwNoAuth)
{
    m_webGwNoAuth = _webGwNoAuth;
    m_webGwNoAuthHasBeenSet = true;
}

bool DescribeBusinessResourceData::WebGwNoAuthHasBeenSet() const
{
    return m_webGwNoAuthHasBeenSet;
}

string DescribeBusinessResourceData::GetConnectorGroupType() const
{
    return m_connectorGroupType;
}

void DescribeBusinessResourceData::SetConnectorGroupType(const string& _connectorGroupType)
{
    m_connectorGroupType = _connectorGroupType;
    m_connectorGroupTypeHasBeenSet = true;
}

bool DescribeBusinessResourceData::ConnectorGroupTypeHasBeenSet() const
{
    return m_connectorGroupTypeHasBeenSet;
}

string DescribeBusinessResourceData::GetDomainSuffix() const
{
    return m_domainSuffix;
}

void DescribeBusinessResourceData::SetDomainSuffix(const string& _domainSuffix)
{
    m_domainSuffix = _domainSuffix;
    m_domainSuffixHasBeenSet = true;
}

bool DescribeBusinessResourceData::DomainSuffixHasBeenSet() const
{
    return m_domainSuffixHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetConnectivityCheckSwitch() const
{
    return m_connectivityCheckSwitch;
}

void DescribeBusinessResourceData::SetConnectivityCheckSwitch(const int64_t& _connectivityCheckSwitch)
{
    m_connectivityCheckSwitch = _connectivityCheckSwitch;
    m_connectivityCheckSwitchHasBeenSet = true;
}

bool DescribeBusinessResourceData::ConnectivityCheckSwitchHasBeenSet() const
{
    return m_connectivityCheckSwitchHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetConnectivityCheckInterval() const
{
    return m_connectivityCheckInterval;
}

void DescribeBusinessResourceData::SetConnectivityCheckInterval(const int64_t& _connectivityCheckInterval)
{
    m_connectivityCheckInterval = _connectivityCheckInterval;
    m_connectivityCheckIntervalHasBeenSet = true;
}

bool DescribeBusinessResourceData::ConnectivityCheckIntervalHasBeenSet() const
{
    return m_connectivityCheckIntervalHasBeenSet;
}

string DescribeBusinessResourceData::GetConnectivityCheckIntervalUnit() const
{
    return m_connectivityCheckIntervalUnit;
}

void DescribeBusinessResourceData::SetConnectivityCheckIntervalUnit(const string& _connectivityCheckIntervalUnit)
{
    m_connectivityCheckIntervalUnit = _connectivityCheckIntervalUnit;
    m_connectivityCheckIntervalUnitHasBeenSet = true;
}

bool DescribeBusinessResourceData::ConnectivityCheckIntervalUnitHasBeenSet() const
{
    return m_connectivityCheckIntervalUnitHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetURLAuditState() const
{
    return m_uRLAuditState;
}

void DescribeBusinessResourceData::SetURLAuditState(const int64_t& _uRLAuditState)
{
    m_uRLAuditState = _uRLAuditState;
    m_uRLAuditStateHasBeenSet = true;
}

bool DescribeBusinessResourceData::URLAuditStateHasBeenSet() const
{
    return m_uRLAuditStateHasBeenSet;
}

string DescribeBusinessResourceData::GetURLAuditId() const
{
    return m_uRLAuditId;
}

void DescribeBusinessResourceData::SetURLAuditId(const string& _uRLAuditId)
{
    m_uRLAuditId = _uRLAuditId;
    m_uRLAuditIdHasBeenSet = true;
}

bool DescribeBusinessResourceData::URLAuditIdHasBeenSet() const
{
    return m_uRLAuditIdHasBeenSet;
}

string DescribeBusinessResourceData::GetURLPath() const
{
    return m_uRLPath;
}

void DescribeBusinessResourceData::SetURLPath(const string& _uRLPath)
{
    m_uRLPath = _uRLPath;
    m_uRLPathHasBeenSet = true;
}

bool DescribeBusinessResourceData::URLPathHasBeenSet() const
{
    return m_uRLPathHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetReachableType() const
{
    return m_reachableType;
}

void DescribeBusinessResourceData::SetReachableType(const int64_t& _reachableType)
{
    m_reachableType = _reachableType;
    m_reachableTypeHasBeenSet = true;
}

bool DescribeBusinessResourceData::ReachableTypeHasBeenSet() const
{
    return m_reachableTypeHasBeenSet;
}

string DescribeBusinessResourceData::GetAPISecretName() const
{
    return m_aPISecretName;
}

void DescribeBusinessResourceData::SetAPISecretName(const string& _aPISecretName)
{
    m_aPISecretName = _aPISecretName;
    m_aPISecretNameHasBeenSet = true;
}

bool DescribeBusinessResourceData::APISecretNameHasBeenSet() const
{
    return m_aPISecretNameHasBeenSet;
}

string DescribeBusinessResourceData::GetAPISecretKey() const
{
    return m_aPISecretKey;
}

void DescribeBusinessResourceData::SetAPISecretKey(const string& _aPISecretKey)
{
    m_aPISecretKey = _aPISecretKey;
    m_aPISecretKeyHasBeenSet = true;
}

bool DescribeBusinessResourceData::APISecretKeyHasBeenSet() const
{
    return m_aPISecretKeyHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetEnableSensitiveRes() const
{
    return m_enableSensitiveRes;
}

void DescribeBusinessResourceData::SetEnableSensitiveRes(const int64_t& _enableSensitiveRes)
{
    m_enableSensitiveRes = _enableSensitiveRes;
    m_enableSensitiveResHasBeenSet = true;
}

bool DescribeBusinessResourceData::EnableSensitiveResHasBeenSet() const
{
    return m_enableSensitiveResHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetEnableIPPolicy() const
{
    return m_enableIPPolicy;
}

void DescribeBusinessResourceData::SetEnableIPPolicy(const int64_t& _enableIPPolicy)
{
    m_enableIPPolicy = _enableIPPolicy;
    m_enableIPPolicyHasBeenSet = true;
}

bool DescribeBusinessResourceData::EnableIPPolicyHasBeenSet() const
{
    return m_enableIPPolicyHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetIPPolicyAttr() const
{
    return m_iPPolicyAttr;
}

void DescribeBusinessResourceData::SetIPPolicyAttr(const int64_t& _iPPolicyAttr)
{
    m_iPPolicyAttr = _iPPolicyAttr;
    m_iPPolicyAttrHasBeenSet = true;
}

bool DescribeBusinessResourceData::IPPolicyAttrHasBeenSet() const
{
    return m_iPPolicyAttrHasBeenSet;
}

vector<int64_t> DescribeBusinessResourceData::GetIPPolicyIds() const
{
    return m_iPPolicyIds;
}

void DescribeBusinessResourceData::SetIPPolicyIds(const vector<int64_t>& _iPPolicyIds)
{
    m_iPPolicyIds = _iPPolicyIds;
    m_iPPolicyIdsHasBeenSet = true;
}

bool DescribeBusinessResourceData::IPPolicyIdsHasBeenSet() const
{
    return m_iPPolicyIdsHasBeenSet;
}

string DescribeBusinessResourceData::GetIPPolicyNames() const
{
    return m_iPPolicyNames;
}

void DescribeBusinessResourceData::SetIPPolicyNames(const string& _iPPolicyNames)
{
    m_iPPolicyNames = _iPPolicyNames;
    m_iPPolicyNamesHasBeenSet = true;
}

bool DescribeBusinessResourceData::IPPolicyNamesHasBeenSet() const
{
    return m_iPPolicyNamesHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetEnableUserAgent() const
{
    return m_enableUserAgent;
}

void DescribeBusinessResourceData::SetEnableUserAgent(const int64_t& _enableUserAgent)
{
    m_enableUserAgent = _enableUserAgent;
    m_enableUserAgentHasBeenSet = true;
}

bool DescribeBusinessResourceData::EnableUserAgentHasBeenSet() const
{
    return m_enableUserAgentHasBeenSet;
}

int64_t DescribeBusinessResourceData::GetUserAgentAttr() const
{
    return m_userAgentAttr;
}

void DescribeBusinessResourceData::SetUserAgentAttr(const int64_t& _userAgentAttr)
{
    m_userAgentAttr = _userAgentAttr;
    m_userAgentAttrHasBeenSet = true;
}

bool DescribeBusinessResourceData::UserAgentAttrHasBeenSet() const
{
    return m_userAgentAttrHasBeenSet;
}

vector<string> DescribeBusinessResourceData::GetUserAgentIds() const
{
    return m_userAgentIds;
}

void DescribeBusinessResourceData::SetUserAgentIds(const vector<string>& _userAgentIds)
{
    m_userAgentIds = _userAgentIds;
    m_userAgentIdsHasBeenSet = true;
}

bool DescribeBusinessResourceData::UserAgentIdsHasBeenSet() const
{
    return m_userAgentIdsHasBeenSet;
}

string DescribeBusinessResourceData::GetUserAgentNames() const
{
    return m_userAgentNames;
}

void DescribeBusinessResourceData::SetUserAgentNames(const string& _userAgentNames)
{
    m_userAgentNames = _userAgentNames;
    m_userAgentNamesHasBeenSet = true;
}

bool DescribeBusinessResourceData::UserAgentNamesHasBeenSet() const
{
    return m_userAgentNamesHasBeenSet;
}

