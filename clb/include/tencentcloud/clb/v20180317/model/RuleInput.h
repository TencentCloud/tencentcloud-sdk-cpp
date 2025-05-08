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
                     * 获取转发规则的路径。长度限制为：1~200。
                     * @return Url 转发规则的路径。长度限制为：1~200。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转发规则的路径。长度限制为：1~200。
                     * @param _url 转发规则的路径。长度限制为：1~200。
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
                     * 获取转发规则的域名。长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。
                     * @return Domain 转发规则的域名。长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置转发规则的域名。长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。
                     * @param _domain 转发规则的域名。长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。
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
                     * 获取会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~86400，单位：秒。
                     * @return SessionExpireTime 会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~86400，单位：秒。
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~86400，单位：秒。
                     * @param _sessionExpireTime 会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~86400，单位：秒。
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
                     * 获取健康检查信息。详情请参见：[健康检查](https://cloud.tencent.com/document/product/214/6097)
                     * @return HealthCheck 健康检查信息。详情请参见：[健康检查](https://cloud.tencent.com/document/product/214/6097)
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查信息。详情请参见：[健康检查](https://cloud.tencent.com/document/product/214/6097)
                     * @param _healthCheck 健康检查信息。详情请参见：[健康检查](https://cloud.tencent.com/document/product/214/6097)
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
                     * 获取证书信息；此参数和MultiCertInfo不能同时传入。
                     * @return Certificate 证书信息；此参数和MultiCertInfo不能同时传入。
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置证书信息；此参数和MultiCertInfo不能同时传入。
                     * @param _certificate 证书信息；此参数和MultiCertInfo不能同时传入。
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
                     * 获取规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     * @return Scheduler 规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
                     * @param _scheduler 规则的请求转发方式，可选值：WRR、LEAST_CONN、IP_HASH
分别表示按权重轮询、最小连接数、按IP哈希， 默认为 WRR。
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
                     * 获取负载均衡与后端服务之间的转发协议，目前支持 HTTP/HTTPS/GRPC/GRPCS/TRPC，TRPC暂未对外开放，默认HTTP。
                     * @return ForwardType 负载均衡与后端服务之间的转发协议，目前支持 HTTP/HTTPS/GRPC/GRPCS/TRPC，TRPC暂未对外开放，默认HTTP。
                     * 
                     */
                    std::string GetForwardType() const;

                    /**
                     * 设置负载均衡与后端服务之间的转发协议，目前支持 HTTP/HTTPS/GRPC/GRPCS/TRPC，TRPC暂未对外开放，默认HTTP。
                     * @param _forwardType 负载均衡与后端服务之间的转发协议，目前支持 HTTP/HTTPS/GRPC/GRPCS/TRPC，TRPC暂未对外开放，默认HTTP。
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
                     * 获取是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     * @return DefaultServer 是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     * 
                     */
                    bool GetDefaultServer() const;

                    /**
                     * 设置是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     * @param _defaultServer 是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。
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
                     * 获取是否开启Http2，注意，只有HTTPS域名才能开启Http2。
                     * @return Http2 是否开启Http2，注意，只有HTTPS域名才能开启Http2。
                     * 
                     */
                    bool GetHttp2() const;

                    /**
                     * 设置是否开启Http2，注意，只有HTTPS域名才能开启Http2。
                     * @param _http2 是否开启Http2，注意，只有HTTPS域名才能开启Http2。
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
                     * 获取后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组
                     * @return TargetType 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组
                     * @param _targetType 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组
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
                     * 获取TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。
                     * @return TrpcCallee TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。
                     * 
                     */
                    std::string GetTrpcCallee() const;

                    /**
                     * 设置TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。
                     * @param _trpcCallee TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。
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
                     * 获取TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放
                     * @return TrpcFunc TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放
                     * 
                     */
                    std::string GetTrpcFunc() const;

                    /**
                     * 设置TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放
                     * @param _trpcFunc TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放
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
                     * 获取是否开启QUIC，注意，只有HTTPS域名才能开启QUIC
                     * @return Quic 是否开启QUIC，注意，只有HTTPS域名才能开启QUIC
                     * 
                     */
                    bool GetQuic() const;

                    /**
                     * 设置是否开启QUIC，注意，只有HTTPS域名才能开启QUIC
                     * @param _quic 是否开启QUIC，注意，只有HTTPS域名才能开启QUIC
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
                     * 获取转发规则的域名列表。每个域名的长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。
                     * @return Domains 转发规则的域名列表。每个域名的长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置转发规则的域名列表。每个域名的长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。
                     * @param _domains 转发规则的域名列表。每个域名的长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。
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
                     * 获取证书信息，支持同时传入不同算法类型的多本服务端证书；此参数和Certificate不能同时传入。
                     * @return MultiCertInfo 证书信息，支持同时传入不同算法类型的多本服务端证书；此参数和Certificate不能同时传入。
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置证书信息，支持同时传入不同算法类型的多本服务端证书；此参数和Certificate不能同时传入。
                     * @param _multiCertInfo 证书信息，支持同时传入不同算法类型的多本服务端证书；此参数和Certificate不能同时传入。
                     * 
                     */
                    void SetMultiCertInfo(const MultiCertInfo& _multiCertInfo);

                    /**
                     * 判断参数 MultiCertInfo 是否已赋值
                     * @return MultiCertInfo 是否已赋值
                     * 
                     */
                    bool MultiCertInfoHasBeenSet() const;

                private:

                    /**
                     * 转发规则的路径。长度限制为：1~200。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 转发规则的域名。长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 会话保持时间。设置为0表示关闭会话保持，开启会话保持可取值30~86400，单位：秒。
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 健康检查信息。详情请参见：[健康检查](https://cloud.tencent.com/document/product/214/6097)
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 证书信息；此参数和MultiCertInfo不能同时传入。
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
                     * 负载均衡与后端服务之间的转发协议，目前支持 HTTP/HTTPS/GRPC/GRPCS/TRPC，TRPC暂未对外开放，默认HTTP。
                     */
                    std::string m_forwardType;
                    bool m_forwardTypeHasBeenSet;

                    /**
                     * 是否将该域名设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     */
                    bool m_defaultServer;
                    bool m_defaultServerHasBeenSet;

                    /**
                     * 是否开启Http2，注意，只有HTTPS域名才能开启Http2。
                     */
                    bool m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * TRPC被调服务器路由，ForwardType为TRPC时必填。目前暂未对外开放。
                     */
                    std::string m_trpcCallee;
                    bool m_trpcCalleeHasBeenSet;

                    /**
                     * TRPC调用服务接口，ForwardType为TRPC时必填。目前暂未对外开放
                     */
                    std::string m_trpcFunc;
                    bool m_trpcFuncHasBeenSet;

                    /**
                     * 是否开启QUIC，注意，只有HTTPS域名才能开启QUIC
                     */
                    bool m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * 转发规则的域名列表。每个域名的长度限制为：1~80。Domain和Domains只需要传一个，单域名规则传Domain，多域名规则传Domains。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 证书信息，支持同时传入不同算法类型的多本服务端证书；此参数和Certificate不能同时传入。
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULEINPUT_H_
