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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DELETEL7RULESREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DELETEL7RULESREQUEST_H_

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
                * DeleteL7Rules请求参数结构体
                */
                class DeleteL7RulesRequest : public AbstractModel
                {
                public:
                    DeleteL7RulesRequest();
                    ~DeleteL7RulesRequest() = default;
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
                     * 获取七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     * @return ListenerId 七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     * @param _listenerId 七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取转发域名实例ID，可通过接口DescribeL7Rules查询。
                     * @return DomainId 转发域名实例ID，可通过接口DescribeL7Rules查询。
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置转发域名实例ID，可通过接口DescribeL7Rules查询。
                     * @param _domainId 转发域名实例ID，可通过接口DescribeL7Rules查询。
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取转发路径实例ID列表，可通过接口DescribeL7Rules查询。
                     * @return LocationIds 转发路径实例ID列表，可通过接口DescribeL7Rules查询。
                     * 
                     */
                    std::vector<std::string> GetLocationIds() const;

                    /**
                     * 设置转发路径实例ID列表，可通过接口DescribeL7Rules查询。
                     * @param _locationIds 转发路径实例ID列表，可通过接口DescribeL7Rules查询。
                     * 
                     */
                    void SetLocationIds(const std::vector<std::string>& _locationIds);

                    /**
                     * 判断参数 LocationIds 是否已赋值
                     * @return LocationIds 是否已赋值
                     * 
                     */
                    bool LocationIdsHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 转发域名实例ID，可通过接口DescribeL7Rules查询。
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 转发路径实例ID列表，可通过接口DescribeL7Rules查询。
                     */
                    std::vector<std::string> m_locationIds;
                    bool m_locationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DELETEL7RULESREQUEST_H_
