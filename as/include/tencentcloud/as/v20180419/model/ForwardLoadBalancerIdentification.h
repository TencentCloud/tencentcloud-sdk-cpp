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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCERIDENTIFICATION_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCERIDENTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 应用型负载均衡器标识信息
                */
                class ForwardLoadBalancerIdentification : public AbstractModel
                {
                public:
                    ForwardLoadBalancerIdentification();
                    ~ForwardLoadBalancerIdentification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡器ID
                     * @return LoadBalancerId 负载均衡器ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡器ID
                     * @param _loadBalancerId 负载均衡器ID
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
                     * 获取应用型负载均衡监听器 ID
                     * @return ListenerId 应用型负载均衡监听器 ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置应用型负载均衡监听器 ID
                     * @param _listenerId 应用型负载均衡监听器 ID
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
                     * 获取转发规则ID，注意：针对七层监听器此参数必填
                     * @return LocationId 转发规则ID，注意：针对七层监听器此参数必填
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发规则ID，注意：针对七层监听器此参数必填
                     * @param _locationId 转发规则ID，注意：针对七层监听器此参数必填
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                private:

                    /**
                     * 负载均衡器ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 应用型负载均衡监听器 ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 转发规则ID，注意：针对七层监听器此参数必填
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_FORWARDLOADBALANCERIDENTIFICATION_H_
