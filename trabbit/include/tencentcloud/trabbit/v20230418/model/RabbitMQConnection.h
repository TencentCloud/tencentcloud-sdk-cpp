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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONNECTION_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * RabbitMQ连接详情
                */
                class RabbitMQConnection : public AbstractModel
                {
                public:
                    RabbitMQConnection();
                    ~RabbitMQConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接名称
                     * @return ConnectionName 连接名称
                     * 
                     */
                    std::string GetConnectionName() const;

                    /**
                     * 设置连接名称
                     * @param _connectionName 连接名称
                     * 
                     */
                    void SetConnectionName(const std::string& _connectionName);

                    /**
                     * 判断参数 ConnectionName 是否已赋值
                     * @return ConnectionName 是否已赋值
                     * 
                     */
                    bool ConnectionNameHasBeenSet() const;

                    /**
                     * 获取客户端ip
                     * @return PeerHost 客户端ip
                     * 
                     */
                    std::string GetPeerHost() const;

                    /**
                     * 设置客户端ip
                     * @param _peerHost 客户端ip
                     * 
                     */
                    void SetPeerHost(const std::string& _peerHost);

                    /**
                     * 判断参数 PeerHost 是否已赋值
                     * @return PeerHost 是否已赋值
                     * 
                     */
                    bool PeerHostHasBeenSet() const;

                    /**
                     * 获取连接状态，包括 starting、tuning、opening、running、flow、blocking、blocked、closing 和 closed
                     * @return State 连接状态，包括 starting、tuning、opening、running、flow、blocking、blocked、closing 和 closed
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置连接状态，包括 starting、tuning、opening、running、flow、blocking、blocked、closing 和 closed
                     * @param _state 连接状态，包括 starting、tuning、opening、running、flow、blocking、blocked、closing 和 closed
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取连接使用用户
                     * @return User 连接使用用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置连接使用用户
                     * @param _user 连接使用用户
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取是否开启ssl
                     * @return SSL 是否开启ssl
                     * 
                     */
                    bool GetSSL() const;

                    /**
                     * 设置是否开启ssl
                     * @param _sSL 是否开启ssl
                     * 
                     */
                    void SetSSL(const bool& _sSL);

                    /**
                     * 判断参数 SSL 是否已赋值
                     * @return SSL 是否已赋值
                     * 
                     */
                    bool SSLHasBeenSet() const;

                    /**
                     * 获取连接协议
                     * @return Protocol 连接协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置连接协议
                     * @param _protocol 连接协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取连接下的channel数
                     * @return Channels 连接下的channel数
                     * 
                     */
                    int64_t GetChannels() const;

                    /**
                     * 设置连接下的channel数
                     * @param _channels 连接下的channel数
                     * 
                     */
                    void SetChannels(const int64_t& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                private:

                    /**
                     * 连接名称
                     */
                    std::string m_connectionName;
                    bool m_connectionNameHasBeenSet;

                    /**
                     * 客户端ip
                     */
                    std::string m_peerHost;
                    bool m_peerHostHasBeenSet;

                    /**
                     * 连接状态，包括 starting、tuning、opening、running、flow、blocking、blocked、closing 和 closed
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 连接使用用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 是否开启ssl
                     */
                    bool m_sSL;
                    bool m_sSLHasBeenSet;

                    /**
                     * 连接协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 连接下的channel数
                     */
                    int64_t m_channels;
                    bool m_channelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONNECTION_H_
