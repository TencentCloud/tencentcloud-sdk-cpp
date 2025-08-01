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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTCLIENTSUBSCRIPTION_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTCLIENTSUBSCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/SubscriptionUserProperty.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MQTT 订阅关系
                */
                class MQTTClientSubscription : public AbstractModel
                {
                public:
                    MQTTClientSubscription();
                    ~MQTTClientSubscription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取topic 订阅
                     * @return TopicFilter topic 订阅
                     * 
                     */
                    std::string GetTopicFilter() const;

                    /**
                     * 设置topic 订阅
                     * @param _topicFilter topic 订阅
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
                     * 获取服务质量等级
0: 至多一次
1: 至少一次
2: 恰好一次
                     * @return Qos 服务质量等级
0: 至多一次
1: 至少一次
2: 恰好一次
                     * 
                     */
                    int64_t GetQos() const;

                    /**
                     * 设置服务质量等级
0: 至多一次
1: 至少一次
2: 恰好一次
                     * @param _qos 服务质量等级
0: 至多一次
1: 至少一次
2: 恰好一次
                     * 
                     */
                    void SetQos(const int64_t& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取堆积数量
                     * @return Lag 堆积数量
                     * 
                     */
                    int64_t GetLag() const;

                    /**
                     * 设置堆积数量
                     * @param _lag 堆积数量
                     * 
                     */
                    void SetLag(const int64_t& _lag);

                    /**
                     * 判断参数 Lag 是否已赋值
                     * @return Lag 是否已赋值
                     * 
                     */
                    bool LagHasBeenSet() const;

                    /**
                     * 获取投递未确认数量
                     * @return Inflight 投递未确认数量
                     * 
                     */
                    int64_t GetInflight() const;

                    /**
                     * 设置投递未确认数量
                     * @param _inflight 投递未确认数量
                     * 
                     */
                    void SetInflight(const int64_t& _inflight);

                    /**
                     * 判断参数 Inflight 是否已赋值
                     * @return Inflight 是否已赋值
                     * 
                     */
                    bool InflightHasBeenSet() const;

                    /**
                     * 获取用户属性
                     * @return UserProperties 用户属性
                     * 
                     */
                    std::vector<SubscriptionUserProperty> GetUserProperties() const;

                    /**
                     * 设置用户属性
                     * @param _userProperties 用户属性
                     * 
                     */
                    void SetUserProperties(const std::vector<SubscriptionUserProperty>& _userProperties);

                    /**
                     * 判断参数 UserProperties 是否已赋值
                     * @return UserProperties 是否已赋值
                     * 
                     */
                    bool UserPropertiesHasBeenSet() const;

                private:

                    /**
                     * topic 订阅
                     */
                    std::string m_topicFilter;
                    bool m_topicFilterHasBeenSet;

                    /**
                     * 服务质量等级
0: 至多一次
1: 至少一次
2: 恰好一次
                     */
                    int64_t m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * 堆积数量
                     */
                    int64_t m_lag;
                    bool m_lagHasBeenSet;

                    /**
                     * 投递未确认数量
                     */
                    int64_t m_inflight;
                    bool m_inflightHasBeenSet;

                    /**
                     * 用户属性
                     */
                    std::vector<SubscriptionUserProperty> m_userProperties;
                    bool m_userPropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTCLIENTSUBSCRIPTION_H_
