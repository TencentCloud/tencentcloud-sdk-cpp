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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RULEOUTPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RULEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>
#include <tencentcloud/clb/v20180317/model/CertificateOutput.h>
#include <tencentcloud/clb/v20180317/model/RewriteTarget.h>
#include <tencentcloud/clb/v20180317/model/BasicTargetGroupInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * HTTP/HTTPS监听器的转发规则（输出）
                */
                class RuleOutput : public AbstractModel
                {
                public:
                    RuleOutput();
                    ~RuleOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发规则的 ID
                     * @return LocationId 转发规则的 ID
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发规则的 ID
                     * @param LocationId 转发规则的 ID
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取转发规则的域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 转发规则的域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置转发规则的域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Domain 转发规则的域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取转发规则的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 转发规则的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转发规则的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Url 转发规则的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取会话保持时间
                     * @return SessionExpireTime 会话保持时间
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间
                     * @param SessionExpireTime 会话保持时间
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheck 健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HealthCheck 健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Certificate 证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CertificateOutput GetCertificate() const;

                    /**
                     * 设置证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Certificate 证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCertificate(const CertificateOutput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取规则的请求转发方式
                     * @return Scheduler 规则的请求转发方式
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置规则的请求转发方式
                     * @param Scheduler 规则的请求转发方式
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取转发规则所属的监听器 ID
                     * @return ListenerId 转发规则所属的监听器 ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置转发规则所属的监听器 ID
                     * @param ListenerId 转发规则所属的监听器 ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取转发规则的重定向目标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RewriteTarget 转发规则的重定向目标信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RewriteTarget GetRewriteTarget() const;

                    /**
                     * 设置转发规则的重定向目标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RewriteTarget 转发规则的重定向目标信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRewriteTarget(const RewriteTarget& _rewriteTarget);

                    /**
                     * 判断参数 RewriteTarget 是否已赋值
                     * @return RewriteTarget 是否已赋值
                     */
                    bool RewriteTargetHasBeenSet() const;

                    /**
                     * 获取是否开启gzip
                     * @return HttpGzip 是否开启gzip
                     */
                    bool GetHttpGzip() const;

                    /**
                     * 设置是否开启gzip
                     * @param HttpGzip 是否开启gzip
                     */
                    void SetHttpGzip(const bool& _httpGzip);

                    /**
                     * 判断参数 HttpGzip 是否已赋值
                     * @return HttpGzip 是否已赋值
                     */
                    bool HttpGzipHasBeenSet() const;

                    /**
                     * 获取转发规则是否为自动创建
                     * @return BeAutoCreated 转发规则是否为自动创建
                     */
                    bool GetBeAutoCreated() const;

                    /**
                     * 设置转发规则是否为自动创建
                     * @param BeAutoCreated 转发规则是否为自动创建
                     */
                    void SetBeAutoCreated(const bool& _beAutoCreated);

                    /**
                     * 判断参数 BeAutoCreated 是否已赋值
                     * @return BeAutoCreated 是否已赋值
                     */
                    bool BeAutoCreatedHasBeenSet() const;

                    /**
                     * 获取是否作为默认域名
                     * @return DefaultServer 是否作为默认域名
                     */
                    bool GetDefaultServer() const;

                    /**
                     * 设置是否作为默认域名
                     * @param DefaultServer 是否作为默认域名
                     */
                    void SetDefaultServer(const bool& _defaultServer);

                    /**
                     * 判断参数 DefaultServer 是否已赋值
                     * @return DefaultServer 是否已赋值
                     */
                    bool DefaultServerHasBeenSet() const;

                    /**
                     * 获取是否开启Http2
                     * @return Http2 是否开启Http2
                     */
                    bool GetHttp2() const;

                    /**
                     * 设置是否开启Http2
                     * @param Http2 是否开启Http2
                     */
                    void SetHttp2(const bool& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取负载均衡与后端服务之间的转发协议
                     * @return ForwardType 负载均衡与后端服务之间的转发协议
                     */
                    std::string GetForwardType() const;

                    /**
                     * 设置负载均衡与后端服务之间的转发协议
                     * @param ForwardType 负载均衡与后端服务之间的转发协议
                     */
                    void SetForwardType(const std::string& _forwardType);

                    /**
                     * 判断参数 ForwardType 是否已赋值
                     * @return ForwardType 是否已赋值
                     */
                    bool ForwardTypeHasBeenSet() const;

                    /**
                     * 获取转发规则的创建时间
                     * @return CreateTime 转发规则的创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置转发规则的创建时间
                     * @param CreateTime 转发规则的创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取后端服务器类型
                     * @return TargetType 后端服务器类型
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置后端服务器类型
                     * @param TargetType 后端服务器类型
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取绑定的目标组基本信息；当规则绑定目标组时，会返回该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetGroup 绑定的目标组基本信息；当规则绑定目标组时，会返回该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BasicTargetGroupInfo GetTargetGroup() const;

                    /**
                     * 设置绑定的目标组基本信息；当规则绑定目标组时，会返回该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetGroup 绑定的目标组基本信息；当规则绑定目标组时，会返回该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetGroup(const BasicTargetGroupInfo& _targetGroup);

                    /**
                     * 判断参数 TargetGroup 是否已赋值
                     * @return TargetGroup 是否已赋值
                     */
                    bool TargetGroupHasBeenSet() const;

                    /**
                     * 获取WAF实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WafDomainId WAF实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWafDomainId() const;

                    /**
                     * 设置WAF实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WafDomainId WAF实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWafDomainId(const std::string& _wafDomainId);

                    /**
                     * 判断参数 WafDomainId 是否已赋值
                     * @return WafDomainId 是否已赋值
                     */
                    bool WafDomainIdHasBeenSet() const;

                    /**
                     * 获取TRPC被调服务器路由，ForwardType为TRPC时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrpcCallee TRPC被调服务器路由，ForwardType为TRPC时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTrpcCallee() const;

                    /**
                     * 设置TRPC被调服务器路由，ForwardType为TRPC时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TrpcCallee TRPC被调服务器路由，ForwardType为TRPC时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrpcCallee(const std::string& _trpcCallee);

                    /**
                     * 判断参数 TrpcCallee 是否已赋值
                     * @return TrpcCallee 是否已赋值
                     */
                    bool TrpcCalleeHasBeenSet() const;

                    /**
                     * 获取TRPC调用服务接口，ForwardType为TRPC时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrpcFunc TRPC调用服务接口，ForwardType为TRPC时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTrpcFunc() const;

                    /**
                     * 设置TRPC调用服务接口，ForwardType为TRPC时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TrpcFunc TRPC调用服务接口，ForwardType为TRPC时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrpcFunc(const std::string& _trpcFunc);

                    /**
                     * 判断参数 TrpcFunc 是否已赋值
                     * @return TrpcFunc 是否已赋值
                     */
                    bool TrpcFuncHasBeenSet() const;

                    /**
                     * 获取QUIC状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuicStatus QUIC状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetQuicStatus() const;

                    /**
                     * 设置QUIC状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QuicStatus QUIC状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQuicStatus(const std::string& _quicStatus);

                    /**
                     * 判断参数 QuicStatus 是否已赋值
                     * @return QuicStatus 是否已赋值
                     */
                    bool QuicStatusHasBeenSet() const;

                    /**
                     * 获取转发规则的域名列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domains 转发规则的域名列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置转发规则的域名列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Domains 转发规则的域名列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取绑定的目标组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetGroupList 绑定的目标组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BasicTargetGroupInfo> GetTargetGroupList() const;

                    /**
                     * 设置绑定的目标组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetGroupList 绑定的目标组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetGroupList(const std::vector<BasicTargetGroupInfo>& _targetGroupList);

                    /**
                     * 判断参数 TargetGroupList 是否已赋值
                     * @return TargetGroupList 是否已赋值
                     */
                    bool TargetGroupListHasBeenSet() const;

                private:

                    /**
                     * 转发规则的 ID
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 转发规则的域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 转发规则的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 会话保持时间
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CertificateOutput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 规则的请求转发方式
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 转发规则所属的监听器 ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 转发规则的重定向目标信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RewriteTarget m_rewriteTarget;
                    bool m_rewriteTargetHasBeenSet;

                    /**
                     * 是否开启gzip
                     */
                    bool m_httpGzip;
                    bool m_httpGzipHasBeenSet;

                    /**
                     * 转发规则是否为自动创建
                     */
                    bool m_beAutoCreated;
                    bool m_beAutoCreatedHasBeenSet;

                    /**
                     * 是否作为默认域名
                     */
                    bool m_defaultServer;
                    bool m_defaultServerHasBeenSet;

                    /**
                     * 是否开启Http2
                     */
                    bool m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * 负载均衡与后端服务之间的转发协议
                     */
                    std::string m_forwardType;
                    bool m_forwardTypeHasBeenSet;

                    /**
                     * 转发规则的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 后端服务器类型
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 绑定的目标组基本信息；当规则绑定目标组时，会返回该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BasicTargetGroupInfo m_targetGroup;
                    bool m_targetGroupHasBeenSet;

                    /**
                     * WAF实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wafDomainId;
                    bool m_wafDomainIdHasBeenSet;

                    /**
                     * TRPC被调服务器路由，ForwardType为TRPC时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trpcCallee;
                    bool m_trpcCalleeHasBeenSet;

                    /**
                     * TRPC调用服务接口，ForwardType为TRPC时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trpcFunc;
                    bool m_trpcFuncHasBeenSet;

                    /**
                     * QUIC状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quicStatus;
                    bool m_quicStatusHasBeenSet;

                    /**
                     * 转发规则的域名列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 绑定的目标组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BasicTargetGroupInfo> m_targetGroupList;
                    bool m_targetGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULEOUTPUT_H_
