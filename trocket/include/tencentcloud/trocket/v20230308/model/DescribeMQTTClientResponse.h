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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTCLIENTRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTCLIENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/MQTTClientSubscription.h>
#include <tencentcloud/trocket/v20230308/model/StatisticsReport.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMQTTClient返回参数结构体
                */
                class DescribeMQTTClientResponse : public AbstractModel
                {
                public:
                    DescribeMQTTClientResponse();
                    ~DescribeMQTTClientResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端唯一标识
                     * @return ClientId 客户端唯一标识
                     * 
                     */
                    std::string GetClientId() const;

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
                     * 判断参数 ClientAddress 是否已赋值
                     * @return ClientAddress 是否已赋值
                     * 
                     */
                    bool ClientAddressHasBeenSet() const;

                    /**
                     * 获取MQTT 协议版本，4 表示 MQTT 3.1.1
                     * @return ProtocolVersion MQTT 协议版本，4 表示 MQTT 3.1.1
                     * 
                     */
                    int64_t GetProtocolVersion() const;

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
                     * 判断参数 ConnectionStatus 是否已赋值
                     * @return ConnectionStatus 是否已赋值
                     * 
                     */
                    bool ConnectionStatusHasBeenSet() const;

                    /**
                     * 获取客户端创建时间
                     * @return CreateTime 客户端创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取上次建立连接时间
                     * @return ConnectTime 上次建立连接时间
                     * 
                     */
                    int64_t GetConnectTime() const;

                    /**
                     * 判断参数 ConnectTime 是否已赋值
                     * @return ConnectTime 是否已赋值
                     * 
                     */
                    bool ConnectTimeHasBeenSet() const;

                    /**
                     * 获取上次断开连接时间，仅对持久会话（cleanSession=false）并且客户端当前未连接时有意义
                     * @return DisconnectTime 上次断开连接时间，仅对持久会话（cleanSession=false）并且客户端当前未连接时有意义
                     * 
                     */
                    int64_t GetDisconnectTime() const;

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
                     * 判断参数 MQTTClientSubscriptions 是否已赋值
                     * @return MQTTClientSubscriptions 是否已赋值
                     * 
                     */
                    bool MQTTClientSubscriptionsHasBeenSet() const;

                    /**
                     * 获取服务端到客户端的流量统计
                     * @return Inbound 服务端到客户端的流量统计
                     * 
                     */
                    StatisticsReport GetInbound() const;

                    /**
                     * 判断参数 Inbound 是否已赋值
                     * @return Inbound 是否已赋值
                     * 
                     */
                    bool InboundHasBeenSet() const;

                    /**
                     * 获取客户端到服务端的流量统计
                     * @return OutBound 客户端到服务端的流量统计
                     * 
                     */
                    StatisticsReport GetOutBound() const;

                    /**
                     * 判断参数 OutBound 是否已赋值
                     * @return OutBound 是否已赋值
                     * 
                     */
                    bool OutBoundHasBeenSet() const;

                    /**
                     * 获取cleansession标志
                     * @return CleanSession cleansession标志
                     * 
                     */
                    bool GetCleanSession() const;

                    /**
                     * 判断参数 CleanSession 是否已赋值
                     * @return CleanSession 是否已赋值
                     * 
                     */
                    bool CleanSessionHasBeenSet() const;

                private:

                    /**
                     * 客户端唯一标识
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 客户端网络地址
                     */
                    std::string m_clientAddress;
                    bool m_clientAddressHasBeenSet;

                    /**
                     * MQTT 协议版本，4 表示 MQTT 3.1.1
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
                     * 客户端创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 上次建立连接时间
                     */
                    int64_t m_connectTime;
                    bool m_connectTimeHasBeenSet;

                    /**
                     * 上次断开连接时间，仅对持久会话（cleanSession=false）并且客户端当前未连接时有意义
                     */
                    int64_t m_disconnectTime;
                    bool m_disconnectTimeHasBeenSet;

                    /**
                     * 客户端的订阅列表
                     */
                    std::vector<MQTTClientSubscription> m_mQTTClientSubscriptions;
                    bool m_mQTTClientSubscriptionsHasBeenSet;

                    /**
                     * 服务端到客户端的流量统计
                     */
                    StatisticsReport m_inbound;
                    bool m_inboundHasBeenSet;

                    /**
                     * 客户端到服务端的流量统计
                     */
                    StatisticsReport m_outBound;
                    bool m_outBoundHasBeenSet;

                    /**
                     * cleansession标志
                     */
                    bool m_cleanSession;
                    bool m_cleanSessionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTCLIENTRESPONSE_H_
