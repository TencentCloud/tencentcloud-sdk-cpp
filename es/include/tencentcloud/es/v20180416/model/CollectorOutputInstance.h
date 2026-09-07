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
                     * 获取<p>采集器输出的实例类型（支持elasticsearch、logstash）</p>
                     * @return Type <p>采集器输出的实例类型（支持elasticsearch、logstash）</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>采集器输出的实例类型（支持elasticsearch、logstash）</p>
                     * @param _type <p>采集器输出的实例类型（支持elasticsearch、logstash）</p>
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
                     * 获取<p>采集器输出的实例ID</p>
                     * @return InstanceId <p>采集器输出的实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>采集器输出的实例ID</p>
                     * @param _instanceId <p>采集器输出的实例ID</p>
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
                     * 获取<p>采集器输出到的ES实例的用户名</p>
                     * @return ESUserName <p>采集器输出到的ES实例的用户名</p>
                     * 
                     */
                    std::string GetESUserName() const;

                    /**
                     * 设置<p>采集器输出到的ES实例的用户名</p>
                     * @param _eSUserName <p>采集器输出到的ES实例的用户名</p>
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
                     * 获取<p>采集器输出到的ES实例的密码</p>
                     * @return ESUserPasswd <p>采集器输出到的ES实例的密码</p>
                     * 
                     */
                    std::string GetESUserPasswd() const;

                    /**
                     * 设置<p>采集器输出到的ES实例的密码</p>
                     * @param _eSUserPasswd <p>采集器输出到的ES实例的密码</p>
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
                     * 获取<p>采集器输出到ES实例时，是否开启监控（1为开启，0为不开启，默认为0）</p>
                     * @return EnableMonitoring <p>采集器输出到ES实例时，是否开启监控（1为开启，0为不开启，默认为0）</p>
                     * 
                     */
                    int64_t GetEnableMonitoring() const;

                    /**
                     * 设置<p>采集器输出到ES实例时，是否开启监控（1为开启，0为不开启，默认为0）</p>
                     * @param _enableMonitoring <p>采集器输出到ES实例时，是否开启监控（1为开启，0为不开启，默认为0）</p>
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
                     * 获取<p>采集器输出到ES实例时，是否开启自动在kibana中生成Dashboard（1为开启，0为不开启，默认为0）</p>
                     * @return EnableDashboard <p>采集器输出到ES实例时，是否开启自动在kibana中生成Dashboard（1为开启，0为不开启，默认为0）</p>
                     * 
                     */
                    int64_t GetEnableDashboard() const;

                    /**
                     * 设置<p>采集器输出到ES实例时，是否开启自动在kibana中生成Dashboard（1为开启，0为不开启，默认为0）</p>
                     * @param _enableDashboard <p>采集器输出到ES实例时，是否开启自动在kibana中生成Dashboard（1为开启，0为不开启，默认为0）</p>
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
                     * 获取<p>Ckafka实例的vip</p>
                     * @return KafkaEndpoint <p>Ckafka实例的vip</p>
                     * 
                     */
                    std::string GetKafkaEndpoint() const;

                    /**
                     * 设置<p>Ckafka实例的vip</p>
                     * @param _kafkaEndpoint <p>Ckafka实例的vip</p>
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
                     * 获取<p>Ckafka实例中的Topic</p>
                     * @return KafkaTopic <p>Ckafka实例中的Topic</p>
                     * 
                     */
                    std::string GetKafkaTopic() const;

                    /**
                     * 设置<p>Ckafka实例中的Topic</p>
                     * @param _kafkaTopic <p>Ckafka实例中的Topic</p>
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
                     * 获取<p>Ckafka实例的版本号</p>
                     * @return KafkaVersion <p>Ckafka实例的版本号</p>
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置<p>Ckafka实例的版本号</p>
                     * @param _kafkaVersion <p>Ckafka实例的版本号</p>
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
                     * 获取<p>topic id</p>
                     * @return SesTopicId <p>topic id</p>
                     * 
                     */
                    std::string GetSesTopicId() const;

                    /**
                     * 设置<p>topic id</p>
                     * @param _sesTopicId <p>topic id</p>
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
                     * 获取<p>topic name</p>
                     * @return SesTopicName <p>topic name</p>
                     * 
                     */
                    std::string GetSesTopicName() const;

                    /**
                     * 设置<p>topic name</p>
                     * @param _sesTopicName <p>topic name</p>
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
                     * 获取<p>topic address</p>
                     * @return SesTopicAddress <p>topic address</p>
                     * 
                     */
                    std::string GetSesTopicAddress() const;

                    /**
                     * 设置<p>topic address</p>
                     * @param _sesTopicAddress <p>topic address</p>
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
                     * 获取<p>/</p>
                     * @return SesTopicUserName <p>/</p>
                     * 
                     */
                    std::string GetSesTopicUserName() const;

                    /**
                     * 设置<p>/</p>
                     * @param _sesTopicUserName <p>/</p>
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
                     * 获取<p>/</p>
                     * @return SesTopicPasswd <p>/</p>
                     * 
                     */
                    std::string GetSesTopicPasswd() const;

                    /**
                     * 设置<p>/</p>
                     * @param _sesTopicPasswd <p>/</p>
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
                     * 获取<p>/</p>
                     * @return LogstashListenPort <p>/</p>
                     * 
                     */
                    uint64_t GetLogstashListenPort() const;

                    /**
                     * 设置<p>/</p>
                     * @param _logstashListenPort <p>/</p>
                     * 
                     */
                    void SetLogstashListenPort(const uint64_t& _logstashListenPort);

                    /**
                     * 判断参数 LogstashListenPort 是否已赋值
                     * @return LogstashListenPort 是否已赋值
                     * 
                     */
                    bool LogstashListenPortHasBeenSet() const;

                    /**
                     * 获取<p>serverless 的 spaceid</p>
                     * @return SesSpaceId <p>serverless 的 spaceid</p>
                     * 
                     */
                    std::string GetSesSpaceId() const;

                    /**
                     * 设置<p>serverless 的 spaceid</p>
                     * @param _sesSpaceId <p>serverless 的 spaceid</p>
                     * 
                     */
                    void SetSesSpaceId(const std::string& _sesSpaceId);

                    /**
                     * 判断参数 SesSpaceId 是否已赋值
                     * @return SesSpaceId 是否已赋值
                     * 
                     */
                    bool SesSpaceIdHasBeenSet() const;

                private:

                    /**
                     * <p>采集器输出的实例类型（支持elasticsearch、logstash）</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>采集器输出的实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>采集器输出到的ES实例的用户名</p>
                     */
                    std::string m_eSUserName;
                    bool m_eSUserNameHasBeenSet;

                    /**
                     * <p>采集器输出到的ES实例的密码</p>
                     */
                    std::string m_eSUserPasswd;
                    bool m_eSUserPasswdHasBeenSet;

                    /**
                     * <p>采集器输出到ES实例时，是否开启监控（1为开启，0为不开启，默认为0）</p>
                     */
                    int64_t m_enableMonitoring;
                    bool m_enableMonitoringHasBeenSet;

                    /**
                     * <p>采集器输出到ES实例时，是否开启自动在kibana中生成Dashboard（1为开启，0为不开启，默认为0）</p>
                     */
                    int64_t m_enableDashboard;
                    bool m_enableDashboardHasBeenSet;

                    /**
                     * <p>Ckafka实例的vip</p>
                     */
                    std::string m_kafkaEndpoint;
                    bool m_kafkaEndpointHasBeenSet;

                    /**
                     * <p>Ckafka实例中的Topic</p>
                     */
                    std::string m_kafkaTopic;
                    bool m_kafkaTopicHasBeenSet;

                    /**
                     * <p>Ckafka实例的版本号</p>
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * <p>topic id</p>
                     */
                    std::string m_sesTopicId;
                    bool m_sesTopicIdHasBeenSet;

                    /**
                     * <p>topic name</p>
                     */
                    std::string m_sesTopicName;
                    bool m_sesTopicNameHasBeenSet;

                    /**
                     * <p>topic address</p>
                     */
                    std::string m_sesTopicAddress;
                    bool m_sesTopicAddressHasBeenSet;

                    /**
                     * <p>/</p>
                     */
                    std::string m_sesTopicUserName;
                    bool m_sesTopicUserNameHasBeenSet;

                    /**
                     * <p>/</p>
                     */
                    std::string m_sesTopicPasswd;
                    bool m_sesTopicPasswdHasBeenSet;

                    /**
                     * <p>/</p>
                     */
                    uint64_t m_logstashListenPort;
                    bool m_logstashListenPortHasBeenSet;

                    /**
                     * <p>serverless 的 spaceid</p>
                     */
                    std::string m_sesSpaceId;
                    bool m_sesSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_COLLECTOROUTPUTINSTANCE_H_
