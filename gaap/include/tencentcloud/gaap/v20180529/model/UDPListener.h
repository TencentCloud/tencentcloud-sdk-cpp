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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_UDPLISTENER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_UDPLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/BindRealServer.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * UDP类型监听器信息
                */
                class UDPListener : public AbstractModel
                {
                public:
                    UDPListener();
                    ~UDPListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param _listenerId 监听器ID
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
                     * 获取监听器名称
                     * @return ListenerName 监听器名称
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称
                     * @param _listenerName 监听器名称
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
                     * 获取监听器端口
                     * @return Port 监听器端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置监听器端口
                     * @param _port 监听器端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取监听器转发源站端口，仅V1版本通道或通道组监听器有效
                     * @return RealServerPort 监听器转发源站端口，仅V1版本通道或通道组监听器有效
                     * 
                     */
                    uint64_t GetRealServerPort() const;

                    /**
                     * 设置监听器转发源站端口，仅V1版本通道或通道组监听器有效
                     * @param _realServerPort 监听器转发源站端口，仅V1版本通道或通道组监听器有效
                     * 
                     */
                    void SetRealServerPort(const uint64_t& _realServerPort);

                    /**
                     * 判断参数 RealServerPort 是否已赋值
                     * @return RealServerPort 是否已赋值
                     * 
                     */
                    bool RealServerPortHasBeenSet() const;

                    /**
                     * 获取监听器绑定源站类型
                     * @return RealServerType 监听器绑定源站类型
                     * 
                     */
                    std::string GetRealServerType() const;

                    /**
                     * 设置监听器绑定源站类型
                     * @param _realServerType 监听器绑定源站类型
                     * 
                     */
                    void SetRealServerType(const std::string& _realServerType);

                    /**
                     * 判断参数 RealServerType 是否已赋值
                     * @return RealServerType 是否已赋值
                     * 
                     */
                    bool RealServerTypeHasBeenSet() const;

                    /**
                     * 获取监听器协议， UDP
                     * @return Protocol 监听器协议， UDP
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议， UDP
                     * @param _protocol 监听器协议， UDP
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
                     * 获取监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     * @return ListenerStatus 监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     * 
                     */
                    uint64_t GetListenerStatus() const;

                    /**
                     * 设置监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     * @param _listenerStatus 监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     * 
                     */
                    void SetListenerStatus(const uint64_t& _listenerStatus);

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     * 
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
                     * @return Scheduler 监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
                     * @param _scheduler 监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
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
                     * 获取监听器绑定源站状态， 0表示正常，1表示IP异常，2表示域名解析异常
                     * @return BindStatus 监听器绑定源站状态， 0表示正常，1表示IP异常，2表示域名解析异常
                     * 
                     */
                    uint64_t GetBindStatus() const;

                    /**
                     * 设置监听器绑定源站状态， 0表示正常，1表示IP异常，2表示域名解析异常
                     * @param _bindStatus 监听器绑定源站状态， 0表示正常，1表示IP异常，2表示域名解析异常
                     * 
                     */
                    void SetBindStatus(const uint64_t& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取监听器绑定的源站信息
                     * @return RealServerSet 监听器绑定的源站信息
                     * 
                     */
                    std::vector<BindRealServer> GetRealServerSet() const;

                    /**
                     * 设置监听器绑定的源站信息
                     * @param _realServerSet 监听器绑定的源站信息
                     * 
                     */
                    void SetRealServerSet(const std::vector<BindRealServer>& _realServerSet);

                    /**
                     * 判断参数 RealServerSet 是否已赋值
                     * @return RealServerSet 是否已赋值
                     * 
                     */
                    bool RealServerSetHasBeenSet() const;

                    /**
                     * 获取监听器创建时间，Unix时间戳
                     * @return CreateTime 监听器创建时间，Unix时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置监听器创建时间，Unix时间戳
                     * @param _createTime 监听器创建时间，Unix时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取是否开启会话保持选项：0关闭， 非0开启，非0值为会话保持时间
                     * @return SessionPersist 是否开启会话保持选项：0关闭， 非0开启，非0值为会话保持时间
                     * 
                     */
                    uint64_t GetSessionPersist() const;

                    /**
                     * 设置是否开启会话保持选项：0关闭， 非0开启，非0值为会话保持时间
                     * @param _sessionPersist 是否开启会话保持选项：0关闭， 非0开启，非0值为会话保持时间
                     * 
                     */
                    void SetSessionPersist(const uint64_t& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     * 
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     * @return DelayLoop 源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     * 
                     */
                    uint64_t GetDelayLoop() const;

                    /**
                     * 设置源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     * @param _delayLoop 源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     * 
                     */
                    void SetDelayLoop(const uint64_t& _delayLoop);

                    /**
                     * 判断参数 DelayLoop 是否已赋值
                     * @return DelayLoop 是否已赋值
                     * 
                     */
                    bool DelayLoopHasBeenSet() const;

                    /**
                     * 获取源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     * @return ConnectTimeout 源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     * 
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     * @param _connectTimeout 源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     * 
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     * 
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取健康阈值，表示连续检查成功多少次后认定源站健康。范围为1到10
                     * @return HealthyThreshold 健康阈值，表示连续检查成功多少次后认定源站健康。范围为1到10
                     * 
                     */
                    uint64_t GetHealthyThreshold() const;

                    /**
                     * 设置健康阈值，表示连续检查成功多少次后认定源站健康。范围为1到10
                     * @param _healthyThreshold 健康阈值，表示连续检查成功多少次后认定源站健康。范围为1到10
                     * 
                     */
                    void SetHealthyThreshold(const uint64_t& _healthyThreshold);

                    /**
                     * 判断参数 HealthyThreshold 是否已赋值
                     * @return HealthyThreshold 是否已赋值
                     * 
                     */
                    bool HealthyThresholdHasBeenSet() const;

                    /**
                     * 获取不健康阈值，表示连续检查失败多少次数后认为源站不健康。范围为1到10
                     * @return UnhealthyThreshold 不健康阈值，表示连续检查失败多少次数后认为源站不健康。范围为1到10
                     * 
                     */
                    uint64_t GetUnhealthyThreshold() const;

                    /**
                     * 设置不健康阈值，表示连续检查失败多少次数后认为源站不健康。范围为1到10
                     * @param _unhealthyThreshold 不健康阈值，表示连续检查失败多少次数后认为源站不健康。范围为1到10
                     * 
                     */
                    void SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold);

                    /**
                     * 判断参数 UnhealthyThreshold 是否已赋值
                     * @return UnhealthyThreshold 是否已赋值
                     * 
                     */
                    bool UnhealthyThresholdHasBeenSet() const;

                    /**
                     * 获取源站是否开启主备模式：1开启，0关闭，DOMAIN类型源站不支持开启
                     * @return FailoverSwitch 源站是否开启主备模式：1开启，0关闭，DOMAIN类型源站不支持开启
                     * 
                     */
                    int64_t GetFailoverSwitch() const;

                    /**
                     * 设置源站是否开启主备模式：1开启，0关闭，DOMAIN类型源站不支持开启
                     * @param _failoverSwitch 源站是否开启主备模式：1开启，0关闭，DOMAIN类型源站不支持开启
                     * 
                     */
                    void SetFailoverSwitch(const int64_t& _failoverSwitch);

                    /**
                     * 判断参数 FailoverSwitch 是否已赋值
                     * @return FailoverSwitch 是否已赋值
                     * 
                     */
                    bool FailoverSwitchHasBeenSet() const;

                    /**
                     * 获取源站是否开启健康检查：1开启，0关闭。
                     * @return HealthCheck 源站是否开启健康检查：1开启，0关闭。
                     * 
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置源站是否开启健康检查：1开启，0关闭。
                     * @param _healthCheck 源站是否开启健康检查：1开启，0关闭。
                     * 
                     */
                    void SetHealthCheck(const uint64_t& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取UDP源站健康类型。PORT表示检查端口，PING表示PING。
                     * @return CheckType UDP源站健康类型。PORT表示检查端口，PING表示PING。
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置UDP源站健康类型。PORT表示检查端口，PING表示PING。
                     * @param _checkType UDP源站健康类型。PORT表示检查端口，PING表示PING。
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取UDP源站健康检查探测端口。
                     * @return CheckPort UDP源站健康检查探测端口。
                     * 
                     */
                    int64_t GetCheckPort() const;

                    /**
                     * 设置UDP源站健康检查探测端口。
                     * @param _checkPort UDP源站健康检查探测端口。
                     * 
                     */
                    void SetCheckPort(const int64_t& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     * 
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取UDP源站健康检查端口探测报文类型：TEXT表示文本。仅在健康检查类型为PORT时使用。
                     * @return ContextType UDP源站健康检查端口探测报文类型：TEXT表示文本。仅在健康检查类型为PORT时使用。
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置UDP源站健康检查端口探测报文类型：TEXT表示文本。仅在健康检查类型为PORT时使用。
                     * @param _contextType UDP源站健康检查端口探测报文类型：TEXT表示文本。仅在健康检查类型为PORT时使用。
                     * 
                     */
                    void SetContextType(const std::string& _contextType);

                    /**
                     * 判断参数 ContextType 是否已赋值
                     * @return ContextType 是否已赋值
                     * 
                     */
                    bool ContextTypeHasBeenSet() const;

                    /**
                     * 获取UDP源站健康检查端口探测发送报文。仅在健康检查类型为PORT时使用。
                     * @return SendContext UDP源站健康检查端口探测发送报文。仅在健康检查类型为PORT时使用。
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置UDP源站健康检查端口探测发送报文。仅在健康检查类型为PORT时使用。
                     * @param _sendContext UDP源站健康检查端口探测发送报文。仅在健康检查类型为PORT时使用。
                     * 
                     */
                    void SetSendContext(const std::string& _sendContext);

                    /**
                     * 判断参数 SendContext 是否已赋值
                     * @return SendContext 是否已赋值
                     * 
                     */
                    bool SendContextHasBeenSet() const;

                    /**
                     * 获取UDP源站健康检查端口探测接收报文。仅在健康检查类型为PORT时使用。
                     * @return RecvContext UDP源站健康检查端口探测接收报文。仅在健康检查类型为PORT时使用。
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置UDP源站健康检查端口探测接收报文。仅在健康检查类型为PORT时使用。
                     * @param _recvContext UDP源站健康检查端口探测接收报文。仅在健康检查类型为PORT时使用。
                     * 
                     */
                    void SetRecvContext(const std::string& _recvContext);

                    /**
                     * 判断参数 RecvContext 是否已赋值
                     * @return RecvContext 是否已赋值
                     * 
                     */
                    bool RecvContextHasBeenSet() const;

                    /**
                     * 获取监听器的通道ID，如果监听器属于通道组，则为null
                     * @return ProxyId 监听器的通道ID，如果监听器属于通道组，则为null
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置监听器的通道ID，如果监听器属于通道组，则为null
                     * @param _proxyId 监听器的通道ID，如果监听器属于通道组，则为null
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取监听器的通道组ID，如果监听器属于通道，则为null
                     * @return GroupId 监听器的通道组ID，如果监听器属于通道，则为null
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置监听器的通道组ID，如果监听器属于通道，则为null
                     * @param _groupId 监听器的通道组ID，如果监听器属于通道，则为null
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 监听器转发源站端口，仅V1版本通道或通道组监听器有效
                     */
                    uint64_t m_realServerPort;
                    bool m_realServerPortHasBeenSet;

                    /**
                     * 监听器绑定源站类型
                     */
                    std::string m_realServerType;
                    bool m_realServerTypeHasBeenSet;

                    /**
                     * 监听器协议， UDP
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     */
                    uint64_t m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * 监听器源站访问策略，其中：rr表示轮询；wrr表示加权轮询；lc表示最小连接数；lrtt表示最小时延。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 监听器绑定源站状态， 0表示正常，1表示IP异常，2表示域名解析异常
                     */
                    uint64_t m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * 监听器绑定的源站信息
                     */
                    std::vector<BindRealServer> m_realServerSet;
                    bool m_realServerSetHasBeenSet;

                    /**
                     * 监听器创建时间，Unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否开启会话保持选项：0关闭， 非0开启，非0值为会话保持时间
                     */
                    uint64_t m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * 源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     */
                    uint64_t m_delayLoop;
                    bool m_delayLoopHasBeenSet;

                    /**
                     * 源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * 健康阈值，表示连续检查成功多少次后认定源站健康。范围为1到10
                     */
                    uint64_t m_healthyThreshold;
                    bool m_healthyThresholdHasBeenSet;

                    /**
                     * 不健康阈值，表示连续检查失败多少次数后认为源站不健康。范围为1到10
                     */
                    uint64_t m_unhealthyThreshold;
                    bool m_unhealthyThresholdHasBeenSet;

                    /**
                     * 源站是否开启主备模式：1开启，0关闭，DOMAIN类型源站不支持开启
                     */
                    int64_t m_failoverSwitch;
                    bool m_failoverSwitchHasBeenSet;

                    /**
                     * 源站是否开启健康检查：1开启，0关闭。
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * UDP源站健康类型。PORT表示检查端口，PING表示PING。
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * UDP源站健康检查探测端口。
                     */
                    int64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * UDP源站健康检查端口探测报文类型：TEXT表示文本。仅在健康检查类型为PORT时使用。
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * UDP源站健康检查端口探测发送报文。仅在健康检查类型为PORT时使用。
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * UDP源站健康检查端口探测接收报文。仅在健康检查类型为PORT时使用。
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * 监听器的通道ID，如果监听器属于通道组，则为null
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 监听器的通道组ID，如果监听器属于通道，则为null
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_UDPLISTENER_H_
