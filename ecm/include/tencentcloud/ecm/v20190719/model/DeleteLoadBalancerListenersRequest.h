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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DELETELOADBALANCERLISTENERSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DELETELOADBALANCERLISTENERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DeleteLoadBalancerListeners请求参数结构体
                */
                class DeleteLoadBalancerListenersRequest : public AbstractModel
                {
                public:
                    DeleteLoadBalancerListenersRequest();
                    ~DeleteLoadBalancerListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID
                     * @return LoadBalancerId 负载均衡实例 ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID
                     * @param _loadBalancerId 负载均衡实例 ID
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
                     * 获取指定删除的监听器ID数组，若不填则删除负载均衡的所有监听器
                     * @return ListenerIds 指定删除的监听器ID数组，若不填则删除负载均衡的所有监听器
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置指定删除的监听器ID数组，若不填则删除负载均衡的所有监听器
                     * @param _listenerIds 指定删除的监听器ID数组，若不填则删除负载均衡的所有监听器
                     * 
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 指定删除的监听器ID数组，若不填则删除负载均衡的所有监听器
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DELETELOADBALANCERLISTENERSREQUEST_H_
