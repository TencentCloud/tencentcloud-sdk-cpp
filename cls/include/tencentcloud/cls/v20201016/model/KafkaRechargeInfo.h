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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_KAFKARECHARGEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_KAFKARECHARGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/KafkaProtocolInfo.h>
#include <tencentcloud/cls/v20201016/model/LogRechargeRuleInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Kafka导入配置信息
                */
                class KafkaRechargeInfo : public AbstractModel
                {
                public:
                    KafkaRechargeInfo();
                    ~KafkaRechargeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Kafka数据订阅配置的ID。
                     * @return Id Kafka数据订阅配置的ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Kafka数据订阅配置的ID。
                     * @param _id Kafka数据订阅配置的ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _topicId 日志主题ID
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
                     * 获取Kafka导入任务名称
                     * @return Name Kafka导入任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Kafka导入任务名称
                     * @param _name Kafka导入任务名称
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
                     * 获取导入Kafka类型，0: 腾讯云CKafka，1: 用户自建Kafka
                     * @return KafkaType 导入Kafka类型，0: 腾讯云CKafka，1: 用户自建Kafka
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置导入Kafka类型，0: 腾讯云CKafka，1: 用户自建Kafka
                     * @param _kafkaType 导入Kafka类型，0: 腾讯云CKafka，1: 用户自建Kafka
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
                     * 获取腾讯云CKafka实例ID，KafkaType为0时必填
                     * @return KafkaInstance 腾讯云CKafka实例ID，KafkaType为0时必填
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置腾讯云CKafka实例ID，KafkaType为0时必填
                     * @param _kafkaInstance 腾讯云CKafka实例ID，KafkaType为0时必填
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
                     * 获取服务地址
                     * @return ServerAddr 服务地址
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置服务地址
                     * @param _serverAddr 服务地址
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
                     * 获取ServerAddr是否为加密连接	
                     * @return IsEncryptionAddr ServerAddr是否为加密连接	
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置ServerAddr是否为加密连接	
                     * @param _isEncryptionAddr ServerAddr是否为加密连接	
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
                     * 获取加密访问协议，IsEncryptionAddr参数为true时必填
                     * @return Protocol 加密访问协议，IsEncryptionAddr参数为true时必填
                     * 
                     */
                    KafkaProtocolInfo GetProtocol() const;

                    /**
                     * 设置加密访问协议，IsEncryptionAddr参数为true时必填
                     * @param _protocol 加密访问协议，IsEncryptionAddr参数为true时必填
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
                     * 获取用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开
                     * @return UserKafkaTopics 用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开
                     * 
                     */
                    std::string GetUserKafkaTopics() const;

                    /**
                     * 设置用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开
                     * @param _userKafkaTopics 用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开
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
                     * 获取用户Kafka消费组名称	
                     * @return ConsumerGroupName 用户Kafka消费组名称	
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置用户Kafka消费组名称	
                     * @param _consumerGroupName 用户Kafka消费组名称	
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
                     * 获取状态 ，1：运行中；2：暂停。
                     * @return Status 状态 ，1：运行中；2：暂停。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 ，1：运行中；2：暂停。
                     * @param _status 状态 ，1：运行中；2：暂停。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取导入数据位置，-2:最早（默认），-1：最晚
                     * @return Offset 导入数据位置，-2:最早（默认），-1：最晚
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置导入数据位置，-2:最早（默认），-1：最晚
                     * @param _offset 导入数据位置，-2:最早（默认），-1：最晚
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取日志导入规则
                     * @return LogRechargeRule 日志导入规则
                     * 
                     */
                    LogRechargeRuleInfo GetLogRechargeRule() const;

                    /**
                     * 设置日志导入规则
                     * @param _logRechargeRule 日志导入规则
                     * 
                     */
                    void SetLogRechargeRule(const LogRechargeRuleInfo& _logRechargeRule);

                    /**
                     * 判断参数 LogRechargeRule 是否已赋值
                     * @return LogRechargeRule 是否已赋值
                     * 
                     */
                    bool LogRechargeRuleHasBeenSet() const;

                private:

                    /**
                     * Kafka数据订阅配置的ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Kafka导入任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 导入Kafka类型，0: 腾讯云CKafka，1: 用户自建Kafka
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * 腾讯云CKafka实例ID，KafkaType为0时必填
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * 服务地址
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * ServerAddr是否为加密连接	
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * 加密访问协议，IsEncryptionAddr参数为true时必填
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开
                     */
                    std::string m_userKafkaTopics;
                    bool m_userKafkaTopicsHasBeenSet;

                    /**
                     * 用户Kafka消费组名称	
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * 状态 ，1：运行中；2：暂停。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 导入数据位置，-2:最早（默认），-1：最晚
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 日志导入规则
                     */
                    LogRechargeRuleInfo m_logRechargeRule;
                    bool m_logRechargeRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KAFKARECHARGEINFO_H_
