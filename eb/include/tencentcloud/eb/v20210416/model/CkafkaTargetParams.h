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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CKAFKATARGETPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CKAFKATARGETPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/RetryPolicy.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 用来描述ckafka投递目标
                */
                class CkafkaTargetParams : public AbstractModel
                {
                public:
                    CkafkaTargetParams();
                    ~CkafkaTargetParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>要投递到的ckafka topic</p>
                     * @return TopicName <p>要投递到的ckafka topic</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>要投递到的ckafka topic</p>
                     * @param _topicName <p>要投递到的ckafka topic</p>
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取<p>重试策略</p>
                     * @return RetryPolicy <p>重试策略</p>
                     * 
                     */
                    RetryPolicy GetRetryPolicy() const;

                    /**
                     * 设置<p>重试策略</p>
                     * @param _retryPolicy <p>重试策略</p>
                     * 
                     */
                    void SetRetryPolicy(const RetryPolicy& _retryPolicy);

                    /**
                     * 判断参数 RetryPolicy 是否已赋值
                     * @return RetryPolicy 是否已赋值
                     * 
                     */
                    bool RetryPolicyHasBeenSet() const;

                    /**
                     * 获取<p>事件投递kafka时的协议格式；目前只支持两种格式：1.CloudEvent(完整的cloudevent消息协议)2.CloudEventDataKey(cloudevent协议中的data字段内容)</p>
                     * @return EventDeliveryFormat <p>事件投递kafka时的协议格式；目前只支持两种格式：1.CloudEvent(完整的cloudevent消息协议)2.CloudEventDataKey(cloudevent协议中的data字段内容)</p>
                     * 
                     */
                    std::string GetEventDeliveryFormat() const;

                    /**
                     * 设置<p>事件投递kafka时的协议格式；目前只支持两种格式：1.CloudEvent(完整的cloudevent消息协议)2.CloudEventDataKey(cloudevent协议中的data字段内容)</p>
                     * @param _eventDeliveryFormat <p>事件投递kafka时的协议格式；目前只支持两种格式：1.CloudEvent(完整的cloudevent消息协议)2.CloudEventDataKey(cloudevent协议中的data字段内容)</p>
                     * 
                     */
                    void SetEventDeliveryFormat(const std::string& _eventDeliveryFormat);

                    /**
                     * 判断参数 EventDeliveryFormat 是否已赋值
                     * @return EventDeliveryFormat 是否已赋值
                     * 
                     */
                    bool EventDeliveryFormatHasBeenSet() const;

                    /**
                     * 获取<p>事件顶层Time参数投递格式</p><p>枚举值：</p><ul><li>RFC3339： 将时间戳转换成 YYYY-MM-DDTHH:mm:ssZ 格式</li></ul>
                     * @return TimeFormat <p>事件顶层Time参数投递格式</p><p>枚举值：</p><ul><li>RFC3339： 将时间戳转换成 YYYY-MM-DDTHH:mm:ssZ 格式</li></ul>
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置<p>事件顶层Time参数投递格式</p><p>枚举值：</p><ul><li>RFC3339： 将时间戳转换成 YYYY-MM-DDTHH:mm:ssZ 格式</li></ul>
                     * @param _timeFormat <p>事件顶层Time参数投递格式</p><p>枚举值：</p><ul><li>RFC3339： 将时间戳转换成 YYYY-MM-DDTHH:mm:ssZ 格式</li></ul>
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                private:

                    /**
                     * <p>要投递到的ckafka topic</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>重试策略</p>
                     */
                    RetryPolicy m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                    /**
                     * <p>事件投递kafka时的协议格式；目前只支持两种格式：1.CloudEvent(完整的cloudevent消息协议)2.CloudEventDataKey(cloudevent协议中的data字段内容)</p>
                     */
                    std::string m_eventDeliveryFormat;
                    bool m_eventDeliveryFormatHasBeenSet;

                    /**
                     * <p>事件顶层Time参数投递格式</p><p>枚举值：</p><ul><li>RFC3339： 将时间戳转换成 YYYY-MM-DDTHH:mm:ssZ 格式</li></ul>
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CKAFKATARGETPARAMS_H_
