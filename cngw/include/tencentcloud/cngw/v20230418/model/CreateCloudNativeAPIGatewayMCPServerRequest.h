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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYMCPSERVERREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYMCPSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWMCPUpstreamInfo.h>
#include <tencentcloud/cngw/v20230418/model/AIGWMCPSessionConfig.h>
#include <tencentcloud/cngw/v20230418/model/AIGWHealthCheckSetting.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayMCPServer请求参数结构体
                */
                class CreateCloudNativeAPIGatewayMCPServerRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayMCPServerRequest();
                    ~CreateCloudNativeAPIGatewayMCPServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID</p>
                     * @return GatewayId <p>实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _gatewayId <p>实例 ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>名字</p>
                     * @return Name <p>名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名字</p>
                     * @param _name <p>名字</p>
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
                     * 获取<p>展示名字</p>
                     * @return DisplayName <p>展示名字</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>展示名字</p>
                     * @param _displayName <p>展示名字</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>MCP服务类型</p><ul><li>MCP</li><li>Rest2MCP</li></ul>
                     * @return ServerType <p>MCP服务类型</p><ul><li>MCP</li><li>Rest2MCP</li></ul>
                     * 
                     */
                    std::string GetServerType() const;

                    /**
                     * 设置<p>MCP服务类型</p><ul><li>MCP</li><li>Rest2MCP</li></ul>
                     * @param _serverType <p>MCP服务类型</p><ul><li>MCP</li><li>Rest2MCP</li></ul>
                     * 
                     */
                    void SetServerType(const std::string& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     * 
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取<p>传输协议：StreamableHttp或SSE</p><p>枚举值：</p><ul><li>StreamableHttp： Streamable HTTP</li><li>SSE： Server-Sent Events</li></ul>
                     * @return Transport <p>传输协议：StreamableHttp或SSE</p><p>枚举值：</p><ul><li>StreamableHttp： Streamable HTTP</li><li>SSE： Server-Sent Events</li></ul>
                     * 
                     */
                    std::string GetTransport() const;

                    /**
                     * 设置<p>传输协议：StreamableHttp或SSE</p><p>枚举值：</p><ul><li>StreamableHttp： Streamable HTTP</li><li>SSE： Server-Sent Events</li></ul>
                     * @param _transport <p>传输协议：StreamableHttp或SSE</p><p>枚举值：</p><ul><li>StreamableHttp： Streamable HTTP</li><li>SSE： Server-Sent Events</li></ul>
                     * 
                     */
                    void SetTransport(const std::string& _transport);

                    /**
                     * 判断参数 Transport 是否已赋值
                     * @return Transport 是否已赋值
                     * 
                     */
                    bool TransportHasBeenSet() const;

                    /**
                     * 获取<p>后端类型</p><p>枚举值：</p><ul><li>MCPRegistry： mcp 注册中心- Registry</li><li>Registry： 普通注册中心</li><li>HostIP： 域名或ip</li><li>VirtualMCPServer： 虚拟MCPServer</li></ul>
                     * @return UpstreamType <p>后端类型</p><p>枚举值：</p><ul><li>MCPRegistry： mcp 注册中心- Registry</li><li>Registry： 普通注册中心</li><li>HostIP： 域名或ip</li><li>VirtualMCPServer： 虚拟MCPServer</li></ul>
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置<p>后端类型</p><p>枚举值：</p><ul><li>MCPRegistry： mcp 注册中心- Registry</li><li>Registry： 普通注册中心</li><li>HostIP： 域名或ip</li><li>VirtualMCPServer： 虚拟MCPServer</li></ul>
                     * @param _upstreamType <p>后端类型</p><p>枚举值：</p><ul><li>MCPRegistry： mcp 注册中心- Registry</li><li>Registry： 普通注册中心</li><li>HostIP： 域名或ip</li><li>VirtualMCPServer： 虚拟MCPServer</li></ul>
                     * 
                     */
                    void SetUpstreamType(const std::string& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取<p>注册中心来源信息</p>
                     * @return UpstreamInfo <p>注册中心来源信息</p>
                     * 
                     */
                    AIGWMCPUpstreamInfo GetUpstreamInfo() const;

                    /**
                     * 设置<p>注册中心来源信息</p>
                     * @param _upstreamInfo <p>注册中心来源信息</p>
                     * 
                     */
                    void SetUpstreamInfo(const AIGWMCPUpstreamInfo& _upstreamInfo);

                    /**
                     * 判断参数 UpstreamInfo 是否已赋值
                     * @return UpstreamInfo 是否已赋值
                     * 
                     */
                    bool UpstreamInfoHasBeenSet() const;

                    /**
                     * 获取<p>会话配置</p>
                     * @return SessionConfig <p>会话配置</p>
                     * 
                     */
                    AIGWMCPSessionConfig GetSessionConfig() const;

                    /**
                     * 设置<p>会话配置</p>
                     * @param _sessionConfig <p>会话配置</p>
                     * 
                     */
                    void SetSessionConfig(const AIGWMCPSessionConfig& _sessionConfig);

                    /**
                     * 判断参数 SessionConfig 是否已赋值
                     * @return SessionConfig 是否已赋值
                     * 
                     */
                    bool SessionConfigHasBeenSet() const;

                    /**
                     * 获取<p>超时时间，单位ms，最大60000</p>
                     * @return Timeout <p>超时时间，单位ms，最大60000</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间，单位ms，最大60000</p>
                     * @param _timeout <p>超时时间，单位ms，最大60000</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>重试次数，最大3次</p>
                     * @return RetryCount <p>重试次数，最大3次</p>
                     * 
                     */
                    uint64_t GetRetryCount() const;

                    /**
                     * 设置<p>重试次数，最大3次</p>
                     * @param _retryCount <p>重试次数，最大3次</p>
                     * 
                     */
                    void SetRetryCount(const uint64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>是否启用健康检查</p>
                     * @return EnableHealthCheck <p>是否启用健康检查</p>
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置<p>是否启用健康检查</p>
                     * @param _enableHealthCheck <p>是否启用健康检查</p>
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
                     * 获取<p>健康检查配置</p>
                     * @return HealthCheck <p>健康检查配置</p>
                     * 
                     */
                    AIGWHealthCheckSetting GetHealthCheck() const;

                    /**
                     * 设置<p>健康检查配置</p>
                     * @param _healthCheck <p>健康检查配置</p>
                     * 
                     */
                    void SetHealthCheck(const AIGWHealthCheckSetting& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>展示名字</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>MCP服务类型</p><ul><li>MCP</li><li>Rest2MCP</li></ul>
                     */
                    std::string m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * <p>传输协议：StreamableHttp或SSE</p><p>枚举值：</p><ul><li>StreamableHttp： Streamable HTTP</li><li>SSE： Server-Sent Events</li></ul>
                     */
                    std::string m_transport;
                    bool m_transportHasBeenSet;

                    /**
                     * <p>后端类型</p><p>枚举值：</p><ul><li>MCPRegistry： mcp 注册中心- Registry</li><li>Registry： 普通注册中心</li><li>HostIP： 域名或ip</li><li>VirtualMCPServer： 虚拟MCPServer</li></ul>
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * <p>注册中心来源信息</p>
                     */
                    AIGWMCPUpstreamInfo m_upstreamInfo;
                    bool m_upstreamInfoHasBeenSet;

                    /**
                     * <p>会话配置</p>
                     */
                    AIGWMCPSessionConfig m_sessionConfig;
                    bool m_sessionConfigHasBeenSet;

                    /**
                     * <p>超时时间，单位ms，最大60000</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>重试次数，最大3次</p>
                     */
                    uint64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否启用健康检查</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>健康检查配置</p>
                     */
                    AIGWHealthCheckSetting m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYMCPSERVERREQUEST_H_
