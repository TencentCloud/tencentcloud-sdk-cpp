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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMCPSERVERREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMCPSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/TargetHostDTO.h>
#include <tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/IpConfig.h>
#include <tencentcloud/apis/v20240801/model/McpSecurityRule.h>
#include <tencentcloud/apis/v20240801/model/ToolConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/PluginConfigDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * ModifyMcpServer请求参数结构体
                */
                class ModifyMcpServerRequest : public AbstractModel
                {
                public:
                    ModifyMcpServerRequest();
                    ~ModifyMcpServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>mcp server ID</p>
                     * @return ID <p>mcp server ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>mcp server ID</p>
                     * @param _iD <p>mcp server ID</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>模式：proxy代理模式； wrap封装模式；</p>
                     * @return Mode <p>模式：proxy代理模式； wrap封装模式；</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>模式：proxy代理模式； wrap封装模式；</p>
                     * @param _mode <p>模式：proxy代理模式； wrap封装模式；</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>版本号：2024-11-05 2025-03-26</p>
                     * @return McpVersion <p>版本号：2024-11-05 2025-03-26</p>
                     * 
                     */
                    std::string GetMcpVersion() const;

                    /**
                     * 设置<p>版本号：2024-11-05 2025-03-26</p>
                     * @param _mcpVersion <p>版本号：2024-11-05 2025-03-26</p>
                     * 
                     */
                    void SetMcpVersion(const std::string& _mcpVersion);

                    /**
                     * 判断参数 McpVersion 是否已赋值
                     * @return McpVersion 是否已赋值
                     * 
                     */
                    bool McpVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>封装服务列表</p>
                     * @return WrapServices <p>封装服务列表</p>
                     * 
                     */
                    std::vector<std::string> GetWrapServices() const;

                    /**
                     * 设置<p>封装服务列表</p>
                     * @param _wrapServices <p>封装服务列表</p>
                     * 
                     */
                    void SetWrapServices(const std::vector<std::string>& _wrapServices);

                    /**
                     * 判断参数 WrapServices 是否已赋值
                     * @return WrapServices 是否已赋值
                     * 
                     */
                    bool WrapServicesHasBeenSet() const;

                    /**
                     * 获取<p>负载方式，robin random consistentHash</p>
                     * @return TargetSelect <p>负载方式，robin random consistentHash</p>
                     * 
                     */
                    std::string GetTargetSelect() const;

                    /**
                     * 设置<p>负载方式，robin random consistentHash</p>
                     * @param _targetSelect <p>负载方式，robin random consistentHash</p>
                     * 
                     */
                    void SetTargetSelect(const std::string& _targetSelect);

                    /**
                     * 判断参数 TargetSelect 是否已赋值
                     * @return TargetSelect 是否已赋值
                     * 
                     */
                    bool TargetSelectHasBeenSet() const;

                    /**
                     * 获取<p>目标服务器</p>
                     * @return TargetHosts <p>目标服务器</p>
                     * 
                     */
                    std::vector<TargetHostDTO> GetTargetHosts() const;

                    /**
                     * 设置<p>目标服务器</p>
                     * @param _targetHosts <p>目标服务器</p>
                     * 
                     */
                    void SetTargetHosts(const std::vector<TargetHostDTO>& _targetHosts);

                    /**
                     * 判断参数 TargetHosts 是否已赋值
                     * @return TargetHosts 是否已赋值
                     * 
                     */
                    bool TargetHostsHasBeenSet() const;

                    /**
                     * 获取<p>后端协议：http https</p>
                     * @return HttpProtocolType <p>后端协议：http https</p>
                     * 
                     */
                    std::string GetHttpProtocolType() const;

                    /**
                     * 设置<p>后端协议：http https</p>
                     * @param _httpProtocolType <p>后端协议：http https</p>
                     * 
                     */
                    void SetHttpProtocolType(const std::string& _httpProtocolType);

                    /**
                     * 判断参数 HttpProtocolType 是否已赋值
                     * @return HttpProtocolType 是否已赋值
                     * 
                     */
                    bool HttpProtocolTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书检查</p>
                     * @return CheckTargetCertsError <p>证书检查</p>
                     * 
                     */
                    bool GetCheckTargetCertsError() const;

                    /**
                     * 设置<p>证书检查</p>
                     * @param _checkTargetCertsError <p>证书检查</p>
                     * 
                     */
                    void SetCheckTargetCertsError(const bool& _checkTargetCertsError);

                    /**
                     * 判断参数 CheckTargetCertsError 是否已赋值
                     * @return CheckTargetCertsError 是否已赋值
                     * 
                     */
                    bool CheckTargetCertsErrorHasBeenSet() const;

                    /**
                     * 获取<p>目标路径</p>
                     * @return TargetPath <p>目标路径</p>
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置<p>目标路径</p>
                     * @param _targetPath <p>目标路径</p>
                     * 
                     */
                    void SetTargetPath(const std::string& _targetPath);

                    /**
                     * 判断参数 TargetPath 是否已赋值
                     * @return TargetPath 是否已赋值
                     * 
                     */
                    bool TargetPathHasBeenSet() const;

                    /**
                     * 获取<p>流量控制开启状态</p>
                     * @return InvokeLimitConfigStatus <p>流量控制开启状态</p>
                     * 
                     */
                    bool GetInvokeLimitConfigStatus() const;

                    /**
                     * 设置<p>流量控制开启状态</p>
                     * @param _invokeLimitConfigStatus <p>流量控制开启状态</p>
                     * 
                     */
                    void SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus);

                    /**
                     * 判断参数 InvokeLimitConfigStatus 是否已赋值
                     * @return InvokeLimitConfigStatus 是否已赋值
                     * 
                     */
                    bool InvokeLimitConfigStatusHasBeenSet() const;

                    /**
                     * 获取<p>流量控制配置</p>
                     * @return InvokeLimitConfig <p>流量控制配置</p>
                     * 
                     */
                    InvokeLimitConfigDTO GetInvokeLimitConfig() const;

                    /**
                     * 设置<p>流量控制配置</p>
                     * @param _invokeLimitConfig <p>流量控制配置</p>
                     * 
                     */
                    void SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig);

                    /**
                     * 判断参数 InvokeLimitConfig 是否已赋值
                     * @return InvokeLimitConfig 是否已赋值
                     * 
                     */
                    bool InvokeLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>IP白名单开启状态</p>
                     * @return IpWhiteStatus <p>IP白名单开启状态</p>
                     * 
                     */
                    bool GetIpWhiteStatus() const;

                    /**
                     * 设置<p>IP白名单开启状态</p>
                     * @param _ipWhiteStatus <p>IP白名单开启状态</p>
                     * 
                     */
                    void SetIpWhiteStatus(const bool& _ipWhiteStatus);

                    /**
                     * 判断参数 IpWhiteStatus 是否已赋值
                     * @return IpWhiteStatus 是否已赋值
                     * 
                     */
                    bool IpWhiteStatusHasBeenSet() const;

                    /**
                     * 获取<p>IP白名单配置</p>
                     * @return IpWhiteConfig <p>IP白名单配置</p>
                     * 
                     */
                    IpConfig GetIpWhiteConfig() const;

                    /**
                     * 设置<p>IP白名单配置</p>
                     * @param _ipWhiteConfig <p>IP白名单配置</p>
                     * 
                     */
                    void SetIpWhiteConfig(const IpConfig& _ipWhiteConfig);

                    /**
                     * 判断参数 IpWhiteConfig 是否已赋值
                     * @return IpWhiteConfig 是否已赋值
                     * 
                     */
                    bool IpWhiteConfigHasBeenSet() const;

                    /**
                     * 获取<p>IP黑名单开启状态</p>
                     * @return IpBlackStatus <p>IP黑名单开启状态</p>
                     * 
                     */
                    bool GetIpBlackStatus() const;

                    /**
                     * 设置<p>IP黑名单开启状态</p>
                     * @param _ipBlackStatus <p>IP黑名单开启状态</p>
                     * 
                     */
                    void SetIpBlackStatus(const bool& _ipBlackStatus);

                    /**
                     * 判断参数 IpBlackStatus 是否已赋值
                     * @return IpBlackStatus 是否已赋值
                     * 
                     */
                    bool IpBlackStatusHasBeenSet() const;

                    /**
                     * 获取<p>IP黑名单配置</p>
                     * @return IpBlackConfig <p>IP黑名单配置</p>
                     * 
                     */
                    IpConfig GetIpBlackConfig() const;

                    /**
                     * 设置<p>IP黑名单配置</p>
                     * @param _ipBlackConfig <p>IP黑名单配置</p>
                     * 
                     */
                    void SetIpBlackConfig(const IpConfig& _ipBlackConfig);

                    /**
                     * 判断参数 IpBlackConfig 是否已赋值
                     * @return IpBlackConfig 是否已赋值
                     * 
                     */
                    bool IpBlackConfigHasBeenSet() const;

                    /**
                     * 获取<p>目标Host类型 0 默认 1 vpc</p>
                     * @return TargetHostType <p>目标Host类型 0 默认 1 vpc</p>
                     * 
                     */
                    int64_t GetTargetHostType() const;

                    /**
                     * 设置<p>目标Host类型 0 默认 1 vpc</p>
                     * @param _targetHostType <p>目标Host类型 0 默认 1 vpc</p>
                     * 
                     */
                    void SetTargetHostType(const int64_t& _targetHostType);

                    /**
                     * 判断参数 TargetHostType 是否已赋值
                     * @return TargetHostType 是否已赋值
                     * 
                     */
                    bool TargetHostTypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义host</p>
                     * @return CustomHttpHost <p>自定义host</p>
                     * 
                     */
                    std::string GetCustomHttpHost() const;

                    /**
                     * 设置<p>自定义host</p>
                     * @param _customHttpHost <p>自定义host</p>
                     * 
                     */
                    void SetCustomHttpHost(const std::string& _customHttpHost);

                    /**
                     * 判断参数 CustomHttpHost 是否已赋值
                     * @return CustomHttpHost 是否已赋值
                     * 
                     */
                    bool CustomHttpHostHasBeenSet() const;

                    /**
                     * 获取<p>Http 请求host类型：useRequestHost 保持源请求；host targetHost 修正为源站host； customHost 自定义host</p>
                     * @return HttpHostType <p>Http 请求host类型：useRequestHost 保持源请求；host targetHost 修正为源站host； customHost 自定义host</p>
                     * 
                     */
                    std::string GetHttpHostType() const;

                    /**
                     * 设置<p>Http 请求host类型：useRequestHost 保持源请求；host targetHost 修正为源站host； customHost 自定义host</p>
                     * @param _httpHostType <p>Http 请求host类型：useRequestHost 保持源请求；host targetHost 修正为源站host； customHost 自定义host</p>
                     * 
                     */
                    void SetHttpHostType(const std::string& _httpHostType);

                    /**
                     * 判断参数 HttpHostType 是否已赋值
                     * @return HttpHostType 是否已赋值
                     * 
                     */
                    bool HttpHostTypeHasBeenSet() const;

                    /**
                     * 获取<p>请求的超时时间</p>
                     * @return Timeout <p>请求的超时时间</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>请求的超时时间</p>
                     * @param _timeout <p>请求的超时时间</p>
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
                     * 获取<p>安全规则集</p>
                     * @return McpSecurityRules <p>安全规则集</p>
                     * 
                     */
                    std::vector<McpSecurityRule> GetMcpSecurityRules() const;

                    /**
                     * 设置<p>安全规则集</p>
                     * @param _mcpSecurityRules <p>安全规则集</p>
                     * 
                     */
                    void SetMcpSecurityRules(const std::vector<McpSecurityRule>& _mcpSecurityRules);

                    /**
                     * 判断参数 McpSecurityRules 是否已赋值
                     * @return McpSecurityRules 是否已赋值
                     * 
                     */
                    bool McpSecurityRulesHasBeenSet() const;

                    /**
                     * 获取<p>工具集配置（openapi可能会用到）</p>
                     * @return ToolConfigs <p>工具集配置（openapi可能会用到）</p>
                     * 
                     */
                    std::vector<ToolConfigDTO> GetToolConfigs() const;

                    /**
                     * 设置<p>工具集配置（openapi可能会用到）</p>
                     * @param _toolConfigs <p>工具集配置（openapi可能会用到）</p>
                     * 
                     */
                    void SetToolConfigs(const std::vector<ToolConfigDTO>& _toolConfigs);

                    /**
                     * 判断参数 ToolConfigs 是否已赋值
                     * @return ToolConfigs 是否已赋值
                     * 
                     */
                    bool ToolConfigsHasBeenSet() const;

                    /**
                     * 获取<p>封装的API分组ID</p>
                     * @return WrapPaasID <p>封装的API分组ID</p>
                     * 
                     */
                    std::string GetWrapPaasID() const;

                    /**
                     * 设置<p>封装的API分组ID</p>
                     * @param _wrapPaasID <p>封装的API分组ID</p>
                     * 
                     */
                    void SetWrapPaasID(const std::string& _wrapPaasID);

                    /**
                     * 判断参数 WrapPaasID 是否已赋值
                     * @return WrapPaasID 是否已赋值
                     * 
                     */
                    bool WrapPaasIDHasBeenSet() const;

                    /**
                     * 获取<p>插件配置</p>
                     * @return PluginConfigs <p>插件配置</p>
                     * 
                     */
                    std::vector<PluginConfigDTO> GetPluginConfigs() const;

                    /**
                     * 设置<p>插件配置</p>
                     * @param _pluginConfigs <p>插件配置</p>
                     * 
                     */
                    void SetPluginConfigs(const std::vector<PluginConfigDTO>& _pluginConfigs);

                    /**
                     * 判断参数 PluginConfigs 是否已赋值
                     * @return PluginConfigs 是否已赋值
                     * 
                     */
                    bool PluginConfigsHasBeenSet() const;

                    /**
                     * 获取<p>是否忽略健康检查</p>
                     * @return IgnoreHealthCheck <p>是否忽略健康检查</p>
                     * 
                     */
                    bool GetIgnoreHealthCheck() const;

                    /**
                     * 设置<p>是否忽略健康检查</p>
                     * @param _ignoreHealthCheck <p>是否忽略健康检查</p>
                     * 
                     */
                    void SetIgnoreHealthCheck(const bool& _ignoreHealthCheck);

                    /**
                     * 判断参数 IgnoreHealthCheck 是否已赋值
                     * @return IgnoreHealthCheck 是否已赋值
                     * 
                     */
                    bool IgnoreHealthCheckHasBeenSet() const;

                private:

                    /**
                     * <p>mcp server ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>模式：proxy代理模式； wrap封装模式；</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>版本号：2024-11-05 2025-03-26</p>
                     */
                    std::string m_mcpVersion;
                    bool m_mcpVersionHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>封装服务列表</p>
                     */
                    std::vector<std::string> m_wrapServices;
                    bool m_wrapServicesHasBeenSet;

                    /**
                     * <p>负载方式，robin random consistentHash</p>
                     */
                    std::string m_targetSelect;
                    bool m_targetSelectHasBeenSet;

                    /**
                     * <p>目标服务器</p>
                     */
                    std::vector<TargetHostDTO> m_targetHosts;
                    bool m_targetHostsHasBeenSet;

                    /**
                     * <p>后端协议：http https</p>
                     */
                    std::string m_httpProtocolType;
                    bool m_httpProtocolTypeHasBeenSet;

                    /**
                     * <p>证书检查</p>
                     */
                    bool m_checkTargetCertsError;
                    bool m_checkTargetCertsErrorHasBeenSet;

                    /**
                     * <p>目标路径</p>
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * <p>流量控制开启状态</p>
                     */
                    bool m_invokeLimitConfigStatus;
                    bool m_invokeLimitConfigStatusHasBeenSet;

                    /**
                     * <p>流量控制配置</p>
                     */
                    InvokeLimitConfigDTO m_invokeLimitConfig;
                    bool m_invokeLimitConfigHasBeenSet;

                    /**
                     * <p>IP白名单开启状态</p>
                     */
                    bool m_ipWhiteStatus;
                    bool m_ipWhiteStatusHasBeenSet;

                    /**
                     * <p>IP白名单配置</p>
                     */
                    IpConfig m_ipWhiteConfig;
                    bool m_ipWhiteConfigHasBeenSet;

                    /**
                     * <p>IP黑名单开启状态</p>
                     */
                    bool m_ipBlackStatus;
                    bool m_ipBlackStatusHasBeenSet;

                    /**
                     * <p>IP黑名单配置</p>
                     */
                    IpConfig m_ipBlackConfig;
                    bool m_ipBlackConfigHasBeenSet;

                    /**
                     * <p>目标Host类型 0 默认 1 vpc</p>
                     */
                    int64_t m_targetHostType;
                    bool m_targetHostTypeHasBeenSet;

                    /**
                     * <p>自定义host</p>
                     */
                    std::string m_customHttpHost;
                    bool m_customHttpHostHasBeenSet;

                    /**
                     * <p>Http 请求host类型：useRequestHost 保持源请求；host targetHost 修正为源站host； customHost 自定义host</p>
                     */
                    std::string m_httpHostType;
                    bool m_httpHostTypeHasBeenSet;

                    /**
                     * <p>请求的超时时间</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>安全规则集</p>
                     */
                    std::vector<McpSecurityRule> m_mcpSecurityRules;
                    bool m_mcpSecurityRulesHasBeenSet;

                    /**
                     * <p>工具集配置（openapi可能会用到）</p>
                     */
                    std::vector<ToolConfigDTO> m_toolConfigs;
                    bool m_toolConfigsHasBeenSet;

                    /**
                     * <p>封装的API分组ID</p>
                     */
                    std::string m_wrapPaasID;
                    bool m_wrapPaasIDHasBeenSet;

                    /**
                     * <p>插件配置</p>
                     */
                    std::vector<PluginConfigDTO> m_pluginConfigs;
                    bool m_pluginConfigsHasBeenSet;

                    /**
                     * <p>是否忽略健康检查</p>
                     */
                    bool m_ignoreHealthCheck;
                    bool m_ignoreHealthCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMCPSERVERREQUEST_H_
