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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATENATGATEWAYREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATENATGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/IpInfo.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * CreateNatGateway请求参数结构体
                */
                class CreateNatGatewayRequest : public AbstractModel
                {
                public:
                    CreateNatGatewayRequest();
                    ~CreateNatGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转发模式，其中0表示IP方式，1表示网段方式；通过cidr方式可支持更多的IP接入到NAT网关
                     * @return ForwardMode 转发模式，其中0表示IP方式，1表示网段方式；通过cidr方式可支持更多的IP接入到NAT网关
                     * 
                     */
                    std::string GetForwardMode() const;

                    /**
                     * 设置转发模式，其中0表示IP方式，1表示网段方式；通过cidr方式可支持更多的IP接入到NAT网关
                     * @param _forwardMode 转发模式，其中0表示IP方式，1表示网段方式；通过cidr方式可支持更多的IP接入到NAT网关
                     * 
                     */
                    void SetForwardMode(const std::string& _forwardMode);

                    /**
                     * 判断参数 ForwardMode 是否已赋值
                     * @return ForwardMode 是否已赋值
                     * 
                     */
                    bool ForwardModeHasBeenSet() const;

                    /**
                     * 获取私有网络ID，例如：vpc-kd7d06of
                     * @return VpcId 私有网络ID，例如：vpc-kd7d06of
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，例如：vpc-kd7d06of
                     * @param _vpcId 私有网络ID，例如：vpc-kd7d06of
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
                     * 获取NAT名称
                     * @return NatName NAT名称
                     * 
                     */
                    std::string GetNatName() const;

                    /**
                     * 设置NAT名称
                     * @param _natName NAT名称
                     * 
                     */
                    void SetNatName(const std::string& _natName);

                    /**
                     * 判断参数 NatName 是否已赋值
                     * @return NatName 是否已赋值
                     * 
                     */
                    bool NatNameHasBeenSet() const;

                    /**
                     * 获取并发连接数规格；取值为1000000、3000000、10000000，分别对应小型、中型、大型NAT网关
                     * @return MaxConcurrent 并发连接数规格；取值为1000000、3000000、10000000，分别对应小型、中型、大型NAT网关
                     * 
                     */
                    uint64_t GetMaxConcurrent() const;

                    /**
                     * 设置并发连接数规格；取值为1000000、3000000、10000000，分别对应小型、中型、大型NAT网关
                     * @param _maxConcurrent 并发连接数规格；取值为1000000、3000000、10000000，分别对应小型、中型、大型NAT网关
                     * 
                     */
                    void SetMaxConcurrent(const uint64_t& _maxConcurrent);

                    /**
                     * 判断参数 MaxConcurrent 是否已赋值
                     * @return MaxConcurrent 是否已赋值
                     * 
                     */
                    bool MaxConcurrentHasBeenSet() const;

                    /**
                     * 获取子网ID列表，子网下全部IP将加入NAT，不区分网关转发方式
                     * @return SubnetIds 子网ID列表，子网下全部IP将加入NAT，不区分网关转发方式
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网ID列表，子网下全部IP将加入NAT，不区分网关转发方式
                     * @param _subnetIds 子网ID列表，子网下全部IP将加入NAT，不区分网关转发方式
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取部分IP信息，子网下只有该部分IP将加入NAT，仅当网关转发模式为IP方式有效；IpInfoSet和SubnetIds中的子网ID不能同时存在
                     * @return IpInfoSet 部分IP信息，子网下只有该部分IP将加入NAT，仅当网关转发模式为IP方式有效；IpInfoSet和SubnetIds中的子网ID不能同时存在
                     * 
                     */
                    std::vector<IpInfo> GetIpInfoSet() const;

                    /**
                     * 设置部分IP信息，子网下只有该部分IP将加入NAT，仅当网关转发模式为IP方式有效；IpInfoSet和SubnetIds中的子网ID不能同时存在
                     * @param _ipInfoSet 部分IP信息，子网下只有该部分IP将加入NAT，仅当网关转发模式为IP方式有效；IpInfoSet和SubnetIds中的子网ID不能同时存在
                     * 
                     */
                    void SetIpInfoSet(const std::vector<IpInfo>& _ipInfoSet);

                    /**
                     * 判断参数 IpInfoSet 是否已赋值
                     * @return IpInfoSet 是否已赋值
                     * 
                     */
                    bool IpInfoSetHasBeenSet() const;

                    /**
                     * 获取已分配的EIP列表, AssignedEips和AutoAllocEipNum至少输入一个
                     * @return AssignedEips 已分配的EIP列表, AssignedEips和AutoAllocEipNum至少输入一个
                     * 
                     */
                    std::vector<std::string> GetAssignedEips() const;

                    /**
                     * 设置已分配的EIP列表, AssignedEips和AutoAllocEipNum至少输入一个
                     * @param _assignedEips 已分配的EIP列表, AssignedEips和AutoAllocEipNum至少输入一个
                     * 
                     */
                    void SetAssignedEips(const std::vector<std::string>& _assignedEips);

                    /**
                     * 判断参数 AssignedEips 是否已赋值
                     * @return AssignedEips 是否已赋值
                     * 
                     */
                    bool AssignedEipsHasBeenSet() const;

                    /**
                     * 获取新建EIP数目，系统将会按您的要求生产该数目个数EIP, AssignedEips和AutoAllocEipNum至少输入一个
                     * @return AutoAllocEipNum 新建EIP数目，系统将会按您的要求生产该数目个数EIP, AssignedEips和AutoAllocEipNum至少输入一个
                     * 
                     */
                    uint64_t GetAutoAllocEipNum() const;

                    /**
                     * 设置新建EIP数目，系统将会按您的要求生产该数目个数EIP, AssignedEips和AutoAllocEipNum至少输入一个
                     * @param _autoAllocEipNum 新建EIP数目，系统将会按您的要求生产该数目个数EIP, AssignedEips和AutoAllocEipNum至少输入一个
                     * 
                     */
                    void SetAutoAllocEipNum(const uint64_t& _autoAllocEipNum);

                    /**
                     * 判断参数 AutoAllocEipNum 是否已赋值
                     * @return AutoAllocEipNum 是否已赋值
                     * 
                     */
                    bool AutoAllocEipNumHasBeenSet() const;

                    /**
                     * 获取独占标识，取值为0和1，默认值为0；0和1分别表示创建共享型NAT网关和独占NAT型网关；由于同一个VPC网络内，指向NAT集群的默认路由只有一条，因此VPC内只能创建一种类型NAT网关；创建独占型NAT网关时，需联系对应架构师进行独占NAT集群搭建，否则无法创建独占型NAT网关。
                     * @return Exclusive 独占标识，取值为0和1，默认值为0；0和1分别表示创建共享型NAT网关和独占NAT型网关；由于同一个VPC网络内，指向NAT集群的默认路由只有一条，因此VPC内只能创建一种类型NAT网关；创建独占型NAT网关时，需联系对应架构师进行独占NAT集群搭建，否则无法创建独占型NAT网关。
                     * 
                     */
                    uint64_t GetExclusive() const;

                    /**
                     * 设置独占标识，取值为0和1，默认值为0；0和1分别表示创建共享型NAT网关和独占NAT型网关；由于同一个VPC网络内，指向NAT集群的默认路由只有一条，因此VPC内只能创建一种类型NAT网关；创建独占型NAT网关时，需联系对应架构师进行独占NAT集群搭建，否则无法创建独占型NAT网关。
                     * @param _exclusive 独占标识，取值为0和1，默认值为0；0和1分别表示创建共享型NAT网关和独占NAT型网关；由于同一个VPC网络内，指向NAT集群的默认路由只有一条，因此VPC内只能创建一种类型NAT网关；创建独占型NAT网关时，需联系对应架构师进行独占NAT集群搭建，否则无法创建独占型NAT网关。
                     * 
                     */
                    void SetExclusive(const uint64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                private:

                    /**
                     * 转发模式，其中0表示IP方式，1表示网段方式；通过cidr方式可支持更多的IP接入到NAT网关
                     */
                    std::string m_forwardMode;
                    bool m_forwardModeHasBeenSet;

                    /**
                     * 私有网络ID，例如：vpc-kd7d06of
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * NAT名称
                     */
                    std::string m_natName;
                    bool m_natNameHasBeenSet;

                    /**
                     * 并发连接数规格；取值为1000000、3000000、10000000，分别对应小型、中型、大型NAT网关
                     */
                    uint64_t m_maxConcurrent;
                    bool m_maxConcurrentHasBeenSet;

                    /**
                     * 子网ID列表，子网下全部IP将加入NAT，不区分网关转发方式
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 部分IP信息，子网下只有该部分IP将加入NAT，仅当网关转发模式为IP方式有效；IpInfoSet和SubnetIds中的子网ID不能同时存在
                     */
                    std::vector<IpInfo> m_ipInfoSet;
                    bool m_ipInfoSetHasBeenSet;

                    /**
                     * 已分配的EIP列表, AssignedEips和AutoAllocEipNum至少输入一个
                     */
                    std::vector<std::string> m_assignedEips;
                    bool m_assignedEipsHasBeenSet;

                    /**
                     * 新建EIP数目，系统将会按您的要求生产该数目个数EIP, AssignedEips和AutoAllocEipNum至少输入一个
                     */
                    uint64_t m_autoAllocEipNum;
                    bool m_autoAllocEipNumHasBeenSet;

                    /**
                     * 独占标识，取值为0和1，默认值为0；0和1分别表示创建共享型NAT网关和独占NAT型网关；由于同一个VPC网络内，指向NAT集群的默认路由只有一条，因此VPC内只能创建一种类型NAT网关；创建独占型NAT网关时，需联系对应架构师进行独占NAT集群搭建，否则无法创建独占型NAT网关。
                     */
                    uint64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATENATGATEWAYREQUEST_H_
