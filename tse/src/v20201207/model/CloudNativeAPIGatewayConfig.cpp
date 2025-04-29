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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayConfig::CloudNativeAPIGatewayConfig() :
    m_consoleTypeHasBeenSet(false),
    m_httpUrlHasBeenSet(false),
    m_httpsUrlHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_adminUserHasBeenSet(false),
    m_adminPasswordHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_accessControlHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_slaTypeHasBeenSet(false),
    m_slaNameHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_multiZoneFlagHasBeenSet(false),
    m_masterZoneIdHasBeenSet(false),
    m_slaveZoneIdHasBeenSet(false),
    m_masterZoneNameHasBeenSet(false),
    m_slaveZoneNameHasBeenSet(false),
    m_networkIdHasBeenSet(false),
    m_iPV6FullChainHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsoleType") && !value["ConsoleType"].IsNull())
    {
        if (!value["ConsoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.ConsoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consoleType = string(value["ConsoleType"].GetString());
        m_consoleTypeHasBeenSet = true;
    }

    if (value.HasMember("HttpUrl") && !value["HttpUrl"].IsNull())
    {
        if (!value["HttpUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.HttpUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpUrl = string(value["HttpUrl"].GetString());
        m_httpUrlHasBeenSet = true;
    }

    if (value.HasMember("HttpsUrl") && !value["HttpsUrl"].IsNull())
    {
        if (!value["HttpsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.HttpsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpsUrl = string(value["HttpsUrl"].GetString());
        m_httpsUrlHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("AdminUser") && !value["AdminUser"].IsNull())
    {
        if (!value["AdminUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.AdminUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminUser = string(value["AdminUser"].GetString());
        m_adminUserHasBeenSet = true;
    }

    if (value.HasMember("AdminPassword") && !value["AdminPassword"].IsNull())
    {
        if (!value["AdminPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.AdminPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminPassword = string(value["AdminPassword"].GetString());
        m_adminPasswordHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AccessControl") && !value["AccessControl"].IsNull())
    {
        if (!value["AccessControl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.AccessControl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessControl.Deserialize(value["AccessControl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessControlHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SlaType") && !value["SlaType"].IsNull())
    {
        if (!value["SlaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.SlaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaType = string(value["SlaType"].GetString());
        m_slaTypeHasBeenSet = true;
    }

    if (value.HasMember("SlaName") && !value["SlaName"].IsNull())
    {
        if (!value["SlaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.SlaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaName = string(value["SlaName"].GetString());
        m_slaNameHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("MultiZoneFlag") && !value["MultiZoneFlag"].IsNull())
    {
        if (!value["MultiZoneFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.MultiZoneFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_multiZoneFlag = value["MultiZoneFlag"].GetBool();
        m_multiZoneFlagHasBeenSet = true;
    }

    if (value.HasMember("MasterZoneId") && !value["MasterZoneId"].IsNull())
    {
        if (!value["MasterZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.MasterZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZoneId = string(value["MasterZoneId"].GetString());
        m_masterZoneIdHasBeenSet = true;
    }

    if (value.HasMember("SlaveZoneId") && !value["SlaveZoneId"].IsNull())
    {
        if (!value["SlaveZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.SlaveZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveZoneId = string(value["SlaveZoneId"].GetString());
        m_slaveZoneIdHasBeenSet = true;
    }

    if (value.HasMember("MasterZoneName") && !value["MasterZoneName"].IsNull())
    {
        if (!value["MasterZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.MasterZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZoneName = string(value["MasterZoneName"].GetString());
        m_masterZoneNameHasBeenSet = true;
    }

    if (value.HasMember("SlaveZoneName") && !value["SlaveZoneName"].IsNull())
    {
        if (!value["SlaveZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.SlaveZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slaveZoneName = string(value["SlaveZoneName"].GetString());
        m_slaveZoneNameHasBeenSet = true;
    }

    if (value.HasMember("NetworkId") && !value["NetworkId"].IsNull())
    {
        if (!value["NetworkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.NetworkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkId = string(value["NetworkId"].GetString());
        m_networkIdHasBeenSet = true;
    }

    if (value.HasMember("IPV6FullChain") && !value["IPV6FullChain"].IsNull())
    {
        if (!value["IPV6FullChain"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayConfig.IPV6FullChain` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_iPV6FullChain = value["IPV6FullChain"].GetBool();
        m_iPV6FullChainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consoleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consoleType.c_str(), allocator).Move(), allocator);
    }

    if (m_httpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpsUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_adminUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminUser.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_accessControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessControl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_slaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaType.c_str(), allocator).Move(), allocator);
    }

    if (m_slaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaName.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_multiZoneFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZoneFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiZoneFlag, allocator);
    }

    if (m_masterZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_masterZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slaveZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkId.c_str(), allocator).Move(), allocator);
    }

    if (m_iPV6FullChainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPV6FullChain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPV6FullChain, allocator);
    }

}


string CloudNativeAPIGatewayConfig::GetConsoleType() const
{
    return m_consoleType;
}

void CloudNativeAPIGatewayConfig::SetConsoleType(const string& _consoleType)
{
    m_consoleType = _consoleType;
    m_consoleTypeHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::ConsoleTypeHasBeenSet() const
{
    return m_consoleTypeHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetHttpUrl() const
{
    return m_httpUrl;
}

void CloudNativeAPIGatewayConfig::SetHttpUrl(const string& _httpUrl)
{
    m_httpUrl = _httpUrl;
    m_httpUrlHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::HttpUrlHasBeenSet() const
{
    return m_httpUrlHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetHttpsUrl() const
{
    return m_httpsUrl;
}

void CloudNativeAPIGatewayConfig::SetHttpsUrl(const string& _httpsUrl)
{
    m_httpsUrl = _httpsUrl;
    m_httpsUrlHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::HttpsUrlHasBeenSet() const
{
    return m_httpsUrlHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetNetType() const
{
    return m_netType;
}

void CloudNativeAPIGatewayConfig::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetAdminUser() const
{
    return m_adminUser;
}

void CloudNativeAPIGatewayConfig::SetAdminUser(const string& _adminUser)
{
    m_adminUser = _adminUser;
    m_adminUserHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::AdminUserHasBeenSet() const
{
    return m_adminUserHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetAdminPassword() const
{
    return m_adminPassword;
}

void CloudNativeAPIGatewayConfig::SetAdminPassword(const string& _adminPassword)
{
    m_adminPassword = _adminPassword;
    m_adminPasswordHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::AdminPasswordHasBeenSet() const
{
    return m_adminPasswordHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetStatus() const
{
    return m_status;
}

void CloudNativeAPIGatewayConfig::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

NetworkAccessControl CloudNativeAPIGatewayConfig::GetAccessControl() const
{
    return m_accessControl;
}

void CloudNativeAPIGatewayConfig::SetAccessControl(const NetworkAccessControl& _accessControl)
{
    m_accessControl = _accessControl;
    m_accessControlHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::AccessControlHasBeenSet() const
{
    return m_accessControlHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetSubnetId() const
{
    return m_subnetId;
}

void CloudNativeAPIGatewayConfig::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetVpcId() const
{
    return m_vpcId;
}

void CloudNativeAPIGatewayConfig::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetDescription() const
{
    return m_description;
}

void CloudNativeAPIGatewayConfig::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetSlaType() const
{
    return m_slaType;
}

void CloudNativeAPIGatewayConfig::SetSlaType(const string& _slaType)
{
    m_slaType = _slaType;
    m_slaTypeHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::SlaTypeHasBeenSet() const
{
    return m_slaTypeHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetSlaName() const
{
    return m_slaName;
}

void CloudNativeAPIGatewayConfig::SetSlaName(const string& _slaName)
{
    m_slaName = _slaName;
    m_slaNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::SlaNameHasBeenSet() const
{
    return m_slaNameHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetVip() const
{
    return m_vip;
}

void CloudNativeAPIGatewayConfig::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t CloudNativeAPIGatewayConfig::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void CloudNativeAPIGatewayConfig::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

bool CloudNativeAPIGatewayConfig::GetMultiZoneFlag() const
{
    return m_multiZoneFlag;
}

void CloudNativeAPIGatewayConfig::SetMultiZoneFlag(const bool& _multiZoneFlag)
{
    m_multiZoneFlag = _multiZoneFlag;
    m_multiZoneFlagHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::MultiZoneFlagHasBeenSet() const
{
    return m_multiZoneFlagHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetMasterZoneId() const
{
    return m_masterZoneId;
}

void CloudNativeAPIGatewayConfig::SetMasterZoneId(const string& _masterZoneId)
{
    m_masterZoneId = _masterZoneId;
    m_masterZoneIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::MasterZoneIdHasBeenSet() const
{
    return m_masterZoneIdHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetSlaveZoneId() const
{
    return m_slaveZoneId;
}

void CloudNativeAPIGatewayConfig::SetSlaveZoneId(const string& _slaveZoneId)
{
    m_slaveZoneId = _slaveZoneId;
    m_slaveZoneIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::SlaveZoneIdHasBeenSet() const
{
    return m_slaveZoneIdHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetMasterZoneName() const
{
    return m_masterZoneName;
}

void CloudNativeAPIGatewayConfig::SetMasterZoneName(const string& _masterZoneName)
{
    m_masterZoneName = _masterZoneName;
    m_masterZoneNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::MasterZoneNameHasBeenSet() const
{
    return m_masterZoneNameHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetSlaveZoneName() const
{
    return m_slaveZoneName;
}

void CloudNativeAPIGatewayConfig::SetSlaveZoneName(const string& _slaveZoneName)
{
    m_slaveZoneName = _slaveZoneName;
    m_slaveZoneNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::SlaveZoneNameHasBeenSet() const
{
    return m_slaveZoneNameHasBeenSet;
}

string CloudNativeAPIGatewayConfig::GetNetworkId() const
{
    return m_networkId;
}

void CloudNativeAPIGatewayConfig::SetNetworkId(const string& _networkId)
{
    m_networkId = _networkId;
    m_networkIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::NetworkIdHasBeenSet() const
{
    return m_networkIdHasBeenSet;
}

bool CloudNativeAPIGatewayConfig::GetIPV6FullChain() const
{
    return m_iPV6FullChain;
}

void CloudNativeAPIGatewayConfig::SetIPV6FullChain(const bool& _iPV6FullChain)
{
    m_iPV6FullChain = _iPV6FullChain;
    m_iPV6FullChainHasBeenSet = true;
}

bool CloudNativeAPIGatewayConfig::IPV6FullChainHasBeenSet() const
{
    return m_iPV6FullChainHasBeenSet;
}

