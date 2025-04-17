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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERCLIENT_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERCLIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 消费者客户端
                */
                class ConsumerClient : public AbstractModel
                {
                public:
                    ConsumerClient();
                    ~ConsumerClient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端ID
                     * @return ClientId 客户端ID
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端ID
                     * @param _clientId 客户端ID
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取客户端地址
                     * @return ClientAddr 客户端地址
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置客户端地址
                     * @param _clientAddr 客户端地址
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取客户端SDK语言
                     * @return Language 客户端SDK语言
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置客户端SDK语言
                     * @param _language 客户端SDK语言
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取客户端SDK版本
                     * @return Version 客户端SDK版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置客户端SDK版本
                     * @param _version 客户端SDK版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取客户端消费堆积
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerLag 客户端消费堆积
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConsumerLag() const;

                    /**
                     * 设置客户端消费堆积
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerLag 客户端消费堆积
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerLag(const int64_t& _consumerLag);

                    /**
                     * 判断参数 ConsumerLag 是否已赋值
                     * @return ConsumerLag 是否已赋值
                     * 
                     */
                    bool ConsumerLagHasBeenSet() const;

                    /**
                     * 获取消费者客户端类型（grpc；remoting；http）
                     * @return ChannelProtocol 消费者客户端类型（grpc；remoting；http）
                     * 
                     */
                    std::string GetChannelProtocol() const;

                    /**
                     * 设置消费者客户端类型（grpc；remoting；http）
                     * @param _channelProtocol 消费者客户端类型（grpc；remoting；http）
                     * 
                     */
                    void SetChannelProtocol(const std::string& _channelProtocol);

                    /**
                     * 判断参数 ChannelProtocol 是否已赋值
                     * @return ChannelProtocol 是否已赋值
                     * 
                     */
                    bool ChannelProtocolHasBeenSet() const;

                private:

                    /**
                     * 客户端ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 客户端地址
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * 客户端SDK语言
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 客户端SDK版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 客户端消费堆积
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_consumerLag;
                    bool m_consumerLagHasBeenSet;

                    /**
                     * 消费者客户端类型（grpc；remoting；http）
                     */
                    std::string m_channelProtocol;
                    bool m_channelProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERCLIENT_H_
