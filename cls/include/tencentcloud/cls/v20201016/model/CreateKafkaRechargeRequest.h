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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEKAFKARECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEKAFKARECHARGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/LogRechargeRuleInfo.h>
#include <tencentcloud/cls/v20201016/model/KafkaProtocolInfo.h>
#include <tencentcloud/cls/v20201016/model/NetworkInfo.h>
#include <tencentcloud/cls/v20201016/model/UserKafkaMeta.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateKafkaRecharge请求参数结构体
                */
                class CreateKafkaRechargeRequest : public AbstractModel
                {
                public:
                    CreateKafkaRechargeRequest();
                    ~CreateKafkaRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>导入CLS目标TopicId。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * @return TopicId <p>导入CLS目标TopicId。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>导入CLS目标TopicId。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * @param _topicId <p>导入CLS目标TopicId。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Kafka导入配置名称</p>
                     * @return Name <p>Kafka导入配置名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Kafka导入配置名称</p>
                     * @param _name <p>Kafka导入配置名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>导入Kafka类型，0: 腾讯云CKafka，1: 用户自建Kafka</p>
                     * @return KafkaType <p>导入Kafka类型，0: 腾讯云CKafka，1: 用户自建Kafka</p>
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置<p>导入Kafka类型，0: 腾讯云CKafka，1: 用户自建Kafka</p>
                     * @param _kafkaType <p>导入Kafka类型，0: 腾讯云CKafka，1: 用户自建Kafka</p>
                     * 
                     */
                    void SetKafkaType(const uint64_t& _kafkaType);

                    /**
                     * 判断参数 KafkaType 是否已赋值
                     * @return KafkaType 是否已赋值
                     * 
                     */
                    bool KafkaTypeHasBeenSet() const;

                    /**
                     * 获取<p>用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开</p>
                     * @return UserKafkaTopics <p>用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开</p>
                     * 
                     */
                    std::string GetUserKafkaTopics() const;

                    /**
                     * 设置<p>用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开</p>
                     * @param _userKafkaTopics <p>用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开</p>
                     * 
                     */
                    void SetUserKafkaTopics(const std::string& _userKafkaTopics);

                    /**
                     * 判断参数 UserKafkaTopics 是否已赋值
                     * @return UserKafkaTopics 是否已赋值
                     * 
                     */
                    bool UserKafkaTopicsHasBeenSet() const;

                    /**
                     * 获取<p>导入数据位置，-2:最早（默认），-1：最晚</p>
                     * @return Offset <p>导入数据位置，-2:最早（默认），-1：最晚</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>导入数据位置，-2:最早（默认），-1：最晚</p>
                     * @param _offset <p>导入数据位置，-2:最早（默认），-1：最晚</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>日志导入规则。</p>
                     * @return LogRechargeRule <p>日志导入规则。</p>
                     * 
                     */
                    LogRechargeRuleInfo GetLogRechargeRule() const;

                    /**
                     * 设置<p>日志导入规则。</p>
                     * @param _logRechargeRule <p>日志导入规则。</p>
                     * 
                     */
                    void SetLogRechargeRule(const LogRechargeRuleInfo& _logRechargeRule);

                    /**
                     * 判断参数 LogRechargeRule 是否已赋值
                     * @return LogRechargeRule 是否已赋值
                     * 
                     */
                    bool LogRechargeRuleHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云CKafka实例ID，KafkaType为0时必填。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/597/40835">获取实例列表信息</a> 获取实例id。</li></ul>
                     * @return KafkaInstance <p>腾讯云CKafka实例ID，KafkaType为0时必填。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/597/40835">获取实例列表信息</a> 获取实例id。</li></ul>
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置<p>腾讯云CKafka实例ID，KafkaType为0时必填。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/597/40835">获取实例列表信息</a> 获取实例id。</li></ul>
                     * @param _kafkaInstance <p>腾讯云CKafka实例ID，KafkaType为0时必填。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/597/40835">获取实例列表信息</a> 获取实例id。</li></ul>
                     * 
                     */
                    void SetKafkaInstance(const std::string& _kafkaInstance);

                    /**
                     * 判断参数 KafkaInstance 是否已赋值
                     * @return KafkaInstance 是否已赋值
                     * 
                     */
                    bool KafkaInstanceHasBeenSet() const;

                    /**
                     * 获取<p>服务地址，KafkaType为1时必填。</p>
                     * @return ServerAddr <p>服务地址，KafkaType为1时必填。</p>
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置<p>服务地址，KafkaType为1时必填。</p>
                     * @param _serverAddr <p>服务地址，KafkaType为1时必填。</p>
                     * 
                     */
                    void SetServerAddr(const std::string& _serverAddr);

                    /**
                     * 判断参数 ServerAddr 是否已赋值
                     * @return ServerAddr 是否已赋值
                     * 
                     */
                    bool ServerAddrHasBeenSet() const;

                    /**
                     * 获取<p>ServerAddr是否为加密连接，KafkaType为1时必填。</p>
                     * @return IsEncryptionAddr <p>ServerAddr是否为加密连接，KafkaType为1时必填。</p>
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置<p>ServerAddr是否为加密连接，KafkaType为1时必填。</p>
                     * @param _isEncryptionAddr <p>ServerAddr是否为加密连接，KafkaType为1时必填。</p>
                     * 
                     */
                    void SetIsEncryptionAddr(const bool& _isEncryptionAddr);

                    /**
                     * 判断参数 IsEncryptionAddr 是否已赋值
                     * @return IsEncryptionAddr 是否已赋值
                     * 
                     */
                    bool IsEncryptionAddrHasBeenSet() const;

                    /**
                     * 获取<p>加密访问协议。<br>KafkaType为1并且IsEncryptionAddr为true时Protocol必填。</p>
                     * @return Protocol <p>加密访问协议。<br>KafkaType为1并且IsEncryptionAddr为true时Protocol必填。</p>
                     * 
                     */
                    KafkaProtocolInfo GetProtocol() const;

                    /**
                     * 设置<p>加密访问协议。<br>KafkaType为1并且IsEncryptionAddr为true时Protocol必填。</p>
                     * @param _protocol <p>加密访问协议。<br>KafkaType为1并且IsEncryptionAddr为true时Protocol必填。</p>
                     * 
                     */
                    void SetProtocol(const KafkaProtocolInfo& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>用户Kafka消费组名称。</p><ul><li>消费组是 Kafka 提供的可扩展且具有容错性的消费者机制，一个消费组中存在多个消费者，组内的所有消费者共同消费订阅 Topic 中的消息。一个消费者可同时消费多个 Partition，但一个 Partition 只能被消费组内的一个消费者消费。</li></ul>
                     * @return ConsumerGroupName <p>用户Kafka消费组名称。</p><ul><li>消费组是 Kafka 提供的可扩展且具有容错性的消费者机制，一个消费组中存在多个消费者，组内的所有消费者共同消费订阅 Topic 中的消息。一个消费者可同时消费多个 Partition，但一个 Partition 只能被消费组内的一个消费者消费。</li></ul>
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置<p>用户Kafka消费组名称。</p><ul><li>消费组是 Kafka 提供的可扩展且具有容错性的消费者机制，一个消费组中存在多个消费者，组内的所有消费者共同消费订阅 Topic 中的消息。一个消费者可同时消费多个 Partition，但一个 Partition 只能被消费组内的一个消费者消费。</li></ul>
                     * @param _consumerGroupName <p>用户Kafka消费组名称。</p><ul><li>消费组是 Kafka 提供的可扩展且具有容错性的消费者机制，一个消费组中存在多个消费者，组内的所有消费者共同消费订阅 Topic 中的消息。一个消费者可同时消费多个 Partition，但一个 Partition 只能被消费组内的一个消费者消费。</li></ul>
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>网络信息参数</p>
                     * @return NetworkInfo <p>网络信息参数</p>
                     * 
                     */
                    NetworkInfo GetNetworkInfo() const;

                    /**
                     * 设置<p>网络信息参数</p>
                     * @param _networkInfo <p>网络信息参数</p>
                     * 
                     */
                    void SetNetworkInfo(const NetworkInfo& _networkInfo);

                    /**
                     * 判断参数 NetworkInfo 是否已赋值
                     * @return NetworkInfo 是否已赋值
                     * 
                     */
                    bool NetworkInfoHasBeenSet() const;

                    /**
                     * 获取<p>用户kafka拓展信息</p>
                     * @return UserKafkaMeta <p>用户kafka拓展信息</p>
                     * 
                     */
                    UserKafkaMeta GetUserKafkaMeta() const;

                    /**
                     * 设置<p>用户kafka拓展信息</p>
                     * @param _userKafkaMeta <p>用户kafka拓展信息</p>
                     * 
                     */
                    void SetUserKafkaMeta(const UserKafkaMeta& _userKafkaMeta);

                    /**
                     * 判断参数 UserKafkaMeta 是否已赋值
                     * @return UserKafkaMeta 是否已赋值
                     * 
                     */
                    bool UserKafkaMetaHasBeenSet() const;

                private:

                    /**
                     * <p>导入CLS目标TopicId。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Kafka导入配置名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>导入Kafka类型，0: 腾讯云CKafka，1: 用户自建Kafka</p>
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * <p>用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开</p>
                     */
                    std::string m_userKafkaTopics;
                    bool m_userKafkaTopicsHasBeenSet;

                    /**
                     * <p>导入数据位置，-2:最早（默认），-1：最晚</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>日志导入规则。</p>
                     */
                    LogRechargeRuleInfo m_logRechargeRule;
                    bool m_logRechargeRuleHasBeenSet;

                    /**
                     * <p>腾讯云CKafka实例ID，KafkaType为0时必填。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/597/40835">获取实例列表信息</a> 获取实例id。</li></ul>
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * <p>服务地址，KafkaType为1时必填。</p>
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * <p>ServerAddr是否为加密连接，KafkaType为1时必填。</p>
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * <p>加密访问协议。<br>KafkaType为1并且IsEncryptionAddr为true时Protocol必填。</p>
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>用户Kafka消费组名称。</p><ul><li>消费组是 Kafka 提供的可扩展且具有容错性的消费者机制，一个消费组中存在多个消费者，组内的所有消费者共同消费订阅 Topic 中的消息。一个消费者可同时消费多个 Partition，但一个 Partition 只能被消费组内的一个消费者消费。</li></ul>
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * <p>网络信息参数</p>
                     */
                    NetworkInfo m_networkInfo;
                    bool m_networkInfoHasBeenSet;

                    /**
                     * <p>用户kafka拓展信息</p>
                     */
                    UserKafkaMeta m_userKafkaMeta;
                    bool m_userKafkaMetaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEKAFKARECHARGEREQUEST_H_
