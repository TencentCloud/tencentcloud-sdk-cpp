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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_SUBNETCREATEINPUTINFO_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_SUBNETCREATEINPUTINFO_H_

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
                * 创建子网时的子网类型
                */
                class SubnetCreateInputInfo : public AbstractModel
                {
                public:
                    SubnetCreateInputInfo();
                    ~SubnetCreateInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子网名称，可任意命名，但不得超过60个字符
                     * @return SubnetName 子网名称，可任意命名，但不得超过60个字符
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称，可任意命名，但不得超过60个字符
                     * @param _subnetName 子网名称，可任意命名，但不得超过60个字符
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
                     * 获取子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠
                     * @return CidrBlock 子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠
                     * @param _cidrBlock 子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠
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
                     * 获取是否开启子网分布式网关，默认传1，传0为关闭子网分布式网关。关闭分布式网关子网用于云服务器化子网，此子网中只能有一台物理机，同时此物理机及其上子机只能在此子网中
                     * @return DistributedFlag 是否开启子网分布式网关，默认传1，传0为关闭子网分布式网关。关闭分布式网关子网用于云服务器化子网，此子网中只能有一台物理机，同时此物理机及其上子机只能在此子网中
                     * 
                     */
                    uint64_t GetDistributedFlag() const;

                    /**
                     * 设置是否开启子网分布式网关，默认传1，传0为关闭子网分布式网关。关闭分布式网关子网用于云服务器化子网，此子网中只能有一台物理机，同时此物理机及其上子机只能在此子网中
                     * @param _distributedFlag 是否开启子网分布式网关，默认传1，传0为关闭子网分布式网关。关闭分布式网关子网用于云服务器化子网，此子网中只能有一台物理机，同时此物理机及其上子机只能在此子网中
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
                     * 获取是否开启dhcp relay ，关闭为0，开启为1。默认为0
                     * @return DhcpEnable 是否开启dhcp relay ，关闭为0，开启为1。默认为0
                     * 
                     */
                    uint64_t GetDhcpEnable() const;

                    /**
                     * 设置是否开启dhcp relay ，关闭为0，开启为1。默认为0
                     * @param _dhcpEnable 是否开启dhcp relay ，关闭为0，开启为1。默认为0
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
                     * 获取DHCP SERVER 的IP地址数组。IP地址为相同VPC的子网内分配的IP
                     * @return DhcpServerIp DHCP SERVER 的IP地址数组。IP地址为相同VPC的子网内分配的IP
                     * 
                     */
                    std::vector<std::string> GetDhcpServerIp() const;

                    /**
                     * 设置DHCP SERVER 的IP地址数组。IP地址为相同VPC的子网内分配的IP
                     * @param _dhcpServerIp DHCP SERVER 的IP地址数组。IP地址为相同VPC的子网内分配的IP
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
                     * 获取预留的IP个数。从该子网的最大可分配IP倒序分配N个IP 用于DHCP 动态分配使用的地址段
                     * @return IpReserve 预留的IP个数。从该子网的最大可分配IP倒序分配N个IP 用于DHCP 动态分配使用的地址段
                     * 
                     */
                    uint64_t GetIpReserve() const;

                    /**
                     * 设置预留的IP个数。从该子网的最大可分配IP倒序分配N个IP 用于DHCP 动态分配使用的地址段
                     * @param _ipReserve 预留的IP个数。从该子网的最大可分配IP倒序分配N个IP 用于DHCP 动态分配使用的地址段
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
                     * 获取子网绑定的vlanId。VlanId取值范围为2000-2999。创建物理机子网，VlanId默认为5; 创建docker子网或者虚拟子网，VlanId默认会分配2000--2999未使用的数值。
                     * @return VlanId 子网绑定的vlanId。VlanId取值范围为2000-2999。创建物理机子网，VlanId默认为5; 创建docker子网或者虚拟子网，VlanId默认会分配2000--2999未使用的数值。
                     * 
                     */
                    uint64_t GetVlanId() const;

                    /**
                     * 设置子网绑定的vlanId。VlanId取值范围为2000-2999。创建物理机子网，VlanId默认为5; 创建docker子网或者虚拟子网，VlanId默认会分配2000--2999未使用的数值。
                     * @param _vlanId 子网绑定的vlanId。VlanId取值范围为2000-2999。创建物理机子网，VlanId默认为5; 创建docker子网或者虚拟子网，VlanId默认会分配2000--2999未使用的数值。
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
                     * 获取黑石子网的可用区
                     * @return Zone 黑石子网的可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置黑石子网的可用区
                     * @param _zone 黑石子网的可用区
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
                     * 获取是否25G子网，1为是，0为否。
                     * @return IsSmartNic 是否25G子网，1为是，0为否。
                     * 
                     */
                    uint64_t GetIsSmartNic() const;

                    /**
                     * 设置是否25G子网，1为是，0为否。
                     * @param _isSmartNic 是否25G子网，1为是，0为否。
                     * 
                     */
                    void SetIsSmartNic(const uint64_t& _isSmartNic);

                    /**
                     * 判断参数 IsSmartNic 是否已赋值
                     * @return IsSmartNic 是否已赋值
                     * 
                     */
                    bool IsSmartNicHasBeenSet() const;

                private:

                    /**
                     * 子网名称，可任意命名，但不得超过60个字符
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 是否开启子网分布式网关，默认传1，传0为关闭子网分布式网关。关闭分布式网关子网用于云服务器化子网，此子网中只能有一台物理机，同时此物理机及其上子机只能在此子网中
                     */
                    uint64_t m_distributedFlag;
                    bool m_distributedFlagHasBeenSet;

                    /**
                     * 是否开启dhcp relay ，关闭为0，开启为1。默认为0
                     */
                    uint64_t m_dhcpEnable;
                    bool m_dhcpEnableHasBeenSet;

                    /**
                     * DHCP SERVER 的IP地址数组。IP地址为相同VPC的子网内分配的IP
                     */
                    std::vector<std::string> m_dhcpServerIp;
                    bool m_dhcpServerIpHasBeenSet;

                    /**
                     * 预留的IP个数。从该子网的最大可分配IP倒序分配N个IP 用于DHCP 动态分配使用的地址段
                     */
                    uint64_t m_ipReserve;
                    bool m_ipReserveHasBeenSet;

                    /**
                     * 子网绑定的vlanId。VlanId取值范围为2000-2999。创建物理机子网，VlanId默认为5; 创建docker子网或者虚拟子网，VlanId默认会分配2000--2999未使用的数值。
                     */
                    uint64_t m_vlanId;
                    bool m_vlanIdHasBeenSet;

                    /**
                     * 黑石子网的可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 是否25G子网，1为是，0为否。
                     */
                    uint64_t m_isSmartNic;
                    bool m_isSmartNicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_SUBNETCREATEINPUTINFO_H_
