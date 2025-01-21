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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_KAFKA_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_KAFKA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 旁路kafka配置
                */
                class Kafka : public AbstractModel
                {
                public:
                    Kafka();
                    ~Kafka() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1：开启
0：关闭
                     * @return EnableKafka 1：开启
0：关闭
                     * 
                     */
                    uint64_t GetEnableKafka() const;

                    /**
                     * 设置1：开启
0：关闭
                     * @param _enableKafka 1：开启
0：关闭
                     * 
                     */
                    void SetEnableKafka(const uint64_t& _enableKafka);

                    /**
                     * 判断参数 EnableKafka 是否已赋值
                     * @return EnableKafka 是否已赋值
                     * 
                     */
                    bool EnableKafkaHasBeenSet() const;

                    /**
                     * 获取host地址
                     * @return KafkaHost host地址
                     * 
                     */
                    std::string GetKafkaHost() const;

                    /**
                     * 设置host地址
                     * @param _kafkaHost host地址
                     * 
                     */
                    void SetKafkaHost(const std::string& _kafkaHost);

                    /**
                     * 判断参数 KafkaHost 是否已赋值
                     * @return KafkaHost 是否已赋值
                     * 
                     */
                    bool KafkaHostHasBeenSet() const;

                    /**
                     * 获取topic
                     * @return KafkaTopic topic
                     * 
                     */
                    std::string GetKafkaTopic() const;

                    /**
                     * 设置topic
                     * @param _kafkaTopic topic
                     * 
                     */
                    void SetKafkaTopic(const std::string& _kafkaTopic);

                    /**
                     * 判断参数 KafkaTopic 是否已赋值
                     * @return KafkaTopic 是否已赋值
                     * 
                     */
                    bool KafkaTopicHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return KafkaVersion 版本
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置版本
                     * @param _kafkaVersion 版本
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取username
                     * @return SaslUserName username
                     * 
                     */
                    std::string GetSaslUserName() const;

                    /**
                     * 设置username
                     * @param _saslUserName username
                     * 
                     */
                    void SetSaslUserName(const std::string& _saslUserName);

                    /**
                     * 判断参数 SaslUserName 是否已赋值
                     * @return SaslUserName 是否已赋值
                     * 
                     */
                    bool SaslUserNameHasBeenSet() const;

                    /**
                     * 获取password
                     * @return SaslPassword password
                     * 
                     */
                    std::string GetSaslPassword() const;

                    /**
                     * 设置password
                     * @param _saslPassword password
                     * 
                     */
                    void SetSaslPassword(const std::string& _saslPassword);

                    /**
                     * 判断参数 SaslPassword 是否已赋值
                     * @return SaslPassword 是否已赋值
                     * 
                     */
                    bool SaslPasswordHasBeenSet() const;

                    /**
                     * 获取ssl
                     * @return SaslMechanism ssl
                     * 
                     */
                    std::string GetSaslMechanism() const;

                    /**
                     * 设置ssl
                     * @param _saslMechanism ssl
                     * 
                     */
                    void SetSaslMechanism(const std::string& _saslMechanism);

                    /**
                     * 判断参数 SaslMechanism 是否已赋值
                     * @return SaslMechanism 是否已赋值
                     * 
                     */
                    bool SaslMechanismHasBeenSet() const;

                    /**
                     * 获取默认算子id为0新增算子
一旦算子新增成功会返回正确的算子id值
                     * @return SinkId 默认算子id为0新增算子
一旦算子新增成功会返回正确的算子id值
                     * 
                     */
                    uint64_t GetSinkId() const;

                    /**
                     * 设置默认算子id为0新增算子
一旦算子新增成功会返回正确的算子id值
                     * @param _sinkId 默认算子id为0新增算子
一旦算子新增成功会返回正确的算子id值
                     * 
                     */
                    void SetSinkId(const uint64_t& _sinkId);

                    /**
                     * 判断参数 SinkId 是否已赋值
                     * @return SinkId 是否已赋值
                     * 
                     */
                    bool SinkIdHasBeenSet() const;

                private:

                    /**
                     * 1：开启
0：关闭
                     */
                    uint64_t m_enableKafka;
                    bool m_enableKafkaHasBeenSet;

                    /**
                     * host地址
                     */
                    std::string m_kafkaHost;
                    bool m_kafkaHostHasBeenSet;

                    /**
                     * topic
                     */
                    std::string m_kafkaTopic;
                    bool m_kafkaTopicHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * username
                     */
                    std::string m_saslUserName;
                    bool m_saslUserNameHasBeenSet;

                    /**
                     * password
                     */
                    std::string m_saslPassword;
                    bool m_saslPasswordHasBeenSet;

                    /**
                     * ssl
                     */
                    std::string m_saslMechanism;
                    bool m_saslMechanismHasBeenSet;

                    /**
                     * 默认算子id为0新增算子
一旦算子新增成功会返回正确的算子id值
                     */
                    uint64_t m_sinkId;
                    bool m_sinkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_KAFKA_H_
