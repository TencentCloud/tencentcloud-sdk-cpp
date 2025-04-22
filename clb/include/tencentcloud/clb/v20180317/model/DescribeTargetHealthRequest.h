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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETHEALTHREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETHEALTHREQUEST_H_

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
                * DescribeTargetHealth请求参数结构体
                */
                class DescribeTargetHealthRequest : public AbstractModel
                {
                public:
                    DescribeTargetHealthRequest();
                    ~DescribeTargetHealthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的负载均衡实例ID列表。
                     * @return LoadBalancerIds 要查询的负载均衡实例ID列表。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置要查询的负载均衡实例ID列表。
                     * @param _loadBalancerIds 要查询的负载均衡实例ID列表。
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取要查询的监听器ID列表。
                     * @return ListenerIds 要查询的监听器ID列表。
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置要查询的监听器ID列表。
                     * @param _listenerIds 要查询的监听器ID列表。
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
                     * 获取要查询的转发规则ID列表。
                     * @return LocationIds 要查询的转发规则ID列表。
                     * 
                     */
                    std::vector<std::string> GetLocationIds() const;

                    /**
                     * 设置要查询的转发规则ID列表。
                     * @param _locationIds 要查询的转发规则ID列表。
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
                     * 要查询的负载均衡实例ID列表。
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 要查询的监听器ID列表。
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * 要查询的转发规则ID列表。
                     */
                    std::vector<std::string> m_locationIds;
                    bool m_locationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETHEALTHREQUEST_H_
