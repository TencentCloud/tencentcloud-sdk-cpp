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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_LISTENEROUTPUT_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_LISTENEROUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 监听器简要信息出参
                */
                class ListenerOutput : public AbstractModel
                {
                public:
                    ListenerOutput();
                    ~ListenerOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启双向认证。
                     * @return CaEnable 是否开启双向认证。
                     * 
                     */
                    bool GetCaEnable() const;

                    /**
                     * 设置是否开启双向认证。
                     * @param _caEnable 是否开启双向认证。
                     * 
                     */
                    void SetCaEnable(const bool& _caEnable);

                    /**
                     * 判断参数 CaEnable 是否已赋值
                     * @return CaEnable 是否已赋值
                     * 
                     */
                    bool CaEnableHasBeenSet() const;

                    /**
                     * 获取监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     * @return CreateTime 监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     * @param _createTime 监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
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
                     * 获取是否启用 Gzip 压缩。
                     * @return GzipEnabled 是否启用 Gzip 压缩。
                     * 
                     */
                    bool GetGzipEnabled() const;

                    /**
                     * 设置是否启用 Gzip 压缩。
                     * @param _gzipEnabled 是否启用 Gzip 压缩。
                     * 
                     */
                    void SetGzipEnabled(const bool& _gzipEnabled);

                    /**
                     * 判断参数 GzipEnabled 是否已赋值
                     * @return GzipEnabled 是否已赋值
                     * 
                     */
                    bool GzipEnabledHasBeenSet() const;

                    /**
                     * 获取是否启用http2。
                     * @return Http2Enable 是否启用http2。
                     * 
                     */
                    bool GetHttp2Enable() const;

                    /**
                     * 设置是否启用http2。
                     * @param _http2Enable 是否启用http2。
                     * 
                     */
                    void SetHttp2Enable(const bool& _http2Enable);

                    /**
                     * 判断参数 Http2Enable 是否已赋值
                     * @return Http2Enable 是否已赋值
                     * 
                     */
                    bool Http2EnableHasBeenSet() const;

                    /**
                     * 获取空闲超时时间。
                     * @return IdleTimeout 空闲超时时间。
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置空闲超时时间。
                     * @param _idleTimeout 空闲超时时间。
                     * 
                     */
                    void SetIdleTimeout(const uint64_t& _idleTimeout);

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
                     * 设置监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @param _listenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
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
                     * 获取监听器名称。
                     * @return ListenerName 监听器名称。
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称。
                     * @param _listenerName 监听器名称。
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
                     * 获取监听器端口。
                     * @return ListenerPort 监听器端口。
                     * 
                     */
                    uint64_t GetListenerPort() const;

                    /**
                     * 设置监听器端口。
                     * @param _listenerPort 监听器端口。
                     * 
                     */
                    void SetListenerPort(const uint64_t& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取监听器协议。
                     * @return ListenerProtocol 监听器协议。
                     * 
                     */
                    std::string GetListenerProtocol() const;

                    /**
                     * 设置监听器协议。
                     * @param _listenerProtocol 监听器协议。
                     * 
                     */
                    void SetListenerProtocol(const std::string& _listenerProtocol);

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
                     * 设置监听器状态。取值:=

- **Active**: 运行中。
- **Provisioning**：创建中。
- **Configuring**：变配中。
- **ProvisionFailed**：创建失败
                     * @param _listenerStatus 监听器状态。取值:=

- **Active**: 运行中。
- **Provisioning**：创建中。
- **Configuring**：变配中。
- **ProvisionFailed**：创建失败
                     * 
                     */
                    void SetListenerStatus(const std::string& _listenerStatus);

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     * 
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     * @return ModifyTime 监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     * @param _modifyTime 监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取请求超时时间。
                     * @return RequestTimeout 请求超时时间。
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置请求超时时间。
                     * @param _requestTimeout 请求超时时间。
                     * 
                     */
                    void SetRequestTimeout(const uint64_t& _requestTimeout);

                    /**
                     * 判断参数 RequestTimeout 是否已赋值
                     * @return RequestTimeout 是否已赋值
                     * 
                     */
                    bool RequestTimeoutHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tags 标签。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签。
                     * @param _tags 标签。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取安全策略 ID。
                     * @return TlsSecurityPolicyId 安全策略 ID。
                     * 
                     */
                    std::string GetTlsSecurityPolicyId() const;

                    /**
                     * 设置安全策略 ID。
                     * @param _tlsSecurityPolicyId 安全策略 ID。
                     * 
                     */
                    void SetTlsSecurityPolicyId(const std::string& _tlsSecurityPolicyId);

                    /**
                     * 判断参数 TlsSecurityPolicyId 是否已赋值
                     * @return TlsSecurityPolicyId 是否已赋值
                     * 
                     */
                    bool TlsSecurityPolicyIdHasBeenSet() const;

                    /**
                     * 获取XForwardedFor配置。
                     * @return XForwardedForConfig XForwardedFor配置。
                     * 
                     */
                    XForwardedForConfig GetXForwardedForConfig() const;

                    /**
                     * 设置XForwardedFor配置。
                     * @param _xForwardedForConfig XForwardedFor配置。
                     * 
                     */
                    void SetXForwardedForConfig(const XForwardedForConfig& _xForwardedForConfig);

                    /**
                     * 判断参数 XForwardedForConfig 是否已赋值
                     * @return XForwardedForConfig 是否已赋值
                     * 
                     */
                    bool XForwardedForConfigHasBeenSet() const;

                private:

                    /**
                     * 是否开启双向认证。
                     */
                    bool m_caEnable;
                    bool m_caEnableHasBeenSet;

                    /**
                     * 监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否启用 Gzip 压缩。
                     */
                    bool m_gzipEnabled;
                    bool m_gzipEnabledHasBeenSet;

                    /**
                     * 是否启用http2。
                     */
                    bool m_http2Enable;
                    bool m_http2EnableHasBeenSet;

                    /**
                     * 空闲超时时间。
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器端口。
                     */
                    uint64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * 监听器协议。
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
                     * 监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 请求超时时间。
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 安全策略 ID。
                     */
                    std::string m_tlsSecurityPolicyId;
                    bool m_tlsSecurityPolicyIdHasBeenSet;

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

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_LISTENEROUTPUT_H_
