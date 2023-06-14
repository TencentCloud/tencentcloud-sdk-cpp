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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_LISTENER_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_LISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/HealthCheck.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 负载均衡监听器
                */
                class Listener : public AbstractModel
                {
                public:
                    Listener();
                    ~Listener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡监听器 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListenerId 负载均衡监听器 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listenerId 负载均衡监听器 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取监听器协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 监听器协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 监听器协议
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取监听器端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 监听器端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置监听器端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 监听器端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取监听器的健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheck 监听器的健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置监听器的健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheck 监听器的健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取请求的调度方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scheduler 请求的调度方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置请求的调度方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduler 请求的调度方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取会话保持时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionExpireTime 会话保持时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionExpireTime 会话保持时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     * 
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取监听器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListenerName 监听器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listenerName 监听器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取监听器的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 监听器的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置监听器的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 监听器的创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取监听器的会话类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionType 监听器的会话类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置监听器的会话类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionType 监听器的会话类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionType(const std::string& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     * 
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取端口段结束端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPort 端口段结束端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEndPort() const;

                    /**
                     * 设置端口段结束端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endPort 端口段结束端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndPort(const int64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     * 
                     */
                    bool EndPortHasBeenSet() const;

                private:

                    /**
                     * 负载均衡监听器 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 监听器的健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 请求的调度方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 会话保持时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 监听器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 监听器的会话类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * 端口段结束端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endPort;
                    bool m_endPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_LISTENER_H_
