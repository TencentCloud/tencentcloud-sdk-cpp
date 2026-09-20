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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CheckRechargeKafkaServer请求参数结构体
                */
                class CheckRechargeKafkaServerRequest : public AbstractModel
                {
                public:
                    CheckRechargeKafkaServerRequest();
                    ~CheckRechargeKafkaServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>导入Kafka类型，0: 腾讯云CKafka；1: 用户自建Kafka。</p>
                     * @return KafkaType <p>导入Kafka类型，0: 腾讯云CKafka；1: 用户自建Kafka。</p>
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置<p>导入Kafka类型，0: 腾讯云CKafka；1: 用户自建Kafka。</p>
                     * @param _kafkaType <p>导入Kafka类型，0: 腾讯云CKafka；1: 用户自建Kafka。</p>
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
                     * 获取<p>腾讯云CKafka实例ID。<br>KafkaType为0时，KafkaInstance必填</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/597/40835">获取实例列表信息</a> 获取实例id。</li></ul>
                     * @return KafkaInstance <p>腾讯云CKafka实例ID。<br>KafkaType为0时，KafkaInstance必填</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/597/40835">获取实例列表信息</a> 获取实例id。</li></ul>
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置<p>腾讯云CKafka实例ID。<br>KafkaType为0时，KafkaInstance必填</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/597/40835">获取实例列表信息</a> 获取实例id。</li></ul>
                     * @param _kafkaInstance <p>腾讯云CKafka实例ID。<br>KafkaType为0时，KafkaInstance必填</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/597/40835">获取实例列表信息</a> 获取实例id。</li></ul>
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
                     * 获取<p>服务地址。<br>KafkaType为1时，ServerAddr必填</p>
                     * @return ServerAddr <p>服务地址。<br>KafkaType为1时，ServerAddr必填</p>
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置<p>服务地址。<br>KafkaType为1时，ServerAddr必填</p>
                     * @param _serverAddr <p>服务地址。<br>KafkaType为1时，ServerAddr必填</p>
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
                     * 获取<p>ServerAddr是否为加密连接，默认值false。当KafkaType为1用户自建kafka时生效。</p>
                     * @return IsEncryptionAddr <p>ServerAddr是否为加密连接，默认值false。当KafkaType为1用户自建kafka时生效。</p>
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置<p>ServerAddr是否为加密连接，默认值false。当KafkaType为1用户自建kafka时生效。</p>
                     * @param _isEncryptionAddr <p>ServerAddr是否为加密连接，默认值false。当KafkaType为1用户自建kafka时生效。</p>
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
                     * 获取<p>加密访问协议。KafkaType参数为1并且IsEncryptionAddr参数为true时必填。</p>
                     * @return Protocol <p>加密访问协议。KafkaType参数为1并且IsEncryptionAddr参数为true时必填。</p>
                     * 
                     */
                    KafkaProtocolInfo GetProtocol() const;

                    /**
                     * 设置<p>加密访问协议。KafkaType参数为1并且IsEncryptionAddr参数为true时必填。</p>
                     * @param _protocol <p>加密访问协议。KafkaType参数为1并且IsEncryptionAddr参数为true时必填。</p>
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
                     * <p>导入Kafka类型，0: 腾讯云CKafka；1: 用户自建Kafka。</p>
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * <p>腾讯云CKafka实例ID。<br>KafkaType为0时，KafkaInstance必填</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/597/40835">获取实例列表信息</a> 获取实例id。</li></ul>
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * <p>服务地址。<br>KafkaType为1时，ServerAddr必填</p>
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * <p>ServerAddr是否为加密连接，默认值false。当KafkaType为1用户自建kafka时生效。</p>
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * <p>加密访问协议。KafkaType参数为1并且IsEncryptionAddr参数为true时必填。</p>
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHECKRECHARGEKAFKASERVERREQUEST_H_
