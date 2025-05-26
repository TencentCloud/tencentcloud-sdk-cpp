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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FAILUREPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FAILUREPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/KafkaParam.h>
#include <tencentcloud/ckafka/v20190819/model/TopicParam.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 数据处理规则失败处理
                */
                class FailureParam : public AbstractModel
                {
                public:
                    FailureParam();
                    ~FailureParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型，DLQ死信队列，IGNORE_ERROR保留，DROP丢弃
                     * @return Type 类型，DLQ死信队列，IGNORE_ERROR保留，DROP丢弃
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，DLQ死信队列，IGNORE_ERROR保留，DROP丢弃
                     * @param _type 类型，DLQ死信队列，IGNORE_ERROR保留，DROP丢弃
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Ckafka类型死信队列
                     * @return KafkaParam Ckafka类型死信队列
                     * 
                     */
                    KafkaParam GetKafkaParam() const;

                    /**
                     * 设置Ckafka类型死信队列
                     * @param _kafkaParam Ckafka类型死信队列
                     * 
                     */
                    void SetKafkaParam(const KafkaParam& _kafkaParam);

                    /**
                     * 判断参数 KafkaParam 是否已赋值
                     * @return KafkaParam 是否已赋值
                     * 
                     */
                    bool KafkaParamHasBeenSet() const;

                    /**
                     * 获取重试间隔
                     * @return RetryInterval 重试间隔
                     * 
                     */
                    uint64_t GetRetryInterval() const;

                    /**
                     * 设置重试间隔
                     * @param _retryInterval 重试间隔
                     * 
                     */
                    void SetRetryInterval(const uint64_t& _retryInterval);

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

                    /**
                     * 获取重试次数
                     * @return MaxRetryAttempts 重试次数
                     * 
                     */
                    uint64_t GetMaxRetryAttempts() const;

                    /**
                     * 设置重试次数
                     * @param _maxRetryAttempts 重试次数
                     * 
                     */
                    void SetMaxRetryAttempts(const uint64_t& _maxRetryAttempts);

                    /**
                     * 判断参数 MaxRetryAttempts 是否已赋值
                     * @return MaxRetryAttempts 是否已赋值
                     * 
                     */
                    bool MaxRetryAttemptsHasBeenSet() const;

                    /**
                     * 获取DIP Topic类型死信队列
                     * @return TopicParam DIP Topic类型死信队列
                     * 
                     */
                    TopicParam GetTopicParam() const;

                    /**
                     * 设置DIP Topic类型死信队列
                     * @param _topicParam DIP Topic类型死信队列
                     * 
                     */
                    void SetTopicParam(const TopicParam& _topicParam);

                    /**
                     * 判断参数 TopicParam 是否已赋值
                     * @return TopicParam 是否已赋值
                     * 
                     */
                    bool TopicParamHasBeenSet() const;

                    /**
                     * 获取死信队列类型，CKAFKA，TOPIC
                     * @return DlqType 死信队列类型，CKAFKA，TOPIC
                     * 
                     */
                    std::string GetDlqType() const;

                    /**
                     * 设置死信队列类型，CKAFKA，TOPIC
                     * @param _dlqType 死信队列类型，CKAFKA，TOPIC
                     * 
                     */
                    void SetDlqType(const std::string& _dlqType);

                    /**
                     * 判断参数 DlqType 是否已赋值
                     * @return DlqType 是否已赋值
                     * 
                     */
                    bool DlqTypeHasBeenSet() const;

                private:

                    /**
                     * 类型，DLQ死信队列，IGNORE_ERROR保留，DROP丢弃
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Ckafka类型死信队列
                     */
                    KafkaParam m_kafkaParam;
                    bool m_kafkaParamHasBeenSet;

                    /**
                     * 重试间隔
                     */
                    uint64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * 重试次数
                     */
                    uint64_t m_maxRetryAttempts;
                    bool m_maxRetryAttemptsHasBeenSet;

                    /**
                     * DIP Topic类型死信队列
                     */
                    TopicParam m_topicParam;
                    bool m_topicParamHasBeenSet;

                    /**
                     * 死信队列类型，CKAFKA，TOPIC
                     */
                    std::string m_dlqType;
                    bool m_dlqTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FAILUREPARAM_H_
