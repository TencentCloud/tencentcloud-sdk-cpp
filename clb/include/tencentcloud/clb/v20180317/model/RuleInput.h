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
#include <tencentcloud/clb/v20180317/model/MultiCertInfo.h>


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
                     * 获取<p>转发规则的路径。长度限制为：1~200。</p>
                     * @return Url <p>转发规则的路径。长度限制为：1~200。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>转发规则的路径。长度限制为：1~200。</p>
                     * @param _url <p>转发规则的路径。长度限制为：1~200。</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>转发规则的域名。长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。</p>
                     * @return Domain <p>转发规则的域名。长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>转发规则的域名。长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。</p>
                     * @param _domain <p>转发规则的域名。长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~86400，单位：秒。</p>
                     * @return SessionExpireTime <p>会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~86400，单位：秒。</p>
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置<p>会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~86400，单位：秒。</p>
                     * @param _sessionExpireTime <p>会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~86400，单位：秒。</p>
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
                     * 获取<p>健康检查信息。详情请参见：<a href="https://cloud.tencent.com/document/product/214/6097">健康检查</a></p>
                     * @return HealthCheck <p>健康检查信息。详情请参见：<a href="https://cloud.tencent.com/document/product/214/6097">健康检查</a></p>
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置<p>健康检查信息。详情请参见：<a href="https://cloud.tencent.com/document/product/214/6097">健康检查</a></p>
                     * @param _healthCheck <p>健康检查信息。详情请参见：<a href="https://cloud.tencent.com/document/product/214/6097">健康检查</a></p>
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
                     * 获取<p>证书信息；此参数和MultiCertInfo不能同时传入。</p>
                     * @return Certificate <p>证书信息；此参数和MultiCertInfo不能同时传入。</p>
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置<p>证书信息；此参数和MultiCertInfo不能同时传入。</p>
                     * @param _certificate <p>证书信息；此参数和MultiCertInfo不能同时传入。</p>
                     * 
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取<p>规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH<br>分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。</p>
                     * @return Scheduler <p>规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH<br>分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。</p>
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置<p>规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH<br>分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。</p>
                     * @param _scheduler <p>规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH<br>分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。</p>
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
                     * 获取<p>负载均衡与后端服务之间的转发协议，目前支持 HTTP/HTTPS/GRPC/GRPCS/TRPC，TRPC暂未对外开放，默认HTTP。</p>
                     * @return ForwardType <p>负载均衡与后端服务之间的转发协议，目前支持 HTTP/HTTPS/GRPC/GRPCS/TRPC，TRPC暂未对外开放，默认HTTP。</p>
                     * 
                     */
                    std::string GetForwardType() const;

                    /**
                     * 设置<p>负载均衡与后端服务之间的转发协议，目前支持 HTTP/HTTPS/GRPC/GRPCS/TRPC，TRPC暂未对外开放，默认HTTP。</p>
                     * @param _forwardType <p>负载均衡与后端服务之间的转发协议，目前支持 HTTP/HTTPS/GRPC/GRPCS/TRPC，TRPC暂未对外开放，默认HTTP。</p>
                     * 
                     */
                    void SetForwardType(const std::string& _forwardType);

                    /**
                     * 判断参数 ForwardType 是否已赋值
                     * @return ForwardType 是否已赋值
                     * 
                     */
                    bool ForwardTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。</p>
                     * @return DefaultServer <p>是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。</p>
                     * 
                     */
                    bool GetDefaultServer() const;

                    /**
                     * 设置<p>是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。</p>
                     * @param _defaultServer <p>是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。</p>
                     * 
                     */
                    void SetDefaultServer(const bool& _defaultServer);

                    /**
                     * 判断参数 DefaultServer 是否已赋值
                     * @return DefaultServer 是否已赋值
                     * 
                     */
                    bool DefaultServerHasBeenSet() const;

                    /**
                     * 获取<p>是否开启Http2，注意，只有HTTPS域名才能开启Http2。</p>
                     * @return Http2 <p>是否开启Http2，注意，只有HTTPS域名才能开启Http2。</p>
                     * 
                     */
                    bool GetHttp2() const;

                    /**
                     * 设置<p>是否开启Http2，注意，只有HTTPS域名才能开启Http2。</p>
                     * @param _http2 <p>是否开启Http2，注意，只有HTTPS域名才能开启Http2。</p>
                     * 
                     */
                    void SetHttp2(const bool& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     * 
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取<p>后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组</p><p>枚举值：</p><ul><li>NODE： 绑定普通节点</li><li>TARGETGROUP： 绑定目标组 v1</li><li>TARGETGROUP-V2： 绑定目标组 v2</li></ul>
                     * @return TargetType <p>后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组</p><p>枚举值：</p><ul><li>NODE： 绑定普通节点</li><li>TARGETGROUP： 绑定目标组 v1</li><li>TARGETGROUP-V2： 绑定目标组 v2</li></ul>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组</p><p>枚举值：</p><ul><li>NODE： 绑定普通节点</li><li>TARGETGROUP： 绑定目标组 v1</li><li>TARGETGROUP-V2： 绑定目标组 v2</li></ul>
                     * @param _targetType <p>后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组</p><p>枚举值：</p><ul><li>NODE： 绑定普通节点</li><li>TARGETGROUP： 绑定目标组 v1</li><li>TARGETGROUP-V2： 绑定目标组 v2</li></ul>
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取<p>TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。</p>
                     * @return TrpcCallee <p>TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。</p>
                     * 
                     */
                    std::string GetTrpcCallee() const;

                    /**
                     * 设置<p>TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。</p>
                     * @param _trpcCallee <p>TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。</p>
                     * 
                     */
                    void SetTrpcCallee(const std::string& _trpcCallee);

                    /**
                     * 判断参数 TrpcCallee 是否已赋值
                     * @return TrpcCallee 是否已赋值
                     * 
                     */
                    bool TrpcCalleeHasBeenSet() const;

                    /**
                     * 获取<p>TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放</p>
                     * @return TrpcFunc <p>TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放</p>
                     * 
                     */
                    std::string GetTrpcFunc() const;

                    /**
                     * 设置<p>TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放</p>
                     * @param _trpcFunc <p>TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放</p>
                     * 
                     */
                    void SetTrpcFunc(const std::string& _trpcFunc);

                    /**
                     * 判断参数 TrpcFunc 是否已赋值
                     * @return TrpcFunc 是否已赋值
                     * 
                     */
                    bool TrpcFuncHasBeenSet() const;

                    /**
                     * 获取<p>是否开启QUIC，注意，只有HTTPS域名才能开启QUIC</p>
                     * @return Quic <p>是否开启QUIC，注意，只有HTTPS域名才能开启QUIC</p>
                     * 
                     */
                    bool GetQuic() const;

                    /**
                     * 设置<p>是否开启QUIC，注意，只有HTTPS域名才能开启QUIC</p>
                     * @param _quic <p>是否开启QUIC，注意，只有HTTPS域名才能开启QUIC</p>
                     * 
                     */
                    void SetQuic(const bool& _quic);

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     * 
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取<p>转发规则的域名列表。每个域名的长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。</p>
                     * @return Domains <p>转发规则的域名列表。每个域名的长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>转发规则的域名列表。每个域名的长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。</p>
                     * @param _domains <p>转发规则的域名列表。每个域名的长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。</p>
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取<p>证书信息，支持同时传入不同算法类型的多本服务端证书；此参数和Certificate不能同时传入。</p>
                     * @return MultiCertInfo <p>证书信息，支持同时传入不同算法类型的多本服务端证书；此参数和Certificate不能同时传入。</p>
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置<p>证书信息，支持同时传入不同算法类型的多本服务端证书；此参数和Certificate不能同时传入。</p>
                     * @param _multiCertInfo <p>证书信息，支持同时传入不同算法类型的多本服务端证书；此参数和Certificate不能同时传入。</p>
                     * 
                     */
                    void SetMultiCertInfo(const MultiCertInfo& _multiCertInfo);

                    /**
                     * 判断参数 MultiCertInfo 是否已赋值
                     * @return MultiCertInfo 是否已赋值
                     * 
                     */
                    bool MultiCertInfoHasBeenSet() const;

                    /**
                     * 获取<p>自定义cookie名</p>
                     * @return CookieName <p>自定义cookie名</p>
                     * 
                     */
                    std::string GetCookieName() const;

                    /**
                     * 设置<p>自定义cookie名</p>
                     * @param _cookieName <p>自定义cookie名</p>
                     * 
                     */
                    void SetCookieName(const std::string& _cookieName);

                    /**
                     * 判断参数 CookieName 是否已赋值
                     * @return CookieName 是否已赋值
                     * 
                     */
                    bool CookieNameHasBeenSet() const;

                private:

                    /**
                     * <p>转发规则的路径。长度限制为：1~200。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>转发规则的域名。长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~86400，单位：秒。</p>
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * <p>健康检查信息。详情请参见：<a href="https://cloud.tencent.com/document/product/214/6097">健康检查</a></p>
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>证书信息；此参数和MultiCertInfo不能同时传入。</p>
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * <p>规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH<br>分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。</p>
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * <p>负载均衡与后端服务之间的转发协议，目前支持 HTTP/HTTPS/GRPC/GRPCS/TRPC，TRPC暂未对外开放，默认HTTP。</p>
                     */
                    std::string m_forwardType;
                    bool m_forwardTypeHasBeenSet;

                    /**
                     * <p>是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。</p>
                     */
                    bool m_defaultServer;
                    bool m_defaultServerHasBeenSet;

                    /**
                     * <p>是否开启Http2，注意，只有HTTPS域名才能开启Http2。</p>
                     */
                    bool m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * <p>后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组</p><p>枚举值：</p><ul><li>NODE： 绑定普通节点</li><li>TARGETGROUP： 绑定目标组 v1</li><li>TARGETGROUP-V2： 绑定目标组 v2</li></ul>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。</p>
                     */
                    std::string m_trpcCallee;
                    bool m_trpcCalleeHasBeenSet;

                    /**
                     * <p>TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放</p>
                     */
                    std::string m_trpcFunc;
                    bool m_trpcFuncHasBeenSet;

                    /**
                     * <p>是否开启QUIC，注意，只有HTTPS域名才能开启QUIC</p>
                     */
                    bool m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * <p>转发规则的域名列表。每个域名的长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>证书信息，支持同时传入不同算法类型的多本服务端证书；此参数和Certificate不能同时传入。</p>
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * <p>自定义cookie名</p>
                     */
                    std::string m_cookieName;
                    bool m_cookieNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_
