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

#include <tencentcloud/dc/v20180410/model/DirectConnectTunnelExtra.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

DirectConnectTunnelExtra::DirectConnectTunnelExtra() :
    m_directConnectTunnelIdHasBeenSet(false),
    m_directConnectIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_directConnectOwnerAccountHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_networkRegionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_routeTypeHasBeenSet(false),
    m_bgpPeerHasBeenSet(false),
    m_routeFilterPrefixesHasBeenSet(false),
    m_publicAddressesHasBeenSet(false),
    m_vlanHasBeenSet(false),
    m_tencentAddressHasBeenSet(false),
    m_tencentBackupAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_directConnectTunnelNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_netDetectIdHasBeenSet(false),
    m_enableBGPCommunityHasBeenSet(false),
    m_natTypeHasBeenSet(false),
    m_vpcRegionHasBeenSet(false),
    m_bfdEnableHasBeenSet(false),
    m_nqaEnableHasBeenSet(false),
    m_accessPointTypeHasBeenSet(false),
    m_directConnectGatewayNameHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_signLawHasBeenSet(false),
    m_bfdInfoHasBeenSet(false),
    m_nqaInfoHasBeenSet(false),
    m_bgpStatusHasBeenSet(false),
    m_iPv6EnableHasBeenSet(false),
    m_tencentIPv6AddressHasBeenSet(false),
    m_tencentBackupIPv6AddressHasBeenSet(false),
    m_bgpIPv6StatusHasBeenSet(false),
    m_customerIPv6AddressHasBeenSet(false),
    m_jumboEnableHasBeenSet(false),
    m_highPrecisionBFDEnableHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnectTunnelExtra::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DirectConnectTunnelId") && !value["DirectConnectTunnelId"].IsNull())
    {
        if (!value["DirectConnectTunnelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.DirectConnectTunnelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectTunnelId = string(value["DirectConnectTunnelId"].GetString());
        m_directConnectTunnelIdHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectId") && !value["DirectConnectId"].IsNull())
    {
        if (!value["DirectConnectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.DirectConnectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectId = string(value["DirectConnectId"].GetString());
        m_directConnectIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectOwnerAccount") && !value["DirectConnectOwnerAccount"].IsNull())
    {
        if (!value["DirectConnectOwnerAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.DirectConnectOwnerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectOwnerAccount = string(value["DirectConnectOwnerAccount"].GetString());
        m_directConnectOwnerAccountHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccount") && !value["OwnerAccount"].IsNull())
    {
        if (!value["OwnerAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.OwnerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccount = string(value["OwnerAccount"].GetString());
        m_ownerAccountHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkRegion") && !value["NetworkRegion"].IsNull())
    {
        if (!value["NetworkRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.NetworkRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkRegion = string(value["NetworkRegion"].GetString());
        m_networkRegionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectGatewayId") && !value["DirectConnectGatewayId"].IsNull())
    {
        if (!value["DirectConnectGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.DirectConnectGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayId = string(value["DirectConnectGatewayId"].GetString());
        m_directConnectGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("RouteType") && !value["RouteType"].IsNull())
    {
        if (!value["RouteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.RouteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeType = string(value["RouteType"].GetString());
        m_routeTypeHasBeenSet = true;
    }

    if (value.HasMember("BgpPeer") && !value["BgpPeer"].IsNull())
    {
        if (!value["BgpPeer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.BgpPeer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bgpPeer.Deserialize(value["BgpPeer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bgpPeerHasBeenSet = true;
    }

    if (value.HasMember("RouteFilterPrefixes") && !value["RouteFilterPrefixes"].IsNull())
    {
        if (!value["RouteFilterPrefixes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.RouteFilterPrefixes` is not array type"));

        const rapidjson::Value &tmpValue = value["RouteFilterPrefixes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RouteFilterPrefix item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routeFilterPrefixes.push_back(item);
        }
        m_routeFilterPrefixesHasBeenSet = true;
    }

    if (value.HasMember("PublicAddresses") && !value["PublicAddresses"].IsNull())
    {
        if (!value["PublicAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.PublicAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RouteFilterPrefix item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_publicAddresses.push_back(item);
        }
        m_publicAddressesHasBeenSet = true;
    }

    if (value.HasMember("Vlan") && !value["Vlan"].IsNull())
    {
        if (!value["Vlan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.Vlan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vlan = value["Vlan"].GetInt64();
        m_vlanHasBeenSet = true;
    }

    if (value.HasMember("TencentAddress") && !value["TencentAddress"].IsNull())
    {
        if (!value["TencentAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.TencentAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentAddress = string(value["TencentAddress"].GetString());
        m_tencentAddressHasBeenSet = true;
    }

    if (value.HasMember("TencentBackupAddress") && !value["TencentBackupAddress"].IsNull())
    {
        if (!value["TencentBackupAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.TencentBackupAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentBackupAddress = string(value["TencentBackupAddress"].GetString());
        m_tencentBackupAddressHasBeenSet = true;
    }

    if (value.HasMember("CustomerAddress") && !value["CustomerAddress"].IsNull())
    {
        if (!value["CustomerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.CustomerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerAddress = string(value["CustomerAddress"].GetString());
        m_customerAddressHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectTunnelName") && !value["DirectConnectTunnelName"].IsNull())
    {
        if (!value["DirectConnectTunnelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.DirectConnectTunnelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectTunnelName = string(value["DirectConnectTunnelName"].GetString());
        m_directConnectTunnelNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("NetDetectId") && !value["NetDetectId"].IsNull())
    {
        if (!value["NetDetectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.NetDetectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netDetectId = string(value["NetDetectId"].GetString());
        m_netDetectIdHasBeenSet = true;
    }

    if (value.HasMember("EnableBGPCommunity") && !value["EnableBGPCommunity"].IsNull())
    {
        if (!value["EnableBGPCommunity"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.EnableBGPCommunity` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBGPCommunity = value["EnableBGPCommunity"].GetBool();
        m_enableBGPCommunityHasBeenSet = true;
    }

    if (value.HasMember("NatType") && !value["NatType"].IsNull())
    {
        if (!value["NatType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.NatType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_natType = value["NatType"].GetInt64();
        m_natTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcRegion") && !value["VpcRegion"].IsNull())
    {
        if (!value["VpcRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.VpcRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcRegion = string(value["VpcRegion"].GetString());
        m_vpcRegionHasBeenSet = true;
    }

    if (value.HasMember("BfdEnable") && !value["BfdEnable"].IsNull())
    {
        if (!value["BfdEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.BfdEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bfdEnable = value["BfdEnable"].GetInt64();
        m_bfdEnableHasBeenSet = true;
    }

    if (value.HasMember("NqaEnable") && !value["NqaEnable"].IsNull())
    {
        if (!value["NqaEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.NqaEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nqaEnable = value["NqaEnable"].GetInt64();
        m_nqaEnableHasBeenSet = true;
    }

    if (value.HasMember("AccessPointType") && !value["AccessPointType"].IsNull())
    {
        if (!value["AccessPointType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.AccessPointType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointType = string(value["AccessPointType"].GetString());
        m_accessPointTypeHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectGatewayName") && !value["DirectConnectGatewayName"].IsNull())
    {
        if (!value["DirectConnectGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.DirectConnectGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayName = string(value["DirectConnectGatewayName"].GetString());
        m_directConnectGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SignLaw") && !value["SignLaw"].IsNull())
    {
        if (!value["SignLaw"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.SignLaw` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_signLaw = value["SignLaw"].GetBool();
        m_signLawHasBeenSet = true;
    }

    if (value.HasMember("BfdInfo") && !value["BfdInfo"].IsNull())
    {
        if (!value["BfdInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.BfdInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bfdInfo.Deserialize(value["BfdInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bfdInfoHasBeenSet = true;
    }

    if (value.HasMember("NqaInfo") && !value["NqaInfo"].IsNull())
    {
        if (!value["NqaInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.NqaInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nqaInfo.Deserialize(value["NqaInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nqaInfoHasBeenSet = true;
    }

    if (value.HasMember("BgpStatus") && !value["BgpStatus"].IsNull())
    {
        if (!value["BgpStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.BgpStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bgpStatus.Deserialize(value["BgpStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bgpStatusHasBeenSet = true;
    }

    if (value.HasMember("IPv6Enable") && !value["IPv6Enable"].IsNull())
    {
        if (!value["IPv6Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.IPv6Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iPv6Enable = value["IPv6Enable"].GetInt64();
        m_iPv6EnableHasBeenSet = true;
    }

    if (value.HasMember("TencentIPv6Address") && !value["TencentIPv6Address"].IsNull())
    {
        if (!value["TencentIPv6Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.TencentIPv6Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentIPv6Address = string(value["TencentIPv6Address"].GetString());
        m_tencentIPv6AddressHasBeenSet = true;
    }

    if (value.HasMember("TencentBackupIPv6Address") && !value["TencentBackupIPv6Address"].IsNull())
    {
        if (!value["TencentBackupIPv6Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.TencentBackupIPv6Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentBackupIPv6Address = string(value["TencentBackupIPv6Address"].GetString());
        m_tencentBackupIPv6AddressHasBeenSet = true;
    }

    if (value.HasMember("BgpIPv6Status") && !value["BgpIPv6Status"].IsNull())
    {
        if (!value["BgpIPv6Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.BgpIPv6Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bgpIPv6Status.Deserialize(value["BgpIPv6Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bgpIPv6StatusHasBeenSet = true;
    }

    if (value.HasMember("CustomerIPv6Address") && !value["CustomerIPv6Address"].IsNull())
    {
        if (!value["CustomerIPv6Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.CustomerIPv6Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerIPv6Address = string(value["CustomerIPv6Address"].GetString());
        m_customerIPv6AddressHasBeenSet = true;
    }

    if (value.HasMember("JumboEnable") && !value["JumboEnable"].IsNull())
    {
        if (!value["JumboEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.JumboEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jumboEnable = value["JumboEnable"].GetInt64();
        m_jumboEnableHasBeenSet = true;
    }

    if (value.HasMember("HighPrecisionBFDEnable") && !value["HighPrecisionBFDEnable"].IsNull())
    {
        if (!value["HighPrecisionBFDEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelExtra.HighPrecisionBFDEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highPrecisionBFDEnable = value["HighPrecisionBFDEnable"].GetInt64();
        m_highPrecisionBFDEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnectTunnelExtra::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_directConnectTunnelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectTunnelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectTunnelId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectOwnerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectOwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectOwnerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeType.c_str(), allocator).Move(), allocator);
    }

    if (m_bgpPeerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpPeer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bgpPeer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_routeFilterPrefixesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteFilterPrefixes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeFilterPrefixes.begin(); itr != m_routeFilterPrefixes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_publicAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publicAddresses.begin(); itr != m_publicAddresses.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vlan, allocator);
    }

    if (m_tencentAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tencentAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_tencentBackupAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentBackupAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tencentBackupAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_customerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectTunnelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectTunnelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectTunnelName.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_netDetectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDetectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netDetectId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableBGPCommunityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBGPCommunity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBGPCommunity, allocator);
    }

    if (m_natTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_natType, allocator);
    }

    if (m_vpcRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bfdEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BfdEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bfdEnable, allocator);
    }

    if (m_nqaEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NqaEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nqaEnable, allocator);
    }

    if (m_accessPointTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPointType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPointType.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_signLawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignLaw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signLaw, allocator);
    }

    if (m_bfdInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BfdInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bfdInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nqaInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NqaInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nqaInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bgpStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bgpStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iPv6EnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPv6Enable, allocator);
    }

    if (m_tencentIPv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentIPv6Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tencentIPv6Address.c_str(), allocator).Move(), allocator);
    }

    if (m_tencentBackupIPv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentBackupIPv6Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tencentBackupIPv6Address.c_str(), allocator).Move(), allocator);
    }

    if (m_bgpIPv6StatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BgpIPv6Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bgpIPv6Status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customerIPv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerIPv6Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerIPv6Address.c_str(), allocator).Move(), allocator);
    }

    if (m_jumboEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumboEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jumboEnable, allocator);
    }

    if (m_highPrecisionBFDEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPrecisionBFDEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highPrecisionBFDEnable, allocator);
    }

}


string DirectConnectTunnelExtra::GetDirectConnectTunnelId() const
{
    return m_directConnectTunnelId;
}

void DirectConnectTunnelExtra::SetDirectConnectTunnelId(const string& _directConnectTunnelId)
{
    m_directConnectTunnelId = _directConnectTunnelId;
    m_directConnectTunnelIdHasBeenSet = true;
}

bool DirectConnectTunnelExtra::DirectConnectTunnelIdHasBeenSet() const
{
    return m_directConnectTunnelIdHasBeenSet;
}

string DirectConnectTunnelExtra::GetDirectConnectId() const
{
    return m_directConnectId;
}

void DirectConnectTunnelExtra::SetDirectConnectId(const string& _directConnectId)
{
    m_directConnectId = _directConnectId;
    m_directConnectIdHasBeenSet = true;
}

bool DirectConnectTunnelExtra::DirectConnectIdHasBeenSet() const
{
    return m_directConnectIdHasBeenSet;
}

string DirectConnectTunnelExtra::GetState() const
{
    return m_state;
}

void DirectConnectTunnelExtra::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DirectConnectTunnelExtra::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DirectConnectTunnelExtra::GetDirectConnectOwnerAccount() const
{
    return m_directConnectOwnerAccount;
}

void DirectConnectTunnelExtra::SetDirectConnectOwnerAccount(const string& _directConnectOwnerAccount)
{
    m_directConnectOwnerAccount = _directConnectOwnerAccount;
    m_directConnectOwnerAccountHasBeenSet = true;
}

bool DirectConnectTunnelExtra::DirectConnectOwnerAccountHasBeenSet() const
{
    return m_directConnectOwnerAccountHasBeenSet;
}

string DirectConnectTunnelExtra::GetOwnerAccount() const
{
    return m_ownerAccount;
}

void DirectConnectTunnelExtra::SetOwnerAccount(const string& _ownerAccount)
{
    m_ownerAccount = _ownerAccount;
    m_ownerAccountHasBeenSet = true;
}

bool DirectConnectTunnelExtra::OwnerAccountHasBeenSet() const
{
    return m_ownerAccountHasBeenSet;
}

string DirectConnectTunnelExtra::GetNetworkType() const
{
    return m_networkType;
}

void DirectConnectTunnelExtra::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool DirectConnectTunnelExtra::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string DirectConnectTunnelExtra::GetNetworkRegion() const
{
    return m_networkRegion;
}

void DirectConnectTunnelExtra::SetNetworkRegion(const string& _networkRegion)
{
    m_networkRegion = _networkRegion;
    m_networkRegionHasBeenSet = true;
}

bool DirectConnectTunnelExtra::NetworkRegionHasBeenSet() const
{
    return m_networkRegionHasBeenSet;
}

string DirectConnectTunnelExtra::GetVpcId() const
{
    return m_vpcId;
}

void DirectConnectTunnelExtra::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DirectConnectTunnelExtra::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DirectConnectTunnelExtra::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void DirectConnectTunnelExtra::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool DirectConnectTunnelExtra::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

string DirectConnectTunnelExtra::GetRouteType() const
{
    return m_routeType;
}

void DirectConnectTunnelExtra::SetRouteType(const string& _routeType)
{
    m_routeType = _routeType;
    m_routeTypeHasBeenSet = true;
}

bool DirectConnectTunnelExtra::RouteTypeHasBeenSet() const
{
    return m_routeTypeHasBeenSet;
}

BgpPeer DirectConnectTunnelExtra::GetBgpPeer() const
{
    return m_bgpPeer;
}

void DirectConnectTunnelExtra::SetBgpPeer(const BgpPeer& _bgpPeer)
{
    m_bgpPeer = _bgpPeer;
    m_bgpPeerHasBeenSet = true;
}

bool DirectConnectTunnelExtra::BgpPeerHasBeenSet() const
{
    return m_bgpPeerHasBeenSet;
}

vector<RouteFilterPrefix> DirectConnectTunnelExtra::GetRouteFilterPrefixes() const
{
    return m_routeFilterPrefixes;
}

void DirectConnectTunnelExtra::SetRouteFilterPrefixes(const vector<RouteFilterPrefix>& _routeFilterPrefixes)
{
    m_routeFilterPrefixes = _routeFilterPrefixes;
    m_routeFilterPrefixesHasBeenSet = true;
}

bool DirectConnectTunnelExtra::RouteFilterPrefixesHasBeenSet() const
{
    return m_routeFilterPrefixesHasBeenSet;
}

vector<RouteFilterPrefix> DirectConnectTunnelExtra::GetPublicAddresses() const
{
    return m_publicAddresses;
}

void DirectConnectTunnelExtra::SetPublicAddresses(const vector<RouteFilterPrefix>& _publicAddresses)
{
    m_publicAddresses = _publicAddresses;
    m_publicAddressesHasBeenSet = true;
}

bool DirectConnectTunnelExtra::PublicAddressesHasBeenSet() const
{
    return m_publicAddressesHasBeenSet;
}

int64_t DirectConnectTunnelExtra::GetVlan() const
{
    return m_vlan;
}

void DirectConnectTunnelExtra::SetVlan(const int64_t& _vlan)
{
    m_vlan = _vlan;
    m_vlanHasBeenSet = true;
}

bool DirectConnectTunnelExtra::VlanHasBeenSet() const
{
    return m_vlanHasBeenSet;
}

string DirectConnectTunnelExtra::GetTencentAddress() const
{
    return m_tencentAddress;
}

void DirectConnectTunnelExtra::SetTencentAddress(const string& _tencentAddress)
{
    m_tencentAddress = _tencentAddress;
    m_tencentAddressHasBeenSet = true;
}

bool DirectConnectTunnelExtra::TencentAddressHasBeenSet() const
{
    return m_tencentAddressHasBeenSet;
}

string DirectConnectTunnelExtra::GetTencentBackupAddress() const
{
    return m_tencentBackupAddress;
}

void DirectConnectTunnelExtra::SetTencentBackupAddress(const string& _tencentBackupAddress)
{
    m_tencentBackupAddress = _tencentBackupAddress;
    m_tencentBackupAddressHasBeenSet = true;
}

bool DirectConnectTunnelExtra::TencentBackupAddressHasBeenSet() const
{
    return m_tencentBackupAddressHasBeenSet;
}

string DirectConnectTunnelExtra::GetCustomerAddress() const
{
    return m_customerAddress;
}

void DirectConnectTunnelExtra::SetCustomerAddress(const string& _customerAddress)
{
    m_customerAddress = _customerAddress;
    m_customerAddressHasBeenSet = true;
}

bool DirectConnectTunnelExtra::CustomerAddressHasBeenSet() const
{
    return m_customerAddressHasBeenSet;
}

string DirectConnectTunnelExtra::GetDirectConnectTunnelName() const
{
    return m_directConnectTunnelName;
}

void DirectConnectTunnelExtra::SetDirectConnectTunnelName(const string& _directConnectTunnelName)
{
    m_directConnectTunnelName = _directConnectTunnelName;
    m_directConnectTunnelNameHasBeenSet = true;
}

bool DirectConnectTunnelExtra::DirectConnectTunnelNameHasBeenSet() const
{
    return m_directConnectTunnelNameHasBeenSet;
}

string DirectConnectTunnelExtra::GetCreatedTime() const
{
    return m_createdTime;
}

void DirectConnectTunnelExtra::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool DirectConnectTunnelExtra::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t DirectConnectTunnelExtra::GetBandwidth() const
{
    return m_bandwidth;
}

void DirectConnectTunnelExtra::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool DirectConnectTunnelExtra::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string DirectConnectTunnelExtra::GetNetDetectId() const
{
    return m_netDetectId;
}

void DirectConnectTunnelExtra::SetNetDetectId(const string& _netDetectId)
{
    m_netDetectId = _netDetectId;
    m_netDetectIdHasBeenSet = true;
}

bool DirectConnectTunnelExtra::NetDetectIdHasBeenSet() const
{
    return m_netDetectIdHasBeenSet;
}

bool DirectConnectTunnelExtra::GetEnableBGPCommunity() const
{
    return m_enableBGPCommunity;
}

void DirectConnectTunnelExtra::SetEnableBGPCommunity(const bool& _enableBGPCommunity)
{
    m_enableBGPCommunity = _enableBGPCommunity;
    m_enableBGPCommunityHasBeenSet = true;
}

bool DirectConnectTunnelExtra::EnableBGPCommunityHasBeenSet() const
{
    return m_enableBGPCommunityHasBeenSet;
}

int64_t DirectConnectTunnelExtra::GetNatType() const
{
    return m_natType;
}

void DirectConnectTunnelExtra::SetNatType(const int64_t& _natType)
{
    m_natType = _natType;
    m_natTypeHasBeenSet = true;
}

bool DirectConnectTunnelExtra::NatTypeHasBeenSet() const
{
    return m_natTypeHasBeenSet;
}

string DirectConnectTunnelExtra::GetVpcRegion() const
{
    return m_vpcRegion;
}

void DirectConnectTunnelExtra::SetVpcRegion(const string& _vpcRegion)
{
    m_vpcRegion = _vpcRegion;
    m_vpcRegionHasBeenSet = true;
}

bool DirectConnectTunnelExtra::VpcRegionHasBeenSet() const
{
    return m_vpcRegionHasBeenSet;
}

int64_t DirectConnectTunnelExtra::GetBfdEnable() const
{
    return m_bfdEnable;
}

void DirectConnectTunnelExtra::SetBfdEnable(const int64_t& _bfdEnable)
{
    m_bfdEnable = _bfdEnable;
    m_bfdEnableHasBeenSet = true;
}

bool DirectConnectTunnelExtra::BfdEnableHasBeenSet() const
{
    return m_bfdEnableHasBeenSet;
}

int64_t DirectConnectTunnelExtra::GetNqaEnable() const
{
    return m_nqaEnable;
}

void DirectConnectTunnelExtra::SetNqaEnable(const int64_t& _nqaEnable)
{
    m_nqaEnable = _nqaEnable;
    m_nqaEnableHasBeenSet = true;
}

bool DirectConnectTunnelExtra::NqaEnableHasBeenSet() const
{
    return m_nqaEnableHasBeenSet;
}

string DirectConnectTunnelExtra::GetAccessPointType() const
{
    return m_accessPointType;
}

void DirectConnectTunnelExtra::SetAccessPointType(const string& _accessPointType)
{
    m_accessPointType = _accessPointType;
    m_accessPointTypeHasBeenSet = true;
}

bool DirectConnectTunnelExtra::AccessPointTypeHasBeenSet() const
{
    return m_accessPointTypeHasBeenSet;
}

string DirectConnectTunnelExtra::GetDirectConnectGatewayName() const
{
    return m_directConnectGatewayName;
}

void DirectConnectTunnelExtra::SetDirectConnectGatewayName(const string& _directConnectGatewayName)
{
    m_directConnectGatewayName = _directConnectGatewayName;
    m_directConnectGatewayNameHasBeenSet = true;
}

bool DirectConnectTunnelExtra::DirectConnectGatewayNameHasBeenSet() const
{
    return m_directConnectGatewayNameHasBeenSet;
}

string DirectConnectTunnelExtra::GetVpcName() const
{
    return m_vpcName;
}

void DirectConnectTunnelExtra::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool DirectConnectTunnelExtra::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

bool DirectConnectTunnelExtra::GetSignLaw() const
{
    return m_signLaw;
}

void DirectConnectTunnelExtra::SetSignLaw(const bool& _signLaw)
{
    m_signLaw = _signLaw;
    m_signLawHasBeenSet = true;
}

bool DirectConnectTunnelExtra::SignLawHasBeenSet() const
{
    return m_signLawHasBeenSet;
}

BFDInfo DirectConnectTunnelExtra::GetBfdInfo() const
{
    return m_bfdInfo;
}

void DirectConnectTunnelExtra::SetBfdInfo(const BFDInfo& _bfdInfo)
{
    m_bfdInfo = _bfdInfo;
    m_bfdInfoHasBeenSet = true;
}

bool DirectConnectTunnelExtra::BfdInfoHasBeenSet() const
{
    return m_bfdInfoHasBeenSet;
}

NQAInfo DirectConnectTunnelExtra::GetNqaInfo() const
{
    return m_nqaInfo;
}

void DirectConnectTunnelExtra::SetNqaInfo(const NQAInfo& _nqaInfo)
{
    m_nqaInfo = _nqaInfo;
    m_nqaInfoHasBeenSet = true;
}

bool DirectConnectTunnelExtra::NqaInfoHasBeenSet() const
{
    return m_nqaInfoHasBeenSet;
}

BGPStatus DirectConnectTunnelExtra::GetBgpStatus() const
{
    return m_bgpStatus;
}

void DirectConnectTunnelExtra::SetBgpStatus(const BGPStatus& _bgpStatus)
{
    m_bgpStatus = _bgpStatus;
    m_bgpStatusHasBeenSet = true;
}

bool DirectConnectTunnelExtra::BgpStatusHasBeenSet() const
{
    return m_bgpStatusHasBeenSet;
}

int64_t DirectConnectTunnelExtra::GetIPv6Enable() const
{
    return m_iPv6Enable;
}

void DirectConnectTunnelExtra::SetIPv6Enable(const int64_t& _iPv6Enable)
{
    m_iPv6Enable = _iPv6Enable;
    m_iPv6EnableHasBeenSet = true;
}

bool DirectConnectTunnelExtra::IPv6EnableHasBeenSet() const
{
    return m_iPv6EnableHasBeenSet;
}

string DirectConnectTunnelExtra::GetTencentIPv6Address() const
{
    return m_tencentIPv6Address;
}

void DirectConnectTunnelExtra::SetTencentIPv6Address(const string& _tencentIPv6Address)
{
    m_tencentIPv6Address = _tencentIPv6Address;
    m_tencentIPv6AddressHasBeenSet = true;
}

bool DirectConnectTunnelExtra::TencentIPv6AddressHasBeenSet() const
{
    return m_tencentIPv6AddressHasBeenSet;
}

string DirectConnectTunnelExtra::GetTencentBackupIPv6Address() const
{
    return m_tencentBackupIPv6Address;
}

void DirectConnectTunnelExtra::SetTencentBackupIPv6Address(const string& _tencentBackupIPv6Address)
{
    m_tencentBackupIPv6Address = _tencentBackupIPv6Address;
    m_tencentBackupIPv6AddressHasBeenSet = true;
}

bool DirectConnectTunnelExtra::TencentBackupIPv6AddressHasBeenSet() const
{
    return m_tencentBackupIPv6AddressHasBeenSet;
}

BGPStatus DirectConnectTunnelExtra::GetBgpIPv6Status() const
{
    return m_bgpIPv6Status;
}

void DirectConnectTunnelExtra::SetBgpIPv6Status(const BGPStatus& _bgpIPv6Status)
{
    m_bgpIPv6Status = _bgpIPv6Status;
    m_bgpIPv6StatusHasBeenSet = true;
}

bool DirectConnectTunnelExtra::BgpIPv6StatusHasBeenSet() const
{
    return m_bgpIPv6StatusHasBeenSet;
}

string DirectConnectTunnelExtra::GetCustomerIPv6Address() const
{
    return m_customerIPv6Address;
}

void DirectConnectTunnelExtra::SetCustomerIPv6Address(const string& _customerIPv6Address)
{
    m_customerIPv6Address = _customerIPv6Address;
    m_customerIPv6AddressHasBeenSet = true;
}

bool DirectConnectTunnelExtra::CustomerIPv6AddressHasBeenSet() const
{
    return m_customerIPv6AddressHasBeenSet;
}

int64_t DirectConnectTunnelExtra::GetJumboEnable() const
{
    return m_jumboEnable;
}

void DirectConnectTunnelExtra::SetJumboEnable(const int64_t& _jumboEnable)
{
    m_jumboEnable = _jumboEnable;
    m_jumboEnableHasBeenSet = true;
}

bool DirectConnectTunnelExtra::JumboEnableHasBeenSet() const
{
    return m_jumboEnableHasBeenSet;
}

int64_t DirectConnectTunnelExtra::GetHighPrecisionBFDEnable() const
{
    return m_highPrecisionBFDEnable;
}

void DirectConnectTunnelExtra::SetHighPrecisionBFDEnable(const int64_t& _highPrecisionBFDEnable)
{
    m_highPrecisionBFDEnable = _highPrecisionBFDEnable;
    m_highPrecisionBFDEnableHasBeenSet = true;
}

bool DirectConnectTunnelExtra::HighPrecisionBFDEnableHasBeenSet() const
{
    return m_highPrecisionBFDEnableHasBeenSet;
}

