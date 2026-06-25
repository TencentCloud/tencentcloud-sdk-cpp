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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPUPSTREAMINFODETAIL_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPUPSTREAMINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 云原生网关MCP后端信息，用于展示
                */
                class AIGWMCPUpstreamInfoDetail : public AbstractModel
                {
                public:
                    AIGWMCPUpstreamInfoDetail();
                    ~AIGWMCPUpstreamInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>注册中心来源ID</p>
                     * @return SourceId <p>注册中心来源ID</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>注册中心来源ID</p>
                     * @param _sourceId <p>注册中心来源ID</p>
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取<p>注册中心来源名称, 入参不传，用于返回</p>
                     * @return SourceName <p>注册中心来源名称, 入参不传，用于返回</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>注册中心来源名称, 入参不传，用于返回</p>
                     * @param _sourceName <p>注册中心来源名称, 入参不传，用于返回</p>
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespace <p>命名空间</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>服务 id</p>
                     * @return MCPServerId <p>服务 id</p>
                     * 
                     */
                    std::string GetMCPServerId() const;

                    /**
                     * 设置<p>服务 id</p>
                     * @param _mCPServerId <p>服务 id</p>
                     * 
                     */
                    void SetMCPServerId(const std::string& _mCPServerId);

                    /**
                     * 判断参数 MCPServerId 是否已赋值
                     * @return MCPServerId 是否已赋值
                     * 
                     */
                    bool MCPServerIdHasBeenSet() const;

                    /**
                     * 获取<p>协议，UpstreamType是Registry 时必传</p><ul><li>http</li><li>https</li></ul>
                     * @return Protocol <p>协议，UpstreamType是Registry 时必传</p><ul><li>http</li><li>https</li></ul>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议，UpstreamType是Registry 时必传</p><ul><li>http</li><li>https</li></ul>
                     * @param _protocol <p>协议，UpstreamType是Registry 时必传</p><ul><li>http</li><li>https</li></ul>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>域名或ip</p>
                     * @return Host <p>域名或ip</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>域名或ip</p>
                     * @param _host <p>域名或ip</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>端口</p>
                     * @return Port <p>端口</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _port <p>端口</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>服务 id</p>
                     * @return ServiceId <p>服务 id</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务 id</p>
                     * @param _serviceId <p>服务 id</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>服务名字</p>
                     * @return ServiceName <p>服务名字</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名字</p>
                     * @param _serviceName <p>服务名字</p>
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>服务分组</p>
                     * @return ServiceGroup <p>服务分组</p>
                     * 
                     */
                    std::string GetServiceGroup() const;

                    /**
                     * 设置<p>服务分组</p>
                     * @param _serviceGroup <p>服务分组</p>
                     * 
                     */
                    void SetServiceGroup(const std::string& _serviceGroup);

                    /**
                     * 判断参数 ServiceGroup 是否已赋值
                     * @return ServiceGroup 是否已赋值
                     * 
                     */
                    bool ServiceGroupHasBeenSet() const;

                    /**
                     * 获取<p>mcp endpoint</p>
                     * @return MCPEndpoint <p>mcp endpoint</p>
                     * 
                     */
                    std::string GetMCPEndpoint() const;

                    /**
                     * 设置<p>mcp endpoint</p>
                     * @param _mCPEndpoint <p>mcp endpoint</p>
                     * 
                     */
                    void SetMCPEndpoint(const std::string& _mCPEndpoint);

                    /**
                     * 判断参数 MCPEndpoint 是否已赋值
                     * @return MCPEndpoint 是否已赋值
                     * 
                     */
                    bool MCPEndpointHasBeenSet() const;

                    /**
                     * 获取<p>SSE message路径</p>
                     * @return MessageEndpoint <p>SSE message路径</p>
                     * 
                     */
                    std::string GetMessageEndpoint() const;

                    /**
                     * 设置<p>SSE message路径</p>
                     * @param _messageEndpoint <p>SSE message路径</p>
                     * 
                     */
                    void SetMessageEndpoint(const std::string& _messageEndpoint);

                    /**
                     * 判断参数 MessageEndpoint 是否已赋值
                     * @return MessageEndpoint 是否已赋值
                     * 
                     */
                    bool MessageEndpointHasBeenSet() const;

                private:

                    /**
                     * <p>注册中心来源ID</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>注册中心来源名称, 入参不传，用于返回</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>服务 id</p>
                     */
                    std::string m_mCPServerId;
                    bool m_mCPServerIdHasBeenSet;

                    /**
                     * <p>协议，UpstreamType是Registry 时必传</p><ul><li>http</li><li>https</li></ul>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>域名或ip</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>服务 id</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>服务名字</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>服务分组</p>
                     */
                    std::string m_serviceGroup;
                    bool m_serviceGroupHasBeenSet;

                    /**
                     * <p>mcp endpoint</p>
                     */
                    std::string m_mCPEndpoint;
                    bool m_mCPEndpointHasBeenSet;

                    /**
                     * <p>SSE message路径</p>
                     */
                    std::string m_messageEndpoint;
                    bool m_messageEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPUPSTREAMINFODETAIL_H_
