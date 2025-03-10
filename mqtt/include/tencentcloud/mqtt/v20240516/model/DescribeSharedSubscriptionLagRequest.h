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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBESHAREDSUBSCRIPTIONLAGREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBESHAREDSUBSCRIPTIONLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeSharedSubscriptionLag请求参数结构体
                */
                class DescribeSharedSubscriptionLagRequest : public AbstractModel
                {
                public:
                    DescribeSharedSubscriptionLagRequest();
                    ~DescribeSharedSubscriptionLagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id	
                     * @return InstanceId 集群id	
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id	
                     * @param _instanceId 集群id	
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取共享订阅表达式
                     * @return SharedSubscription 共享订阅表达式
                     * 
                     */
                    std::string GetSharedSubscription() const;

                    /**
                     * 设置共享订阅表达式
                     * @param _sharedSubscription 共享订阅表达式
                     * 
                     */
                    void SetSharedSubscription(const std::string& _sharedSubscription);

                    /**
                     * 判断参数 SharedSubscription 是否已赋值
                     * @return SharedSubscription 是否已赋值
                     * 
                     */
                    bool SharedSubscriptionHasBeenSet() const;

                private:

                    /**
                     * 集群id	
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 共享订阅表达式
                     */
                    std::string m_sharedSubscription;
                    bool m_sharedSubscriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBESHAREDSUBSCRIPTIONLAGREQUEST_H_
