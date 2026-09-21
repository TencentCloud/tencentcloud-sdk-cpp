/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateSubnet请求参数结构体
                */
                class CreateSubnetRequest : public AbstractModel
                {
                public:
                    CreateSubnetRequest();
                    ~CreateSubnetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。</p>
                     * @return VpcId <p>待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。</p>
                     * @param _vpcId <p>待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。</p>
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
                     * 获取<p>子网名称，最大长度不能超过60个字节。</p>
                     * @return SubnetName <p>子网名称，最大长度不能超过60个字节。</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>子网名称，最大长度不能超过60个字节。</p>
                     * @param _subnetName <p>子网名称，最大长度不能超过60个字节。</p>
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
                     * 获取<p>子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。</p>
                     * @return Zone <p>子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。</p>
                     * @param _zone <p>子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。</p>
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
                     * 获取<p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * @return StackType <p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * 
                     */
                    std::string GetStackType() const;

                    /**
                     * 设置<p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * @param _stackType <p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * 
                     */
                    void SetStackType(const std::string& _stackType);

                    /**
                     * 判断参数 StackType 是否已赋值
                     * @return StackType 是否已赋值
                     * 
                     */
                    bool StackTypeHasBeenSet() const;

                    /**
                     * 获取<p>子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠。</p>
                     * @return CidrBlock <p>子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠。</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠。</p>
                     * @param _cidrBlock <p>子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠。</p>
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
                     * 获取<p>IPv6网段</p>
                     * @return Ipv6CidrBlock <p>IPv6网段</p>
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置<p>IPv6网段</p>
                     * @param _ipv6CidrBlock <p>IPv6网段</p>
                     * 
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]</p>
                     * @return Tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]</p>
                     * @param _tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>CDC实例ID。</p>
                     * @return CdcId <p>CDC实例ID。</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>CDC实例ID。</p>
                     * @param _cdcId <p>CDC实例ID。</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * <p>待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网名称，最大长度不能超过60个字节。</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     */
                    std::string m_stackType;
                    bool m_stackTypeHasBeenSet;

                    /**
                     * <p>子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠。</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>IPv6网段</p>
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>CDC实例ID。</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETREQUEST_H_
