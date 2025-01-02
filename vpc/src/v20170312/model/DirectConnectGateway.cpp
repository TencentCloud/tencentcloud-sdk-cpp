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

#include <tencentcloud/vpc/v20170312/model/DirectConnectGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DirectConnectGateway::DirectConnectGateway() :
    m_directConnectGatewayIdHasBeenSet(false),
    m_directConnectGatewayNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_networkInstanceIdHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_directConnectGatewayIpHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_ccnRouteTypeHasBeenSet(false),
    m_enableBGPHasBeenSet(false),
    m_enableBGPCommunityHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_vXLANSupportHasBeenSet(false),
    m_modeTypeHasBeenSet(false),
    m_localZoneHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_enableFlowDetailsHasBeenSet(false),
    m_flowDetailsUpdateTimeHasBeenSet(false),
    m_newAfcHasBeenSet(false),
    m_accessNetworkTypeHasBeenSet(false),
    m_haZoneListHasBeenSet(false),
    m_gatewayAsnHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnectGateway::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DirectConnectGatewayId") && !value["DirectConnectGatewayId"].IsNull())
    {
        if (!value["DirectConnectGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.DirectConnectGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayId = string(value["DirectConnectGatewayId"].GetString());
        m_directConnectGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectGatewayName") && !value["DirectConnectGatewayName"].IsNull())
    {
        if (!value["DirectConnectGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.DirectConnectGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayName = string(value["DirectConnectGatewayName"].GetString());
        m_directConnectGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkInstanceId") && !value["NetworkInstanceId"].IsNull())
    {
        if (!value["NetworkInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.NetworkInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInstanceId = string(value["NetworkInstanceId"].GetString());
        m_networkInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayType") && !value["GatewayType"].IsNull())
    {
        if (!value["GatewayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.GatewayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayType = string(value["GatewayType"].GetString());
        m_gatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectGatewayIp") && !value["DirectConnectGatewayIp"].IsNull())
    {
        if (!value["DirectConnectGatewayIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.DirectConnectGatewayIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayIp = string(value["DirectConnectGatewayIp"].GetString());
        m_directConnectGatewayIpHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("CcnRouteType") && !value["CcnRouteType"].IsNull())
    {
        if (!value["CcnRouteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.CcnRouteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnRouteType = string(value["CcnRouteType"].GetString());
        m_ccnRouteTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableBGP") && !value["EnableBGP"].IsNull())
    {
        if (!value["EnableBGP"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.EnableBGP` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBGP = value["EnableBGP"].GetBool();
        m_enableBGPHasBeenSet = true;
    }

    if (value.HasMember("EnableBGPCommunity") && !value["EnableBGPCommunity"].IsNull())
    {
        if (!value["EnableBGPCommunity"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.EnableBGPCommunity` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBGPCommunity = value["EnableBGPCommunity"].GetBool();
        m_enableBGPCommunityHasBeenSet = true;
    }

    if (value.HasMember("NatGatewayId") && !value["NatGatewayId"].IsNull())
    {
        if (!value["NatGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.NatGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewayId = string(value["NatGatewayId"].GetString());
        m_natGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("VXLANSupport") && !value["VXLANSupport"].IsNull())
    {
        if (!value["VXLANSupport"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.VXLANSupport` is not array type"));

        const rapidjson::Value &tmpValue = value["VXLANSupport"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vXLANSupport.push_back((*itr).GetBool());
        }
        m_vXLANSupportHasBeenSet = true;
    }

    if (value.HasMember("ModeType") && !value["ModeType"].IsNull())
    {
        if (!value["ModeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.ModeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modeType = string(value["ModeType"].GetString());
        m_modeTypeHasBeenSet = true;
    }

    if (value.HasMember("LocalZone") && !value["LocalZone"].IsNull())
    {
        if (!value["LocalZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.LocalZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_localZone = value["LocalZone"].GetBool();
        m_localZoneHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("EnableFlowDetails") && !value["EnableFlowDetails"].IsNull())
    {
        if (!value["EnableFlowDetails"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.EnableFlowDetails` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableFlowDetails = value["EnableFlowDetails"].GetUint64();
        m_enableFlowDetailsHasBeenSet = true;
    }

    if (value.HasMember("FlowDetailsUpdateTime") && !value["FlowDetailsUpdateTime"].IsNull())
    {
        if (!value["FlowDetailsUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.FlowDetailsUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowDetailsUpdateTime = string(value["FlowDetailsUpdateTime"].GetString());
        m_flowDetailsUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("NewAfc") && !value["NewAfc"].IsNull())
    {
        if (!value["NewAfc"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.NewAfc` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_newAfc = value["NewAfc"].GetUint64();
        m_newAfcHasBeenSet = true;
    }

    if (value.HasMember("AccessNetworkType") && !value["AccessNetworkType"].IsNull())
    {
        if (!value["AccessNetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.AccessNetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessNetworkType = string(value["AccessNetworkType"].GetString());
        m_accessNetworkTypeHasBeenSet = true;
    }

    if (value.HasMember("HaZoneList") && !value["HaZoneList"].IsNull())
    {
        if (!value["HaZoneList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.HaZoneList` is not array type"));

        const rapidjson::Value &tmpValue = value["HaZoneList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_haZoneList.push_back((*itr).GetString());
        }
        m_haZoneListHasBeenSet = true;
    }

    if (value.HasMember("GatewayAsn") && !value["GatewayAsn"].IsNull())
    {
        if (!value["GatewayAsn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectGateway.GatewayAsn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayAsn = value["GatewayAsn"].GetUint64();
        m_gatewayAsnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnectGateway::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_directConnectGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectGatewayIp.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnRouteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnRouteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnRouteType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableBGPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBGP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBGP, allocator);
    }

    if (m_enableBGPCommunityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBGPCommunity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBGPCommunity, allocator);
    }

    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_vXLANSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VXLANSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vXLANSupport.begin(); itr != m_vXLANSupport.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetBool(*itr), allocator);
        }
    }

    if (m_modeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modeType.c_str(), allocator).Move(), allocator);
    }

    if (m_localZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localZone, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_enableFlowDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFlowDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFlowDetails, allocator);
    }

    if (m_flowDetailsUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDetailsUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowDetailsUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_newAfcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAfc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newAfc, allocator);
    }

    if (m_accessNetworkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessNetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessNetworkType.c_str(), allocator).Move(), allocator);
    }

    if (m_haZoneListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaZoneList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_haZoneList.begin(); itr != m_haZoneList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gatewayAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayAsn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gatewayAsn, allocator);
    }

}


string DirectConnectGateway::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void DirectConnectGateway::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool DirectConnectGateway::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

string DirectConnectGateway::GetDirectConnectGatewayName() const
{
    return m_directConnectGatewayName;
}

void DirectConnectGateway::SetDirectConnectGatewayName(const string& _directConnectGatewayName)
{
    m_directConnectGatewayName = _directConnectGatewayName;
    m_directConnectGatewayNameHasBeenSet = true;
}

bool DirectConnectGateway::DirectConnectGatewayNameHasBeenSet() const
{
    return m_directConnectGatewayNameHasBeenSet;
}

string DirectConnectGateway::GetVpcId() const
{
    return m_vpcId;
}

void DirectConnectGateway::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DirectConnectGateway::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DirectConnectGateway::GetNetworkType() const
{
    return m_networkType;
}

void DirectConnectGateway::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool DirectConnectGateway::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string DirectConnectGateway::GetNetworkInstanceId() const
{
    return m_networkInstanceId;
}

void DirectConnectGateway::SetNetworkInstanceId(const string& _networkInstanceId)
{
    m_networkInstanceId = _networkInstanceId;
    m_networkInstanceIdHasBeenSet = true;
}

bool DirectConnectGateway::NetworkInstanceIdHasBeenSet() const
{
    return m_networkInstanceIdHasBeenSet;
}

string DirectConnectGateway::GetGatewayType() const
{
    return m_gatewayType;
}

void DirectConnectGateway::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool DirectConnectGateway::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string DirectConnectGateway::GetCreateTime() const
{
    return m_createTime;
}

void DirectConnectGateway::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DirectConnectGateway::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DirectConnectGateway::GetDirectConnectGatewayIp() const
{
    return m_directConnectGatewayIp;
}

void DirectConnectGateway::SetDirectConnectGatewayIp(const string& _directConnectGatewayIp)
{
    m_directConnectGatewayIp = _directConnectGatewayIp;
    m_directConnectGatewayIpHasBeenSet = true;
}

bool DirectConnectGateway::DirectConnectGatewayIpHasBeenSet() const
{
    return m_directConnectGatewayIpHasBeenSet;
}

string DirectConnectGateway::GetCcnId() const
{
    return m_ccnId;
}

void DirectConnectGateway::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool DirectConnectGateway::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string DirectConnectGateway::GetCcnRouteType() const
{
    return m_ccnRouteType;
}

void DirectConnectGateway::SetCcnRouteType(const string& _ccnRouteType)
{
    m_ccnRouteType = _ccnRouteType;
    m_ccnRouteTypeHasBeenSet = true;
}

bool DirectConnectGateway::CcnRouteTypeHasBeenSet() const
{
    return m_ccnRouteTypeHasBeenSet;
}

bool DirectConnectGateway::GetEnableBGP() const
{
    return m_enableBGP;
}

void DirectConnectGateway::SetEnableBGP(const bool& _enableBGP)
{
    m_enableBGP = _enableBGP;
    m_enableBGPHasBeenSet = true;
}

bool DirectConnectGateway::EnableBGPHasBeenSet() const
{
    return m_enableBGPHasBeenSet;
}

bool DirectConnectGateway::GetEnableBGPCommunity() const
{
    return m_enableBGPCommunity;
}

void DirectConnectGateway::SetEnableBGPCommunity(const bool& _enableBGPCommunity)
{
    m_enableBGPCommunity = _enableBGPCommunity;
    m_enableBGPCommunityHasBeenSet = true;
}

bool DirectConnectGateway::EnableBGPCommunityHasBeenSet() const
{
    return m_enableBGPCommunityHasBeenSet;
}

string DirectConnectGateway::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void DirectConnectGateway::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool DirectConnectGateway::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

vector<bool> DirectConnectGateway::GetVXLANSupport() const
{
    return m_vXLANSupport;
}

void DirectConnectGateway::SetVXLANSupport(const vector<bool>& _vXLANSupport)
{
    m_vXLANSupport = _vXLANSupport;
    m_vXLANSupportHasBeenSet = true;
}

bool DirectConnectGateway::VXLANSupportHasBeenSet() const
{
    return m_vXLANSupportHasBeenSet;
}

string DirectConnectGateway::GetModeType() const
{
    return m_modeType;
}

void DirectConnectGateway::SetModeType(const string& _modeType)
{
    m_modeType = _modeType;
    m_modeTypeHasBeenSet = true;
}

bool DirectConnectGateway::ModeTypeHasBeenSet() const
{
    return m_modeTypeHasBeenSet;
}

bool DirectConnectGateway::GetLocalZone() const
{
    return m_localZone;
}

void DirectConnectGateway::SetLocalZone(const bool& _localZone)
{
    m_localZone = _localZone;
    m_localZoneHasBeenSet = true;
}

bool DirectConnectGateway::LocalZoneHasBeenSet() const
{
    return m_localZoneHasBeenSet;
}

string DirectConnectGateway::GetZone() const
{
    return m_zone;
}

void DirectConnectGateway::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DirectConnectGateway::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t DirectConnectGateway::GetEnableFlowDetails() const
{
    return m_enableFlowDetails;
}

void DirectConnectGateway::SetEnableFlowDetails(const uint64_t& _enableFlowDetails)
{
    m_enableFlowDetails = _enableFlowDetails;
    m_enableFlowDetailsHasBeenSet = true;
}

bool DirectConnectGateway::EnableFlowDetailsHasBeenSet() const
{
    return m_enableFlowDetailsHasBeenSet;
}

string DirectConnectGateway::GetFlowDetailsUpdateTime() const
{
    return m_flowDetailsUpdateTime;
}

void DirectConnectGateway::SetFlowDetailsUpdateTime(const string& _flowDetailsUpdateTime)
{
    m_flowDetailsUpdateTime = _flowDetailsUpdateTime;
    m_flowDetailsUpdateTimeHasBeenSet = true;
}

bool DirectConnectGateway::FlowDetailsUpdateTimeHasBeenSet() const
{
    return m_flowDetailsUpdateTimeHasBeenSet;
}

uint64_t DirectConnectGateway::GetNewAfc() const
{
    return m_newAfc;
}

void DirectConnectGateway::SetNewAfc(const uint64_t& _newAfc)
{
    m_newAfc = _newAfc;
    m_newAfcHasBeenSet = true;
}

bool DirectConnectGateway::NewAfcHasBeenSet() const
{
    return m_newAfcHasBeenSet;
}

string DirectConnectGateway::GetAccessNetworkType() const
{
    return m_accessNetworkType;
}

void DirectConnectGateway::SetAccessNetworkType(const string& _accessNetworkType)
{
    m_accessNetworkType = _accessNetworkType;
    m_accessNetworkTypeHasBeenSet = true;
}

bool DirectConnectGateway::AccessNetworkTypeHasBeenSet() const
{
    return m_accessNetworkTypeHasBeenSet;
}

vector<string> DirectConnectGateway::GetHaZoneList() const
{
    return m_haZoneList;
}

void DirectConnectGateway::SetHaZoneList(const vector<string>& _haZoneList)
{
    m_haZoneList = _haZoneList;
    m_haZoneListHasBeenSet = true;
}

bool DirectConnectGateway::HaZoneListHasBeenSet() const
{
    return m_haZoneListHasBeenSet;
}

uint64_t DirectConnectGateway::GetGatewayAsn() const
{
    return m_gatewayAsn;
}

void DirectConnectGateway::SetGatewayAsn(const uint64_t& _gatewayAsn)
{
    m_gatewayAsn = _gatewayAsn;
    m_gatewayAsnHasBeenSet = true;
}

bool DirectConnectGateway::GatewayAsnHasBeenSet() const
{
    return m_gatewayAsnHasBeenSet;
}

