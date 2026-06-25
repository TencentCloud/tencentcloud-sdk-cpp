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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVER_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWMCPUpstreamInfoDetail.h>
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
                * MCP Server详情
                */
                class AIGWMCPServer : public AbstractModel
                {
                public:
                    AIGWMCPServer();
                    ~AIGWMCPServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MCP Server ID</p>
                     * @return ServerId <p>MCP Server ID</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>MCP Server ID</p>
                     * @param _serverId <p>MCP Server ID</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                    /**
                     * 获取<p>MCP Server名称</p>
                     * @return Name <p>MCP Server名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>MCP Server名称</p>
                     * @param _name <p>MCP Server名称</p>
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
                     * 获取<p>MCP Server类型，取值：MCP/Rest2MCP</p>
                     * @return ServerType <p>MCP Server类型，取值：MCP/Rest2MCP</p>
                     * 
                     */
                    std::string GetServerType() const;

                    /**
                     * 设置<p>MCP Server类型，取值：MCP/Rest2MCP</p>
                     * @param _serverType <p>MCP Server类型，取值：MCP/Rest2MCP</p>
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
                     * 获取<p>协议类型，取值: StreamableHttp</p>
                     * @return Transport <p>协议类型，取值: StreamableHttp</p>
                     * 
                     */
                    std::string GetTransport() const;

                    /**
                     * 设置<p>协议类型，取值: StreamableHttp</p>
                     * @param _transport <p>协议类型，取值: StreamableHttp</p>
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
                     * 获取<p>服务类型：</p><ul><li>Registry  </li><li>HostIP</li></ul>
                     * @return UpstreamType <p>服务类型：</p><ul><li>Registry  </li><li>HostIP</li></ul>
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置<p>服务类型：</p><ul><li>Registry  </li><li>HostIP</li></ul>
                     * @param _upstreamType <p>服务类型：</p><ul><li>Registry  </li><li>HostIP</li></ul>
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
                     * 获取<p>MCP提供给客户端的Endpoint</p>
                     * @return MCPEndpoint <p>MCP提供给客户端的Endpoint</p>
                     * 
                     */
                    std::string GetMCPEndpoint() const;

                    /**
                     * 设置<p>MCP提供给客户端的Endpoint</p>
                     * @param _mCPEndpoint <p>MCP提供给客户端的Endpoint</p>
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
                     * 获取<p>注册中心来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamInfo <p>注册中心来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AIGWMCPUpstreamInfoDetail GetUpstreamInfo() const;

                    /**
                     * 设置<p>注册中心来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamInfo <p>注册中心来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamInfo(const AIGWMCPUpstreamInfoDetail& _upstreamInfo);

                    /**
                     * 判断参数 UpstreamInfo 是否已赋值
                     * @return UpstreamInfo 是否已赋值
                     * 
                     */
                    bool UpstreamInfoHasBeenSet() const;

                    /**
                     * 获取<p>会话配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionConfig <p>会话配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AIGWMCPSessionConfig GetSessionConfig() const;

                    /**
                     * 设置<p>会话配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionConfig <p>会话配置</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>超时时间，单位ms</p>
                     * @return Timeout <p>超时时间，单位ms</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间，单位ms</p>
                     * @param _timeout <p>超时时间，单位ms</p>
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
                     * 获取<p>失败重试次数</p>
                     * @return RetryCount <p>失败重试次数</p>
                     * 
                     */
                    uint64_t GetRetryCount() const;

                    /**
                     * 设置<p>失败重试次数</p>
                     * @param _retryCount <p>失败重试次数</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * 获取<p>运行状态</p><p>枚举值：</p><ul><li>Online： 在线</li><li>Offline： 离线</li><li>Error： 错误</li></ul>
                     * @return Status <p>运行状态</p><p>枚举值：</p><ul><li>Online： 在线</li><li>Offline： 离线</li><li>Error： 错误</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>运行状态</p><p>枚举值：</p><ul><li>Online： 在线</li><li>Offline： 离线</li><li>Error： 错误</li></ul>
                     * @param _status <p>运行状态</p><p>枚举值：</p><ul><li>Online： 在线</li><li>Offline： 离线</li><li>Error： 错误</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheck <p>健康检查配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AIGWHealthCheckSetting GetHealthCheck() const;

                    /**
                     * 设置<p>健康检查配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheck <p>健康检查配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheck(const AIGWHealthCheckSetting& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取<p>Tool分组内工具数量限制</p>
                     * @return ToolCountLimit <p>Tool分组内工具数量限制</p>
                     * 
                     */
                    uint64_t GetToolCountLimit() const;

                    /**
                     * 设置<p>Tool分组内工具数量限制</p>
                     * @param _toolCountLimit <p>Tool分组内工具数量限制</p>
                     * 
                     */
                    void SetToolCountLimit(const uint64_t& _toolCountLimit);

                    /**
                     * 判断参数 ToolCountLimit 是否已赋值
                     * @return ToolCountLimit 是否已赋值
                     * 
                     */
                    bool ToolCountLimitHasBeenSet() const;

                    /**
                     * 获取<p>Tool分组内工具命名冲突策略</p><p>枚举值：</p><ul><li>AutoPrefix： 自动前缀</li><li>Reject： 拒绝</li></ul>
                     * @return ConflictStrategy <p>Tool分组内工具命名冲突策略</p><p>枚举值：</p><ul><li>AutoPrefix： 自动前缀</li><li>Reject： 拒绝</li></ul>
                     * 
                     */
                    std::string GetConflictStrategy() const;

                    /**
                     * 设置<p>Tool分组内工具命名冲突策略</p><p>枚举值：</p><ul><li>AutoPrefix： 自动前缀</li><li>Reject： 拒绝</li></ul>
                     * @param _conflictStrategy <p>Tool分组内工具命名冲突策略</p><p>枚举值：</p><ul><li>AutoPrefix： 自动前缀</li><li>Reject： 拒绝</li></ul>
                     * 
                     */
                    void SetConflictStrategy(const std::string& _conflictStrategy);

                    /**
                     * 判断参数 ConflictStrategy 是否已赋值
                     * @return ConflictStrategy 是否已赋值
                     * 
                     */
                    bool ConflictStrategyHasBeenSet() const;

                    /**
                     * 获取<p>MCP 市场发布状态</p><p>枚举值：</p><ul><li>None： 未发布</li><li>Published： 已发布</li></ul>
                     * @return MarketStatus <p>MCP 市场发布状态</p><p>枚举值：</p><ul><li>None： 未发布</li><li>Published： 已发布</li></ul>
                     * 
                     */
                    std::string GetMarketStatus() const;

                    /**
                     * 设置<p>MCP 市场发布状态</p><p>枚举值：</p><ul><li>None： 未发布</li><li>Published： 已发布</li></ul>
                     * @param _marketStatus <p>MCP 市场发布状态</p><p>枚举值：</p><ul><li>None： 未发布</li><li>Published： 已发布</li></ul>
                     * 
                     */
                    void SetMarketStatus(const std::string& _marketStatus);

                    /**
                     * 判断参数 MarketStatus 是否已赋值
                     * @return MarketStatus 是否已赋值
                     * 
                     */
                    bool MarketStatusHasBeenSet() const;

                private:

                    /**
                     * <p>MCP Server ID</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>MCP Server名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>MCP Server类型，取值：MCP/Rest2MCP</p>
                     */
                    std::string m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * <p>协议类型，取值: StreamableHttp</p>
                     */
                    std::string m_transport;
                    bool m_transportHasBeenSet;

                    /**
                     * <p>服务类型：</p><ul><li>Registry  </li><li>HostIP</li></ul>
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * <p>展示名字</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>MCP提供给客户端的Endpoint</p>
                     */
                    std::string m_mCPEndpoint;
                    bool m_mCPEndpointHasBeenSet;

                    /**
                     * <p>注册中心来源信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AIGWMCPUpstreamInfoDetail m_upstreamInfo;
                    bool m_upstreamInfoHasBeenSet;

                    /**
                     * <p>会话配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AIGWMCPSessionConfig m_sessionConfig;
                    bool m_sessionConfigHasBeenSet;

                    /**
                     * <p>超时时间，单位ms</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>失败重试次数</p>
                     */
                    uint64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>运行状态</p><p>枚举值：</p><ul><li>Online： 在线</li><li>Offline： 离线</li><li>Error： 错误</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否启用健康检查</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>健康检查配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AIGWHealthCheckSetting m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>Tool分组内工具数量限制</p>
                     */
                    uint64_t m_toolCountLimit;
                    bool m_toolCountLimitHasBeenSet;

                    /**
                     * <p>Tool分组内工具命名冲突策略</p><p>枚举值：</p><ul><li>AutoPrefix： 自动前缀</li><li>Reject： 拒绝</li></ul>
                     */
                    std::string m_conflictStrategy;
                    bool m_conflictStrategyHasBeenSet;

                    /**
                     * <p>MCP 市场发布状态</p><p>枚举值：</p><ul><li>None： 未发布</li><li>Published： 已发布</li></ul>
                     */
                    std::string m_marketStatus;
                    bool m_marketStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVER_H_
