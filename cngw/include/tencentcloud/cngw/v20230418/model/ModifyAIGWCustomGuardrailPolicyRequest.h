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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYAIGWCUSTOMGUARDRAILPOLICYREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYAIGWCUSTOMGUARDRAILPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailServiceConfigPatch.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailAuthConfigPatch.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailDecisionConfigPatch.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailBehaviorConfigPatch.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailFilterConfigPatch.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailScopeInput.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyAIGWCustomGuardrailPolicy请求参数结构体
                */
                class ModifyAIGWCustomGuardrailPolicyRequest : public AbstractModel
                {
                public:
                    ModifyAIGWCustomGuardrailPolicyRequest();
                    ~ModifyAIGWCustomGuardrailPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例 ID</p>
                     * @return GatewayId <p>网关实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例 ID</p>
                     * @param _gatewayId <p>网关实例 ID</p>
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
                     * 获取<p>策略 ID</p>
                     * @return PolicyId <p>策略 ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>策略 ID</p>
                     * @param _policyId <p>策略 ID</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>策略名称，长度 1～64</p>
                     * @return Name <p>策略名称，长度 1～64</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称，长度 1～64</p>
                     * @param _name <p>策略名称，长度 1～64</p>
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
                     * 获取<p>策略描述，最长 200；传空字符串可清空</p>
                     * @return Description <p>策略描述，最长 200；传空字符串可清空</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述，最长 200；传空字符串可清空</p>
                     * @param _description <p>策略描述，最长 200；传空字符串可清空</p>
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
                     * 获取<p>是否启用策略</p>
                     * @return Enabled <p>是否启用策略</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用策略</p>
                     * @param _enabled <p>是否启用策略</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>审核服务局部更新配置</p>
                     * @return ServiceConfig <p>审核服务局部更新配置</p>
                     * 
                     */
                    CustomGuardrailServiceConfigPatch GetServiceConfig() const;

                    /**
                     * 设置<p>审核服务局部更新配置</p>
                     * @param _serviceConfig <p>审核服务局部更新配置</p>
                     * 
                     */
                    void SetServiceConfig(const CustomGuardrailServiceConfigPatch& _serviceConfig);

                    /**
                     * 判断参数 ServiceConfig 是否已赋值
                     * @return ServiceConfig 是否已赋值
                     * 
                     */
                    bool ServiceConfigHasBeenSet() const;

                    /**
                     * 获取<p>审核服务鉴权局部更新配置</p>
                     * @return AuthConfig <p>审核服务鉴权局部更新配置</p>
                     * 
                     */
                    CustomGuardrailAuthConfigPatch GetAuthConfig() const;

                    /**
                     * 设置<p>审核服务鉴权局部更新配置</p>
                     * @param _authConfig <p>审核服务鉴权局部更新配置</p>
                     * 
                     */
                    void SetAuthConfig(const CustomGuardrailAuthConfigPatch& _authConfig);

                    /**
                     * 判断参数 AuthConfig 是否已赋值
                     * @return AuthConfig 是否已赋值
                     * 
                     */
                    bool AuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>审核响应判定局部更新配置</p>
                     * @return DecisionConfig <p>审核响应判定局部更新配置</p>
                     * 
                     */
                    CustomGuardrailDecisionConfigPatch GetDecisionConfig() const;

                    /**
                     * 设置<p>审核响应判定局部更新配置</p>
                     * @param _decisionConfig <p>审核响应判定局部更新配置</p>
                     * 
                     */
                    void SetDecisionConfig(const CustomGuardrailDecisionConfigPatch& _decisionConfig);

                    /**
                     * 判断参数 DecisionConfig 是否已赋值
                     * @return DecisionConfig 是否已赋值
                     * 
                     */
                    bool DecisionConfigHasBeenSet() const;

                    /**
                     * 获取<p>处理行为局部更新配置</p>
                     * @return BehaviorConfig <p>处理行为局部更新配置</p>
                     * 
                     */
                    CustomGuardrailBehaviorConfigPatch GetBehaviorConfig() const;

                    /**
                     * 设置<p>处理行为局部更新配置</p>
                     * @param _behaviorConfig <p>处理行为局部更新配置</p>
                     * 
                     */
                    void SetBehaviorConfig(const CustomGuardrailBehaviorConfigPatch& _behaviorConfig);

                    /**
                     * 判断参数 BehaviorConfig 是否已赋值
                     * @return BehaviorConfig 是否已赋值
                     * 
                     */
                    bool BehaviorConfigHasBeenSet() const;

                    /**
                     * 获取<p>过滤与采样局部更新配置</p>
                     * @return FilterConfig <p>过滤与采样局部更新配置</p>
                     * 
                     */
                    CustomGuardrailFilterConfigPatch GetFilterConfig() const;

                    /**
                     * 设置<p>过滤与采样局部更新配置</p>
                     * @param _filterConfig <p>过滤与采样局部更新配置</p>
                     * 
                     */
                    void SetFilterConfig(const CustomGuardrailFilterConfigPatch& _filterConfig);

                    /**
                     * 判断参数 FilterConfig 是否已赋值
                     * @return FilterConfig 是否已赋值
                     * 
                     */
                    bool FilterConfigHasBeenSet() const;

                    /**
                     * 获取<p>资源绑定范围，global 或 resource。修改时传入的是新的完整范围，不是增量追加。</p>
                     * @return Scope <p>资源绑定范围，global 或 resource。修改时传入的是新的完整范围，不是增量追加。</p>
                     * 
                     */
                    CustomGuardrailScopeInput GetScope() const;

                    /**
                     * 设置<p>资源绑定范围，global 或 resource。修改时传入的是新的完整范围，不是增量追加。</p>
                     * @param _scope <p>资源绑定范围，global 或 resource。修改时传入的是新的完整范围，不是增量追加。</p>
                     * 
                     */
                    void SetScope(const CustomGuardrailScopeInput& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>策略 ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>策略名称，长度 1～64</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略描述，最长 200；传空字符串可清空</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否启用策略</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>审核服务局部更新配置</p>
                     */
                    CustomGuardrailServiceConfigPatch m_serviceConfig;
                    bool m_serviceConfigHasBeenSet;

                    /**
                     * <p>审核服务鉴权局部更新配置</p>
                     */
                    CustomGuardrailAuthConfigPatch m_authConfig;
                    bool m_authConfigHasBeenSet;

                    /**
                     * <p>审核响应判定局部更新配置</p>
                     */
                    CustomGuardrailDecisionConfigPatch m_decisionConfig;
                    bool m_decisionConfigHasBeenSet;

                    /**
                     * <p>处理行为局部更新配置</p>
                     */
                    CustomGuardrailBehaviorConfigPatch m_behaviorConfig;
                    bool m_behaviorConfigHasBeenSet;

                    /**
                     * <p>过滤与采样局部更新配置</p>
                     */
                    CustomGuardrailFilterConfigPatch m_filterConfig;
                    bool m_filterConfigHasBeenSet;

                    /**
                     * <p>资源绑定范围，global 或 resource。修改时传入的是新的完整范围，不是增量追加。</p>
                     */
                    CustomGuardrailScopeInput m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYAIGWCUSTOMGUARDRAILPOLICYREQUEST_H_
