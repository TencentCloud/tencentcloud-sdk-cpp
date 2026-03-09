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
                     * 获取<p>负载均衡监听器ID</p>
                     * @return ListenerId <p>负载均衡监听器ID</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>负载均衡监听器ID</p>
                     * @param _listenerId <p>负载均衡监听器ID</p>
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
                     * 获取<p>负载均衡监听器端口</p>
                     * @return ListenerPort <p>负载均衡监听器端口</p>
                     * 
                     */
                    int64_t GetListenerPort() const;

                    /**
                     * 设置<p>负载均衡监听器端口</p>
                     * @param _listenerPort <p>负载均衡监听器端口</p>
                     * 
                     */
                    void SetListenerPort(const int64_t& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取<p>监听器后端转发端口</p>
                     * @return InstancePort <p>监听器后端转发端口</p>
                     * 
                     */
                    int64_t GetInstancePort() const;

                    /**
                     * 设置<p>监听器后端转发端口</p>
                     * @param _instancePort <p>监听器后端转发端口</p>
                     * 
                     */
                    void SetInstancePort(const int64_t& _instancePort);

                    /**
                     * 判断参数 InstancePort 是否已赋值
                     * @return InstancePort 是否已赋值
                     * 
                     */
                    bool InstancePortHasBeenSet() const;

                    /**
                     * 获取<p>监听器名称</p>
                     * @return ListenerName <p>监听器名称</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>监听器名称</p>
                     * @param _listenerName <p>监听器名称</p>
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
                     * 获取<p>监听器协议类型</p>
                     * @return Protocol <p>监听器协议类型</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>监听器协议类型</p>
                     * @param _protocol <p>监听器协议类型</p>
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
                     * 获取<p>会话保持时间</p>
                     * @return SessionExpire <p>会话保持时间</p>
                     * 
                     */
                    int64_t GetSessionExpire() const;

                    /**
                     * 设置<p>会话保持时间</p>
                     * @param _sessionExpire <p>会话保持时间</p>
                     * 
                     */
                    void SetSessionExpire(const int64_t& _sessionExpire);

                    /**
                     * 判断参数 SessionExpire 是否已赋值
                     * @return SessionExpire 是否已赋值
                     * 
                     */
                    bool SessionExpireHasBeenSet() const;

                    /**
                     * 获取<p>是否开启了健康检查：1（开启）、0（关闭）</p>
                     * @return HealthSwitch <p>是否开启了健康检查：1（开启）、0（关闭）</p>
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置<p>是否开启了健康检查：1（开启）、0（关闭）</p>
                     * @param _healthSwitch <p>是否开启了健康检查：1（开启）、0（关闭）</p>
                     * 
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取<p>响应超时时间</p><p>单位：秒</p>
                     * @return TimeOut <p>响应超时时间</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置<p>响应超时时间</p><p>单位：秒</p>
                     * @param _timeOut <p>响应超时时间</p><p>单位：秒</p>
                     * 
                     */
                    void SetTimeOut(const int64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取<p>检查间隔</p><p>单位：秒</p>
                     * @return IntervalTime <p>检查间隔</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置<p>检查间隔</p><p>单位：秒</p>
                     * @param _intervalTime <p>检查间隔</p><p>单位：秒</p>
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取<p>健康阈值</p>
                     * @return HealthNum <p>健康阈值</p>
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置<p>健康阈值</p>
                     * @param _healthNum <p>健康阈值</p>
                     * 
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     * 
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取<p>不健康阈值</p>
                     * @return UnhealthNum <p>不健康阈值</p>
                     * 
                     */
                    int64_t GetUnhealthNum() const;

                    /**
                     * 设置<p>不健康阈值</p>
                     * @param _unhealthNum <p>不健康阈值</p>
                     * 
                     */
                    void SetUnhealthNum(const int64_t& _unhealthNum);

                    /**
                     * 判断参数 UnhealthNum 是否已赋值
                     * @return UnhealthNum 是否已赋值
                     * 
                     */
                    bool UnhealthNumHasBeenSet() const;

                    /**
                     * 获取<p>传统型公网负载均衡 监听器的请求均衡方法。空字符串或wrr 表示按权重轮询，ip_hash 表示根据访问的源 IP 进行一致性哈希方式来分发，least_conn表示按最小连接数。</p>
                     * @return HttpHash <p>传统型公网负载均衡 监听器的请求均衡方法。空字符串或wrr 表示按权重轮询，ip_hash 表示根据访问的源 IP 进行一致性哈希方式来分发，least_conn表示按最小连接数。</p>
                     * 
                     */
                    std::string GetHttpHash() const;

                    /**
                     * 设置<p>传统型公网负载均衡 监听器的请求均衡方法。空字符串或wrr 表示按权重轮询，ip_hash 表示根据访问的源 IP 进行一致性哈希方式来分发，least_conn表示按最小连接数。</p>
                     * @param _httpHash <p>传统型公网负载均衡 监听器的请求均衡方法。空字符串或wrr 表示按权重轮询，ip_hash 表示根据访问的源 IP 进行一致性哈希方式来分发，least_conn表示按最小连接数。</p>
                     * 
                     */
                    void SetHttpHash(const std::string& _httpHash);

                    /**
                     * 判断参数 HttpHash 是否已赋值
                     * @return HttpHash 是否已赋值
                     * 
                     */
                    bool HttpHashHasBeenSet() const;

                    /**
                     * 获取<p>传统型公网负载均衡的 HTTP、HTTPS 监听器的健康检查返回码。具体可参考创建监听器中对该字段的解释</p>
                     * @return HttpCode <p>传统型公网负载均衡的 HTTP、HTTPS 监听器的健康检查返回码。具体可参考创建监听器中对该字段的解释</p>
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置<p>传统型公网负载均衡的 HTTP、HTTPS 监听器的健康检查返回码。具体可参考创建监听器中对该字段的解释</p>
                     * @param _httpCode <p>传统型公网负载均衡的 HTTP、HTTPS 监听器的健康检查返回码。具体可参考创建监听器中对该字段的解释</p>
                     * 
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取<p>传统型公网负载均衡的 HTTP、HTTPS 监听器的健康检查路径</p>
                     * @return HttpCheckPath <p>传统型公网负载均衡的 HTTP、HTTPS 监听器的健康检查路径</p>
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置<p>传统型公网负载均衡的 HTTP、HTTPS 监听器的健康检查路径</p>
                     * @param _httpCheckPath <p>传统型公网负载均衡的 HTTP、HTTPS 监听器的健康检查路径</p>
                     * 
                     */
                    void SetHttpCheckPath(const std::string& _httpCheckPath);

                    /**
                     * 判断参数 HttpCheckPath 是否已赋值
                     * @return HttpCheckPath 是否已赋值
                     * 
                     */
                    bool HttpCheckPathHasBeenSet() const;

                    /**
                     * 获取<p>传统型公网负载均衡的 HTTPS 监听器的认证方式</p>
                     * @return SSLMode <p>传统型公网负载均衡的 HTTPS 监听器的认证方式</p>
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置<p>传统型公网负载均衡的 HTTPS 监听器的认证方式</p>
                     * @param _sSLMode <p>传统型公网负载均衡的 HTTPS 监听器的认证方式</p>
                     * 
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     * 
                     */
                    bool SSLModeHasBeenSet() const;

                    /**
                     * 获取<p>传统型公网负载均衡的 HTTPS 监听器的服务端证书 ID</p>
                     * @return CertId <p>传统型公网负载均衡的 HTTPS 监听器的服务端证书 ID</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>传统型公网负载均衡的 HTTPS 监听器的服务端证书 ID</p>
                     * @param _certId <p>传统型公网负载均衡的 HTTPS 监听器的服务端证书 ID</p>
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取<p>传统型公网负载均衡的 HTTPS 监听器的客户端证书 ID</p>
                     * @return CertCaId <p>传统型公网负载均衡的 HTTPS 监听器的客户端证书 ID</p>
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置<p>传统型公网负载均衡的 HTTPS 监听器的客户端证书 ID</p>
                     * @param _certCaId <p>传统型公网负载均衡的 HTTPS 监听器的客户端证书 ID</p>
                     * 
                     */
                    void SetCertCaId(const std::string& _certCaId);

                    /**
                     * 判断参数 CertCaId 是否已赋值
                     * @return CertCaId 是否已赋值
                     * 
                     */
                    bool CertCaIdHasBeenSet() const;

                    /**
                     * 获取<p>监听器的状态，0 表示创建中，1 表示运行中</p>
                     * @return Status <p>监听器的状态，0 表示创建中，1 表示运行中</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>监听器的状态，0 表示创建中，1 表示运行中</p>
                     * @param _status <p>监听器的状态，0 表示创建中，1 表示运行中</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>负载均衡监听器ID</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>负载均衡监听器端口</p>
                     */
                    int64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * <p>监听器后端转发端口</p>
                     */
                    int64_t m_instancePort;
                    bool m_instancePortHasBeenSet;

                    /**
                     * <p>监听器名称</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>监听器协议类型</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>会话保持时间</p>
                     */
                    int64_t m_sessionExpire;
                    bool m_sessionExpireHasBeenSet;

                    /**
                     * <p>是否开启了健康检查：1（开启）、0（关闭）</p>
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * <p>响应超时时间</p><p>单位：秒</p>
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * <p>检查间隔</p><p>单位：秒</p>
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * <p>健康阈值</p>
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * <p>不健康阈值</p>
                     */
                    int64_t m_unhealthNum;
                    bool m_unhealthNumHasBeenSet;

                    /**
                     * <p>传统型公网负载均衡 监听器的请求均衡方法。空字符串或wrr 表示按权重轮询，ip_hash 表示根据访问的源 IP 进行一致性哈希方式来分发，least_conn表示按最小连接数。</p>
                     */
                    std::string m_httpHash;
                    bool m_httpHashHasBeenSet;

                    /**
                     * <p>传统型公网负载均衡的 HTTP、HTTPS 监听器的健康检查返回码。具体可参考创建监听器中对该字段的解释</p>
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * <p>传统型公网负载均衡的 HTTP、HTTPS 监听器的健康检查路径</p>
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * <p>传统型公网负载均衡的 HTTPS 监听器的认证方式</p>
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * <p>传统型公网负载均衡的 HTTPS 监听器的服务端证书 ID</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>传统型公网负载均衡的 HTTPS 监听器的客户端证书 ID</p>
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * <p>监听器的状态，0 表示创建中，1 表示运行中</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALLISTENER_H_
