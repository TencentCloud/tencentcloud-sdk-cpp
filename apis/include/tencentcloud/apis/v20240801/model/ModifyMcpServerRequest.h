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
                     * 获取mcp server ID
                     * @return ID mcp server ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置mcp server ID
                     * @param _iD mcp server ID
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
                     * 获取模式：proxy代理模式； wrap封装模式；
                     * @return Mode 模式：proxy代理模式； wrap封装模式；
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置模式：proxy代理模式； wrap封装模式；
                     * @param _mode 模式：proxy代理模式； wrap封装模式；
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
                     * 获取版本号：2024-11-05 2025-03-26
                     * @return McpVersion 版本号：2024-11-05 2025-03-26
                     * 
                     */
                    std::string GetMcpVersion() const;

                    /**
                     * 设置版本号：2024-11-05 2025-03-26
                     * @param _mcpVersion 版本号：2024-11-05 2025-03-26
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
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
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
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取封装服务列表
                     * @return WrapServices 封装服务列表
                     * 
                     */
                    std::vector<std::string> GetWrapServices() const;

                    /**
                     * 设置封装服务列表
                     * @param _wrapServices 封装服务列表
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
                     * 获取负载方式，robin random consistentHash
                     * @return TargetSelect 负载方式，robin random consistentHash
                     * 
                     */
                    std::string GetTargetSelect() const;

                    /**
                     * 设置负载方式，robin random consistentHash
                     * @param _targetSelect 负载方式，robin random consistentHash
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
                     * 获取目标服务器
                     * @return TargetHosts 目标服务器
                     * 
                     */
                    std::vector<TargetHostDTO> GetTargetHosts() const;

                    /**
                     * 设置目标服务器
                     * @param _targetHosts 目标服务器
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
                     * 获取后端协议：http https
                     * @return HttpProtocolType 后端协议：http https
                     * 
                     */
                    std::string GetHttpProtocolType() const;

                    /**
                     * 设置后端协议：http https
                     * @param _httpProtocolType 后端协议：http https
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
                     * 获取证书检查
                     * @return CheckTargetCertsError 证书检查
                     * 
                     */
                    bool GetCheckTargetCertsError() const;

                    /**
                     * 设置证书检查
                     * @param _checkTargetCertsError 证书检查
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
                     * 获取目标路径
                     * @return TargetPath 目标路径
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置目标路径
                     * @param _targetPath 目标路径
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
                     * 获取流量控制开启状态
                     * @return InvokeLimitConfigStatus 流量控制开启状态
                     * 
                     */
                    bool GetInvokeLimitConfigStatus() const;

                    /**
                     * 设置流量控制开启状态
                     * @param _invokeLimitConfigStatus 流量控制开启状态
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
                     * 获取流量控制配置
                     * @return InvokeLimitConfig 流量控制配置
                     * 
                     */
                    InvokeLimitConfigDTO GetInvokeLimitConfig() const;

                    /**
                     * 设置流量控制配置
                     * @param _invokeLimitConfig 流量控制配置
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
                     * 获取IP白名单开启状态
                     * @return IpWhiteStatus IP白名单开启状态
                     * 
                     */
                    bool GetIpWhiteStatus() const;

                    /**
                     * 设置IP白名单开启状态
                     * @param _ipWhiteStatus IP白名单开启状态
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
                     * 获取IP白名单配置
                     * @return IpWhiteConfig IP白名单配置
                     * 
                     */
                    IpConfig GetIpWhiteConfig() const;

                    /**
                     * 设置IP白名单配置
                     * @param _ipWhiteConfig IP白名单配置
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
                     * 获取IP黑名单开启状态
                     * @return IpBlackStatus IP黑名单开启状态
                     * 
                     */
                    bool GetIpBlackStatus() const;

                    /**
                     * 设置IP黑名单开启状态
                     * @param _ipBlackStatus IP黑名单开启状态
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
                     * 获取IP黑名单配置
                     * @return IpBlackConfig IP黑名单配置
                     * 
                     */
                    IpConfig GetIpBlackConfig() const;

                    /**
                     * 设置IP黑名单配置
                     * @param _ipBlackConfig IP黑名单配置
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
                     * 获取目标Host类型 0 默认 1 vpc
                     * @return TargetHostType 目标Host类型 0 默认 1 vpc
                     * 
                     */
                    int64_t GetTargetHostType() const;

                    /**
                     * 设置目标Host类型 0 默认 1 vpc
                     * @param _targetHostType 目标Host类型 0 默认 1 vpc
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
                     * 获取自定义host
                     * @return CustomHttpHost 自定义host
                     * 
                     */
                    std::string GetCustomHttpHost() const;

                    /**
                     * 设置自定义host
                     * @param _customHttpHost 自定义host
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
                     * 获取Http 请求host类型：useRequestHost 保持源请求；host targetHost 修正为源站host； customHost 自定义host
                     * @return HttpHostType Http 请求host类型：useRequestHost 保持源请求；host targetHost 修正为源站host； customHost 自定义host
                     * 
                     */
                    std::string GetHttpHostType() const;

                    /**
                     * 设置Http 请求host类型：useRequestHost 保持源请求；host targetHost 修正为源站host； customHost 自定义host
                     * @param _httpHostType Http 请求host类型：useRequestHost 保持源请求；host targetHost 修正为源站host； customHost 自定义host
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
                     * 获取请求的超时时间
                     * @return Timeout 请求的超时时间
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置请求的超时时间
                     * @param _timeout 请求的超时时间
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
                     * 获取安全规则集
                     * @return McpSecurityRules 安全规则集
                     * 
                     */
                    std::vector<McpSecurityRule> GetMcpSecurityRules() const;

                    /**
                     * 设置安全规则集
                     * @param _mcpSecurityRules 安全规则集
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
                     * 获取工具集配置（openapi可能会用到）
                     * @return ToolConfigs 工具集配置（openapi可能会用到）
                     * 
                     */
                    std::vector<ToolConfigDTO> GetToolConfigs() const;

                    /**
                     * 设置工具集配置（openapi可能会用到）
                     * @param _toolConfigs 工具集配置（openapi可能会用到）
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
                     * 获取封装的API分组ID
                     * @return WrapPaasID 封装的API分组ID
                     * 
                     */
                    std::string GetWrapPaasID() const;

                    /**
                     * 设置封装的API分组ID
                     * @param _wrapPaasID 封装的API分组ID
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
                     * 获取插件配置
                     * @return PluginConfigs 插件配置
                     * 
                     */
                    std::vector<PluginConfigDTO> GetPluginConfigs() const;

                    /**
                     * 设置插件配置
                     * @param _pluginConfigs 插件配置
                     * 
                     */
                    void SetPluginConfigs(const std::vector<PluginConfigDTO>& _pluginConfigs);

                    /**
                     * 判断参数 PluginConfigs 是否已赋值
                     * @return PluginConfigs 是否已赋值
                     * 
                     */
                    bool PluginConfigsHasBeenSet() const;

                private:

                    /**
                     * mcp server ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 模式：proxy代理模式； wrap封装模式；
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 版本号：2024-11-05 2025-03-26
                     */
                    std::string m_mcpVersion;
                    bool m_mcpVersionHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 封装服务列表
                     */
                    std::vector<std::string> m_wrapServices;
                    bool m_wrapServicesHasBeenSet;

                    /**
                     * 负载方式，robin random consistentHash
                     */
                    std::string m_targetSelect;
                    bool m_targetSelectHasBeenSet;

                    /**
                     * 目标服务器
                     */
                    std::vector<TargetHostDTO> m_targetHosts;
                    bool m_targetHostsHasBeenSet;

                    /**
                     * 后端协议：http https
                     */
                    std::string m_httpProtocolType;
                    bool m_httpProtocolTypeHasBeenSet;

                    /**
                     * 证书检查
                     */
                    bool m_checkTargetCertsError;
                    bool m_checkTargetCertsErrorHasBeenSet;

                    /**
                     * 目标路径
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * 流量控制开启状态
                     */
                    bool m_invokeLimitConfigStatus;
                    bool m_invokeLimitConfigStatusHasBeenSet;

                    /**
                     * 流量控制配置
                     */
                    InvokeLimitConfigDTO m_invokeLimitConfig;
                    bool m_invokeLimitConfigHasBeenSet;

                    /**
                     * IP白名单开启状态
                     */
                    bool m_ipWhiteStatus;
                    bool m_ipWhiteStatusHasBeenSet;

                    /**
                     * IP白名单配置
                     */
                    IpConfig m_ipWhiteConfig;
                    bool m_ipWhiteConfigHasBeenSet;

                    /**
                     * IP黑名单开启状态
                     */
                    bool m_ipBlackStatus;
                    bool m_ipBlackStatusHasBeenSet;

                    /**
                     * IP黑名单配置
                     */
                    IpConfig m_ipBlackConfig;
                    bool m_ipBlackConfigHasBeenSet;

                    /**
                     * 目标Host类型 0 默认 1 vpc
                     */
                    int64_t m_targetHostType;
                    bool m_targetHostTypeHasBeenSet;

                    /**
                     * 自定义host
                     */
                    std::string m_customHttpHost;
                    bool m_customHttpHostHasBeenSet;

                    /**
                     * Http 请求host类型：useRequestHost 保持源请求；host targetHost 修正为源站host； customHost 自定义host
                     */
                    std::string m_httpHostType;
                    bool m_httpHostTypeHasBeenSet;

                    /**
                     * 请求的超时时间
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 安全规则集
                     */
                    std::vector<McpSecurityRule> m_mcpSecurityRules;
                    bool m_mcpSecurityRulesHasBeenSet;

                    /**
                     * 工具集配置（openapi可能会用到）
                     */
                    std::vector<ToolConfigDTO> m_toolConfigs;
                    bool m_toolConfigsHasBeenSet;

                    /**
                     * 封装的API分组ID
                     */
                    std::string m_wrapPaasID;
                    bool m_wrapPaasIDHasBeenSet;

                    /**
                     * 插件配置
                     */
                    std::vector<PluginConfigDTO> m_pluginConfigs;
                    bool m_pluginConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMCPSERVERREQUEST_H_
