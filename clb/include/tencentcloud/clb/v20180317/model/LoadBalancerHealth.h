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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERHEALTH_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ListenerHealth.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 负载均衡实例的健康检查状态
                */
                class LoadBalancerHealth : public AbstractModel
                {
                public:
                    LoadBalancerHealth();
                    ~LoadBalancerHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡实例ID
                     * @return LoadBalancerId 负载均衡实例ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID
                     * @param _loadBalancerId 负载均衡实例ID
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
                     * 获取负载均衡实例名称
                     * @return LoadBalancerName 负载均衡实例名称
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例名称
                     * @param _loadBalancerName 负载均衡实例名称
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
                     * 获取监听器列表
                     * @return Listeners 监听器列表
                     * 
                     */
                    std::vector<ListenerHealth> GetListeners() const;

                    /**
                     * 设置监听器列表
                     * @param _listeners 监听器列表
                     * 
                     */
                    void SetListeners(const std::vector<ListenerHealth>& _listeners);

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     * 
                     */
                    bool ListenersHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡实例名称
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 监听器列表
                     */
                    std::vector<ListenerHealth> m_listeners;
                    bool m_listenersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERHEALTH_H_
