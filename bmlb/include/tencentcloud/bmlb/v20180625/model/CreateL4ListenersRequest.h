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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL4LISTENERSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL4LISTENERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/CreateL4Listener.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * CreateL4Listeners请求参数结构体
                */
                class CreateL4ListenersRequest : public AbstractModel
                {
                public:
                    CreateL4ListenersRequest();
                    ~CreateL4ListenersRequest() = default;
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
                     * 获取监听器信息数组，可以创建多个监听器。目前一个负载均衡下面最多允许创建50个监听器
                     * @return ListenerSet 监听器信息数组，可以创建多个监听器。目前一个负载均衡下面最多允许创建50个监听器
                     * 
                     */
                    std::vector<CreateL4Listener> GetListenerSet() const;

                    /**
                     * 设置监听器信息数组，可以创建多个监听器。目前一个负载均衡下面最多允许创建50个监听器
                     * @param _listenerSet 监听器信息数组，可以创建多个监听器。目前一个负载均衡下面最多允许创建50个监听器
                     * 
                     */
                    void SetListenerSet(const std::vector<CreateL4Listener>& _listenerSet);

                    /**
                     * 判断参数 ListenerSet 是否已赋值
                     * @return ListenerSet 是否已赋值
                     * 
                     */
                    bool ListenerSetHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 监听器信息数组，可以创建多个监听器。目前一个负载均衡下面最多允许创建50个监听器
                     */
                    std::vector<CreateL4Listener> m_listenerSet;
                    bool m_listenerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL4LISTENERSREQUEST_H_
