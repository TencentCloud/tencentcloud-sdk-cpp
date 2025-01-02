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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 专线网关对象。
                */
                class DirectConnectGateway : public AbstractModel
                {
                public:
                    DirectConnectGateway();
                    ~DirectConnectGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专线网关`ID`。
                     * @return DirectConnectGatewayId 专线网关`ID`。
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置专线网关`ID`。
                     * @param _directConnectGatewayId 专线网关`ID`。
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取专线网关名称。
                     * @return DirectConnectGatewayName 专线网关名称。
                     * 
                     */
                    std::string GetDirectConnectGatewayName() const;

                    /**
                     * 设置专线网关名称。
                     * @param _directConnectGatewayName 专线网关名称。
                     * 
                     */
                    void SetDirectConnectGatewayName(const std::string& _directConnectGatewayName);

                    /**
                     * 判断参数 DirectConnectGatewayName 是否已赋值
                     * @return DirectConnectGatewayName 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayNameHasBeenSet() const;

                    /**
                     * 获取专线网关关联`VPC`实例`ID`。
                     * @return VpcId 专线网关关联`VPC`实例`ID`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置专线网关关联`VPC`实例`ID`。
                     * @param _vpcId 专线网关关联`VPC`实例`ID`。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取关联网络类型：
<li>`VPC` - 私有网络</li>
<li>`CCN` - 云联网</li>
                     * @return NetworkType 关联网络类型：
<li>`VPC` - 私有网络</li>
<li>`CCN` - 云联网</li>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置关联网络类型：
<li>`VPC` - 私有网络</li>
<li>`CCN` - 云联网</li>
                     * @param _networkType 关联网络类型：
<li>`VPC` - 私有网络</li>
<li>`CCN` - 云联网</li>
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取关联网络实例`ID`：
<li>`NetworkType`为`VPC`时，这里为私有网络实例`ID`</li>
<li>`NetworkType`为`CCN`时，这里为云联网实例`ID`</li>
                     * @return NetworkInstanceId 关联网络实例`ID`：
<li>`NetworkType`为`VPC`时，这里为私有网络实例`ID`</li>
<li>`NetworkType`为`CCN`时，这里为云联网实例`ID`</li>
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置关联网络实例`ID`：
<li>`NetworkType`为`VPC`时，这里为私有网络实例`ID`</li>
<li>`NetworkType`为`CCN`时，这里为云联网实例`ID`</li>
                     * @param _networkInstanceId 关联网络实例`ID`：
<li>`NetworkType`为`VPC`时，这里为私有网络实例`ID`</li>
<li>`NetworkType`为`CCN`时，这里为云联网实例`ID`</li>
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取网关类型：
<li>NORMAL - 标准型，注：云联网只支持标准型</li>
<li>NAT - NAT型</li>
NAT类型支持网络地址转换配置，类型确定后不能修改；一个私有网络可以创建一个NAT类型的专线网关和一个非NAT类型的专线网关
                     * @return GatewayType 网关类型：
<li>NORMAL - 标准型，注：云联网只支持标准型</li>
<li>NAT - NAT型</li>
NAT类型支持网络地址转换配置，类型确定后不能修改；一个私有网络可以创建一个NAT类型的专线网关和一个非NAT类型的专线网关
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置网关类型：
<li>NORMAL - 标准型，注：云联网只支持标准型</li>
<li>NAT - NAT型</li>
NAT类型支持网络地址转换配置，类型确定后不能修改；一个私有网络可以创建一个NAT类型的专线网关和一个非NAT类型的专线网关
                     * @param _gatewayType 网关类型：
<li>NORMAL - 标准型，注：云联网只支持标准型</li>
<li>NAT - NAT型</li>
NAT类型支持网络地址转换配置，类型确定后不能修改；一个私有网络可以创建一个NAT类型的专线网关和一个非NAT类型的专线网关
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取专线网关IP。
                     * @return DirectConnectGatewayIp 专线网关IP。
                     * 
                     */
                    std::string GetDirectConnectGatewayIp() const;

                    /**
                     * 设置专线网关IP。
                     * @param _directConnectGatewayIp 专线网关IP。
                     * 
                     */
                    void SetDirectConnectGatewayIp(const std::string& _directConnectGatewayIp);

                    /**
                     * 判断参数 DirectConnectGatewayIp 是否已赋值
                     * @return DirectConnectGatewayIp 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIpHasBeenSet() const;

                    /**
                     * 获取专线网关关联`CCN`实例`ID`。
                     * @return CcnId 专线网关关联`CCN`实例`ID`。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置专线网关关联`CCN`实例`ID`。
                     * @param _ccnId 专线网关关联`CCN`实例`ID`。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取云联网路由学习类型：
<li>`BGP` - 自动学习。</li>
<li>`STATIC` - 静态，即用户配置。</li>
                     * @return CcnRouteType 云联网路由学习类型：
<li>`BGP` - 自动学习。</li>
<li>`STATIC` - 静态，即用户配置。</li>
                     * 
                     */
                    std::string GetCcnRouteType() const;

                    /**
                     * 设置云联网路由学习类型：
<li>`BGP` - 自动学习。</li>
<li>`STATIC` - 静态，即用户配置。</li>
                     * @param _ccnRouteType 云联网路由学习类型：
<li>`BGP` - 自动学习。</li>
<li>`STATIC` - 静态，即用户配置。</li>
                     * 
                     */
                    void SetCcnRouteType(const std::string& _ccnRouteType);

                    /**
                     * 判断参数 CcnRouteType 是否已赋值
                     * @return CcnRouteType 是否已赋值
                     * 
                     */
                    bool CcnRouteTypeHasBeenSet() const;

                    /**
                     * 获取是否启用BGP。
                     * @return EnableBGP 是否启用BGP。
                     * 
                     */
                    bool GetEnableBGP() const;

                    /**
                     * 设置是否启用BGP。
                     * @param _enableBGP 是否启用BGP。
                     * 
                     */
                    void SetEnableBGP(const bool& _enableBGP);

                    /**
                     * 判断参数 EnableBGP 是否已赋值
                     * @return EnableBGP 是否已赋值
                     * 
                     */
                    bool EnableBGPHasBeenSet() const;

                    /**
                     * 获取开启和关闭BGP的community属性。
                     * @return EnableBGPCommunity 开启和关闭BGP的community属性。
                     * 
                     */
                    bool GetEnableBGPCommunity() const;

                    /**
                     * 设置开启和关闭BGP的community属性。
                     * @param _enableBGPCommunity 开启和关闭BGP的community属性。
                     * 
                     */
                    void SetEnableBGPCommunity(const bool& _enableBGPCommunity);

                    /**
                     * 判断参数 EnableBGPCommunity 是否已赋值
                     * @return EnableBGPCommunity 是否已赋值
                     * 
                     */
                    bool EnableBGPCommunityHasBeenSet() const;

                    /**
                     * 获取绑定的NAT网关ID。
                     * @return NatGatewayId 绑定的NAT网关ID。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置绑定的NAT网关ID。
                     * @param _natGatewayId 绑定的NAT网关ID。
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取专线网关是否支持VXLAN架构
                     * @return VXLANSupport 专线网关是否支持VXLAN架构
                     * 
                     */
                    std::vector<bool> GetVXLANSupport() const;

                    /**
                     * 设置专线网关是否支持VXLAN架构
                     * @param _vXLANSupport 专线网关是否支持VXLAN架构
                     * 
                     */
                    void SetVXLANSupport(const std::vector<bool>& _vXLANSupport);

                    /**
                     * 判断参数 VXLANSupport 是否已赋值
                     * @return VXLANSupport 是否已赋值
                     * 
                     */
                    bool VXLANSupportHasBeenSet() const;

                    /**
                     * 获取云联网路由发布模式：`standard`（标准模式）、`exquisite`（精细模式）。
                     * @return ModeType 云联网路由发布模式：`standard`（标准模式）、`exquisite`（精细模式）。
                     * 
                     */
                    std::string GetModeType() const;

                    /**
                     * 设置云联网路由发布模式：`standard`（标准模式）、`exquisite`（精细模式）。
                     * @param _modeType 云联网路由发布模式：`standard`（标准模式）、`exquisite`（精细模式）。
                     * 
                     */
                    void SetModeType(const std::string& _modeType);

                    /**
                     * 判断参数 ModeType 是否已赋值
                     * @return ModeType 是否已赋值
                     * 
                     */
                    bool ModeTypeHasBeenSet() const;

                    /**
                     * 获取是否为localZone专线网关。
                     * @return LocalZone 是否为localZone专线网关。
                     * 
                     */
                    bool GetLocalZone() const;

                    /**
                     * 设置是否为localZone专线网关。
                     * @param _localZone 是否为localZone专线网关。
                     * 
                     */
                    void SetLocalZone(const bool& _localZone);

                    /**
                     * 判断参数 LocalZone 是否已赋值
                     * @return LocalZone 是否已赋值
                     * 
                     */
                    bool LocalZoneHasBeenSet() const;

                    /**
                     * 获取专线网关所在可用区
                     * @return Zone 专线网关所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置专线网关所在可用区
                     * @param _zone 专线网关所在可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取网关流控明细启用状态：
0：关闭
1：开启
                     * @return EnableFlowDetails 网关流控明细启用状态：
0：关闭
1：开启
                     * 
                     */
                    uint64_t GetEnableFlowDetails() const;

                    /**
                     * 设置网关流控明细启用状态：
0：关闭
1：开启
                     * @param _enableFlowDetails 网关流控明细启用状态：
0：关闭
1：开启
                     * 
                     */
                    void SetEnableFlowDetails(const uint64_t& _enableFlowDetails);

                    /**
                     * 判断参数 EnableFlowDetails 是否已赋值
                     * @return EnableFlowDetails 是否已赋值
                     * 
                     */
                    bool EnableFlowDetailsHasBeenSet() const;

                    /**
                     * 获取开启、关闭网关流控明细时间
                     * @return FlowDetailsUpdateTime 开启、关闭网关流控明细时间
                     * 
                     */
                    std::string GetFlowDetailsUpdateTime() const;

                    /**
                     * 设置开启、关闭网关流控明细时间
                     * @param _flowDetailsUpdateTime 开启、关闭网关流控明细时间
                     * 
                     */
                    void SetFlowDetailsUpdateTime(const std::string& _flowDetailsUpdateTime);

                    /**
                     * 判断参数 FlowDetailsUpdateTime 是否已赋值
                     * @return FlowDetailsUpdateTime 是否已赋值
                     * 
                     */
                    bool FlowDetailsUpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否支持开启网关流控明细
0：不支持
1：支持
                     * @return NewAfc 是否支持开启网关流控明细
0：不支持
1：支持
                     * 
                     */
                    uint64_t GetNewAfc() const;

                    /**
                     * 设置是否支持开启网关流控明细
0：不支持
1：支持
                     * @param _newAfc 是否支持开启网关流控明细
0：不支持
1：支持
                     * 
                     */
                    void SetNewAfc(const uint64_t& _newAfc);

                    /**
                     * 判断参数 NewAfc 是否已赋值
                     * @return NewAfc 是否已赋值
                     * 
                     */
                    bool NewAfcHasBeenSet() const;

                    /**
                     * 获取专线网关接入网络类型：
<li>`VXLAN` - VXLAN类型。</li>
<li>`MPLS` - MPLS类型。</li>
<li>`Hybrid` - Hybrid类型。</li>
                     * @return AccessNetworkType 专线网关接入网络类型：
<li>`VXLAN` - VXLAN类型。</li>
<li>`MPLS` - MPLS类型。</li>
<li>`Hybrid` - Hybrid类型。</li>
                     * 
                     */
                    std::string GetAccessNetworkType() const;

                    /**
                     * 设置专线网关接入网络类型：
<li>`VXLAN` - VXLAN类型。</li>
<li>`MPLS` - MPLS类型。</li>
<li>`Hybrid` - Hybrid类型。</li>
                     * @param _accessNetworkType 专线网关接入网络类型：
<li>`VXLAN` - VXLAN类型。</li>
<li>`MPLS` - MPLS类型。</li>
<li>`Hybrid` - Hybrid类型。</li>
                     * 
                     */
                    void SetAccessNetworkType(const std::string& _accessNetworkType);

                    /**
                     * 判断参数 AccessNetworkType 是否已赋值
                     * @return AccessNetworkType 是否已赋值
                     * 
                     */
                    bool AccessNetworkTypeHasBeenSet() const;

                    /**
                     * 获取跨可用区容灾专线网关的可用区列表
                     * @return HaZoneList 跨可用区容灾专线网关的可用区列表
                     * 
                     */
                    std::vector<std::string> GetHaZoneList() const;

                    /**
                     * 设置跨可用区容灾专线网关的可用区列表
                     * @param _haZoneList 跨可用区容灾专线网关的可用区列表
                     * 
                     */
                    void SetHaZoneList(const std::vector<std::string>& _haZoneList);

                    /**
                     * 判断参数 HaZoneList 是否已赋值
                     * @return HaZoneList 是否已赋值
                     * 
                     */
                    bool HaZoneListHasBeenSet() const;

                    /**
                     * 获取专线网关自定义ASN
                     * @return GatewayAsn 专线网关自定义ASN
                     * 
                     */
                    uint64_t GetGatewayAsn() const;

                    /**
                     * 设置专线网关自定义ASN
                     * @param _gatewayAsn 专线网关自定义ASN
                     * 
                     */
                    void SetGatewayAsn(const uint64_t& _gatewayAsn);

                    /**
                     * 判断参数 GatewayAsn 是否已赋值
                     * @return GatewayAsn 是否已赋值
                     * 
                     */
                    bool GatewayAsnHasBeenSet() const;

                private:

                    /**
                     * 专线网关`ID`。
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * 专线网关名称。
                     */
                    std::string m_directConnectGatewayName;
                    bool m_directConnectGatewayNameHasBeenSet;

                    /**
                     * 专线网关关联`VPC`实例`ID`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 关联网络类型：
<li>`VPC` - 私有网络</li>
<li>`CCN` - 云联网</li>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 关联网络实例`ID`：
<li>`NetworkType`为`VPC`时，这里为私有网络实例`ID`</li>
<li>`NetworkType`为`CCN`时，这里为云联网实例`ID`</li>
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * 网关类型：
<li>NORMAL - 标准型，注：云联网只支持标准型</li>
<li>NAT - NAT型</li>
NAT类型支持网络地址转换配置，类型确定后不能修改；一个私有网络可以创建一个NAT类型的专线网关和一个非NAT类型的专线网关
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 专线网关IP。
                     */
                    std::string m_directConnectGatewayIp;
                    bool m_directConnectGatewayIpHasBeenSet;

                    /**
                     * 专线网关关联`CCN`实例`ID`。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云联网路由学习类型：
<li>`BGP` - 自动学习。</li>
<li>`STATIC` - 静态，即用户配置。</li>
                     */
                    std::string m_ccnRouteType;
                    bool m_ccnRouteTypeHasBeenSet;

                    /**
                     * 是否启用BGP。
                     */
                    bool m_enableBGP;
                    bool m_enableBGPHasBeenSet;

                    /**
                     * 开启和关闭BGP的community属性。
                     */
                    bool m_enableBGPCommunity;
                    bool m_enableBGPCommunityHasBeenSet;

                    /**
                     * 绑定的NAT网关ID。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 专线网关是否支持VXLAN架构
                     */
                    std::vector<bool> m_vXLANSupport;
                    bool m_vXLANSupportHasBeenSet;

                    /**
                     * 云联网路由发布模式：`standard`（标准模式）、`exquisite`（精细模式）。
                     */
                    std::string m_modeType;
                    bool m_modeTypeHasBeenSet;

                    /**
                     * 是否为localZone专线网关。
                     */
                    bool m_localZone;
                    bool m_localZoneHasBeenSet;

                    /**
                     * 专线网关所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 网关流控明细启用状态：
0：关闭
1：开启
                     */
                    uint64_t m_enableFlowDetails;
                    bool m_enableFlowDetailsHasBeenSet;

                    /**
                     * 开启、关闭网关流控明细时间
                     */
                    std::string m_flowDetailsUpdateTime;
                    bool m_flowDetailsUpdateTimeHasBeenSet;

                    /**
                     * 是否支持开启网关流控明细
0：不支持
1：支持
                     */
                    uint64_t m_newAfc;
                    bool m_newAfcHasBeenSet;

                    /**
                     * 专线网关接入网络类型：
<li>`VXLAN` - VXLAN类型。</li>
<li>`MPLS` - MPLS类型。</li>
<li>`Hybrid` - Hybrid类型。</li>
                     */
                    std::string m_accessNetworkType;
                    bool m_accessNetworkTypeHasBeenSet;

                    /**
                     * 跨可用区容灾专线网关的可用区列表
                     */
                    std::vector<std::string> m_haZoneList;
                    bool m_haZoneListHasBeenSet;

                    /**
                     * 专线网关自定义ASN
                     */
                    uint64_t m_gatewayAsn;
                    bool m_gatewayAsnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAY_H_
