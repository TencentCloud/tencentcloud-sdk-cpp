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

#include <tencentcloud/vpc/v20170312/model/VpnGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

VpnGateway::VpnGateway() :
    m_vpnGatewayIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpnGatewayNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_publicIpAddressHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_isAddressBlockedHasBeenSet(false),
    m_newPurchasePlanHasBeenSet(false),
    m_restrictStateHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpnGatewayQuotaSetHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_networkInstanceIdHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_maxConnectionHasBeenSet(false),
    m_bgpAsnHasBeenSet(false)
{
}

CoreInternalOutcome VpnGateway::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpnGatewayId") && !value["VpnGatewayId"].IsNull())
    {
        if (!value["VpnGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.VpnGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayId = string(value["VpnGatewayId"].GetString());
        m_vpnGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpnGatewayName") && !value["VpnGatewayName"].IsNull())
    {
        if (!value["VpnGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.VpnGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayName = string(value["VpnGatewayName"].GetString());
        m_vpnGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddress") && !value["PublicIpAddress"].IsNull())
    {
        if (!value["PublicIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.PublicIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddress = string(value["PublicIpAddress"].GetString());
        m_publicIpAddressHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.InternetMaxBandwidthOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetUint64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("IsAddressBlocked") && !value["IsAddressBlocked"].IsNull())
    {
        if (!value["IsAddressBlocked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.IsAddressBlocked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAddressBlocked = value["IsAddressBlocked"].GetBool();
        m_isAddressBlockedHasBeenSet = true;
    }

    if (value.HasMember("NewPurchasePlan") && !value["NewPurchasePlan"].IsNull())
    {
        if (!value["NewPurchasePlan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.NewPurchasePlan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newPurchasePlan = string(value["NewPurchasePlan"].GetString());
        m_newPurchasePlanHasBeenSet = true;
    }

    if (value.HasMember("RestrictState") && !value["RestrictState"].IsNull())
    {
        if (!value["RestrictState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.RestrictState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictState = string(value["RestrictState"].GetString());
        m_restrictStateHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpnGatewayQuotaSet") && !value["VpnGatewayQuotaSet"].IsNull())
    {
        if (!value["VpnGatewayQuotaSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpnGateway.VpnGatewayQuotaSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VpnGatewayQuotaSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpnGatewayQuota item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpnGatewayQuotaSet.push_back(item);
        }
        m_vpnGatewayQuotaSetHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("NetworkInstanceId") && !value["NetworkInstanceId"].IsNull())
    {
        if (!value["NetworkInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.NetworkInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInstanceId = string(value["NetworkInstanceId"].GetString());
        m_networkInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }

    if (value.HasMember("MaxConnection") && !value["MaxConnection"].IsNull())
    {
        if (!value["MaxConnection"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.MaxConnection` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConnection = value["MaxConnection"].GetUint64();
        m_maxConnectionHasBeenSet = true;
    }

    if (value.HasMember("BgpAsn") && !value["BgpAsn"].IsNull())
    {
        if (!value["BgpAsn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VpnGateway.BgpAsn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bgpAsn = value["BgpAsn"].GetUint64();
        m_bgpAsnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpnGateway::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpnGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isAddressBlockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAddressBlocked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAddressBlocked, allocator);
    }

    if (m_newPurchasePlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPurchasePlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newPurchasePlan.c_str(), allocator).Move(), allocator);
    }

    if (m_restrictStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestrictState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restrictState.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayQuotaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayQuotaSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpnGatewayQuotaSet.begin(); itr != m_vpnGatewayQuotaSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConnection, allocator);
    }

    if (m_bgpAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpAsn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bgpAsn, allocator);
    }

}


string VpnGateway::GetVpnGatewayId() const
{
    return m_vpnGatewayId;
}

void VpnGateway::SetVpnGatewayId(const string& _vpnGatewayId)
{
    m_vpnGatewayId = _vpnGatewayId;
    m_vpnGatewayIdHasBeenSet = true;
}

bool VpnGateway::VpnGatewayIdHasBeenSet() const
{
    return m_vpnGatewayIdHasBeenSet;
}

string VpnGateway::GetVpcId() const
{
    return m_vpcId;
}

void VpnGateway::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpnGateway::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpnGateway::GetVpnGatewayName() const
{
    return m_vpnGatewayName;
}

void VpnGateway::SetVpnGatewayName(const string& _vpnGatewayName)
{
    m_vpnGatewayName = _vpnGatewayName;
    m_vpnGatewayNameHasBeenSet = true;
}

bool VpnGateway::VpnGatewayNameHasBeenSet() const
{
    return m_vpnGatewayNameHasBeenSet;
}

string VpnGateway::GetType() const
{
    return m_type;
}

void VpnGateway::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VpnGateway::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VpnGateway::GetState() const
{
    return m_state;
}

void VpnGateway::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool VpnGateway::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string VpnGateway::GetPublicIpAddress() const
{
    return m_publicIpAddress;
}

void VpnGateway::SetPublicIpAddress(const string& _publicIpAddress)
{
    m_publicIpAddress = _publicIpAddress;
    m_publicIpAddressHasBeenSet = true;
}

bool VpnGateway::PublicIpAddressHasBeenSet() const
{
    return m_publicIpAddressHasBeenSet;
}

string VpnGateway::GetRenewFlag() const
{
    return m_renewFlag;
}

void VpnGateway::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool VpnGateway::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string VpnGateway::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void VpnGateway::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool VpnGateway::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

uint64_t VpnGateway::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void VpnGateway::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool VpnGateway::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string VpnGateway::GetCreatedTime() const
{
    return m_createdTime;
}

void VpnGateway::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool VpnGateway::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string VpnGateway::GetExpiredTime() const
{
    return m_expiredTime;
}

void VpnGateway::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool VpnGateway::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

bool VpnGateway::GetIsAddressBlocked() const
{
    return m_isAddressBlocked;
}

void VpnGateway::SetIsAddressBlocked(const bool& _isAddressBlocked)
{
    m_isAddressBlocked = _isAddressBlocked;
    m_isAddressBlockedHasBeenSet = true;
}

bool VpnGateway::IsAddressBlockedHasBeenSet() const
{
    return m_isAddressBlockedHasBeenSet;
}

string VpnGateway::GetNewPurchasePlan() const
{
    return m_newPurchasePlan;
}

void VpnGateway::SetNewPurchasePlan(const string& _newPurchasePlan)
{
    m_newPurchasePlan = _newPurchasePlan;
    m_newPurchasePlanHasBeenSet = true;
}

bool VpnGateway::NewPurchasePlanHasBeenSet() const
{
    return m_newPurchasePlanHasBeenSet;
}

string VpnGateway::GetRestrictState() const
{
    return m_restrictState;
}

void VpnGateway::SetRestrictState(const string& _restrictState)
{
    m_restrictState = _restrictState;
    m_restrictStateHasBeenSet = true;
}

bool VpnGateway::RestrictStateHasBeenSet() const
{
    return m_restrictStateHasBeenSet;
}

string VpnGateway::GetZone() const
{
    return m_zone;
}

void VpnGateway::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool VpnGateway::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<VpnGatewayQuota> VpnGateway::GetVpnGatewayQuotaSet() const
{
    return m_vpnGatewayQuotaSet;
}

void VpnGateway::SetVpnGatewayQuotaSet(const vector<VpnGatewayQuota>& _vpnGatewayQuotaSet)
{
    m_vpnGatewayQuotaSet = _vpnGatewayQuotaSet;
    m_vpnGatewayQuotaSetHasBeenSet = true;
}

bool VpnGateway::VpnGatewayQuotaSetHasBeenSet() const
{
    return m_vpnGatewayQuotaSetHasBeenSet;
}

string VpnGateway::GetVersion() const
{
    return m_version;
}

void VpnGateway::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool VpnGateway::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string VpnGateway::GetNetworkInstanceId() const
{
    return m_networkInstanceId;
}

void VpnGateway::SetNetworkInstanceId(const string& _networkInstanceId)
{
    m_networkInstanceId = _networkInstanceId;
    m_networkInstanceIdHasBeenSet = true;
}

bool VpnGateway::NetworkInstanceIdHasBeenSet() const
{
    return m_networkInstanceIdHasBeenSet;
}

string VpnGateway::GetCdcId() const
{
    return m_cdcId;
}

void VpnGateway::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool VpnGateway::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

uint64_t VpnGateway::GetMaxConnection() const
{
    return m_maxConnection;
}

void VpnGateway::SetMaxConnection(const uint64_t& _maxConnection)
{
    m_maxConnection = _maxConnection;
    m_maxConnectionHasBeenSet = true;
}

bool VpnGateway::MaxConnectionHasBeenSet() const
{
    return m_maxConnectionHasBeenSet;
}

uint64_t VpnGateway::GetBgpAsn() const
{
    return m_bgpAsn;
}

void VpnGateway::SetBgpAsn(const uint64_t& _bgpAsn)
{
    m_bgpAsn = _bgpAsn;
    m_bgpAsnHasBeenSet = true;
}

bool VpnGateway::BgpAsnHasBeenSet() const
{
    return m_bgpAsnHasBeenSet;
}

