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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_COLLECTOROUTPUTINSTANCE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_COLLECTOROUTPUTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 采集器输出的实例信息
                */
                class CollectorOutputInstance : public AbstractModel
                {
                public:
                    CollectorOutputInstance();
                    ~CollectorOutputInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取采集器输出的实例类型（支持elasticsearch、logstash）
                     * @return Type 采集器输出的实例类型（支持elasticsearch、logstash）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置采集器输出的实例类型（支持elasticsearch、logstash）
                     * @param _type 采集器输出的实例类型（支持elasticsearch、logstash）
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
                     * 获取采集器输出的实例ID
                     * @return InstanceId 采集器输出的实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置采集器输出的实例ID
                     * @param _instanceId 采集器输出的实例ID
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
                     * 获取采集器输出到的ES实例的用户名
                     * @return ESUserName 采集器输出到的ES实例的用户名
                     * 
                     */
                    std::string GetESUserName() const;

                    /**
                     * 设置采集器输出到的ES实例的用户名
                     * @param _eSUserName 采集器输出到的ES实例的用户名
                     * 
                     */
                    void SetESUserName(const std::string& _eSUserName);

                    /**
                     * 判断参数 ESUserName 是否已赋值
                     * @return ESUserName 是否已赋值
                     * 
                     */
                    bool ESUserNameHasBeenSet() const;

                    /**
                     * 获取采集器输出到的ES实例的密码
                     * @return ESUserPasswd 采集器输出到的ES实例的密码
                     * 
                     */
                    std::string GetESUserPasswd() const;

                    /**
                     * 设置采集器输出到的ES实例的密码
                     * @param _eSUserPasswd 采集器输出到的ES实例的密码
                     * 
                     */
                    void SetESUserPasswd(const std::string& _eSUserPasswd);

                    /**
                     * 判断参数 ESUserPasswd 是否已赋值
                     * @return ESUserPasswd 是否已赋值
                     * 
                     */
                    bool ESUserPasswdHasBeenSet() const;

                    /**
                     * 获取采集器输出到ES实例时，是否开启监控（1为开启，0为不开启，默认为0）
                     * @return EnableMonitoring 采集器输出到ES实例时，是否开启监控（1为开启，0为不开启，默认为0）
                     * 
                     */
                    int64_t GetEnableMonitoring() const;

                    /**
                     * 设置采集器输出到ES实例时，是否开启监控（1为开启，0为不开启，默认为0）
                     * @param _enableMonitoring 采集器输出到ES实例时，是否开启监控（1为开启，0为不开启，默认为0）
                     * 
                     */
                    void SetEnableMonitoring(const int64_t& _enableMonitoring);

                    /**
                     * 判断参数 EnableMonitoring 是否已赋值
                     * @return EnableMonitoring 是否已赋值
                     * 
                     */
                    bool EnableMonitoringHasBeenSet() const;

                    /**
                     * 获取采集器输出到ES实例时，是否开启自动在kibana中生成Dashboard（1为开启，0为不开启，默认为0）
                     * @return EnableDashboard 采集器输出到ES实例时，是否开启自动在kibana中生成Dashboard（1为开启，0为不开启，默认为0）
                     * 
                     */
                    int64_t GetEnableDashboard() const;

                    /**
                     * 设置采集器输出到ES实例时，是否开启自动在kibana中生成Dashboard（1为开启，0为不开启，默认为0）
                     * @param _enableDashboard 采集器输出到ES实例时，是否开启自动在kibana中生成Dashboard（1为开启，0为不开启，默认为0）
                     * 
                     */
                    void SetEnableDashboard(const int64_t& _enableDashboard);

                    /**
                     * 判断参数 EnableDashboard 是否已赋值
                     * @return EnableDashboard 是否已赋值
                     * 
                     */
                    bool EnableDashboardHasBeenSet() const;

                    /**
                     * 获取Ckafka实例的vip
                     * @return KafkaEndpoint Ckafka实例的vip
                     * 
                     */
                    std::string GetKafkaEndpoint() const;

                    /**
                     * 设置Ckafka实例的vip
                     * @param _kafkaEndpoint Ckafka实例的vip
                     * 
                     */
                    void SetKafkaEndpoint(const std::string& _kafkaEndpoint);

                    /**
                     * 判断参数 KafkaEndpoint 是否已赋值
                     * @return KafkaEndpoint 是否已赋值
                     * 
                     */
                    bool KafkaEndpointHasBeenSet() const;

                    /**
                     * 获取Ckafka实例中的Topic
                     * @return KafkaTopic Ckafka实例中的Topic
                     * 
                     */
                    std::string GetKafkaTopic() const;

                    /**
                     * 设置Ckafka实例中的Topic
                     * @param _kafkaTopic Ckafka实例中的Topic
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
                     * 获取Ckafka实例的版本号
                     * @return KafkaVersion Ckafka实例的版本号
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置Ckafka实例的版本号
                     * @param _kafkaVersion Ckafka实例的版本号
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
                     * 获取topic id
                     * @return SesTopicId topic id
                     * 
                     */
                    std::string GetSesTopicId() const;

                    /**
                     * 设置topic id
                     * @param _sesTopicId topic id
                     * 
                     */
                    void SetSesTopicId(const std::string& _sesTopicId);

                    /**
                     * 判断参数 SesTopicId 是否已赋值
                     * @return SesTopicId 是否已赋值
                     * 
                     */
                    bool SesTopicIdHasBeenSet() const;

                    /**
                     * 获取topic name
                     * @return SesTopicName topic name
                     * 
                     */
                    std::string GetSesTopicName() const;

                    /**
                     * 设置topic name
                     * @param _sesTopicName topic name
                     * 
                     */
                    void SetSesTopicName(const std::string& _sesTopicName);

                    /**
                     * 判断参数 SesTopicName 是否已赋值
                     * @return SesTopicName 是否已赋值
                     * 
                     */
                    bool SesTopicNameHasBeenSet() const;

                    /**
                     * 获取topic address
                     * @return SesTopicAddress topic address
                     * 
                     */
                    std::string GetSesTopicAddress() const;

                    /**
                     * 设置topic address
                     * @param _sesTopicAddress topic address
                     * 
                     */
                    void SetSesTopicAddress(const std::string& _sesTopicAddress);

                    /**
                     * 判断参数 SesTopicAddress 是否已赋值
                     * @return SesTopicAddress 是否已赋值
                     * 
                     */
                    bool SesTopicAddressHasBeenSet() const;

                    /**
                     * 获取/
                     * @return SesTopicUserName /
                     * 
                     */
                    std::string GetSesTopicUserName() const;

                    /**
                     * 设置/
                     * @param _sesTopicUserName /
                     * 
                     */
                    void SetSesTopicUserName(const std::string& _sesTopicUserName);

                    /**
                     * 判断参数 SesTopicUserName 是否已赋值
                     * @return SesTopicUserName 是否已赋值
                     * 
                     */
                    bool SesTopicUserNameHasBeenSet() const;

                    /**
                     * 获取/
                     * @return SesTopicPasswd /
                     * 
                     */
                    std::string GetSesTopicPasswd() const;

                    /**
                     * 设置/
                     * @param _sesTopicPasswd /
                     * 
                     */
                    void SetSesTopicPasswd(const std::string& _sesTopicPasswd);

                    /**
                     * 判断参数 SesTopicPasswd 是否已赋值
                     * @return SesTopicPasswd 是否已赋值
                     * 
                     */
                    bool SesTopicPasswdHasBeenSet() const;

                    /**
                     * 获取/
                     * @return LogstashListenPort /
                     * 
                     */
                    uint64_t GetLogstashListenPort() const;

                    /**
                     * 设置/
                     * @param _logstashListenPort /
                     * 
                     */
                    void SetLogstashListenPort(const uint64_t& _logstashListenPort);

                    /**
                     * 判断参数 LogstashListenPort 是否已赋值
                     * @return LogstashListenPort 是否已赋值
                     * 
                     */
                    bool LogstashListenPortHasBeenSet() const;

                private:

                    /**
                     * 采集器输出的实例类型（支持elasticsearch、logstash）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 采集器输出的实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 采集器输出到的ES实例的用户名
                     */
                    std::string m_eSUserName;
                    bool m_eSUserNameHasBeenSet;

                    /**
                     * 采集器输出到的ES实例的密码
                     */
                    std::string m_eSUserPasswd;
                    bool m_eSUserPasswdHasBeenSet;

                    /**
                     * 采集器输出到ES实例时，是否开启监控（1为开启，0为不开启，默认为0）
                     */
                    int64_t m_enableMonitoring;
                    bool m_enableMonitoringHasBeenSet;

                    /**
                     * 采集器输出到ES实例时，是否开启自动在kibana中生成Dashboard（1为开启，0为不开启，默认为0）
                     */
                    int64_t m_enableDashboard;
                    bool m_enableDashboardHasBeenSet;

                    /**
                     * Ckafka实例的vip
                     */
                    std::string m_kafkaEndpoint;
                    bool m_kafkaEndpointHasBeenSet;

                    /**
                     * Ckafka实例中的Topic
                     */
                    std::string m_kafkaTopic;
                    bool m_kafkaTopicHasBeenSet;

                    /**
                     * Ckafka实例的版本号
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * topic id
                     */
                    std::string m_sesTopicId;
                    bool m_sesTopicIdHasBeenSet;

                    /**
                     * topic name
                     */
                    std::string m_sesTopicName;
                    bool m_sesTopicNameHasBeenSet;

                    /**
                     * topic address
                     */
                    std::string m_sesTopicAddress;
                    bool m_sesTopicAddressHasBeenSet;

                    /**
                     * /
                     */
                    std::string m_sesTopicUserName;
                    bool m_sesTopicUserNameHasBeenSet;

                    /**
                     * /
                     */
                    std::string m_sesTopicPasswd;
                    bool m_sesTopicPasswdHasBeenSet;

                    /**
                     * /
                     */
                    uint64_t m_logstashListenPort;
                    bool m_logstashListenPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_COLLECTOROUTPUTINSTANCE_H_
