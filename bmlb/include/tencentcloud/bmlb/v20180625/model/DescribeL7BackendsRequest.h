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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL7BACKENDSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL7BACKENDSREQUEST_H_

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
                * DescribeL7Backends请求参数结构体
                */
                class DescribeL7BackendsRequest : public AbstractModel
                {
                public:
                    DescribeL7BackendsRequest();
                    ~DescribeL7BackendsRequest() = default;
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
                     * 获取转发路径实例ID，可通过接口DescribeL7Rules查询。
                     * @return LocationId 转发路径实例ID，可通过接口DescribeL7Rules查询。
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发路径实例ID，可通过接口DescribeL7Rules查询。
                     * @param _locationId 转发路径实例ID，可通过接口DescribeL7Rules查询。
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取查询条件，传'all'则查询所有与规则绑定的主机信息。如果为all时，DomainId和LocationId参数没有意义不必传入，否则DomainId和LocationId参数必须传入。
                     * @return QueryType 查询条件，传'all'则查询所有与规则绑定的主机信息。如果为all时，DomainId和LocationId参数没有意义不必传入，否则DomainId和LocationId参数必须传入。
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置查询条件，传'all'则查询所有与规则绑定的主机信息。如果为all时，DomainId和LocationId参数没有意义不必传入，否则DomainId和LocationId参数必须传入。
                     * @param _queryType 查询条件，传'all'则查询所有与规则绑定的主机信息。如果为all时，DomainId和LocationId参数没有意义不必传入，否则DomainId和LocationId参数必须传入。
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

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
                     * 转发路径实例ID，可通过接口DescribeL7Rules查询。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 查询条件，传'all'则查询所有与规则绑定的主机信息。如果为all时，DomainId和LocationId参数没有意义不必传入，否则DomainId和LocationId参数必须传入。
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL7BACKENDSREQUEST_H_
