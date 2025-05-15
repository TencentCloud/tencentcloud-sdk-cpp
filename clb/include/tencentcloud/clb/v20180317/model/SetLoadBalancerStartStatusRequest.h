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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERSTARTSTATUSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERSTARTSTATUSREQUEST_H_

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
                * SetLoadBalancerStartStatus请求参数结构体
                */
                class SetLoadBalancerStartStatusRequest : public AbstractModel
                {
                public:
                    SetLoadBalancerStartStatusRequest();
                    ~SetLoadBalancerStartStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作类型。Start：启动实例，Stop：停止实例。
                     * @return OperationType 操作类型。Start：启动实例，Stop：停止实例。
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型。Start：启动实例，Stop：停止实例。
                     * @param _operationType 操作类型。Start：启动实例，Stop：停止实例。
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * @return LoadBalancerId 负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * @param _loadBalancerId 负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
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
                     * 获取监听器ID。如果该字段为空，则表示操作负载均衡实例，如果不为空，则表示操作监听器。
                     * @return ListenerIds 监听器ID。如果该字段为空，则表示操作负载均衡实例，如果不为空，则表示操作监听器。
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置监听器ID。如果该字段为空，则表示操作负载均衡实例，如果不为空，则表示操作监听器。
                     * @param _listenerIds 监听器ID。如果该字段为空，则表示操作负载均衡实例，如果不为空，则表示操作监听器。
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
                     * 操作类型。Start：启动实例，Stop：停止实例。
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 监听器ID。如果该字段为空，则表示操作负载均衡实例，如果不为空，则表示操作监听器。
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SETLOADBALANCERSTARTSTATUSREQUEST_H_
