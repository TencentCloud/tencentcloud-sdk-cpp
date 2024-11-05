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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/LoadBalancerInternetAccessible.h>
#include <tencentcloud/ecm/v20190719/model/TagInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateLoadBalancer请求参数结构体
                */
                class CreateLoadBalancerRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancerRequest();
                    ~CreateLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM区域，形如ap-xian-ecm。
                     * @return EcmRegion ECM区域，形如ap-xian-ecm。
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM区域，形如ap-xian-ecm。
                     * @param _ecmRegion ECM区域，形如ap-xian-ecm。
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络类型。目前只支持传入OPEN，表示公网属性。
                     * @return LoadBalancerType 负载均衡实例的网络类型。目前只支持传入OPEN，表示公网属性。
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡实例的网络类型。目前只支持传入OPEN，表示公网属性。
                     * @param _loadBalancerType 负载均衡实例的网络类型。目前只支持传入OPEN，表示公网属性。
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取CMCC | CTCC | CUCC，分别对应 移动 | 电信 | 联通。
                     * @return VipIsp CMCC | CTCC | CUCC，分别对应 移动 | 电信 | 联通。
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置CMCC | CTCC | CUCC，分别对应 移动 | 电信 | 联通。
                     * @param _vipIsp CMCC | CTCC | CUCC，分别对应 移动 | 电信 | 联通。
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的名称，只在创建一个实例的时候才会生效。规则：1-50 个英文、汉字、数字、连接线“-”或下划线“_”。
注意：如果名称与系统中已有负载均衡实例的名称相同，则系统将会自动生成此次创建的负载均衡实例的名称。
                     * @return LoadBalancerName 负载均衡实例的名称，只在创建一个实例的时候才会生效。规则：1-50 个英文、汉字、数字、连接线“-”或下划线“_”。
注意：如果名称与系统中已有负载均衡实例的名称相同，则系统将会自动生成此次创建的负载均衡实例的名称。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例的名称，只在创建一个实例的时候才会生效。规则：1-50 个英文、汉字、数字、连接线“-”或下划线“_”。
注意：如果名称与系统中已有负载均衡实例的名称相同，则系统将会自动生成此次创建的负载均衡实例的名称。
                     * @param _loadBalancerName 负载均衡实例的名称，只在创建一个实例的时候才会生效。规则：1-50 个英文、汉字、数字、连接线“-”或下划线“_”。
注意：如果名称与系统中已有负载均衡实例的名称相同，则系统将会自动生成此次创建的负载均衡实例的名称。
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡后端目标设备所属的网络 ID，如vpc-12345678。
                     * @return VpcId 负载均衡后端目标设备所属的网络 ID，如vpc-12345678。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置负载均衡后端目标设备所属的网络 ID，如vpc-12345678。
                     * @param _vpcId 负载均衡后端目标设备所属的网络 ID，如vpc-12345678。
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
                     * 获取创建负载均衡的个数，默认值 1。
                     * @return Number 创建负载均衡的个数，默认值 1。
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置创建负载均衡的个数，默认值 1。
                     * @param _number 创建负载均衡的个数，默认值 1。
                     * 
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取负载均衡的带宽限制等信息。
                     * @return InternetAccessible 负载均衡的带宽限制等信息。
                     * 
                     */
                    LoadBalancerInternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置负载均衡的带宽限制等信息。
                     * @param _internetAccessible 负载均衡的带宽限制等信息。
                     * 
                     */
                    void SetInternetAccessible(const LoadBalancerInternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tags 标签。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签。
                     * @param _tags 标签。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取安全组。
                     * @return SecurityGroups 安全组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置安全组。
                     * @param _securityGroups 安全组。
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取仅适用于公网负载均衡。IP版本，可取值：IPV4、IPv6FullChain，默认值 IPV4。说明：取值为IPv6FullChain，表示为IPv6版本。
                     * @return AddressIPVersion 仅适用于公网负载均衡。IP版本，可取值：IPV4、IPv6FullChain，默认值 IPV4。说明：取值为IPv6FullChain，表示为IPv6版本。
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置仅适用于公网负载均衡。IP版本，可取值：IPV4、IPv6FullChain，默认值 IPV4。说明：取值为IPv6FullChain，表示为IPv6版本。
                     * @param _addressIPVersion 仅适用于公网负载均衡。IP版本，可取值：IPV4、IPv6FullChain，默认值 IPV4。说明：取值为IPv6FullChain，表示为IPv6版本。
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取在购买IPV6负载均衡实例的情况下，必须指定子网 ID, 此参数必填；IPv4实例不支持该参数。
                     * @return SubnetId 在购买IPV6负载均衡实例的情况下，必须指定子网 ID, 此参数必填；IPv4实例不支持该参数。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置在购买IPV6负载均衡实例的情况下，必须指定子网 ID, 此参数必填；IPv4实例不支持该参数。
                     * @param _subnetId 在购买IPV6负载均衡实例的情况下，必须指定子网 ID, 此参数必填；IPv4实例不支持该参数。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * ECM区域，形如ap-xian-ecm。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 负载均衡实例的网络类型。目前只支持传入OPEN，表示公网属性。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * CMCC | CTCC | CUCC，分别对应 移动 | 电信 | 联通。
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * 负载均衡实例的名称，只在创建一个实例的时候才会生效。规则：1-50 个英文、汉字、数字、连接线“-”或下划线“_”。
注意：如果名称与系统中已有负载均衡实例的名称相同，则系统将会自动生成此次创建的负载均衡实例的名称。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡后端目标设备所属的网络 ID，如vpc-12345678。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 创建负载均衡的个数，默认值 1。
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 负载均衡的带宽限制等信息。
                     */
                    LoadBalancerInternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 安全组。
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * 仅适用于公网负载均衡。IP版本，可取值：IPV4、IPv6FullChain，默认值 IPV4。说明：取值为IPv6FullChain，表示为IPv6版本。
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * 在购买IPV6负载均衡实例的情况下，必须指定子网 ID, 此参数必填；IPv4实例不支持该参数。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATELOADBALANCERREQUEST_H_
