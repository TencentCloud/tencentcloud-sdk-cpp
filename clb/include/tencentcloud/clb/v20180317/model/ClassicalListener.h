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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALLISTENER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 传统型负载均衡监听器信息
                */
                class ClassicalListener : public AbstractModel
                {
                public:
                    ClassicalListener();
                    ~ClassicalListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡监听器ID
                     * @return ListenerId 负载均衡监听器ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器ID
                     * @param ListenerId 负载均衡监听器ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡监听器端口
                     * @return ListenerPort 负载均衡监听器端口
                     */
                    int64_t GetListenerPort() const;

                    /**
                     * 设置负载均衡监听器端口
                     * @param ListenerPort 负载均衡监听器端口
                     */
                    void SetListenerPort(const int64_t& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取监听器后端转发端口
                     * @return InstancePort 监听器后端转发端口
                     */
                    int64_t GetInstancePort() const;

                    /**
                     * 设置监听器后端转发端口
                     * @param InstancePort 监听器后端转发端口
                     */
                    void SetInstancePort(const int64_t& _instancePort);

                    /**
                     * 判断参数 InstancePort 是否已赋值
                     * @return InstancePort 是否已赋值
                     */
                    bool InstancePortHasBeenSet() const;

                    /**
                     * 获取监听器名称
                     * @return ListenerName 监听器名称
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称
                     * @param ListenerName 监听器名称
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取监听器协议类型
                     * @return Protocol 监听器协议类型
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议类型
                     * @param Protocol 监听器协议类型
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取会话保持时间
                     * @return SessionExpire 会话保持时间
                     */
                    int64_t GetSessionExpire() const;

                    /**
                     * 设置会话保持时间
                     * @param SessionExpire 会话保持时间
                     */
                    void SetSessionExpire(const int64_t& _sessionExpire);

                    /**
                     * 判断参数 SessionExpire 是否已赋值
                     * @return SessionExpire 是否已赋值
                     */
                    bool SessionExpireHasBeenSet() const;

                    /**
                     * 获取是否开启了检查：1（开启）、0（关闭）
                     * @return HealthSwitch 是否开启了检查：1（开启）、0（关闭）
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置是否开启了检查：1（开启）、0（关闭）
                     * @param HealthSwitch 是否开启了检查：1（开启）、0（关闭）
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取响应超时时间
                     * @return TimeOut 响应超时时间
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置响应超时时间
                     * @param TimeOut 响应超时时间
                     */
                    void SetTimeOut(const int64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取检查间隔
                     * @return IntervalTime 检查间隔
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置检查间隔
                     * @param IntervalTime 检查间隔
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取健康阈值
                     * @return HealthNum 健康阈值
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置健康阈值
                     * @param HealthNum 健康阈值
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取不健康阈值
                     * @return UnhealthNum 不健康阈值
                     */
                    int64_t GetUnhealthNum() const;

                    /**
                     * 设置不健康阈值
                     * @param UnhealthNum 不健康阈值
                     */
                    void SetUnhealthNum(const int64_t& _unhealthNum);

                    /**
                     * 判断参数 UnhealthNum 是否已赋值
                     * @return UnhealthNum 是否已赋值
                     */
                    bool UnhealthNumHasBeenSet() const;

                    /**
                     * 获取公网固定IP型的 HTTP、HTTPS 协议监听器的轮询方法。wrr 表示按权重轮询，ip_hash 表示根据访问的源 IP 进行一致性哈希方式来分发
                     * @return HttpHash 公网固定IP型的 HTTP、HTTPS 协议监听器的轮询方法。wrr 表示按权重轮询，ip_hash 表示根据访问的源 IP 进行一致性哈希方式来分发
                     */
                    std::string GetHttpHash() const;

                    /**
                     * 设置公网固定IP型的 HTTP、HTTPS 协议监听器的轮询方法。wrr 表示按权重轮询，ip_hash 表示根据访问的源 IP 进行一致性哈希方式来分发
                     * @param HttpHash 公网固定IP型的 HTTP、HTTPS 协议监听器的轮询方法。wrr 表示按权重轮询，ip_hash 表示根据访问的源 IP 进行一致性哈希方式来分发
                     */
                    void SetHttpHash(const std::string& _httpHash);

                    /**
                     * 判断参数 HttpHash 是否已赋值
                     * @return HttpHash 是否已赋值
                     */
                    bool HttpHashHasBeenSet() const;

                    /**
                     * 获取公网固定IP型的 HTTP、HTTPS 协议监听器的健康检查返回码。具体可参考创建监听器中对该字段的解释
                     * @return HttpCode 公网固定IP型的 HTTP、HTTPS 协议监听器的健康检查返回码。具体可参考创建监听器中对该字段的解释
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置公网固定IP型的 HTTP、HTTPS 协议监听器的健康检查返回码。具体可参考创建监听器中对该字段的解释
                     * @param HttpCode 公网固定IP型的 HTTP、HTTPS 协议监听器的健康检查返回码。具体可参考创建监听器中对该字段的解释
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取公网固定IP型的 HTTP、HTTPS 协议监听器的健康检查路径
                     * @return HttpCheckPath 公网固定IP型的 HTTP、HTTPS 协议监听器的健康检查路径
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置公网固定IP型的 HTTP、HTTPS 协议监听器的健康检查路径
                     * @param HttpCheckPath 公网固定IP型的 HTTP、HTTPS 协议监听器的健康检查路径
                     */
                    void SetHttpCheckPath(const std::string& _httpCheckPath);

                    /**
                     * 判断参数 HttpCheckPath 是否已赋值
                     * @return HttpCheckPath 是否已赋值
                     */
                    bool HttpCheckPathHasBeenSet() const;

                    /**
                     * 获取公网固定IP型的 HTTPS 协议监听器的认证方式
                     * @return SSLMode 公网固定IP型的 HTTPS 协议监听器的认证方式
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置公网固定IP型的 HTTPS 协议监听器的认证方式
                     * @param SSLMode 公网固定IP型的 HTTPS 协议监听器的认证方式
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     */
                    bool SSLModeHasBeenSet() const;

                    /**
                     * 获取公网固定IP型的 HTTPS 协议监听器服务端证书 ID
                     * @return CertId 公网固定IP型的 HTTPS 协议监听器服务端证书 ID
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置公网固定IP型的 HTTPS 协议监听器服务端证书 ID
                     * @param CertId 公网固定IP型的 HTTPS 协议监听器服务端证书 ID
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取公网固定IP型的 HTTPS 协议监听器客户端证书 ID
                     * @return CertCaId 公网固定IP型的 HTTPS 协议监听器客户端证书 ID
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置公网固定IP型的 HTTPS 协议监听器客户端证书 ID
                     * @param CertCaId 公网固定IP型的 HTTPS 协议监听器客户端证书 ID
                     */
                    void SetCertCaId(const std::string& _certCaId);

                    /**
                     * 判断参数 CertCaId 是否已赋值
                     * @return CertCaId 是否已赋值
                     */
                    bool CertCaIdHasBeenSet() const;

                    /**
                     * 获取监听器的状态，0 表示创建中，1 表示运行中
                     * @return Status 监听器的状态，0 表示创建中，1 表示运行中
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置监听器的状态，0 表示创建中，1 表示运行中
                     * @param Status 监听器的状态，0 表示创建中，1 表示运行中
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 负载均衡监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 负载均衡监听器端口
                     */
                    int64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * 监听器后端转发端口
                     */
                    int64_t m_instancePort;
                    bool m_instancePortHasBeenSet;

                    /**
                     * 监听器名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器协议类型
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 会话保持时间
                     */
                    int64_t m_sessionExpire;
                    bool m_sessionExpireHasBeenSet;

                    /**
                     * 是否开启了检查：1（开启）、0（关闭）
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 响应超时时间
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 检查间隔
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 健康阈值
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 不健康阈值
                     */
                    int64_t m_unhealthNum;
                    bool m_unhealthNumHasBeenSet;

                    /**
                     * 公网固定IP型的 HTTP、HTTPS 协议监听器的轮询方法。wrr 表示按权重轮询，ip_hash 表示根据访问的源 IP 进行一致性哈希方式来分发
                     */
                    std::string m_httpHash;
                    bool m_httpHashHasBeenSet;

                    /**
                     * 公网固定IP型的 HTTP、HTTPS 协议监听器的健康检查返回码。具体可参考创建监听器中对该字段的解释
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * 公网固定IP型的 HTTP、HTTPS 协议监听器的健康检查路径
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * 公网固定IP型的 HTTPS 协议监听器的认证方式
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * 公网固定IP型的 HTTPS 协议监听器服务端证书 ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 公网固定IP型的 HTTPS 协议监听器客户端证书 ID
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * 监听器的状态，0 表示创建中，1 表示运行中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALLISTENER_H_
