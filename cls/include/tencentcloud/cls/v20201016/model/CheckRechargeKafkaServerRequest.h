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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/KafkaProtocolInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CheckRechargeKafkaServer请求参数结构体
                */
                class CheckRechargeKafkaServerRequest : public AbstractModel
                {
                public:
                    CheckRechargeKafkaServerRequest();
                    ~CheckRechargeKafkaServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导入Kafka类型，0: 腾讯云CKafka；1: 用户自建Kafka。
                     * @return KafkaType 导入Kafka类型，0: 腾讯云CKafka；1: 用户自建Kafka。
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置导入Kafka类型，0: 腾讯云CKafka；1: 用户自建Kafka。
                     * @param _kafkaType 导入Kafka类型，0: 腾讯云CKafka；1: 用户自建Kafka。
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
                     * 获取腾讯云CKafka实例ID。
KafkaType为0时，KafkaInstance必填
                     * @return KafkaInstance 腾讯云CKafka实例ID。
KafkaType为0时，KafkaInstance必填
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置腾讯云CKafka实例ID。
KafkaType为0时，KafkaInstance必填
                     * @param _kafkaInstance 腾讯云CKafka实例ID。
KafkaType为0时，KafkaInstance必填
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
KafkaType为1时，ServerAddr必填
                     * @return ServerAddr 服务地址。
KafkaType为1时，ServerAddr必填
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置服务地址。
KafkaType为1时，ServerAddr必填
                     * @param _serverAddr 服务地址。
KafkaType为1时，ServerAddr必填
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
                     * 获取ServerAddr是否为加密连接，默认值false。当KafkaType为1用户自建kafka时生效。
                     * @return IsEncryptionAddr ServerAddr是否为加密连接，默认值false。当KafkaType为1用户自建kafka时生效。
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置ServerAddr是否为加密连接，默认值false。当KafkaType为1用户自建kafka时生效。
                     * @param _isEncryptionAddr ServerAddr是否为加密连接，默认值false。当KafkaType为1用户自建kafka时生效。
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
                     * 获取加密访问协议。KafkaType参数为1并且IsEncryptionAddr参数为true时必填。
                     * @return Protocol 加密访问协议。KafkaType参数为1并且IsEncryptionAddr参数为true时必填。
                     * 
                     */
                    KafkaProtocolInfo GetProtocol() const;

                    /**
                     * 设置加密访问协议。KafkaType参数为1并且IsEncryptionAddr参数为true时必填。
                     * @param _protocol 加密访问协议。KafkaType参数为1并且IsEncryptionAddr参数为true时必填。
                     * 
                     */
                    void SetProtocol(const KafkaProtocolInfo& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * 导入Kafka类型，0: 腾讯云CKafka；1: 用户自建Kafka。
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * 腾讯云CKafka实例ID。
KafkaType为0时，KafkaInstance必填
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * 服务地址。
KafkaType为1时，ServerAddr必填
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * ServerAddr是否为加密连接，默认值false。当KafkaType为1用户自建kafka时生效。
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * 加密访问协议。KafkaType参数为1并且IsEncryptionAddr参数为true时必填。
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERREQUEST_H_
