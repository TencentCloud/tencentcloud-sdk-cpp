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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>
#include <tencentcloud/clb/v20180317/model/CertificateInput.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * HTTP/HTTPS转发规则（输入）
                */
                class RuleInput : public AbstractModel
                {
                public:
                    RuleInput();
                    ~RuleInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发规则的域名。长度限制为：1~80。
                     * @return Domain 转发规则的域名。长度限制为：1~80。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置转发规则的域名。长度限制为：1~80。
                     * @param Domain 转发规则的域名。长度限制为：1~80。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取转发规则的路径。长度限制为：1~200。
                     * @return Url 转发规则的路径。长度限制为：1~200。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转发规则的路径。长度限制为：1~200。
                     * @param Url 转发规则的路径。长度限制为：1~200。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~3600，单位：秒。
                     * @return SessionExpireTime 会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~3600，单位：秒。
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~3600，单位：秒。
                     * @param SessionExpireTime 会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~3600，单位：秒。
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取健康检查信息
                     * @return HealthCheck 健康检查信息
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查信息
                     * @param HealthCheck 健康检查信息
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取证书信息
                     * @return Certificate 证书信息
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置证书信息
                     * @param Certificate 证书信息
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     * @return Scheduler 规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     * @param Scheduler 规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取负载均衡与后端服务之间的转发协议，目前支持 HTTP
                     * @return ForwardType 负载均衡与后端服务之间的转发协议，目前支持 HTTP
                     */
                    std::string GetForwardType() const;

                    /**
                     * 设置负载均衡与后端服务之间的转发协议，目前支持 HTTP
                     * @param ForwardType 负载均衡与后端服务之间的转发协议，目前支持 HTTP
                     */
                    void SetForwardType(const std::string& _forwardType);

                    /**
                     * 判断参数 ForwardType 是否已赋值
                     * @return ForwardType 是否已赋值
                     */
                    bool ForwardTypeHasBeenSet() const;

                    /**
                     * 获取是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     * @return DefaultServer 是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     */
                    bool GetDefaultServer() const;

                    /**
                     * 设置是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     * @param DefaultServer 是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     */
                    void SetDefaultServer(const bool& _defaultServer);

                    /**
                     * 判断参数 DefaultServer 是否已赋值
                     * @return DefaultServer 是否已赋值
                     */
                    bool DefaultServerHasBeenSet() const;

                    /**
                     * 获取是否开启Http2，注意，只用HTTPS域名才能开启Http2。
                     * @return Http2 是否开启Http2，注意，只用HTTPS域名才能开启Http2。
                     */
                    bool GetHttp2() const;

                    /**
                     * 设置是否开启Http2，注意，只用HTTPS域名才能开启Http2。
                     * @param Http2 是否开启Http2，注意，只用HTTPS域名才能开启Http2。
                     */
                    void SetHttp2(const bool& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     */
                    bool Http2HasBeenSet() const;

                private:

                    /**
                     * 转发规则的域名。长度限制为：1~80。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 转发规则的路径。长度限制为：1~200。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~3600，单位：秒。
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 健康检查信息
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 证书信息
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 负载均衡与后端服务之间的转发协议，目前支持 HTTP
                     */
                    std::string m_forwardType;
                    bool m_forwardTypeHasBeenSet;

                    /**
                     * 是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     */
                    bool m_defaultServer;
                    bool m_defaultServerHasBeenSet;

                    /**
                     * 是否开启Http2，注意，只用HTTPS域名才能开启Http2。
                     */
                    bool m_http2;
                    bool m_http2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_
