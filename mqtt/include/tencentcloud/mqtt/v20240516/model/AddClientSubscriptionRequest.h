/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_ADDCLIENTSUBSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_ADDCLIENTSUBSCRIPTIONREQUEST_H_

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
                * AddClientSubscription请求参数结构体
                */
                class AddClientSubscriptionRequest : public AbstractModel
                {
                public:
                    AddClientSubscriptionRequest();
                    ~AddClientSubscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取客户端id
                     * @return ClientId 客户端id
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端id
                     * @param _clientId 客户端id
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取订阅
                     * @return TopicFilter 订阅
                     * 
                     */
                    std::string GetTopicFilter() const;

                    /**
                     * 设置订阅
                     * @param _topicFilter 订阅
                     * 
                     */
                    void SetTopicFilter(const std::string& _topicFilter);

                    /**
                     * 判断参数 TopicFilter 是否已赋值
                     * @return TopicFilter 是否已赋值
                     * 
                     */
                    bool TopicFilterHasBeenSet() const;

                    /**
                     * 获取服务质量:0,1,2
                     * @return Qos 服务质量:0,1,2
                     * 
                     */
                    std::string GetQos() const;

                    /**
                     * 设置服务质量:0,1,2
                     * @param _qos 服务质量:0,1,2
                     * 
                     */
                    void SetQos(const std::string& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 客户端id
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 订阅
                     */
                    std::string m_topicFilter;
                    bool m_topicFilterHasBeenSet;

                    /**
                     * 服务质量:0,1,2
                     */
                    std::string m_qos;
                    bool m_qosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_ADDCLIENTSUBSCRIPTIONREQUEST_H_
