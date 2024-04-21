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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * PreviewKafkaRecharge请求参数结构体
                */
                class PreviewKafkaRechargeRequest : public AbstractModel
                {
                public:
                    PreviewKafkaRechargeRequest();
                    ~PreviewKafkaRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取预览类型，1：源数据预览；2：导出结果预览。
                     * @return PreviewType 预览类型，1：源数据预览；2：导出结果预览。
                     * 
                     */
                    uint64_t GetPreviewType() const;

                    /**
                     * 设置预览类型，1：源数据预览；2：导出结果预览。
                     * @param _previewType 预览类型，1：源数据预览；2：导出结果预览。
                     * 
                     */
                    void SetPreviewType(const uint64_t& _previewType);

                    /**
                     * 判断参数 PreviewType 是否已赋值
                     * @return PreviewType 是否已赋值
                     * 
                     */
                    bool PreviewTypeHasBeenSet() const;

                    /**
                     * 获取导入Kafka类型，0：腾讯云CKafka；1：用户自建Kafka。
                     * @return KafkaType 导入Kafka类型，0：腾讯云CKafka；1：用户自建Kafka。
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置导入Kafka类型，0：腾讯云CKafka；1：用户自建Kafka。
                     * @param _kafkaType 导入Kafka类型，0：腾讯云CKafka；1：用户自建Kafka。
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
                     * 获取用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开。
最多支持100个。
                     * @return UserKafkaTopics 用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开。
最多支持100个。
                     * 
                     */
                    std::string GetUserKafkaTopics() const;

                    /**
                     * 设置用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开。
最多支持100个。
                     * @param _userKafkaTopics 用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开。
最多支持100个。
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
                     * 获取导入数据位置，-2：最早；-1：最晚。
                     * @return Offset 导入数据位置，-2：最早；-1：最晚。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置导入数据位置，-2：最早；-1：最晚。
                     * @param _offset 导入数据位置，-2：最早；-1：最晚。
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
                     * 获取腾讯云CKafka实例ID，当KafkaType为0时参数KafkaInstance有效且必填。
                     * @return KafkaInstance 腾讯云CKafka实例ID，当KafkaType为0时参数KafkaInstance有效且必填。
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置腾讯云CKafka实例ID，当KafkaType为0时参数KafkaInstance有效且必填。
                     * @param _kafkaInstance 腾讯云CKafka实例ID，当KafkaType为0时参数KafkaInstance有效且必填。
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
                     * 获取服务地址。
KafkaType为1时ServerAddr必填。
                     * @return ServerAddr 服务地址。
KafkaType为1时ServerAddr必填。
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置服务地址。
KafkaType为1时ServerAddr必填。
                     * @param _serverAddr 服务地址。
KafkaType为1时ServerAddr必填。
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
                     * 获取ServerAddr是否为加密连接。
KafkaType为1时有效。
                     * @return IsEncryptionAddr ServerAddr是否为加密连接。
KafkaType为1时有效。
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置ServerAddr是否为加密连接。
KafkaType为1时有效。
                     * @param _isEncryptionAddr ServerAddr是否为加密连接。
KafkaType为1时有效。
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
                     * 获取加密访问协议。
KafkaType为1并且IsEncryptionAddr为true时Protocol必填。
                     * @return Protocol 加密访问协议。
KafkaType为1并且IsEncryptionAddr为true时Protocol必填。
                     * 
                     */
                    KafkaProtocolInfo GetProtocol() const;

                    /**
                     * 设置加密访问协议。
KafkaType为1并且IsEncryptionAddr为true时Protocol必填。
                     * @param _protocol 加密访问协议。
KafkaType为1并且IsEncryptionAddr为true时Protocol必填。
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
                     * 获取用户Kafka消费组
                     * @return ConsumerGroupName 用户Kafka消费组
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置用户Kafka消费组
                     * @param _consumerGroupName 用户Kafka消费组
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
                     * 预览类型，1：源数据预览；2：导出结果预览。
                     */
                    uint64_t m_previewType;
                    bool m_previewTypeHasBeenSet;

                    /**
                     * 导入Kafka类型，0：腾讯云CKafka；1：用户自建Kafka。
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * 用户需要导入的Kafka相关topic列表，多个topic之间使用半角逗号隔开。
最多支持100个。
                     */
                    std::string m_userKafkaTopics;
                    bool m_userKafkaTopicsHasBeenSet;

                    /**
                     * 导入数据位置，-2：最早；-1：最晚。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 腾讯云CKafka实例ID，当KafkaType为0时参数KafkaInstance有效且必填。
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * 服务地址。
KafkaType为1时ServerAddr必填。
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * ServerAddr是否为加密连接。
KafkaType为1时有效。
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * 加密访问协议。
KafkaType为1并且IsEncryptionAddr为true时Protocol必填。
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 用户Kafka消费组
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGEREQUEST_H_
