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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCRESOURCE_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * VPC占用资源
                */
                class VpcResource : public AbstractModel
                {
                public:
                    VpcResource();
                    ~VpcResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取私有网络名称
                     * @return VpcName 私有网络名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称
                     * @param _vpcName 私有网络名称
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取私有网络的CIDR
                     * @return CidrBlock 私有网络的CIDR
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置私有网络的CIDR
                     * @param _cidrBlock 私有网络的CIDR
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取子网个数
                     * @return SubnetNum 子网个数
                     * 
                     */
                    uint64_t GetSubnetNum() const;

                    /**
                     * 设置子网个数
                     * @param _subnetNum 子网个数
                     * 
                     */
                    void SetSubnetNum(const uint64_t& _subnetNum);

                    /**
                     * 判断参数 SubnetNum 是否已赋值
                     * @return SubnetNum 是否已赋值
                     * 
                     */
                    bool SubnetNumHasBeenSet() const;

                    /**
                     * 获取NAT个数
                     * @return NatNum NAT个数
                     * 
                     */
                    uint64_t GetNatNum() const;

                    /**
                     * 设置NAT个数
                     * @param _natNum NAT个数
                     * 
                     */
                    void SetNatNum(const uint64_t& _natNum);

                    /**
                     * 判断参数 NatNum 是否已赋值
                     * @return NatNum 是否已赋值
                     * 
                     */
                    bool NatNumHasBeenSet() const;

                    /**
                     * 获取VPC状态
                     * @return State VPC状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置VPC状态
                     * @param _state VPC状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取是否开启监控
                     * @return MonitorFlag 是否开启监控
                     * 
                     */
                    bool GetMonitorFlag() const;

                    /**
                     * 设置是否开启监控
                     * @param _monitorFlag 是否开启监控
                     * 
                     */
                    void SetMonitorFlag(const bool& _monitorFlag);

                    /**
                     * 判断参数 MonitorFlag 是否已赋值
                     * @return MonitorFlag 是否已赋值
                     * 
                     */
                    bool MonitorFlagHasBeenSet() const;

                    /**
                     * 获取物理机个数
                     * @return CpmNum 物理机个数
                     * 
                     */
                    uint64_t GetCpmNum() const;

                    /**
                     * 设置物理机个数
                     * @param _cpmNum 物理机个数
                     * 
                     */
                    void SetCpmNum(const uint64_t& _cpmNum);

                    /**
                     * 判断参数 CpmNum 是否已赋值
                     * @return CpmNum 是否已赋值
                     * 
                     */
                    bool CpmNumHasBeenSet() const;

                    /**
                     * 获取可用IP个数
                     * @return LeaveIpNum 可用IP个数
                     * 
                     */
                    uint64_t GetLeaveIpNum() const;

                    /**
                     * 设置可用IP个数
                     * @param _leaveIpNum 可用IP个数
                     * 
                     */
                    void SetLeaveIpNum(const uint64_t& _leaveIpNum);

                    /**
                     * 判断参数 LeaveIpNum 是否已赋值
                     * @return LeaveIpNum 是否已赋值
                     * 
                     */
                    bool LeaveIpNumHasBeenSet() const;

                    /**
                     * 获取负载均衡个数
                     * @return LbNum 负载均衡个数
                     * 
                     */
                    uint64_t GetLbNum() const;

                    /**
                     * 设置负载均衡个数
                     * @param _lbNum 负载均衡个数
                     * 
                     */
                    void SetLbNum(const uint64_t& _lbNum);

                    /**
                     * 判断参数 LbNum 是否已赋值
                     * @return LbNum 是否已赋值
                     * 
                     */
                    bool LbNumHasBeenSet() const;

                    /**
                     * 获取流量镜像网关个数
                     * @return TrafficMirrorNum 流量镜像网关个数
                     * 
                     */
                    uint64_t GetTrafficMirrorNum() const;

                    /**
                     * 设置流量镜像网关个数
                     * @param _trafficMirrorNum 流量镜像网关个数
                     * 
                     */
                    void SetTrafficMirrorNum(const uint64_t& _trafficMirrorNum);

                    /**
                     * 判断参数 TrafficMirrorNum 是否已赋值
                     * @return TrafficMirrorNum 是否已赋值
                     * 
                     */
                    bool TrafficMirrorNumHasBeenSet() const;

                    /**
                     * 获取弹性IP个数
                     * @return EipNum 弹性IP个数
                     * 
                     */
                    uint64_t GetEipNum() const;

                    /**
                     * 设置弹性IP个数
                     * @param _eipNum 弹性IP个数
                     * 
                     */
                    void SetEipNum(const uint64_t& _eipNum);

                    /**
                     * 判断参数 EipNum 是否已赋值
                     * @return EipNum 是否已赋值
                     * 
                     */
                    bool EipNumHasBeenSet() const;

                    /**
                     * 获取专线网关个数
                     * @return PlgwNum 专线网关个数
                     * 
                     */
                    uint64_t GetPlgwNum() const;

                    /**
                     * 设置专线网关个数
                     * @param _plgwNum 专线网关个数
                     * 
                     */
                    void SetPlgwNum(const uint64_t& _plgwNum);

                    /**
                     * 判断参数 PlgwNum 是否已赋值
                     * @return PlgwNum 是否已赋值
                     * 
                     */
                    bool PlgwNumHasBeenSet() const;

                    /**
                     * 获取专线通道个数
                     * @return PlvpNum 专线通道个数
                     * 
                     */
                    uint64_t GetPlvpNum() const;

                    /**
                     * 设置专线通道个数
                     * @param _plvpNum 专线通道个数
                     * 
                     */
                    void SetPlvpNum(const uint64_t& _plvpNum);

                    /**
                     * 判断参数 PlvpNum 是否已赋值
                     * @return PlvpNum 是否已赋值
                     * 
                     */
                    bool PlvpNumHasBeenSet() const;

                    /**
                     * 获取ssl vpn网关个数
                     * @return SslVpnGwNum ssl vpn网关个数
                     * 
                     */
                    uint64_t GetSslVpnGwNum() const;

                    /**
                     * 设置ssl vpn网关个数
                     * @param _sslVpnGwNum ssl vpn网关个数
                     * 
                     */
                    void SetSslVpnGwNum(const uint64_t& _sslVpnGwNum);

                    /**
                     * 判断参数 SslVpnGwNum 是否已赋值
                     * @return SslVpnGwNum 是否已赋值
                     * 
                     */
                    bool SslVpnGwNumHasBeenSet() const;

                    /**
                     * 获取对等链接个数
                     * @return VpcPeerNum 对等链接个数
                     * 
                     */
                    uint64_t GetVpcPeerNum() const;

                    /**
                     * 设置对等链接个数
                     * @param _vpcPeerNum 对等链接个数
                     * 
                     */
                    void SetVpcPeerNum(const uint64_t& _vpcPeerNum);

                    /**
                     * 判断参数 VpcPeerNum 是否已赋值
                     * @return VpcPeerNum 是否已赋值
                     * 
                     */
                    bool VpcPeerNumHasBeenSet() const;

                    /**
                     * 获取ipsec vpn网关个数
                     * @return IpsecVpnGwNum ipsec vpn网关个数
                     * 
                     */
                    uint64_t GetIpsecVpnGwNum() const;

                    /**
                     * 设置ipsec vpn网关个数
                     * @param _ipsecVpnGwNum ipsec vpn网关个数
                     * 
                     */
                    void SetIpsecVpnGwNum(const uint64_t& _ipsecVpnGwNum);

                    /**
                     * 判断参数 IpsecVpnGwNum 是否已赋值
                     * @return IpsecVpnGwNum 是否已赋值
                     * 
                     */
                    bool IpsecVpnGwNumHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取是否老专区VPC
                     * @return IsOld 是否老专区VPC
                     * 
                     */
                    bool GetIsOld() const;

                    /**
                     * 设置是否老专区VPC
                     * @param _isOld 是否老专区VPC
                     * 
                     */
                    void SetIsOld(const bool& _isOld);

                    /**
                     * 判断参数 IsOld 是否已赋值
                     * @return IsOld 是否已赋值
                     * 
                     */
                    bool IsOldHasBeenSet() const;

                    /**
                     * 获取云联网服务个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcnServiceNum 云联网服务个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCcnServiceNum() const;

                    /**
                     * 设置云联网服务个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ccnServiceNum 云联网服务个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCcnServiceNum(const uint64_t& _ccnServiceNum);

                    /**
                     * 判断参数 CcnServiceNum 是否已赋值
                     * @return CcnServiceNum 是否已赋值
                     * 
                     */
                    bool CcnServiceNumHasBeenSet() const;

                    /**
                     * 获取VPC允许创建的对等连接个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcPeerLimitToAllRegion VPC允许创建的对等连接个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVpcPeerLimitToAllRegion() const;

                    /**
                     * 设置VPC允许创建的对等连接个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcPeerLimitToAllRegion VPC允许创建的对等连接个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcPeerLimitToAllRegion(const uint64_t& _vpcPeerLimitToAllRegion);

                    /**
                     * 判断参数 VpcPeerLimitToAllRegion 是否已赋值
                     * @return VpcPeerLimitToAllRegion 是否已赋值
                     * 
                     */
                    bool VpcPeerLimitToAllRegionHasBeenSet() const;

                    /**
                     * 获取VPC允许创建的同地域的对等连接的个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcPeerLimitToSameRegion VPC允许创建的同地域的对等连接的个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVpcPeerLimitToSameRegion() const;

                    /**
                     * 设置VPC允许创建的同地域的对等连接的个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcPeerLimitToSameRegion VPC允许创建的同地域的对等连接的个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcPeerLimitToSameRegion(const uint64_t& _vpcPeerLimitToSameRegion);

                    /**
                     * 判断参数 VpcPeerLimitToSameRegion 是否已赋值
                     * @return VpcPeerLimitToSameRegion 是否已赋值
                     * 
                     */
                    bool VpcPeerLimitToSameRegionHasBeenSet() const;

                    /**
                     * 获取整型私有网络ID
                     * @return IntVpcId 整型私有网络ID
                     * 
                     */
                    uint64_t GetIntVpcId() const;

                    /**
                     * 设置整型私有网络ID
                     * @param _intVpcId 整型私有网络ID
                     * 
                     */
                    void SetIntVpcId(const uint64_t& _intVpcId);

                    /**
                     * 判断参数 IntVpcId 是否已赋值
                     * @return IntVpcId 是否已赋值
                     * 
                     */
                    bool IntVpcIdHasBeenSet() const;

                private:

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 私有网络的CIDR
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 子网个数
                     */
                    uint64_t m_subnetNum;
                    bool m_subnetNumHasBeenSet;

                    /**
                     * NAT个数
                     */
                    uint64_t m_natNum;
                    bool m_natNumHasBeenSet;

                    /**
                     * VPC状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 是否开启监控
                     */
                    bool m_monitorFlag;
                    bool m_monitorFlagHasBeenSet;

                    /**
                     * 物理机个数
                     */
                    uint64_t m_cpmNum;
                    bool m_cpmNumHasBeenSet;

                    /**
                     * 可用IP个数
                     */
                    uint64_t m_leaveIpNum;
                    bool m_leaveIpNumHasBeenSet;

                    /**
                     * 负载均衡个数
                     */
                    uint64_t m_lbNum;
                    bool m_lbNumHasBeenSet;

                    /**
                     * 流量镜像网关个数
                     */
                    uint64_t m_trafficMirrorNum;
                    bool m_trafficMirrorNumHasBeenSet;

                    /**
                     * 弹性IP个数
                     */
                    uint64_t m_eipNum;
                    bool m_eipNumHasBeenSet;

                    /**
                     * 专线网关个数
                     */
                    uint64_t m_plgwNum;
                    bool m_plgwNumHasBeenSet;

                    /**
                     * 专线通道个数
                     */
                    uint64_t m_plvpNum;
                    bool m_plvpNumHasBeenSet;

                    /**
                     * ssl vpn网关个数
                     */
                    uint64_t m_sslVpnGwNum;
                    bool m_sslVpnGwNumHasBeenSet;

                    /**
                     * 对等链接个数
                     */
                    uint64_t m_vpcPeerNum;
                    bool m_vpcPeerNumHasBeenSet;

                    /**
                     * ipsec vpn网关个数
                     */
                    uint64_t m_ipsecVpnGwNum;
                    bool m_ipsecVpnGwNumHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否老专区VPC
                     */
                    bool m_isOld;
                    bool m_isOldHasBeenSet;

                    /**
                     * 云联网服务个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ccnServiceNum;
                    bool m_ccnServiceNumHasBeenSet;

                    /**
                     * VPC允许创建的对等连接个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_vpcPeerLimitToAllRegion;
                    bool m_vpcPeerLimitToAllRegionHasBeenSet;

                    /**
                     * VPC允许创建的同地域的对等连接的个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_vpcPeerLimitToSameRegion;
                    bool m_vpcPeerLimitToSameRegionHasBeenSet;

                    /**
                     * 整型私有网络ID
                     */
                    uint64_t m_intVpcId;
                    bool m_intVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCRESOURCE_H_
