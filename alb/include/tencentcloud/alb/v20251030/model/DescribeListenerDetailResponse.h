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
                     * 获取监听器绑定的CA证书ID列表。
                     * @return CaCertificateIds 监听器绑定的CA证书ID列表。
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
                     * 获取是否开启双向认证。
                     * @return CaEnabled 是否开启双向认证。
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
                     * 获取服务器证书 ID 列表。
                     * @return CertificateIds 服务器证书 ID 列表。
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
                     * 获取监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     * @return CreateTime 监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
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
                     * 获取规则动作列表。
                     * @return DefaultActions 规则动作列表。
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
                     * 获取是否启用 Gzip 压缩。
                     * @return GzipEnabled 是否启用 Gzip 压缩。
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
                     * 获取是否开启HTTP/2特性。
                     * @return Http2Enabled 是否开启HTTP/2特性。
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
                     * 获取指定连接空闲超时时间。单位：秒。
                     * @return IdleTimeout 指定连接空闲超时时间。单位：秒。
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
                     * 获取监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @return ListenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
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
                     * 获取自定义监听名称。
                     * @return ListenerName 自定义监听名称。
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
                     * 获取负载均衡实例前端使用的端口。
                     * @return ListenerPort 负载均衡实例前端使用的端口。
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
                     * 获取监听协议。
                     * @return ListenerProtocol 监听协议。
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
                     * 获取监听器状态。取值:=

- **Active**: 运行中。
- **Provisioning**：创建中。
- **Configuring**：变配中。
- **ProvisionFailed**：创建失败
                     * @return ListenerStatus 监听器状态。取值:=

- **Active**: 运行中。
- **Provisioning**：创建中。
- **Configuring**：变配中。
- **ProvisionFailed**：创建失败
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
                     * 获取负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @return LoadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
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
                     * 获取监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     * @return ModifyTime 监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
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
                     * 获取请求超时时间。单位：秒。
                     * @return RequestTimeout 请求超时时间。单位：秒。
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
                     * 获取安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * @return SecurityPolicyId 安全策略 ID，格式为 tls- 后接 8 位字母数字。
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
                     * 获取标签。
                     * @return Tags 标签。
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
                     * 获取XForwardedFor配置。
                     * @return XForwardedForConfig XForwardedFor配置。
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
                     * 监听器绑定的CA证书ID列表。
                     */
                    std::vector<std::string> m_caCertificateIds;
                    bool m_caCertificateIdsHasBeenSet;

                    /**
                     * 是否开启双向认证。
                     */
                    bool m_caEnabled;
                    bool m_caEnabledHasBeenSet;

                    /**
                     * 服务器证书 ID 列表。
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * 监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 规则动作列表。
                     */
                    std::vector<DefaultAction> m_defaultActions;
                    bool m_defaultActionsHasBeenSet;

                    /**
                     * 是否启用 Gzip 压缩。
                     */
                    bool m_gzipEnabled;
                    bool m_gzipEnabledHasBeenSet;

                    /**
                     * 是否开启HTTP/2特性。
                     */
                    bool m_http2Enabled;
                    bool m_http2EnabledHasBeenSet;

                    /**
                     * 指定连接空闲超时时间。单位：秒。
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 自定义监听名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 负载均衡实例前端使用的端口。
                     */
                    uint64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * 监听协议。
                     */
                    std::string m_listenerProtocol;
                    bool m_listenerProtocolHasBeenSet;

                    /**
                     * 监听器状态。取值:=

- **Active**: 运行中。
- **Provisioning**：创建中。
- **Configuring**：变配中。
- **ProvisionFailed**：创建失败
                     */
                    std::string m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 请求超时时间。单位：秒。
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * 安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * XForwardedFor配置。
                     */
                    XForwardedForConfig m_xForwardedForConfig;
                    bool m_xForwardedForConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERDETAILRESPONSE_H_
