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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERDETAILRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/DefaultAction.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>
#include <tencentcloud/alb/v20251030/model/XForwardedForConfig.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeListenerDetail返回参数结构体
                */
                class DescribeListenerDetailResponse : public AbstractModel
                {
                public:
                    DescribeListenerDetailResponse();
                    ~DescribeListenerDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>监听器绑定的CA证书ID列表。</p>
                     * @return CaCertificateIds <p>监听器绑定的CA证书ID列表。</p>
                     * 
                     */
                    std::vector<std::string> GetCaCertificateIds() const;

                    /**
                     * 判断参数 CaCertificateIds 是否已赋值
                     * @return CaCertificateIds 是否已赋值
                     * 
                     */
                    bool CaCertificateIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启双向认证。</p>
                     * @return CaEnabled <p>是否开启双向认证。</p>
                     * 
                     */
                    bool GetCaEnabled() const;

                    /**
                     * 判断参数 CaEnabled 是否已赋值
                     * @return CaEnabled 是否已赋值
                     * 
                     */
                    bool CaEnabledHasBeenSet() const;

                    /**
                     * 获取<p>服务器证书 ID 列表。</p>
                     * @return CertificateIds <p>服务器证书 ID 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取<p>监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     * @return CreateTime <p>监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>规则动作列表。</p>
                     * @return DefaultActions <p>规则动作列表。</p>
                     * 
                     */
                    std::vector<DefaultAction> GetDefaultActions() const;

                    /**
                     * 判断参数 DefaultActions 是否已赋值
                     * @return DefaultActions 是否已赋值
                     * 
                     */
                    bool DefaultActionsHasBeenSet() const;

                    /**
                     * 获取<p>是否启用 Gzip 压缩。</p>
                     * @return GzipEnabled <p>是否启用 Gzip 压缩。</p>
                     * 
                     */
                    bool GetGzipEnabled() const;

                    /**
                     * 判断参数 GzipEnabled 是否已赋值
                     * @return GzipEnabled 是否已赋值
                     * 
                     */
                    bool GzipEnabledHasBeenSet() const;

                    /**
                     * 获取<p>是否开启HTTP/2特性。</p>
                     * @return Http2Enabled <p>是否开启HTTP/2特性。</p>
                     * 
                     */
                    bool GetHttp2Enabled() const;

                    /**
                     * 判断参数 Http2Enabled 是否已赋值
                     * @return Http2Enabled 是否已赋值
                     * 
                     */
                    bool Http2EnabledHasBeenSet() const;

                    /**
                     * 获取<p>指定连接空闲超时时间。单位：秒。</p>
                     * @return IdleTimeout <p>指定连接空闲超时时间。单位：秒。</p>
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     * @return ListenerId <p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义监听名称。</p>
                     * @return ListenerName <p>自定义监听名称。</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例前端使用的端口。</p>
                     * @return ListenerPort <p>负载均衡实例前端使用的端口。</p>
                     * 
                     */
                    uint64_t GetListenerPort() const;

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取<p>监听协议。</p>
                     * @return ListenerProtocol <p>监听协议。</p>
                     * 
                     */
                    std::string GetListenerProtocol() const;

                    /**
                     * 判断参数 ListenerProtocol 是否已赋值
                     * @return ListenerProtocol 是否已赋值
                     * 
                     */
                    bool ListenerProtocolHasBeenSet() const;

                    /**
                     * 获取<p>监听器状态。取值:=</p><ul><li><strong>Active</strong>: 运行中。</li><li><strong>Provisioning</strong>：创建中。</li><li><strong>Configuring</strong>：变配中。</li><li><strong>ProvisionFailed</strong>：创建失败</li></ul>
                     * @return ListenerStatus <p>监听器状态。取值:=</p><ul><li><strong>Active</strong>: 运行中。</li><li><strong>Provisioning</strong>：创建中。</li><li><strong>Configuring</strong>：变配中。</li><li><strong>ProvisionFailed</strong>：创建失败</li></ul>
                     * 
                     */
                    std::string GetListenerStatus() const;

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     * 
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     * @return LoadBalancerId <p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     * @return ModifyTime <p>监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>连接请求超时时间。单位：秒。</p>
                     * @return RequestTimeout <p>连接请求超时时间。单位：秒。</p>
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 判断参数 RequestTimeout 是否已赋值
                     * @return RequestTimeout 是否已赋值
                     * 
                     */
                    bool RequestTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>安全策略 ID，格式为 tls- 后接 8 位字母数字。</p>
                     * @return SecurityPolicyId <p>安全策略 ID，格式为 tls- 后接 8 位字母数字。</p>
                     * 
                     */
                    std::string GetSecurityPolicyId() const;

                    /**
                     * 判断参数 SecurityPolicyId 是否已赋值
                     * @return SecurityPolicyId 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>标签。</p>
                     * @return Tags <p>标签。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>XForwardedFor配置。</p>
                     * @return XForwardedForConfig <p>XForwardedFor配置。</p>
                     * 
                     */
                    XForwardedForConfig GetXForwardedForConfig() const;

                    /**
                     * 判断参数 XForwardedForConfig 是否已赋值
                     * @return XForwardedForConfig 是否已赋值
                     * 
                     */
                    bool XForwardedForConfigHasBeenSet() const;

                private:

                    /**
                     * <p>监听器绑定的CA证书ID列表。</p>
                     */
                    std::vector<std::string> m_caCertificateIds;
                    bool m_caCertificateIdsHasBeenSet;

                    /**
                     * <p>是否开启双向认证。</p>
                     */
                    bool m_caEnabled;
                    bool m_caEnabledHasBeenSet;

                    /**
                     * <p>服务器证书 ID 列表。</p>
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * <p>监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>规则动作列表。</p>
                     */
                    std::vector<DefaultAction> m_defaultActions;
                    bool m_defaultActionsHasBeenSet;

                    /**
                     * <p>是否启用 Gzip 压缩。</p>
                     */
                    bool m_gzipEnabled;
                    bool m_gzipEnabledHasBeenSet;

                    /**
                     * <p>是否开启HTTP/2特性。</p>
                     */
                    bool m_http2Enabled;
                    bool m_http2EnabledHasBeenSet;

                    /**
                     * <p>指定连接空闲超时时间。单位：秒。</p>
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * <p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>自定义监听名称。</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>负载均衡实例前端使用的端口。</p>
                     */
                    uint64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * <p>监听协议。</p>
                     */
                    std::string m_listenerProtocol;
                    bool m_listenerProtocolHasBeenSet;

                    /**
                     * <p>监听器状态。取值:=</p><ul><li><strong>Active</strong>: 运行中。</li><li><strong>Provisioning</strong>：创建中。</li><li><strong>Configuring</strong>：变配中。</li><li><strong>ProvisionFailed</strong>：创建失败</li></ul>
                     */
                    std::string m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * <p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>连接请求超时时间。单位：秒。</p>
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * <p>安全策略 ID，格式为 tls- 后接 8 位字母数字。</p>
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                    /**
                     * <p>标签。</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>XForwardedFor配置。</p>
                     */
                    XForwardedForConfig m_xForwardedForConfig;
                    bool m_xForwardedForConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERDETAILRESPONSE_H_
