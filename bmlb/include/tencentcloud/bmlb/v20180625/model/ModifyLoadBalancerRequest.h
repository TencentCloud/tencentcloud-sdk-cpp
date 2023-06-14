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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancer请求参数结构体
                */
                class ModifyLoadBalancerRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerRequest();
                    ~ModifyLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @return LoadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @param _loadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
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
                     * 获取负载均衡器名称，规则：1-20个英文、汉字、数字、连接线“-”或下划线“_”。
                     * @return LoadBalancerName 负载均衡器名称，规则：1-20个英文、汉字、数字、连接线“-”或下划线“_”。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡器名称，规则：1-20个英文、汉字、数字、连接线“-”或下划线“_”。
                     * @param _loadBalancerName 负载均衡器名称，规则：1-20个英文、汉字、数字、连接线“-”或下划线“_”。
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
                     * 获取域名前缀，负载均衡的域名由用户输入的域名前缀与配置文件中的域名后缀一起组合而成，保证是唯一的域名。规则：1-20个小写英文字母、数字或连接线“-”。内网类型的负载均衡不能配置该字段。
                     * @return DomainPrefix 域名前缀，负载均衡的域名由用户输入的域名前缀与配置文件中的域名后缀一起组合而成，保证是唯一的域名。规则：1-20个小写英文字母、数字或连接线“-”。内网类型的负载均衡不能配置该字段。
                     * 
                     */
                    std::string GetDomainPrefix() const;

                    /**
                     * 设置域名前缀，负载均衡的域名由用户输入的域名前缀与配置文件中的域名后缀一起组合而成，保证是唯一的域名。规则：1-20个小写英文字母、数字或连接线“-”。内网类型的负载均衡不能配置该字段。
                     * @param _domainPrefix 域名前缀，负载均衡的域名由用户输入的域名前缀与配置文件中的域名后缀一起组合而成，保证是唯一的域名。规则：1-20个小写英文字母、数字或连接线“-”。内网类型的负载均衡不能配置该字段。
                     * 
                     */
                    void SetDomainPrefix(const std::string& _domainPrefix);

                    /**
                     * 判断参数 DomainPrefix 是否已赋值
                     * @return DomainPrefix 是否已赋值
                     * 
                     */
                    bool DomainPrefixHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡器名称，规则：1-20个英文、汉字、数字、连接线“-”或下划线“_”。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 域名前缀，负载均衡的域名由用户输入的域名前缀与配置文件中的域名后缀一起组合而成，保证是唯一的域名。规则：1-20个小写英文字母、数字或连接线“-”。内网类型的负载均衡不能配置该字段。
                     */
                    std::string m_domainPrefix;
                    bool m_domainPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYLOADBALANCERREQUEST_H_
