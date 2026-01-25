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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_CREATEGATEWAYLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_CREATEGATEWAYLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/TagInfo.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * CreateGatewayLoadBalancer请求参数结构体
                */
                class CreateGatewayLoadBalancerRequest : public AbstractModel
                {
                public:
                    CreateGatewayLoadBalancerRequest();
                    ~CreateGatewayLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关负载均衡后端目标设备所属的私有网络 ID，如vpc-azd4dt1c，可以通过 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>  接口获取。</p>
                     * @return VpcId <p>网关负载均衡后端目标设备所属的私有网络 ID，如vpc-azd4dt1c，可以通过 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>  接口获取。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>网关负载均衡后端目标设备所属的私有网络 ID，如vpc-azd4dt1c，可以通过 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>  接口获取。</p>
                     * @param _vpcId <p>网关负载均衡后端目标设备所属的私有网络 ID，如vpc-azd4dt1c，可以通过 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>  接口获取。</p>
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
                     * 获取<p>网关负载均衡后端目标设备所属的私有网络的子网ID。可通过<a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a>接口获取。</p>
                     * @return SubnetId <p>网关负载均衡后端目标设备所属的私有网络的子网ID。可通过<a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a>接口获取。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>网关负载均衡后端目标设备所属的私有网络的子网ID。可通过<a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a>接口获取。</p>
                     * @param _subnetId <p>网关负载均衡后端目标设备所属的私有网络的子网ID。可通过<a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a>接口获取。</p>
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
                     * 获取<p>网关负载均衡实例名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。不填写时默认自动生成。</p>
                     * @return LoadBalancerName <p>网关负载均衡实例名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。不填写时默认自动生成。</p>
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置<p>网关负载均衡实例名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。不填写时默认自动生成。</p>
                     * @param _loadBalancerName <p>网关负载均衡实例名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。不填写时默认自动生成。</p>
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
                     * 获取<p>创建网关负载均衡的个数，默认值为 1。批量创建数量最大支持10个。</p>
                     * @return Number <p>创建网关负载均衡的个数，默认值为 1。批量创建数量最大支持10个。</p>
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置<p>创建网关负载均衡的个数，默认值为 1。批量创建数量最大支持10个。</p>
                     * @param _number <p>创建网关负载均衡的个数，默认值为 1。批量创建数量最大支持10个。</p>
                     * 
                     */
                    void SetNumber(const uint64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取<p>购买网关负载均衡的同时，给负载均衡打上标签，最大支持20个标签键值对。</p>
                     * @return Tags <p>购买网关负载均衡的同时，给负载均衡打上标签，最大支持20个标签键值对。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>购买网关负载均衡的同时，给负载均衡打上标签，最大支持20个标签键值对。</p>
                     * @param _tags <p>购买网关负载均衡的同时，给负载均衡打上标签，最大支持20个标签键值对。</p>
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
                     * 获取<p>网关负载均衡实例计费类型，当前只支持传POSTPAID_BY_HOUR（按量计费），默认是POSTPAID_BY_HOUR。</p>
                     * @return LBChargeType <p>网关负载均衡实例计费类型，当前只支持传POSTPAID_BY_HOUR（按量计费），默认是POSTPAID_BY_HOUR。</p>
                     * 
                     */
                    std::string GetLBChargeType() const;

                    /**
                     * 设置<p>网关负载均衡实例计费类型，当前只支持传POSTPAID_BY_HOUR（按量计费），默认是POSTPAID_BY_HOUR。</p>
                     * @param _lBChargeType <p>网关负载均衡实例计费类型，当前只支持传POSTPAID_BY_HOUR（按量计费），默认是POSTPAID_BY_HOUR。</p>
                     * 
                     */
                    void SetLBChargeType(const std::string& _lBChargeType);

                    /**
                     * 判断参数 LBChargeType 是否已赋值
                     * @return LBChargeType 是否已赋值
                     * 
                     */
                    bool LBChargeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>网关负载均衡后端目标设备所属的私有网络 ID，如vpc-azd4dt1c，可以通过 <a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>  接口获取。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>网关负载均衡后端目标设备所属的私有网络的子网ID。可通过<a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a>接口获取。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>网关负载均衡实例名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。不填写时默认自动生成。</p>
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * <p>创建网关负载均衡的个数，默认值为 1。批量创建数量最大支持10个。</p>
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>购买网关负载均衡的同时，给负载均衡打上标签，最大支持20个标签键值对。</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>网关负载均衡实例计费类型，当前只支持传POSTPAID_BY_HOUR（按量计费），默认是POSTPAID_BY_HOUR。</p>
                     */
                    std::string m_lBChargeType;
                    bool m_lBChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_CREATEGATEWAYLOADBALANCERREQUEST_H_
