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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeTargets请求参数结构体
                */
                class DescribeTargetsRequest : public AbstractModel
                {
                public:
                    DescribeTargetsRequest();
                    ~DescribeTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID。
                     * @return LoadBalancerId 负载均衡实例 ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param _loadBalancerId 负载均衡实例 ID。
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
                     * 获取监听器 ID 列表。ID 数量上限为20个。
                     * @return ListenerIds 监听器 ID 列表。ID 数量上限为20个。
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置监听器 ID 列表。ID 数量上限为20个。
                     * @param _listenerIds 监听器 ID 列表。ID 数量上限为20个。
                     * 
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                    /**
                     * 获取监听器协议类型。
                     * @return Protocol 监听器协议类型。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议类型。
                     * @param _protocol 监听器协议类型。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取监听器端口。
                     * @return Port 监听器端口。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置监听器端口。
                     * @param _port 监听器端口。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取查询负载均衡绑定的后端服务列表，过滤条件如下：
<li> location-id - String - 是否必填：否 - （过滤条件）按照 规则ID 过滤，如："loc-12345678"。</li>
<li> private-ip-address - String - 是否必填：否 - （过滤条件）按照 后端服务内网IP 过滤，如："172.16.1.1"。</li>
<li> tag - String - 是否必填：否 - （过滤条件）按照 标签 过滤，如："tag-test"。</li>
                     * @return Filters 查询负载均衡绑定的后端服务列表，过滤条件如下：
<li> location-id - String - 是否必填：否 - （过滤条件）按照 规则ID 过滤，如："loc-12345678"。</li>
<li> private-ip-address - String - 是否必填：否 - （过滤条件）按照 后端服务内网IP 过滤，如："172.16.1.1"。</li>
<li> tag - String - 是否必填：否 - （过滤条件）按照 标签 过滤，如："tag-test"。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询负载均衡绑定的后端服务列表，过滤条件如下：
<li> location-id - String - 是否必填：否 - （过滤条件）按照 规则ID 过滤，如："loc-12345678"。</li>
<li> private-ip-address - String - 是否必填：否 - （过滤条件）按照 后端服务内网IP 过滤，如："172.16.1.1"。</li>
<li> tag - String - 是否必填：否 - （过滤条件）按照 标签 过滤，如："tag-test"。</li>
                     * @param _filters 查询负载均衡绑定的后端服务列表，过滤条件如下：
<li> location-id - String - 是否必填：否 - （过滤条件）按照 规则ID 过滤，如："loc-12345678"。</li>
<li> private-ip-address - String - 是否必填：否 - （过滤条件）按照 后端服务内网IP 过滤，如："172.16.1.1"。</li>
<li> tag - String - 是否必填：否 - （过滤条件）按照 标签 过滤，如："tag-test"。</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 监听器 ID 列表。ID 数量上限为20个。
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * 监听器协议类型。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 查询负载均衡绑定的后端服务列表，过滤条件如下：
<li> location-id - String - 是否必填：否 - （过滤条件）按照 规则ID 过滤，如："loc-12345678"。</li>
<li> private-ip-address - String - 是否必填：否 - （过滤条件）按照 后端服务内网IP 过滤，如："172.16.1.1"。</li>
<li> tag - String - 是否必填：否 - （过滤条件）按照 标签 过滤，如："tag-test"。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETSREQUEST_H_
