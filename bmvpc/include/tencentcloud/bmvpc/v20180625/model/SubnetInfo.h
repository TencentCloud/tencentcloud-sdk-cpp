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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_SUBNETINFO_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_SUBNETINFO_H_

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
                * 黑石子网的信息
                */
                class SubnetInfo : public AbstractModel
                {
                public:
                    SubnetInfo();
                    ~SubnetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络的唯一ID。
                     * @return VpcId 私有网络的唯一ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络的唯一ID。
                     * @param _vpcId 私有网络的唯一ID。
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
                     * 获取VPC的名称。
                     * @return VpcName VPC的名称。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC的名称。
                     * @param _vpcName VPC的名称。
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
                     * 获取VPC的CIDR。
                     * @return VpcCidrBlock VPC的CIDR。
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置VPC的CIDR。
                     * @param _vpcCidrBlock VPC的CIDR。
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取私有网络的唯一ID
                     * @return SubnetId 私有网络的唯一ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络的唯一ID
                     * @param _subnetId 私有网络的唯一ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取子网名称。
                     * @return SubnetName 子网名称。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称。
                     * @param _subnetName 子网名称。
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取子网CIDR。
                     * @return CidrBlock 子网CIDR。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置子网CIDR。
                     * @param _cidrBlock 子网CIDR。
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
                     * 获取子网类型。0: 黑石物理机子网; 6: ccs子网; 7 Docker子网; 8: 虚拟机子网
                     * @return Type 子网类型。0: 黑石物理机子网; 6: ccs子网; 7 Docker子网; 8: 虚拟机子网
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置子网类型。0: 黑石物理机子网; 6: ccs子网; 7 Docker子网; 8: 虚拟机子网
                     * @param _type 子网类型。0: 黑石物理机子网; 6: ccs子网; 7 Docker子网; 8: 虚拟机子网
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取子网可用区ID。
                     * @return ZoneId 子网可用区ID。
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置子网可用区ID。
                     * @param _zoneId 子网可用区ID。
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取子网物理机的个数
                     * @return CpmNum 子网物理机的个数
                     * 
                     */
                    uint64_t GetCpmNum() const;

                    /**
                     * 设置子网物理机的个数
                     * @param _cpmNum 子网物理机的个数
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
                     * 获取子网的VlanId。
                     * @return VlanId 子网的VlanId。
                     * 
                     */
                    uint64_t GetVlanId() const;

                    /**
                     * 设置子网的VlanId。
                     * @param _vlanId 子网的VlanId。
                     * 
                     */
                    void SetVlanId(const uint64_t& _vlanId);

                    /**
                     * 判断参数 VlanId 是否已赋值
                     * @return VlanId 是否已赋值
                     * 
                     */
                    bool VlanIdHasBeenSet() const;

                    /**
                     * 获取是否开启分布式网关 ，关闭为0，开启为1。
                     * @return DistributedFlag 是否开启分布式网关 ，关闭为0，开启为1。
                     * 
                     */
                    uint64_t GetDistributedFlag() const;

                    /**
                     * 设置是否开启分布式网关 ，关闭为0，开启为1。
                     * @param _distributedFlag 是否开启分布式网关 ，关闭为0，开启为1。
                     * 
                     */
                    void SetDistributedFlag(const uint64_t& _distributedFlag);

                    /**
                     * 判断参数 DistributedFlag 是否已赋值
                     * @return DistributedFlag 是否已赋值
                     * 
                     */
                    bool DistributedFlagHasBeenSet() const;

                    /**
                     * 获取是否开启dhcp relay ，关闭为0，开启为1。默认为0。
                     * @return DhcpEnable 是否开启dhcp relay ，关闭为0，开启为1。默认为0。
                     * 
                     */
                    uint64_t GetDhcpEnable() const;

                    /**
                     * 设置是否开启dhcp relay ，关闭为0，开启为1。默认为0。
                     * @param _dhcpEnable 是否开启dhcp relay ，关闭为0，开启为1。默认为0。
                     * 
                     */
                    void SetDhcpEnable(const uint64_t& _dhcpEnable);

                    /**
                     * 判断参数 DhcpEnable 是否已赋值
                     * @return DhcpEnable 是否已赋值
                     * 
                     */
                    bool DhcpEnableHasBeenSet() const;

                    /**
                     * 获取DHCP SERVER 的IP地址数组。IP地址为相同VPC的子网内分配的IP。
                     * @return DhcpServerIp DHCP SERVER 的IP地址数组。IP地址为相同VPC的子网内分配的IP。
                     * 
                     */
                    std::vector<std::string> GetDhcpServerIp() const;

                    /**
                     * 设置DHCP SERVER 的IP地址数组。IP地址为相同VPC的子网内分配的IP。
                     * @param _dhcpServerIp DHCP SERVER 的IP地址数组。IP地址为相同VPC的子网内分配的IP。
                     * 
                     */
                    void SetDhcpServerIp(const std::vector<std::string>& _dhcpServerIp);

                    /**
                     * 判断参数 DhcpServerIp 是否已赋值
                     * @return DhcpServerIp 是否已赋值
                     * 
                     */
                    bool DhcpServerIpHasBeenSet() const;

                    /**
                     * 获取预留的IP个数。从该子网的最大可分配IP倒序分配N个IP 用于DHCP 动态分配使用的地址段。
                     * @return IpReserve 预留的IP个数。从该子网的最大可分配IP倒序分配N个IP 用于DHCP 动态分配使用的地址段。
                     * 
                     */
                    uint64_t GetIpReserve() const;

                    /**
                     * 设置预留的IP个数。从该子网的最大可分配IP倒序分配N个IP 用于DHCP 动态分配使用的地址段。
                     * @param _ipReserve 预留的IP个数。从该子网的最大可分配IP倒序分配N个IP 用于DHCP 动态分配使用的地址段。
                     * 
                     */
                    void SetIpReserve(const uint64_t& _ipReserve);

                    /**
                     * 判断参数 IpReserve 是否已赋值
                     * @return IpReserve 是否已赋值
                     * 
                     */
                    bool IpReserveHasBeenSet() const;

                    /**
                     * 获取子网中可用的IP个数
                     * @return AvailableIpNum 子网中可用的IP个数
                     * 
                     */
                    uint64_t GetAvailableIpNum() const;

                    /**
                     * 设置子网中可用的IP个数
                     * @param _availableIpNum 子网中可用的IP个数
                     * 
                     */
                    void SetAvailableIpNum(const uint64_t& _availableIpNum);

                    /**
                     * 判断参数 AvailableIpNum 是否已赋值
                     * @return AvailableIpNum 是否已赋值
                     * 
                     */
                    bool AvailableIpNumHasBeenSet() const;

                    /**
                     * 获取子网中总共的IP个数
                     * @return TotalIpNum 子网中总共的IP个数
                     * 
                     */
                    uint64_t GetTotalIpNum() const;

                    /**
                     * 设置子网中总共的IP个数
                     * @param _totalIpNum 子网中总共的IP个数
                     * 
                     */
                    void SetTotalIpNum(const uint64_t& _totalIpNum);

                    /**
                     * 判断参数 TotalIpNum 是否已赋值
                     * @return TotalIpNum 是否已赋值
                     * 
                     */
                    bool TotalIpNumHasBeenSet() const;

                    /**
                     * 获取子网创建时间
                     * @return SubnetCreateTime 子网创建时间
                     * 
                     */
                    std::string GetSubnetCreateTime() const;

                    /**
                     * 设置子网创建时间
                     * @param _subnetCreateTime 子网创建时间
                     * 
                     */
                    void SetSubnetCreateTime(const std::string& _subnetCreateTime);

                    /**
                     * 判断参数 SubnetCreateTime 是否已赋值
                     * @return SubnetCreateTime 是否已赋值
                     * 
                     */
                    bool SubnetCreateTimeHasBeenSet() const;

                    /**
                     * 获取25G子网标识
                     * @return IsSmartNic 25G子网标识
                     * 
                     */
                    uint64_t GetIsSmartNic() const;

                    /**
                     * 设置25G子网标识
                     * @param _isSmartNic 25G子网标识
                     * 
                     */
                    void SetIsSmartNic(const uint64_t& _isSmartNic);

                    /**
                     * 判断参数 IsSmartNic 是否已赋值
                     * @return IsSmartNic 是否已赋值
                     * 
                     */
                    bool IsSmartNicHasBeenSet() const;

                    /**
                     * 获取子网可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 子网可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置子网可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 子网可用区。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取VPC所在可用区ID
                     * @return VpcZoneId VPC所在可用区ID
                     * 
                     */
                    uint64_t GetVpcZoneId() const;

                    /**
                     * 设置VPC所在可用区ID
                     * @param _vpcZoneId VPC所在可用区ID
                     * 
                     */
                    void SetVpcZoneId(const uint64_t& _vpcZoneId);

                    /**
                     * 判断参数 VpcZoneId 是否已赋值
                     * @return VpcZoneId 是否已赋值
                     * 
                     */
                    bool VpcZoneIdHasBeenSet() const;

                    /**
                     * 获取VPC所在可用区
                     * @return VpcZone VPC所在可用区
                     * 
                     */
                    std::string GetVpcZone() const;

                    /**
                     * 设置VPC所在可用区
                     * @param _vpcZone VPC所在可用区
                     * 
                     */
                    void SetVpcZone(const std::string& _vpcZone);

                    /**
                     * 判断参数 VpcZone 是否已赋值
                     * @return VpcZone 是否已赋值
                     * 
                     */
                    bool VpcZoneHasBeenSet() const;

                    /**
                     * 获取是否开启广播，关闭为0，开启为1。
                     * @return BroadcastFlag 是否开启广播，关闭为0，开启为1。
                     * 
                     */
                    uint64_t GetBroadcastFlag() const;

                    /**
                     * 设置是否开启广播，关闭为0，开启为1。
                     * @param _broadcastFlag 是否开启广播，关闭为0，开启为1。
                     * 
                     */
                    void SetBroadcastFlag(const uint64_t& _broadcastFlag);

                    /**
                     * 判断参数 BroadcastFlag 是否已赋值
                     * @return BroadcastFlag 是否已赋值
                     * 
                     */
                    bool BroadcastFlagHasBeenSet() const;

                private:

                    /**
                     * 私有网络的唯一ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC的名称。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC的CIDR。
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 私有网络的唯一ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名称。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 子网CIDR。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 子网类型。0: 黑石物理机子网; 6: ccs子网; 7 Docker子网; 8: 虚拟机子网
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 子网可用区ID。
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子网物理机的个数
                     */
                    uint64_t m_cpmNum;
                    bool m_cpmNumHasBeenSet;

                    /**
                     * 子网的VlanId。
                     */
                    uint64_t m_vlanId;
                    bool m_vlanIdHasBeenSet;

                    /**
                     * 是否开启分布式网关 ，关闭为0，开启为1。
                     */
                    uint64_t m_distributedFlag;
                    bool m_distributedFlagHasBeenSet;

                    /**
                     * 是否开启dhcp relay ，关闭为0，开启为1。默认为0。
                     */
                    uint64_t m_dhcpEnable;
                    bool m_dhcpEnableHasBeenSet;

                    /**
                     * DHCP SERVER 的IP地址数组。IP地址为相同VPC的子网内分配的IP。
                     */
                    std::vector<std::string> m_dhcpServerIp;
                    bool m_dhcpServerIpHasBeenSet;

                    /**
                     * 预留的IP个数。从该子网的最大可分配IP倒序分配N个IP 用于DHCP 动态分配使用的地址段。
                     */
                    uint64_t m_ipReserve;
                    bool m_ipReserveHasBeenSet;

                    /**
                     * 子网中可用的IP个数
                     */
                    uint64_t m_availableIpNum;
                    bool m_availableIpNumHasBeenSet;

                    /**
                     * 子网中总共的IP个数
                     */
                    uint64_t m_totalIpNum;
                    bool m_totalIpNumHasBeenSet;

                    /**
                     * 子网创建时间
                     */
                    std::string m_subnetCreateTime;
                    bool m_subnetCreateTimeHasBeenSet;

                    /**
                     * 25G子网标识
                     */
                    uint64_t m_isSmartNic;
                    bool m_isSmartNicHasBeenSet;

                    /**
                     * 子网可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC所在可用区ID
                     */
                    uint64_t m_vpcZoneId;
                    bool m_vpcZoneIdHasBeenSet;

                    /**
                     * VPC所在可用区
                     */
                    std::string m_vpcZone;
                    bool m_vpcZoneHasBeenSet;

                    /**
                     * 是否开启广播，关闭为0，开启为1。
                     */
                    uint64_t m_broadcastFlag;
                    bool m_broadcastFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_SUBNETINFO_H_
