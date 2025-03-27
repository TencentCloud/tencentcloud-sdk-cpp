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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTCLIENTINFO_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTCLIENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/MQTTClientSubscription.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MQTT客户端信息
                */
                class MQTTClientInfo : public AbstractModel
                {
                public:
                    MQTTClientInfo();
                    ~MQTTClientInfo() = default;
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
                     * 获取客户端网络地址
                     * @return ClientAddress 客户端网络地址
                     * 
                     */
                    std::string GetClientAddress() const;

                    /**
                     * 设置客户端网络地址
                     * @param _clientAddress 客户端网络地址
                     * 
                     */
                    void SetClientAddress(const std::string& _clientAddress);

                    /**
                     * 判断参数 ClientAddress 是否已赋值
                     * @return ClientAddress 是否已赋值
                     * 
                     */
                    bool ClientAddressHasBeenSet() const;

                    /**
                     * 获取MQTT 协议版本
3：表示MQTT 3.1版本
4：表示 MQTT 3.1.1
5：表示MQTT 5.0协议
                     * @return ProtocolVersion MQTT 协议版本
3：表示MQTT 3.1版本
4：表示 MQTT 3.1.1
5：表示MQTT 5.0协议
                     * 
                     */
                    int64_t GetProtocolVersion() const;

                    /**
                     * 设置MQTT 协议版本
3：表示MQTT 3.1版本
4：表示 MQTT 3.1.1
5：表示MQTT 5.0协议
                     * @param _protocolVersion MQTT 协议版本
3：表示MQTT 3.1版本
4：表示 MQTT 3.1.1
5：表示MQTT 5.0协议
                     * 
                     */
                    void SetProtocolVersion(const int64_t& _protocolVersion);

                    /**
                     * 判断参数 ProtocolVersion 是否已赋值
                     * @return ProtocolVersion 是否已赋值
                     * 
                     */
                    bool ProtocolVersionHasBeenSet() const;

                    /**
                     * 获取保持连接时间，单位：秒
                     * @return Keepalive 保持连接时间，单位：秒
                     * 
                     */
                    int64_t GetKeepalive() const;

                    /**
                     * 设置保持连接时间，单位：秒
                     * @param _keepalive 保持连接时间，单位：秒
                     * 
                     */
                    void SetKeepalive(const int64_t& _keepalive);

                    /**
                     * 判断参数 Keepalive 是否已赋值
                     * @return Keepalive 是否已赋值
                     * 
                     */
                    bool KeepaliveHasBeenSet() const;

                    /**
                     * 获取连接状态，CONNECTED 已连接，DISCONNECTED 未连接
                     * @return ConnectionStatus 连接状态，CONNECTED 已连接，DISCONNECTED 未连接
                     * 
                     */
                    std::string GetConnectionStatus() const;

                    /**
                     * 设置连接状态，CONNECTED 已连接，DISCONNECTED 未连接
                     * @param _connectionStatus 连接状态，CONNECTED 已连接，DISCONNECTED 未连接
                     * 
                     */
                    void SetConnectionStatus(const std::string& _connectionStatus);

                    /**
                     * 判断参数 ConnectionStatus 是否已赋值
                     * @return ConnectionStatus 是否已赋值
                     * 
                     */
                    bool ConnectionStatusHasBeenSet() const;

                    /**
                     * 获取客户端创建时间，毫秒级时间戳 。
                     * @return CreateTime 客户端创建时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置客户端创建时间，毫秒级时间戳 。
                     * @param _createTime 客户端创建时间，毫秒级时间戳 。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取上次建立连接时间，毫秒级时间戳 。
                     * @return ConnectTime 上次建立连接时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetConnectTime() const;

                    /**
                     * 设置上次建立连接时间，毫秒级时间戳 。
                     * @param _connectTime 上次建立连接时间，毫秒级时间戳 。
                     * 
                     */
                    void SetConnectTime(const int64_t& _connectTime);

                    /**
                     * 判断参数 ConnectTime 是否已赋值
                     * @return ConnectTime 是否已赋值
                     * 
                     */
                    bool ConnectTimeHasBeenSet() const;

                    /**
                     * 获取上次断开连接时间，仅对持久会话（cleanSession=false）并且客户端当前未连接时有意义，毫秒级时间戳 。
                     * @return DisconnectTime 上次断开连接时间，仅对持久会话（cleanSession=false）并且客户端当前未连接时有意义，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetDisconnectTime() const;

                    /**
                     * 设置上次断开连接时间，仅对持久会话（cleanSession=false）并且客户端当前未连接时有意义，毫秒级时间戳 。
                     * @param _disconnectTime 上次断开连接时间，仅对持久会话（cleanSession=false）并且客户端当前未连接时有意义，毫秒级时间戳 。
                     * 
                     */
                    void SetDisconnectTime(const int64_t& _disconnectTime);

                    /**
                     * 判断参数 DisconnectTime 是否已赋值
                     * @return DisconnectTime 是否已赋值
                     * 
                     */
                    bool DisconnectTimeHasBeenSet() const;

                    /**
                     * 获取客户端的订阅列表
                     * @return MQTTClientSubscriptions 客户端的订阅列表
                     * 
                     */
                    std::vector<MQTTClientSubscription> GetMQTTClientSubscriptions() const;

                    /**
                     * 设置客户端的订阅列表
                     * @param _mQTTClientSubscriptions 客户端的订阅列表
                     * 
                     */
                    void SetMQTTClientSubscriptions(const std::vector<MQTTClientSubscription>& _mQTTClientSubscriptions);

                    /**
                     * 判断参数 MQTTClientSubscriptions 是否已赋值
                     * @return MQTTClientSubscriptions 是否已赋值
                     * 
                     */
                    bool MQTTClientSubscriptionsHasBeenSet() const;

                private:

                    /**
                     * 客户端ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 客户端网络地址
                     */
                    std::string m_clientAddress;
                    bool m_clientAddressHasBeenSet;

                    /**
                     * MQTT 协议版本
3：表示MQTT 3.1版本
4：表示 MQTT 3.1.1
5：表示MQTT 5.0协议
                     */
                    int64_t m_protocolVersion;
                    bool m_protocolVersionHasBeenSet;

                    /**
                     * 保持连接时间，单位：秒
                     */
                    int64_t m_keepalive;
                    bool m_keepaliveHasBeenSet;

                    /**
                     * 连接状态，CONNECTED 已连接，DISCONNECTED 未连接
                     */
                    std::string m_connectionStatus;
                    bool m_connectionStatusHasBeenSet;

                    /**
                     * 客户端创建时间，毫秒级时间戳 。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 上次建立连接时间，毫秒级时间戳 。
                     */
                    int64_t m_connectTime;
                    bool m_connectTimeHasBeenSet;

                    /**
                     * 上次断开连接时间，仅对持久会话（cleanSession=false）并且客户端当前未连接时有意义，毫秒级时间戳 。
                     */
                    int64_t m_disconnectTime;
                    bool m_disconnectTimeHasBeenSet;

                    /**
                     * 客户端的订阅列表
                     */
                    std::vector<MQTTClientSubscription> m_mQTTClientSubscriptions;
                    bool m_mQTTClientSubscriptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTCLIENTINFO_H_
