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
                     * 获取<p>是否开启双向认证。</p>
                     * @return CaEnable <p>是否开启双向认证。</p>
                     * 
                     */
                    bool GetCaEnable() const;

                    /**
                     * 设置<p>是否开启双向认证。</p>
                     * @param _caEnable <p>是否开启双向认证。</p>
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
                     * 获取<p>监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     * @return CreateTime <p>监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     * @param _createTime <p>监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
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
                     * 获取<p>是否启用 Gzip 压缩。</p>
                     * @return GzipEnabled <p>是否启用 Gzip 压缩。</p>
                     * 
                     */
                    bool GetGzipEnabled() const;

                    /**
                     * 设置<p>是否启用 Gzip 压缩。</p>
                     * @param _gzipEnabled <p>是否启用 Gzip 压缩。</p>
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
                     * 获取<p>是否启用http2。</p>
                     * @return Http2Enable <p>是否启用http2。</p>
                     * 
                     */
                    bool GetHttp2Enable() const;

                    /**
                     * 设置<p>是否启用http2。</p>
                     * @param _http2Enable <p>是否启用http2。</p>
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
                     * 获取<p>空闲超时时间。</p>
                     * @return IdleTimeout <p>空闲超时时间。</p>
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置<p>空闲超时时间。</p>
                     * @param _idleTimeout <p>空闲超时时间。</p>
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
                     * 获取<p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     * @return ListenerId <p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     * @param _listenerId <p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
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
                     * 获取<p>监听器名称。</p>
                     * @return ListenerName <p>监听器名称。</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>监听器名称。</p>
                     * @param _listenerName <p>监听器名称。</p>
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
                     * 获取<p>监听器端口。</p>
                     * @return ListenerPort <p>监听器端口。</p>
                     * 
                     */
                    uint64_t GetListenerPort() const;

                    /**
                     * 设置<p>监听器端口。</p>
                     * @param _listenerPort <p>监听器端口。</p>
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
                     * 获取<p>监听器协议。</p>
                     * @return ListenerProtocol <p>监听器协议。</p>
                     * 
                     */
                    std::string GetListenerProtocol() const;

                    /**
                     * 设置<p>监听器协议。</p>
                     * @param _listenerProtocol <p>监听器协议。</p>
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
                     * 获取<p>监听器状态。取值:=</p><ul><li><strong>Active</strong>: 运行中。</li><li><strong>Provisioning</strong>：创建中。</li><li><strong>Configuring</strong>：变配中。</li><li><strong>ProvisionFailed</strong>：创建失败</li></ul>
                     * @return ListenerStatus <p>监听器状态。取值:=</p><ul><li><strong>Active</strong>: 运行中。</li><li><strong>Provisioning</strong>：创建中。</li><li><strong>Configuring</strong>：变配中。</li><li><strong>ProvisionFailed</strong>：创建失败</li></ul>
                     * 
                     */
                    std::string GetListenerStatus() const;

                    /**
                     * 设置<p>监听器状态。取值:=</p><ul><li><strong>Active</strong>: 运行中。</li><li><strong>Provisioning</strong>：创建中。</li><li><strong>Configuring</strong>：变配中。</li><li><strong>ProvisionFailed</strong>：创建失败</li></ul>
                     * @param _listenerStatus <p>监听器状态。取值:=</p><ul><li><strong>Active</strong>: 运行中。</li><li><strong>Provisioning</strong>：创建中。</li><li><strong>Configuring</strong>：变配中。</li><li><strong>ProvisionFailed</strong>：创建失败</li></ul>
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
                     * 获取<p>监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     * @return ModifyTime <p>监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     * @param _modifyTime <p>监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
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
                     * 获取<p>连接请求超时时间。</p>
                     * @return RequestTimeout <p>连接请求超时时间。</p>
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置<p>连接请求超时时间。</p>
                     * @param _requestTimeout <p>连接请求超时时间。</p>
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
                     * 获取<p>标签。</p>
                     * @return Tags <p>标签。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签。</p>
                     * @param _tags <p>标签。</p>
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
                     * 获取<p>安全策略 ID。</p>
                     * @return TlsSecurityPolicyId <p>安全策略 ID。</p>
                     * 
                     */
                    std::string GetTlsSecurityPolicyId() const;

                    /**
                     * 设置<p>安全策略 ID。</p>
                     * @param _tlsSecurityPolicyId <p>安全策略 ID。</p>
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
                     * 获取<p>XForwardedFor配置。</p>
                     * @return XForwardedForConfig <p>XForwardedFor配置。</p>
                     * 
                     */
                    XForwardedForConfig GetXForwardedForConfig() const;

                    /**
                     * 设置<p>XForwardedFor配置。</p>
                     * @param _xForwardedForConfig <p>XForwardedFor配置。</p>
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
                     * <p>是否开启双向认证。</p>
                     */
                    bool m_caEnable;
                    bool m_caEnableHasBeenSet;

                    /**
                     * <p>监听器实例的创建时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>是否启用 Gzip 压缩。</p>
                     */
                    bool m_gzipEnabled;
                    bool m_gzipEnabledHasBeenSet;

                    /**
                     * <p>是否启用http2。</p>
                     */
                    bool m_http2Enable;
                    bool m_http2EnableHasBeenSet;

                    /**
                     * <p>空闲超时时间。</p>
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * <p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>监听器名称。</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>监听器端口。</p>
                     */
                    uint64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * <p>监听器协议。</p>
                     */
                    std::string m_listenerProtocol;
                    bool m_listenerProtocolHasBeenSet;

                    /**
                     * <p>监听器状态。取值:=</p><ul><li><strong>Active</strong>: 运行中。</li><li><strong>Provisioning</strong>：创建中。</li><li><strong>Configuring</strong>：变配中。</li><li><strong>ProvisionFailed</strong>：创建失败</li></ul>
                     */
                    std::string m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * <p>监听器实例的最后变更时间。格式：ISO 8601（例如 2025-01-01T08:30:00+08:00）</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>连接请求超时时间。</p>
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * <p>标签。</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>安全策略 ID。</p>
                     */
                    std::string m_tlsSecurityPolicyId;
                    bool m_tlsSecurityPolicyIdHasBeenSet;

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

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_LISTENEROUTPUT_H_
