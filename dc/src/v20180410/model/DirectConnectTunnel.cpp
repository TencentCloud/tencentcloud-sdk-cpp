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

#include <tencentcloud/dc/v20180410/model/DirectConnectTunnel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

DirectConnectTunnel::DirectConnectTunnel() :
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
    m_vlanHasBeenSet(false),
    m_tencentAddressHasBeenSet(false),
    m_customerAddressHasBeenSet(false),
    m_directConnectTunnelNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_netDetectIdHasBeenSet(false),
    m_enableBGPCommunityHasBeenSet(false),
    m_natTypeHasBeenSet(false),
    m_vpcRegionHasBeenSet(false),
    m_bfdEnableHasBeenSet(false),
    m_accessPointTypeHasBeenSet(false),
    m_directConnectGatewayNameHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_tencentBackupAddressHasBeenSet(false),
    m_signLawHasBeenSet(false),
    m_cloudAttachIdHasBeenSet(false),
    m_shareOrNotHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnectTunnel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DirectConnectTunnelId") && !value["DirectConnectTunnelId"].IsNull())
    {
        if (!value["DirectConnectTunnelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.DirectConnectTunnelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectTunnelId = string(value["DirectConnectTunnelId"].GetString());
        m_directConnectTunnelIdHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectId") && !value["DirectConnectId"].IsNull())
    {
        if (!value["DirectConnectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.DirectConnectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectId = string(value["DirectConnectId"].GetString());
        m_directConnectIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectOwnerAccount") && !value["DirectConnectOwnerAccount"].IsNull())
    {
        if (!value["DirectConnectOwnerAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.DirectConnectOwnerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectOwnerAccount = string(value["DirectConnectOwnerAccount"].GetString());
        m_directConnectOwnerAccountHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccount") && !value["OwnerAccount"].IsNull())
    {
        if (!value["OwnerAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.OwnerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccount = string(value["OwnerAccount"].GetString());
        m_ownerAccountHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkRegion") && !value["NetworkRegion"].IsNull())
    {
        if (!value["NetworkRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.NetworkRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkRegion = string(value["NetworkRegion"].GetString());
        m_networkRegionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectGatewayId") && !value["DirectConnectGatewayId"].IsNull())
    {
        if (!value["DirectConnectGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.DirectConnectGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayId = string(value["DirectConnectGatewayId"].GetString());
        m_directConnectGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("RouteType") && !value["RouteType"].IsNull())
    {
        if (!value["RouteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.RouteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeType = string(value["RouteType"].GetString());
        m_routeTypeHasBeenSet = true;
    }

    if (value.HasMember("BgpPeer") && !value["BgpPeer"].IsNull())
    {
        if (!value["BgpPeer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.BgpPeer` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.RouteFilterPrefixes` is not array type"));

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

    if (value.HasMember("Vlan") && !value["Vlan"].IsNull())
    {
        if (!value["Vlan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.Vlan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vlan = value["Vlan"].GetInt64();
        m_vlanHasBeenSet = true;
    }

    if (value.HasMember("TencentAddress") && !value["TencentAddress"].IsNull())
    {
        if (!value["TencentAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.TencentAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentAddress = string(value["TencentAddress"].GetString());
        m_tencentAddressHasBeenSet = true;
    }

    if (value.HasMember("CustomerAddress") && !value["CustomerAddress"].IsNull())
    {
        if (!value["CustomerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.CustomerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerAddress = string(value["CustomerAddress"].GetString());
        m_customerAddressHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectTunnelName") && !value["DirectConnectTunnelName"].IsNull())
    {
        if (!value["DirectConnectTunnelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.DirectConnectTunnelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectTunnelName = string(value["DirectConnectTunnelName"].GetString());
        m_directConnectTunnelNameHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("NetDetectId") && !value["NetDetectId"].IsNull())
    {
        if (!value["NetDetectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.NetDetectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netDetectId = string(value["NetDetectId"].GetString());
        m_netDetectIdHasBeenSet = true;
    }

    if (value.HasMember("EnableBGPCommunity") && !value["EnableBGPCommunity"].IsNull())
    {
        if (!value["EnableBGPCommunity"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.EnableBGPCommunity` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBGPCommunity = value["EnableBGPCommunity"].GetBool();
        m_enableBGPCommunityHasBeenSet = true;
    }

    if (value.HasMember("NatType") && !value["NatType"].IsNull())
    {
        if (!value["NatType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.NatType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_natType = value["NatType"].GetInt64();
        m_natTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcRegion") && !value["VpcRegion"].IsNull())
    {
        if (!value["VpcRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.VpcRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcRegion = string(value["VpcRegion"].GetString());
        m_vpcRegionHasBeenSet = true;
    }

    if (value.HasMember("BfdEnable") && !value["BfdEnable"].IsNull())
    {
        if (!value["BfdEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.BfdEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bfdEnable = value["BfdEnable"].GetInt64();
        m_bfdEnableHasBeenSet = true;
    }

    if (value.HasMember("AccessPointType") && !value["AccessPointType"].IsNull())
    {
        if (!value["AccessPointType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.AccessPointType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointType = string(value["AccessPointType"].GetString());
        m_accessPointTypeHasBeenSet = true;
    }

    if (value.HasMember("DirectConnectGatewayName") && !value["DirectConnectGatewayName"].IsNull())
    {
        if (!value["DirectConnectGatewayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.DirectConnectGatewayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayName = string(value["DirectConnectGatewayName"].GetString());
        m_directConnectGatewayNameHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("TencentBackupAddress") && !value["TencentBackupAddress"].IsNull())
    {
        if (!value["TencentBackupAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.TencentBackupAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentBackupAddress = string(value["TencentBackupAddress"].GetString());
        m_tencentBackupAddressHasBeenSet = true;
    }

    if (value.HasMember("SignLaw") && !value["SignLaw"].IsNull())
    {
        if (!value["SignLaw"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.SignLaw` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_signLaw = value["SignLaw"].GetBool();
        m_signLawHasBeenSet = true;
    }

    if (value.HasMember("CloudAttachId") && !value["CloudAttachId"].IsNull())
    {
        if (!value["CloudAttachId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.CloudAttachId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAttachId = string(value["CloudAttachId"].GetString());
        m_cloudAttachIdHasBeenSet = true;
    }

    if (value.HasMember("ShareOrNot") && !value["ShareOrNot"].IsNull())
    {
        if (!value["ShareOrNot"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnel.ShareOrNot` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shareOrNot = value["ShareOrNot"].GetUint64();
        m_shareOrNotHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnectTunnel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_tencentBackupAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentBackupAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tencentBackupAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_signLawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignLaw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signLaw, allocator);
    }

    if (m_cloudAttachIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAttachId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAttachId.c_str(), allocator).Move(), allocator);
    }

    if (m_shareOrNotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareOrNot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareOrNot, allocator);
    }

}


string DirectConnectTunnel::GetDirectConnectTunnelId() const
{
    return m_directConnectTunnelId;
}

void DirectConnectTunnel::SetDirectConnectTunnelId(const string& _directConnectTunnelId)
{
    m_directConnectTunnelId = _directConnectTunnelId;
    m_directConnectTunnelIdHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectTunnelIdHasBeenSet() const
{
    return m_directConnectTunnelIdHasBeenSet;
}

string DirectConnectTunnel::GetDirectConnectId() const
{
    return m_directConnectId;
}

void DirectConnectTunnel::SetDirectConnectId(const string& _directConnectId)
{
    m_directConnectId = _directConnectId;
    m_directConnectIdHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectIdHasBeenSet() const
{
    return m_directConnectIdHasBeenSet;
}

string DirectConnectTunnel::GetState() const
{
    return m_state;
}

void DirectConnectTunnel::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DirectConnectTunnel::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DirectConnectTunnel::GetDirectConnectOwnerAccount() const
{
    return m_directConnectOwnerAccount;
}

void DirectConnectTunnel::SetDirectConnectOwnerAccount(const string& _directConnectOwnerAccount)
{
    m_directConnectOwnerAccount = _directConnectOwnerAccount;
    m_directConnectOwnerAccountHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectOwnerAccountHasBeenSet() const
{
    return m_directConnectOwnerAccountHasBeenSet;
}

string DirectConnectTunnel::GetOwnerAccount() const
{
    return m_ownerAccount;
}

void DirectConnectTunnel::SetOwnerAccount(const string& _ownerAccount)
{
    m_ownerAccount = _ownerAccount;
    m_ownerAccountHasBeenSet = true;
}

bool DirectConnectTunnel::OwnerAccountHasBeenSet() const
{
    return m_ownerAccountHasBeenSet;
}

string DirectConnectTunnel::GetNetworkType() const
{
    return m_networkType;
}

void DirectConnectTunnel::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool DirectConnectTunnel::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string DirectConnectTunnel::GetNetworkRegion() const
{
    return m_networkRegion;
}

void DirectConnectTunnel::SetNetworkRegion(const string& _networkRegion)
{
    m_networkRegion = _networkRegion;
    m_networkRegionHasBeenSet = true;
}

bool DirectConnectTunnel::NetworkRegionHasBeenSet() const
{
    return m_networkRegionHasBeenSet;
}

string DirectConnectTunnel::GetVpcId() const
{
    return m_vpcId;
}

void DirectConnectTunnel::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DirectConnectTunnel::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DirectConnectTunnel::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void DirectConnectTunnel::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

string DirectConnectTunnel::GetRouteType() const
{
    return m_routeType;
}

void DirectConnectTunnel::SetRouteType(const string& _routeType)
{
    m_routeType = _routeType;
    m_routeTypeHasBeenSet = true;
}

bool DirectConnectTunnel::RouteTypeHasBeenSet() const
{
    return m_routeTypeHasBeenSet;
}

BgpPeer DirectConnectTunnel::GetBgpPeer() const
{
    return m_bgpPeer;
}

void DirectConnectTunnel::SetBgpPeer(const BgpPeer& _bgpPeer)
{
    m_bgpPeer = _bgpPeer;
    m_bgpPeerHasBeenSet = true;
}

bool DirectConnectTunnel::BgpPeerHasBeenSet() const
{
    return m_bgpPeerHasBeenSet;
}

vector<RouteFilterPrefix> DirectConnectTunnel::GetRouteFilterPrefixes() const
{
    return m_routeFilterPrefixes;
}

void DirectConnectTunnel::SetRouteFilterPrefixes(const vector<RouteFilterPrefix>& _routeFilterPrefixes)
{
    m_routeFilterPrefixes = _routeFilterPrefixes;
    m_routeFilterPrefixesHasBeenSet = true;
}

bool DirectConnectTunnel::RouteFilterPrefixesHasBeenSet() const
{
    return m_routeFilterPrefixesHasBeenSet;
}

int64_t DirectConnectTunnel::GetVlan() const
{
    return m_vlan;
}

void DirectConnectTunnel::SetVlan(const int64_t& _vlan)
{
    m_vlan = _vlan;
    m_vlanHasBeenSet = true;
}

bool DirectConnectTunnel::VlanHasBeenSet() const
{
    return m_vlanHasBeenSet;
}

string DirectConnectTunnel::GetTencentAddress() const
{
    return m_tencentAddress;
}

void DirectConnectTunnel::SetTencentAddress(const string& _tencentAddress)
{
    m_tencentAddress = _tencentAddress;
    m_tencentAddressHasBeenSet = true;
}

bool DirectConnectTunnel::TencentAddressHasBeenSet() const
{
    return m_tencentAddressHasBeenSet;
}

string DirectConnectTunnel::GetCustomerAddress() const
{
    return m_customerAddress;
}

void DirectConnectTunnel::SetCustomerAddress(const string& _customerAddress)
{
    m_customerAddress = _customerAddress;
    m_customerAddressHasBeenSet = true;
}

bool DirectConnectTunnel::CustomerAddressHasBeenSet() const
{
    return m_customerAddressHasBeenSet;
}

string DirectConnectTunnel::GetDirectConnectTunnelName() const
{
    return m_directConnectTunnelName;
}

void DirectConnectTunnel::SetDirectConnectTunnelName(const string& _directConnectTunnelName)
{
    m_directConnectTunnelName = _directConnectTunnelName;
    m_directConnectTunnelNameHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectTunnelNameHasBeenSet() const
{
    return m_directConnectTunnelNameHasBeenSet;
}

string DirectConnectTunnel::GetCreatedTime() const
{
    return m_createdTime;
}

void DirectConnectTunnel::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool DirectConnectTunnel::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t DirectConnectTunnel::GetBandwidth() const
{
    return m_bandwidth;
}

void DirectConnectTunnel::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool DirectConnectTunnel::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

vector<Tag> DirectConnectTunnel::GetTagSet() const
{
    return m_tagSet;
}

void DirectConnectTunnel::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool DirectConnectTunnel::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string DirectConnectTunnel::GetNetDetectId() const
{
    return m_netDetectId;
}

void DirectConnectTunnel::SetNetDetectId(const string& _netDetectId)
{
    m_netDetectId = _netDetectId;
    m_netDetectIdHasBeenSet = true;
}

bool DirectConnectTunnel::NetDetectIdHasBeenSet() const
{
    return m_netDetectIdHasBeenSet;
}

bool DirectConnectTunnel::GetEnableBGPCommunity() const
{
    return m_enableBGPCommunity;
}

void DirectConnectTunnel::SetEnableBGPCommunity(const bool& _enableBGPCommunity)
{
    m_enableBGPCommunity = _enableBGPCommunity;
    m_enableBGPCommunityHasBeenSet = true;
}

bool DirectConnectTunnel::EnableBGPCommunityHasBeenSet() const
{
    return m_enableBGPCommunityHasBeenSet;
}

int64_t DirectConnectTunnel::GetNatType() const
{
    return m_natType;
}

void DirectConnectTunnel::SetNatType(const int64_t& _natType)
{
    m_natType = _natType;
    m_natTypeHasBeenSet = true;
}

bool DirectConnectTunnel::NatTypeHasBeenSet() const
{
    return m_natTypeHasBeenSet;
}

string DirectConnectTunnel::GetVpcRegion() const
{
    return m_vpcRegion;
}

void DirectConnectTunnel::SetVpcRegion(const string& _vpcRegion)
{
    m_vpcRegion = _vpcRegion;
    m_vpcRegionHasBeenSet = true;
}

bool DirectConnectTunnel::VpcRegionHasBeenSet() const
{
    return m_vpcRegionHasBeenSet;
}

int64_t DirectConnectTunnel::GetBfdEnable() const
{
    return m_bfdEnable;
}

void DirectConnectTunnel::SetBfdEnable(const int64_t& _bfdEnable)
{
    m_bfdEnable = _bfdEnable;
    m_bfdEnableHasBeenSet = true;
}

bool DirectConnectTunnel::BfdEnableHasBeenSet() const
{
    return m_bfdEnableHasBeenSet;
}

string DirectConnectTunnel::GetAccessPointType() const
{
    return m_accessPointType;
}

void DirectConnectTunnel::SetAccessPointType(const string& _accessPointType)
{
    m_accessPointType = _accessPointType;
    m_accessPointTypeHasBeenSet = true;
}

bool DirectConnectTunnel::AccessPointTypeHasBeenSet() const
{
    return m_accessPointTypeHasBeenSet;
}

string DirectConnectTunnel::GetDirectConnectGatewayName() const
{
    return m_directConnectGatewayName;
}

void DirectConnectTunnel::SetDirectConnectGatewayName(const string& _directConnectGatewayName)
{
    m_directConnectGatewayName = _directConnectGatewayName;
    m_directConnectGatewayNameHasBeenSet = true;
}

bool DirectConnectTunnel::DirectConnectGatewayNameHasBeenSet() const
{
    return m_directConnectGatewayNameHasBeenSet;
}

string DirectConnectTunnel::GetVpcName() const
{
    return m_vpcName;
}

void DirectConnectTunnel::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool DirectConnectTunnel::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string DirectConnectTunnel::GetTencentBackupAddress() const
{
    return m_tencentBackupAddress;
}

void DirectConnectTunnel::SetTencentBackupAddress(const string& _tencentBackupAddress)
{
    m_tencentBackupAddress = _tencentBackupAddress;
    m_tencentBackupAddressHasBeenSet = true;
}

bool DirectConnectTunnel::TencentBackupAddressHasBeenSet() const
{
    return m_tencentBackupAddressHasBeenSet;
}

bool DirectConnectTunnel::GetSignLaw() const
{
    return m_signLaw;
}

void DirectConnectTunnel::SetSignLaw(const bool& _signLaw)
{
    m_signLaw = _signLaw;
    m_signLawHasBeenSet = true;
}

bool DirectConnectTunnel::SignLawHasBeenSet() const
{
    return m_signLawHasBeenSet;
}

string DirectConnectTunnel::GetCloudAttachId() const
{
    return m_cloudAttachId;
}

void DirectConnectTunnel::SetCloudAttachId(const string& _cloudAttachId)
{
    m_cloudAttachId = _cloudAttachId;
    m_cloudAttachIdHasBeenSet = true;
}

bool DirectConnectTunnel::CloudAttachIdHasBeenSet() const
{
    return m_cloudAttachIdHasBeenSet;
}

uint64_t DirectConnectTunnel::GetShareOrNot() const
{
    return m_shareOrNot;
}

void DirectConnectTunnel::SetShareOrNot(const uint64_t& _shareOrNot)
{
    m_shareOrNot = _shareOrNot;
    m_shareOrNotHasBeenSet = true;
}

bool DirectConnectTunnel::ShareOrNotHasBeenSet() const
{
    return m_shareOrNotHasBeenSet;
}

