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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYGATEWAYLOADBALANCERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYGATEWAYLOADBALANCERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * ModifyGatewayLoadBalancerAttribute请求参数结构体
                */
                class ModifyGatewayLoadBalancerAttributeRequest : public AbstractModel
                {
                public:
                    ModifyGatewayLoadBalancerAttributeRequest();
                    ~ModifyGatewayLoadBalancerAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关负载均衡的唯一ID。可通过<a href="https://cloud.tencent.com/document/api/1782/111683">DescribeGatewayLoadBalancers</a> 接口获取。</p>
                     * @return LoadBalancerId <p>网关负载均衡的唯一ID。可通过<a href="https://cloud.tencent.com/document/api/1782/111683">DescribeGatewayLoadBalancers</a> 接口获取。</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>网关负载均衡的唯一ID。可通过<a href="https://cloud.tencent.com/document/api/1782/111683">DescribeGatewayLoadBalancers</a> 接口获取。</p>
                     * @param _loadBalancerId <p>网关负载均衡的唯一ID。可通过<a href="https://cloud.tencent.com/document/api/1782/111683">DescribeGatewayLoadBalancers</a> 接口获取。</p>
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>网关负载均衡实例名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * @return LoadBalancerName <p>网关负载均衡实例名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置<p>网关负载均衡实例名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * @param _loadBalancerName <p>网关负载均衡实例名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
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
                     * 获取<p>是否开启删除保护。</p>
                     * @return DeleteProtect <p>是否开启删除保护。</p>
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置<p>是否开启删除保护。</p>
                     * @param _deleteProtect <p>是否开启删除保护。</p>
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                private:

                    /**
                     * <p>网关负载均衡的唯一ID。可通过<a href="https://cloud.tencent.com/document/api/1782/111683">DescribeGatewayLoadBalancers</a> 接口获取。</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>网关负载均衡实例名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * <p>是否开启删除保护。</p>
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYGATEWAYLOADBALANCERATTRIBUTEREQUEST_H_
