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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYENDPOINTGROUPREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYENDPOINTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/EndpointConfigurations.h>
#include <tencentcloud/ga2/v20250115/model/PortOverride.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyEndpointGroup请求参数结构体
                */
                class ModifyEndpointGroupRequest : public AbstractModel
                {
                public:
                    ModifyEndpointGroupRequest();
                    ~ModifyEndpointGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全球加速实例ID。</p>
                     * @return GlobalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>全球加速实例ID。</p>
                     * @param _globalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>监听器ID。</p>
                     * @return ListenerId <p>监听器ID。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器ID。</p>
                     * @param _listenerId <p>监听器ID。</p>
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
                     * 获取<p>终端节点组ID。</p>
                     * @return EndpointGroupId <p>终端节点组ID。</p>
                     * 
                     */
                    std::string GetEndpointGroupId() const;

                    /**
                     * 设置<p>终端节点组ID。</p>
                     * @param _endpointGroupId <p>终端节点组ID。</p>
                     * 
                     */
                    void SetEndpointGroupId(const std::string& _endpointGroupId);

                    /**
                     * 判断参数 EndpointGroupId 是否已赋值
                     * @return EndpointGroupId 是否已赋值
                     * 
                     */
                    bool EndpointGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>终端节点配置。</p>
                     * @return EndpointConfigurations <p>终端节点配置。</p>
                     * 
                     */
                    std::vector<EndpointConfigurations> GetEndpointConfigurations() const;

                    /**
                     * 设置<p>终端节点配置。</p>
                     * @param _endpointConfigurations <p>终端节点配置。</p>
                     * 
                     */
                    void SetEndpointConfigurations(const std::vector<EndpointConfigurations>& _endpointConfigurations);

                    /**
                     * 判断参数 EndpointConfigurations 是否已赋值
                     * @return EndpointConfigurations 是否已赋值
                     * 
                     */
                    bool EndpointConfigurationsHasBeenSet() const;

                    /**
                     * 获取<p>名称，最大长度不能超过60个字节。</p>
                     * @return Name <p>名称，最大长度不能超过60个字节。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称，最大长度不能超过60个字节。</p>
                     * @param _name <p>名称，最大长度不能超过60个字节。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>描述信息，最大长度不能超过100个字节。</p>
                     * @return Description <p>描述信息，最大长度不能超过100个字节。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息，最大长度不能超过100个字节。</p>
                     * @param _description <p>描述信息，最大长度不能超过100个字节。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>是否开启健康检查。</p>
                     * @return EnableHealthCheck <p>是否开启健康检查。</p>
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置<p>是否开启健康检查。</p>
                     * @param _enableHealthCheck <p>是否开启健康检查。</p>
                     * 
                     */
                    void SetEnableHealthCheck(const bool& _enableHealthCheck);

                    /**
                     * 判断参数 EnableHealthCheck 是否已赋值
                     * @return EnableHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableHealthCheckHasBeenSet() const;

                    /**
                     * 获取<p>响应超时时间。</p>
                     * @return ConnectTimeout <p>响应超时时间。</p>
                     * 
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置<p>响应超时时间。</p>
                     * @param _connectTimeout <p>响应超时时间。</p>
                     * 
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     * 
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>健康检查间隔。</p>
                     * @return HealthCheckInterval <p>健康检查间隔。</p>
                     * 
                     */
                    uint64_t GetHealthCheckInterval() const;

                    /**
                     * 设置<p>健康检查间隔。</p>
                     * @param _healthCheckInterval <p>健康检查间隔。</p>
                     * 
                     */
                    void SetHealthCheckInterval(const uint64_t& _healthCheckInterval);

                    /**
                     * 判断参数 HealthCheckInterval 是否已赋值
                     * @return HealthCheckInterval 是否已赋值
                     * 
                     */
                    bool HealthCheckIntervalHasBeenSet() const;

                    /**
                     * 获取<p>不健康阀值。</p>
                     * @return UnhealthyThreshold <p>不健康阀值。</p>
                     * 
                     */
                    uint64_t GetUnhealthyThreshold() const;

                    /**
                     * 设置<p>不健康阀值。</p>
                     * @param _unhealthyThreshold <p>不健康阀值。</p>
                     * 
                     */
                    void SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold);

                    /**
                     * 判断参数 UnhealthyThreshold 是否已赋值
                     * @return UnhealthyThreshold 是否已赋值
                     * 
                     */
                    bool UnhealthyThresholdHasBeenSet() const;

                    /**
                     * 获取<p>健康阀值。</p>
                     * @return HealthyThreshold <p>健康阀值。</p>
                     * 
                     */
                    uint64_t GetHealthyThreshold() const;

                    /**
                     * 设置<p>健康阀值。</p>
                     * @param _healthyThreshold <p>健康阀值。</p>
                     * 
                     */
                    void SetHealthyThreshold(const uint64_t& _healthyThreshold);

                    /**
                     * 判断参数 HealthyThreshold 是否已赋值
                     * @return HealthyThreshold 是否已赋值
                     * 
                     */
                    bool HealthyThresholdHasBeenSet() const;

                    /**
                     * 获取<p>检查协议。</p>
                     * @return CheckType <p>检查协议。</p>
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置<p>检查协议。</p>
                     * @param _checkType <p>检查协议。</p>
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>检查端口。</p>
                     * @return CheckPort <p>检查端口。</p>
                     * 
                     */
                    uint64_t GetCheckPort() const;

                    /**
                     * 设置<p>检查端口。</p>
                     * @param _checkPort <p>检查端口。</p>
                     * 
                     */
                    void SetCheckPort(const uint64_t& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     * 
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取<p>检查内容。</p>
                     * @return ContextType <p>检查内容。</p>
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置<p>检查内容。</p>
                     * @param _contextType <p>检查内容。</p>
                     * 
                     */
                    void SetContextType(const std::string& _contextType);

                    /**
                     * 判断参数 ContextType 是否已赋值
                     * @return ContextType 是否已赋值
                     * 
                     */
                    bool ContextTypeHasBeenSet() const;

                    /**
                     * 获取<p>检查请求。</p>
                     * @return CheckSendContext <p>检查请求。</p>
                     * 
                     */
                    std::string GetCheckSendContext() const;

                    /**
                     * 设置<p>检查请求。</p>
                     * @param _checkSendContext <p>检查请求。</p>
                     * 
                     */
                    void SetCheckSendContext(const std::string& _checkSendContext);

                    /**
                     * 判断参数 CheckSendContext 是否已赋值
                     * @return CheckSendContext 是否已赋值
                     * 
                     */
                    bool CheckSendContextHasBeenSet() const;

                    /**
                     * 获取<p>检查返回结果。</p>
                     * @return CheckRecvContext <p>检查返回结果。</p>
                     * 
                     */
                    std::string GetCheckRecvContext() const;

                    /**
                     * 设置<p>检查返回结果。</p>
                     * @param _checkRecvContext <p>检查返回结果。</p>
                     * 
                     */
                    void SetCheckRecvContext(const std::string& _checkRecvContext);

                    /**
                     * 判断参数 CheckRecvContext 是否已赋值
                     * @return CheckRecvContext 是否已赋值
                     * 
                     */
                    bool CheckRecvContextHasBeenSet() const;

                    /**
                     * 获取<p>检查域名。</p>
                     * @return CheckDomain <p>检查域名。</p>
                     * 
                     */
                    std::string GetCheckDomain() const;

                    /**
                     * 设置<p>检查域名。</p>
                     * @param _checkDomain <p>检查域名。</p>
                     * 
                     */
                    void SetCheckDomain(const std::string& _checkDomain);

                    /**
                     * 判断参数 CheckDomain 是否已赋值
                     * @return CheckDomain 是否已赋值
                     * 
                     */
                    bool CheckDomainHasBeenSet() const;

                    /**
                     * 获取<p>检查URL。</p>
                     * @return CheckPath <p>检查URL。</p>
                     * 
                     */
                    std::string GetCheckPath() const;

                    /**
                     * 设置<p>检查URL。</p>
                     * @param _checkPath <p>检查URL。</p>
                     * 
                     */
                    void SetCheckPath(const std::string& _checkPath);

                    /**
                     * 判断参数 CheckPath 是否已赋值
                     * @return CheckPath 是否已赋值
                     * 
                     */
                    bool CheckPathHasBeenSet() const;

                    /**
                     * 获取<p>请求方式。</p>
                     * @return CheckMethod <p>请求方式。</p>
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置<p>请求方式。</p>
                     * @param _checkMethod <p>请求方式。</p>
                     * 
                     */
                    void SetCheckMethod(const std::string& _checkMethod);

                    /**
                     * 判断参数 CheckMethod 是否已赋值
                     * @return CheckMethod 是否已赋值
                     * 
                     */
                    bool CheckMethodHasBeenSet() const;

                    /**
                     * 获取<p>状态检测码。</p>
                     * @return StatusMask <p>状态检测码。</p>
                     * 
                     */
                    std::vector<std::string> GetStatusMask() const;

                    /**
                     * 设置<p>状态检测码。</p>
                     * @param _statusMask <p>状态检测码。</p>
                     * 
                     */
                    void SetStatusMask(const std::vector<std::string>& _statusMask);

                    /**
                     * 判断参数 StatusMask 是否已赋值
                     * @return StatusMask 是否已赋值
                     * 
                     */
                    bool StatusMaskHasBeenSet() const;

                    /**
                     * 获取<p>回源协议。</p>
                     * @return ForwardProtocol <p>回源协议。</p>
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置<p>回源协议。</p>
                     * @param _forwardProtocol <p>回源协议。</p>
                     * 
                     */
                    void SetForwardProtocol(const std::string& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     * 
                     */
                    bool ForwardProtocolHasBeenSet() const;

                    /**
                     * 获取<p>端口映射。</p>
                     * @return PortOverrides <p>端口映射。</p>
                     * 
                     */
                    std::vector<PortOverride> GetPortOverrides() const;

                    /**
                     * 设置<p>端口映射。</p>
                     * @param _portOverrides <p>端口映射。</p>
                     * 
                     */
                    void SetPortOverrides(const std::vector<PortOverride>& _portOverrides);

                    /**
                     * 判断参数 PortOverrides 是否已赋值
                     * @return PortOverrides 是否已赋值
                     * 
                     */
                    bool PortOverridesHasBeenSet() const;

                    /**
                     * 获取<p>HPPTS加密算法套件</p>
                     * @return CipherPolicyId <p>HPPTS加密算法套件</p>
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置<p>HPPTS加密算法套件</p>
                     * @param _cipherPolicyId <p>HPPTS加密算法套件</p>
                     * 
                     */
                    void SetCipherPolicyId(const std::string& _cipherPolicyId);

                    /**
                     * 判断参数 CipherPolicyId 是否已赋值
                     * @return CipherPolicyId 是否已赋值
                     * 
                     */
                    bool CipherPolicyIdHasBeenSet() const;

                private:

                    /**
                     * <p>全球加速实例ID。</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>监听器ID。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>终端节点组ID。</p>
                     */
                    std::string m_endpointGroupId;
                    bool m_endpointGroupIdHasBeenSet;

                    /**
                     * <p>终端节点配置。</p>
                     */
                    std::vector<EndpointConfigurations> m_endpointConfigurations;
                    bool m_endpointConfigurationsHasBeenSet;

                    /**
                     * <p>名称，最大长度不能超过60个字节。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述信息，最大长度不能超过100个字节。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否开启健康检查。</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>响应超时时间。</p>
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * <p>健康检查间隔。</p>
                     */
                    uint64_t m_healthCheckInterval;
                    bool m_healthCheckIntervalHasBeenSet;

                    /**
                     * <p>不健康阀值。</p>
                     */
                    uint64_t m_unhealthyThreshold;
                    bool m_unhealthyThresholdHasBeenSet;

                    /**
                     * <p>健康阀值。</p>
                     */
                    uint64_t m_healthyThreshold;
                    bool m_healthyThresholdHasBeenSet;

                    /**
                     * <p>检查协议。</p>
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>检查端口。</p>
                     */
                    uint64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * <p>检查内容。</p>
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * <p>检查请求。</p>
                     */
                    std::string m_checkSendContext;
                    bool m_checkSendContextHasBeenSet;

                    /**
                     * <p>检查返回结果。</p>
                     */
                    std::string m_checkRecvContext;
                    bool m_checkRecvContextHasBeenSet;

                    /**
                     * <p>检查域名。</p>
                     */
                    std::string m_checkDomain;
                    bool m_checkDomainHasBeenSet;

                    /**
                     * <p>检查URL。</p>
                     */
                    std::string m_checkPath;
                    bool m_checkPathHasBeenSet;

                    /**
                     * <p>请求方式。</p>
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * <p>状态检测码。</p>
                     */
                    std::vector<std::string> m_statusMask;
                    bool m_statusMaskHasBeenSet;

                    /**
                     * <p>回源协议。</p>
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * <p>端口映射。</p>
                     */
                    std::vector<PortOverride> m_portOverrides;
                    bool m_portOverridesHasBeenSet;

                    /**
                     * <p>HPPTS加密算法套件</p>
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYENDPOINTGROUPREQUEST_H_
