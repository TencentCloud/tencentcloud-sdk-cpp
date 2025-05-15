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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETERULEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DeleteRule请求参数结构体
                */
                class DeleteRuleRequest : public AbstractModel
                {
                public:
                    DeleteRuleRequest();
                    ~DeleteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。
                     * @return LoadBalancerId 负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。
                     * @param _loadBalancerId 负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。
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
                     * 获取负载均衡监听器ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * @return ListenerId 负载均衡监听器ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * @param _listenerId 负载均衡监听器ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
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
                     * 获取要删除的转发规则的ID组成的数组，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * @return LocationIds 要删除的转发规则的ID组成的数组，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * 
                     */
                    std::vector<std::string> GetLocationIds() const;

                    /**
                     * 设置要删除的转发规则的ID组成的数组，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * @param _locationIds 要删除的转发规则的ID组成的数组，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * 
                     */
                    void SetLocationIds(const std::vector<std::string>& _locationIds);

                    /**
                     * 判断参数 LocationIds 是否已赋值
                     * @return LocationIds 是否已赋值
                     * 
                     */
                    bool LocationIdsHasBeenSet() const;

                    /**
                     * 获取要删除的转发规则的域名，如果是多域名，可以指定多域名列表中的任意一个，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * @return Domain 要删除的转发规则的域名，如果是多域名，可以指定多域名列表中的任意一个，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置要删除的转发规则的域名，如果是多域名，可以指定多域名列表中的任意一个，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * @param _domain 要删除的转发规则的域名，如果是多域名，可以指定多域名列表中的任意一个，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取要删除的转发规则的转发路径，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * @return Url 要删除的转发规则的转发路径，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置要删除的转发规则的转发路径，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * @param _url 要删除的转发规则的转发路径，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取监听器下必须配置一个默认域名，当需要删除默认域名时，可以指定另一个域名作为新的默认域名，如果新的默认域名是多域名，可以指定多域名列表中的任意一个，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * @return NewDefaultServerDomain 监听器下必须配置一个默认域名，当需要删除默认域名时，可以指定另一个域名作为新的默认域名，如果新的默认域名是多域名，可以指定多域名列表中的任意一个，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * 
                     */
                    std::string GetNewDefaultServerDomain() const;

                    /**
                     * 设置监听器下必须配置一个默认域名，当需要删除默认域名时，可以指定另一个域名作为新的默认域名，如果新的默认域名是多域名，可以指定多域名列表中的任意一个，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * @param _newDefaultServerDomain 监听器下必须配置一个默认域名，当需要删除默认域名时，可以指定另一个域名作为新的默认域名，如果新的默认域名是多域名，可以指定多域名列表中的任意一个，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * 
                     */
                    void SetNewDefaultServerDomain(const std::string& _newDefaultServerDomain);

                    /**
                     * 判断参数 NewDefaultServerDomain 是否已赋值
                     * @return NewDefaultServerDomain 是否已赋值
                     * 
                     */
                    bool NewDefaultServerDomainHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡监听器ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 要删除的转发规则的ID组成的数组，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     */
                    std::vector<std::string> m_locationIds;
                    bool m_locationIdsHasBeenSet;

                    /**
                     * 要删除的转发规则的域名，如果是多域名，可以指定多域名列表中的任意一个，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 要删除的转发规则的转发路径，可以通过 [DescribeLoadBalancersDetail](https://cloud.tencent.com/document/api/214/46916) 接口查询。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 监听器下必须配置一个默认域名，当需要删除默认域名时，可以指定另一个域名作为新的默认域名，如果新的默认域名是多域名，可以指定多域名列表中的任意一个，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     */
                    std::string m_newDefaultServerDomain;
                    bool m_newDefaultServerDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETERULEREQUEST_H_
