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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMODELSERVICEREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMODELSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/TargetModelDTO.h>
#include <tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/TokenLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/TmsConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/PluginConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/PromptModerateConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/SensitiveDataCheckConfigDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * ModifyModelService请求参数结构体
                */
                class ModifyModelServiceRequest : public AbstractModel
                {
                public:
                    ModifyModelServiceRequest();
                    ~ModifyModelServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例</p>
                     * @return InstanceID <p>实例</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例</p>
                     * @param _instanceID <p>实例</p>
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
                     * 获取<p>模型服务ID</p>
                     * @return ID <p>模型服务ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>模型服务ID</p>
                     * @param _iD <p>模型服务ID</p>
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
                     * 获取<p>模型服务名称</p>
                     * @return Name <p>模型服务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模型服务名称</p>
                     * @param _name <p>模型服务名称</p>
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
                     * 获取<p>模板模型列表</p>
                     * @return TargetModels <p>模板模型列表</p>
                     * 
                     */
                    std::vector<TargetModelDTO> GetTargetModels() const;

                    /**
                     * 设置<p>模板模型列表</p>
                     * @param _targetModels <p>模板模型列表</p>
                     * 
                     */
                    void SetTargetModels(const std::vector<TargetModelDTO>& _targetModels);

                    /**
                     * 判断参数 TargetModels 是否已赋值
                     * @return TargetModels 是否已赋值
                     * 
                     */
                    bool TargetModelsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启限流</p>
                     * @return InvokeLimitConfigStatus <p>是否开启限流</p>
                     * 
                     */
                    bool GetInvokeLimitConfigStatus() const;

                    /**
                     * 设置<p>是否开启限流</p>
                     * @param _invokeLimitConfigStatus <p>是否开启限流</p>
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
                     * 获取<p>限流配置</p>
                     * @return InvokeLimitConfig <p>限流配置</p>
                     * 
                     */
                    InvokeLimitConfigDTO GetInvokeLimitConfig() const;

                    /**
                     * 设置<p>限流配置</p>
                     * @param _invokeLimitConfig <p>限流配置</p>
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
                     * 获取<p>是否开启token控制</p>
                     * @return TokenLimitStatus <p>是否开启token控制</p>
                     * 
                     */
                    bool GetTokenLimitStatus() const;

                    /**
                     * 设置<p>是否开启token控制</p>
                     * @param _tokenLimitStatus <p>是否开启token控制</p>
                     * 
                     */
                    void SetTokenLimitStatus(const bool& _tokenLimitStatus);

                    /**
                     * 判断参数 TokenLimitStatus 是否已赋值
                     * @return TokenLimitStatus 是否已赋值
                     * 
                     */
                    bool TokenLimitStatusHasBeenSet() const;

                    /**
                     * 获取<p>token控制</p>
                     * @return TokenLimitConfig <p>token控制</p>
                     * 
                     */
                    TokenLimitConfigDTO GetTokenLimitConfig() const;

                    /**
                     * 设置<p>token控制</p>
                     * @param _tokenLimitConfig <p>token控制</p>
                     * 
                     */
                    void SetTokenLimitConfig(const TokenLimitConfigDTO& _tokenLimitConfig);

                    /**
                     * 判断参数 TokenLimitConfig 是否已赋值
                     * @return TokenLimitConfig 是否已赋值
                     * 
                     */
                    bool TokenLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启内容安全</p>
                     * @return TmsStatus <p>是否开启内容安全</p>
                     * 
                     */
                    bool GetTmsStatus() const;

                    /**
                     * 设置<p>是否开启内容安全</p>
                     * @param _tmsStatus <p>是否开启内容安全</p>
                     * 
                     */
                    void SetTmsStatus(const bool& _tmsStatus);

                    /**
                     * 判断参数 TmsStatus 是否已赋值
                     * @return TmsStatus 是否已赋值
                     * 
                     */
                    bool TmsStatusHasBeenSet() const;

                    /**
                     * 获取<p>内容安全配置</p>
                     * @return TmsConfig <p>内容安全配置</p>
                     * 
                     */
                    TmsConfigDTO GetTmsConfig() const;

                    /**
                     * 设置<p>内容安全配置</p>
                     * @param _tmsConfig <p>内容安全配置</p>
                     * 
                     */
                    void SetTmsConfig(const TmsConfigDTO& _tmsConfig);

                    /**
                     * 判断参数 TmsConfig 是否已赋值
                     * @return TmsConfig 是否已赋值
                     * 
                     */
                    bool TmsConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启IP白名单</p>
                     * @return IpWhiteStatus <p>是否开启IP白名单</p>
                     * 
                     */
                    bool GetIpWhiteStatus() const;

                    /**
                     * 设置<p>是否开启IP白名单</p>
                     * @param _ipWhiteStatus <p>是否开启IP白名单</p>
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
                     * 获取<p>IP白名单</p>
                     * @return IpWhiteList <p>IP白名单</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置<p>IP白名单</p>
                     * @param _ipWhiteList <p>IP白名单</p>
                     * 
                     */
                    void SetIpWhiteList(const std::vector<std::string>& _ipWhiteList);

                    /**
                     * 判断参数 IpWhiteList 是否已赋值
                     * @return IpWhiteList 是否已赋值
                     * 
                     */
                    bool IpWhiteListHasBeenSet() const;

                    /**
                     * 获取<p>是否开启IP黑名单</p>
                     * @return IpBlackStatus <p>是否开启IP黑名单</p>
                     * 
                     */
                    bool GetIpBlackStatus() const;

                    /**
                     * 设置<p>是否开启IP黑名单</p>
                     * @param _ipBlackStatus <p>是否开启IP黑名单</p>
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
                     * 获取<p>IP黑名单</p>
                     * @return IpBlackList <p>IP黑名单</p>
                     * 
                     */
                    std::vector<std::string> GetIpBlackList() const;

                    /**
                     * 设置<p>IP黑名单</p>
                     * @param _ipBlackList <p>IP黑名单</p>
                     * 
                     */
                    void SetIpBlackList(const std::vector<std::string>& _ipBlackList);

                    /**
                     * 判断参数 IpBlackList 是否已赋值
                     * @return IpBlackList 是否已赋值
                     * 
                     */
                    bool IpBlackListHasBeenSet() const;

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
                     * 获取<p>超时配置，秒</p>
                     * @return Timeout <p>超时配置，秒</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>超时配置，秒</p>
                     * @param _timeout <p>超时配置，秒</p>
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>是否开启提示词安全检测配置</p>
                     * @return PromptModerateStatus <p>是否开启提示词安全检测配置</p>
                     * 
                     */
                    bool GetPromptModerateStatus() const;

                    /**
                     * 设置<p>是否开启提示词安全检测配置</p>
                     * @param _promptModerateStatus <p>是否开启提示词安全检测配置</p>
                     * 
                     */
                    void SetPromptModerateStatus(const bool& _promptModerateStatus);

                    /**
                     * 判断参数 PromptModerateStatus 是否已赋值
                     * @return PromptModerateStatus 是否已赋值
                     * 
                     */
                    bool PromptModerateStatusHasBeenSet() const;

                    /**
                     * 获取<p>提示词安全检测配置</p>
                     * @return PromptModerateConfig <p>提示词安全检测配置</p>
                     * 
                     */
                    PromptModerateConfigDTO GetPromptModerateConfig() const;

                    /**
                     * 设置<p>提示词安全检测配置</p>
                     * @param _promptModerateConfig <p>提示词安全检测配置</p>
                     * 
                     */
                    void SetPromptModerateConfig(const PromptModerateConfigDTO& _promptModerateConfig);

                    /**
                     * 判断参数 PromptModerateConfig 是否已赋值
                     * @return PromptModerateConfig 是否已赋值
                     * 
                     */
                    bool PromptModerateConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启敏感数据检测</p>
                     * @return SensitiveDataCheckStatus <p>是否开启敏感数据检测</p>
                     * 
                     */
                    bool GetSensitiveDataCheckStatus() const;

                    /**
                     * 设置<p>是否开启敏感数据检测</p>
                     * @param _sensitiveDataCheckStatus <p>是否开启敏感数据检测</p>
                     * 
                     */
                    void SetSensitiveDataCheckStatus(const bool& _sensitiveDataCheckStatus);

                    /**
                     * 判断参数 SensitiveDataCheckStatus 是否已赋值
                     * @return SensitiveDataCheckStatus 是否已赋值
                     * 
                     */
                    bool SensitiveDataCheckStatusHasBeenSet() const;

                    /**
                     * 获取<p>敏感数据检测配置</p>
                     * @return SensitiveDataCheckConfig <p>敏感数据检测配置</p>
                     * 
                     */
                    SensitiveDataCheckConfigDTO GetSensitiveDataCheckConfig() const;

                    /**
                     * 设置<p>敏感数据检测配置</p>
                     * @param _sensitiveDataCheckConfig <p>敏感数据检测配置</p>
                     * 
                     */
                    void SetSensitiveDataCheckConfig(const SensitiveDataCheckConfigDTO& _sensitiveDataCheckConfig);

                    /**
                     * 判断参数 SensitiveDataCheckConfig 是否已赋值
                     * @return SensitiveDataCheckConfig 是否已赋值
                     * 
                     */
                    bool SensitiveDataCheckConfigHasBeenSet() const;

                    /**
                     * 获取<p>负载方式</p><p>枚举值：</p><ul><li>random： 随机</li><li>consistentHash： 会话保持</li></ul>
                     * @return TargetSelect <p>负载方式</p><p>枚举值：</p><ul><li>random： 随机</li><li>consistentHash： 会话保持</li></ul>
                     * 
                     */
                    std::string GetTargetSelect() const;

                    /**
                     * 设置<p>负载方式</p><p>枚举值：</p><ul><li>random： 随机</li><li>consistentHash： 会话保持</li></ul>
                     * @param _targetSelect <p>负载方式</p><p>枚举值：</p><ul><li>random： 随机</li><li>consistentHash： 会话保持</li></ul>
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
                     * 获取<p>会话判断方式</p><p>枚举值：</p><ul><li>fromClientIP： 从客户端IP判断</li><li>fromHeader： 从请求header判断</li><li>autoDetect： 自动探测</li></ul>
                     * @return FindHostKeyMethod <p>会话判断方式</p><p>枚举值：</p><ul><li>fromClientIP： 从客户端IP判断</li><li>fromHeader： 从请求header判断</li><li>autoDetect： 自动探测</li></ul>
                     * 
                     */
                    std::string GetFindHostKeyMethod() const;

                    /**
                     * 设置<p>会话判断方式</p><p>枚举值：</p><ul><li>fromClientIP： 从客户端IP判断</li><li>fromHeader： 从请求header判断</li><li>autoDetect： 自动探测</li></ul>
                     * @param _findHostKeyMethod <p>会话判断方式</p><p>枚举值：</p><ul><li>fromClientIP： 从客户端IP判断</li><li>fromHeader： 从请求header判断</li><li>autoDetect： 自动探测</li></ul>
                     * 
                     */
                    void SetFindHostKeyMethod(const std::string& _findHostKeyMethod);

                    /**
                     * 判断参数 FindHostKeyMethod 是否已赋值
                     * @return FindHostKeyMethod 是否已赋值
                     * 
                     */
                    bool FindHostKeyMethodHasBeenSet() const;

                    /**
                     * 获取<p>会话判断header名称</p>
                     * @return HostKeyHeaderName <p>会话判断header名称</p>
                     * 
                     */
                    std::string GetHostKeyHeaderName() const;

                    /**
                     * 设置<p>会话判断header名称</p>
                     * @param _hostKeyHeaderName <p>会话判断header名称</p>
                     * 
                     */
                    void SetHostKeyHeaderName(const std::string& _hostKeyHeaderName);

                    /**
                     * 判断参数 HostKeyHeaderName 是否已赋值
                     * @return HostKeyHeaderName 是否已赋值
                     * 
                     */
                    bool HostKeyHeaderNameHasBeenSet() const;

                    /**
                     * 获取<p>是否开启备份模型</p>
                     * @return FallbackStatus <p>是否开启备份模型</p>
                     * 
                     */
                    bool GetFallbackStatus() const;

                    /**
                     * 设置<p>是否开启备份模型</p>
                     * @param _fallbackStatus <p>是否开启备份模型</p>
                     * 
                     */
                    void SetFallbackStatus(const bool& _fallbackStatus);

                    /**
                     * 判断参数 FallbackStatus 是否已赋值
                     * @return FallbackStatus 是否已赋值
                     * 
                     */
                    bool FallbackStatusHasBeenSet() const;

                    /**
                     * 获取<p>备份模型</p>
                     * @return FallbackModels <p>备份模型</p>
                     * 
                     */
                    std::vector<TargetModelDTO> GetFallbackModels() const;

                    /**
                     * 设置<p>备份模型</p>
                     * @param _fallbackModels <p>备份模型</p>
                     * 
                     */
                    void SetFallbackModels(const std::vector<TargetModelDTO>& _fallbackModels);

                    /**
                     * 判断参数 FallbackModels 是否已赋值
                     * @return FallbackModels 是否已赋值
                     * 
                     */
                    bool FallbackModelsHasBeenSet() const;

                private:

                    /**
                     * <p>实例</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>模型服务ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>模型服务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模板模型列表</p>
                     */
                    std::vector<TargetModelDTO> m_targetModels;
                    bool m_targetModelsHasBeenSet;

                    /**
                     * <p>是否开启限流</p>
                     */
                    bool m_invokeLimitConfigStatus;
                    bool m_invokeLimitConfigStatusHasBeenSet;

                    /**
                     * <p>限流配置</p>
                     */
                    InvokeLimitConfigDTO m_invokeLimitConfig;
                    bool m_invokeLimitConfigHasBeenSet;

                    /**
                     * <p>是否开启token控制</p>
                     */
                    bool m_tokenLimitStatus;
                    bool m_tokenLimitStatusHasBeenSet;

                    /**
                     * <p>token控制</p>
                     */
                    TokenLimitConfigDTO m_tokenLimitConfig;
                    bool m_tokenLimitConfigHasBeenSet;

                    /**
                     * <p>是否开启内容安全</p>
                     */
                    bool m_tmsStatus;
                    bool m_tmsStatusHasBeenSet;

                    /**
                     * <p>内容安全配置</p>
                     */
                    TmsConfigDTO m_tmsConfig;
                    bool m_tmsConfigHasBeenSet;

                    /**
                     * <p>是否开启IP白名单</p>
                     */
                    bool m_ipWhiteStatus;
                    bool m_ipWhiteStatusHasBeenSet;

                    /**
                     * <p>IP白名单</p>
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * <p>是否开启IP黑名单</p>
                     */
                    bool m_ipBlackStatus;
                    bool m_ipBlackStatusHasBeenSet;

                    /**
                     * <p>IP黑名单</p>
                     */
                    std::vector<std::string> m_ipBlackList;
                    bool m_ipBlackListHasBeenSet;

                    /**
                     * <p>插件配置</p>
                     */
                    std::vector<PluginConfigDTO> m_pluginConfigs;
                    bool m_pluginConfigsHasBeenSet;

                    /**
                     * <p>超时配置，秒</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>是否开启提示词安全检测配置</p>
                     */
                    bool m_promptModerateStatus;
                    bool m_promptModerateStatusHasBeenSet;

                    /**
                     * <p>提示词安全检测配置</p>
                     */
                    PromptModerateConfigDTO m_promptModerateConfig;
                    bool m_promptModerateConfigHasBeenSet;

                    /**
                     * <p>是否开启敏感数据检测</p>
                     */
                    bool m_sensitiveDataCheckStatus;
                    bool m_sensitiveDataCheckStatusHasBeenSet;

                    /**
                     * <p>敏感数据检测配置</p>
                     */
                    SensitiveDataCheckConfigDTO m_sensitiveDataCheckConfig;
                    bool m_sensitiveDataCheckConfigHasBeenSet;

                    /**
                     * <p>负载方式</p><p>枚举值：</p><ul><li>random： 随机</li><li>consistentHash： 会话保持</li></ul>
                     */
                    std::string m_targetSelect;
                    bool m_targetSelectHasBeenSet;

                    /**
                     * <p>会话判断方式</p><p>枚举值：</p><ul><li>fromClientIP： 从客户端IP判断</li><li>fromHeader： 从请求header判断</li><li>autoDetect： 自动探测</li></ul>
                     */
                    std::string m_findHostKeyMethod;
                    bool m_findHostKeyMethodHasBeenSet;

                    /**
                     * <p>会话判断header名称</p>
                     */
                    std::string m_hostKeyHeaderName;
                    bool m_hostKeyHeaderNameHasBeenSet;

                    /**
                     * <p>是否开启备份模型</p>
                     */
                    bool m_fallbackStatus;
                    bool m_fallbackStatusHasBeenSet;

                    /**
                     * <p>备份模型</p>
                     */
                    std::vector<TargetModelDTO> m_fallbackModels;
                    bool m_fallbackModelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MODIFYMODELSERVICEREQUEST_H_
