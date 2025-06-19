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

#include <tencentcloud/csip/v20221121/model/ExposesItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ExposesItem::ExposesItem() :
    m_providerHasBeenSet(false),
    m_cloudAccountNameHasBeenSet(false),
    m_cloudAccountIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_aclTypeHasBeenSet(false),
    m_aclListHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_portServiceCountHasBeenSet(false),
    m_highRiskPortServiceCountHasBeenSet(false),
    m_webAppCountHasBeenSet(false),
    m_riskWebAppCountHasBeenSet(false),
    m_weakPasswordCountHasBeenSet(false),
    m_vulCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_assetTypeNameHasBeenSet(false),
    m_displayStatusHasBeenSet(false),
    m_displayRiskTypeHasBeenSet(false),
    m_scanTaskStatusHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_hasScanHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appIdStrHasBeenSet(false)
{
}

CoreInternalOutcome ExposesItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountName") && !value["CloudAccountName"].IsNull())
    {
        if (!value["CloudAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.CloudAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountName = string(value["CloudAccountName"].GetString());
        m_cloudAccountNameHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountId") && !value["CloudAccountId"].IsNull())
    {
        if (!value["CloudAccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.CloudAccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountId = string(value["CloudAccountId"].GetString());
        m_cloudAccountIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(value["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("AclType") && !value["AclType"].IsNull())
    {
        if (!value["AclType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.AclType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclType = string(value["AclType"].GetString());
        m_aclTypeHasBeenSet = true;
    }

    if (value.HasMember("AclList") && !value["AclList"].IsNull())
    {
        if (!value["AclList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.AclList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclList = string(value["AclList"].GetString());
        m_aclListHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("PortServiceCount") && !value["PortServiceCount"].IsNull())
    {
        if (!value["PortServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.PortServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portServiceCount = value["PortServiceCount"].GetUint64();
        m_portServiceCountHasBeenSet = true;
    }

    if (value.HasMember("HighRiskPortServiceCount") && !value["HighRiskPortServiceCount"].IsNull())
    {
        if (!value["HighRiskPortServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.HighRiskPortServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskPortServiceCount = value["HighRiskPortServiceCount"].GetUint64();
        m_highRiskPortServiceCountHasBeenSet = true;
    }

    if (value.HasMember("WebAppCount") && !value["WebAppCount"].IsNull())
    {
        if (!value["WebAppCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.WebAppCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webAppCount = value["WebAppCount"].GetUint64();
        m_webAppCountHasBeenSet = true;
    }

    if (value.HasMember("RiskWebAppCount") && !value["RiskWebAppCount"].IsNull())
    {
        if (!value["RiskWebAppCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.RiskWebAppCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskWebAppCount = value["RiskWebAppCount"].GetUint64();
        m_riskWebAppCountHasBeenSet = true;
    }

    if (value.HasMember("WeakPasswordCount") && !value["WeakPasswordCount"].IsNull())
    {
        if (!value["WeakPasswordCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.WeakPasswordCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weakPasswordCount = value["WeakPasswordCount"].GetUint64();
        m_weakPasswordCountHasBeenSet = true;
    }

    if (value.HasMember("VulCount") && !value["VulCount"].IsNull())
    {
        if (!value["VulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.VulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCount = value["VulCount"].GetUint64();
        m_vulCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeName") && !value["AssetTypeName"].IsNull())
    {
        if (!value["AssetTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.AssetTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeName = string(value["AssetTypeName"].GetString());
        m_assetTypeNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayStatus") && !value["DisplayStatus"].IsNull())
    {
        if (!value["DisplayStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.DisplayStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayStatus = string(value["DisplayStatus"].GetString());
        m_displayStatusHasBeenSet = true;
    }

    if (value.HasMember("DisplayRiskType") && !value["DisplayRiskType"].IsNull())
    {
        if (!value["DisplayRiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.DisplayRiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayRiskType = string(value["DisplayRiskType"].GetString());
        m_displayRiskTypeHasBeenSet = true;
    }

    if (value.HasMember("ScanTaskStatus") && !value["ScanTaskStatus"].IsNull())
    {
        if (!value["ScanTaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.ScanTaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTaskStatus = string(value["ScanTaskStatus"].GetString());
        m_scanTaskStatusHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("HasScan") && !value["HasScan"].IsNull())
    {
        if (!value["HasScan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.HasScan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hasScan = string(value["HasScan"].GetString());
        m_hasScanHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AppIdStr") && !value["AppIdStr"].IsNull())
    {
        if (!value["AppIdStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposesItem.AppIdStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIdStr = string(value["AppIdStr"].GetString());
        m_appIdStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExposesItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAccountId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_aclTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclType.c_str(), allocator).Move(), allocator);
    }

    if (m_aclListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclList.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_portServiceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portServiceCount, allocator);
    }

    if (m_highRiskPortServiceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskPortServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskPortServiceCount, allocator);
    }

    if (m_webAppCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webAppCount, allocator);
    }

    if (m_riskWebAppCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskWebAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskWebAppCount, allocator);
    }

    if (m_weakPasswordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakPasswordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weakPasswordCount, allocator);
    }

    if (m_vulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCount, allocator);
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

    if (m_assetTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_displayRiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayRiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayRiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTaskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTaskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hasScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hasScan.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_appIdStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appIdStr.c_str(), allocator).Move(), allocator);
    }

}


string ExposesItem::GetProvider() const
{
    return m_provider;
}

void ExposesItem::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool ExposesItem::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string ExposesItem::GetCloudAccountName() const
{
    return m_cloudAccountName;
}

void ExposesItem::SetCloudAccountName(const string& _cloudAccountName)
{
    m_cloudAccountName = _cloudAccountName;
    m_cloudAccountNameHasBeenSet = true;
}

bool ExposesItem::CloudAccountNameHasBeenSet() const
{
    return m_cloudAccountNameHasBeenSet;
}

string ExposesItem::GetCloudAccountId() const
{
    return m_cloudAccountId;
}

void ExposesItem::SetCloudAccountId(const string& _cloudAccountId)
{
    m_cloudAccountId = _cloudAccountId;
    m_cloudAccountIdHasBeenSet = true;
}

bool ExposesItem::CloudAccountIdHasBeenSet() const
{
    return m_cloudAccountIdHasBeenSet;
}

string ExposesItem::GetDomain() const
{
    return m_domain;
}

void ExposesItem::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ExposesItem::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ExposesItem::GetIp() const
{
    return m_ip;
}

void ExposesItem::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ExposesItem::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string ExposesItem::GetPort() const
{
    return m_port;
}

void ExposesItem::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ExposesItem::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string ExposesItem::GetStatus() const
{
    return m_status;
}

void ExposesItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExposesItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ExposesItem::GetRiskType() const
{
    return m_riskType;
}

void ExposesItem::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool ExposesItem::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string ExposesItem::GetAclType() const
{
    return m_aclType;
}

void ExposesItem::SetAclType(const string& _aclType)
{
    m_aclType = _aclType;
    m_aclTypeHasBeenSet = true;
}

bool ExposesItem::AclTypeHasBeenSet() const
{
    return m_aclTypeHasBeenSet;
}

string ExposesItem::GetAclList() const
{
    return m_aclList;
}

void ExposesItem::SetAclList(const string& _aclList)
{
    m_aclList = _aclList;
    m_aclListHasBeenSet = true;
}

bool ExposesItem::AclListHasBeenSet() const
{
    return m_aclListHasBeenSet;
}

string ExposesItem::GetAssetId() const
{
    return m_assetId;
}

void ExposesItem::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool ExposesItem::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string ExposesItem::GetInstanceName() const
{
    return m_instanceName;
}

void ExposesItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ExposesItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ExposesItem::GetAssetType() const
{
    return m_assetType;
}

void ExposesItem::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ExposesItem::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

uint64_t ExposesItem::GetPortServiceCount() const
{
    return m_portServiceCount;
}

void ExposesItem::SetPortServiceCount(const uint64_t& _portServiceCount)
{
    m_portServiceCount = _portServiceCount;
    m_portServiceCountHasBeenSet = true;
}

bool ExposesItem::PortServiceCountHasBeenSet() const
{
    return m_portServiceCountHasBeenSet;
}

uint64_t ExposesItem::GetHighRiskPortServiceCount() const
{
    return m_highRiskPortServiceCount;
}

void ExposesItem::SetHighRiskPortServiceCount(const uint64_t& _highRiskPortServiceCount)
{
    m_highRiskPortServiceCount = _highRiskPortServiceCount;
    m_highRiskPortServiceCountHasBeenSet = true;
}

bool ExposesItem::HighRiskPortServiceCountHasBeenSet() const
{
    return m_highRiskPortServiceCountHasBeenSet;
}

uint64_t ExposesItem::GetWebAppCount() const
{
    return m_webAppCount;
}

void ExposesItem::SetWebAppCount(const uint64_t& _webAppCount)
{
    m_webAppCount = _webAppCount;
    m_webAppCountHasBeenSet = true;
}

bool ExposesItem::WebAppCountHasBeenSet() const
{
    return m_webAppCountHasBeenSet;
}

uint64_t ExposesItem::GetRiskWebAppCount() const
{
    return m_riskWebAppCount;
}

void ExposesItem::SetRiskWebAppCount(const uint64_t& _riskWebAppCount)
{
    m_riskWebAppCount = _riskWebAppCount;
    m_riskWebAppCountHasBeenSet = true;
}

bool ExposesItem::RiskWebAppCountHasBeenSet() const
{
    return m_riskWebAppCountHasBeenSet;
}

uint64_t ExposesItem::GetWeakPasswordCount() const
{
    return m_weakPasswordCount;
}

void ExposesItem::SetWeakPasswordCount(const uint64_t& _weakPasswordCount)
{
    m_weakPasswordCount = _weakPasswordCount;
    m_weakPasswordCountHasBeenSet = true;
}

bool ExposesItem::WeakPasswordCountHasBeenSet() const
{
    return m_weakPasswordCountHasBeenSet;
}

uint64_t ExposesItem::GetVulCount() const
{
    return m_vulCount;
}

void ExposesItem::SetVulCount(const uint64_t& _vulCount)
{
    m_vulCount = _vulCount;
    m_vulCountHasBeenSet = true;
}

bool ExposesItem::VulCountHasBeenSet() const
{
    return m_vulCountHasBeenSet;
}

string ExposesItem::GetCreateTime() const
{
    return m_createTime;
}

void ExposesItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ExposesItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ExposesItem::GetUpdateTime() const
{
    return m_updateTime;
}

void ExposesItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ExposesItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ExposesItem::GetAssetTypeName() const
{
    return m_assetTypeName;
}

void ExposesItem::SetAssetTypeName(const string& _assetTypeName)
{
    m_assetTypeName = _assetTypeName;
    m_assetTypeNameHasBeenSet = true;
}

bool ExposesItem::AssetTypeNameHasBeenSet() const
{
    return m_assetTypeNameHasBeenSet;
}

string ExposesItem::GetDisplayStatus() const
{
    return m_displayStatus;
}

void ExposesItem::SetDisplayStatus(const string& _displayStatus)
{
    m_displayStatus = _displayStatus;
    m_displayStatusHasBeenSet = true;
}

bool ExposesItem::DisplayStatusHasBeenSet() const
{
    return m_displayStatusHasBeenSet;
}

string ExposesItem::GetDisplayRiskType() const
{
    return m_displayRiskType;
}

void ExposesItem::SetDisplayRiskType(const string& _displayRiskType)
{
    m_displayRiskType = _displayRiskType;
    m_displayRiskTypeHasBeenSet = true;
}

bool ExposesItem::DisplayRiskTypeHasBeenSet() const
{
    return m_displayRiskTypeHasBeenSet;
}

string ExposesItem::GetScanTaskStatus() const
{
    return m_scanTaskStatus;
}

void ExposesItem::SetScanTaskStatus(const string& _scanTaskStatus)
{
    m_scanTaskStatus = _scanTaskStatus;
    m_scanTaskStatusHasBeenSet = true;
}

bool ExposesItem::ScanTaskStatusHasBeenSet() const
{
    return m_scanTaskStatusHasBeenSet;
}

string ExposesItem::GetUuid() const
{
    return m_uuid;
}

void ExposesItem::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ExposesItem::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string ExposesItem::GetHasScan() const
{
    return m_hasScan;
}

void ExposesItem::SetHasScan(const string& _hasScan)
{
    m_hasScan = _hasScan;
    m_hasScanHasBeenSet = true;
}

bool ExposesItem::HasScanHasBeenSet() const
{
    return m_hasScanHasBeenSet;
}

uint64_t ExposesItem::GetAppId() const
{
    return m_appId;
}

void ExposesItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ExposesItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ExposesItem::GetAppIdStr() const
{
    return m_appIdStr;
}

void ExposesItem::SetAppIdStr(const string& _appIdStr)
{
    m_appIdStr = _appIdStr;
    m_appIdStrHasBeenSet = true;
}

bool ExposesItem::AppIdStrHasBeenSet() const
{
    return m_appIdStrHasBeenSet;
}

