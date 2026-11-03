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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CREATEAIGWCUSTOMGUARDRAILPOLICYREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CREATEAIGWCUSTOMGUARDRAILPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailServiceConfigInput.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailDecisionConfigInput.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailScopeInput.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailAuthConfigInput.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailBehaviorConfigInput.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailFilterConfigInput.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateAIGWCustomGuardrailPolicy请求参数结构体
                */
                class CreateAIGWCustomGuardrailPolicyRequest : public AbstractModel
                {
                public:
                    CreateAIGWCustomGuardrailPolicyRequest();
                    ~CreateAIGWCustomGuardrailPolicyRequest() = default;
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
                     * 获取<p>策略名称，同一网关内唯一，长度 1～64</p>
                     * @return Name <p>策略名称，同一网关内唯一，长度 1～64</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称，同一网关内唯一，长度 1～64</p>
                     * @param _name <p>策略名称，同一网关内唯一，长度 1～64</p>
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
                     * 获取<p>审核服务配置</p>
                     * @return ServiceConfig <p>审核服务配置</p>
                     * 
                     */
                    CustomGuardrailServiceConfigInput GetServiceConfig() const;

                    /**
                     * 设置<p>审核服务配置</p>
                     * @param _serviceConfig <p>审核服务配置</p>
                     * 
                     */
                    void SetServiceConfig(const CustomGuardrailServiceConfigInput& _serviceConfig);

                    /**
                     * 判断参数 ServiceConfig 是否已赋值
                     * @return ServiceConfig 是否已赋值
                     * 
                     */
                    bool ServiceConfigHasBeenSet() const;

                    /**
                     * 获取<p>审核响应判定配置</p>
                     * @return DecisionConfig <p>审核响应判定配置</p>
                     * 
                     */
                    CustomGuardrailDecisionConfigInput GetDecisionConfig() const;

                    /**
                     * 设置<p>审核响应判定配置</p>
                     * @param _decisionConfig <p>审核响应判定配置</p>
                     * 
                     */
                    void SetDecisionConfig(const CustomGuardrailDecisionConfigInput& _decisionConfig);

                    /**
                     * 判断参数 DecisionConfig 是否已赋值
                     * @return DecisionConfig 是否已赋值
                     * 
                     */
                    bool DecisionConfigHasBeenSet() const;

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

                    /**
                     * 获取<p>必填，必须显式选择鉴权类型；无鉴权填写 {"AuthType":"none"}。</p>
                     * @return AuthConfig <p>必填，必须显式选择鉴权类型；无鉴权填写 {"AuthType":"none"}。</p>
                     * 
                     */
                    CustomGuardrailAuthConfigInput GetAuthConfig() const;

                    /**
                     * 设置<p>必填，必须显式选择鉴权类型；无鉴权填写 {"AuthType":"none"}。</p>
                     * @param _authConfig <p>必填，必须显式选择鉴权类型；无鉴权填写 {"AuthType":"none"}。</p>
                     * 
                     */
                    void SetAuthConfig(const CustomGuardrailAuthConfigInput& _authConfig);

                    /**
                     * 判断参数 AuthConfig 是否已赋值
                     * @return AuthConfig 是否已赋值
                     * 
                     */
                    bool AuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>必填，Direction、HandleAction、TimeoutMs、FailureMode 四项均须显式填写。</p>
                     * @return BehaviorConfig <p>必填，Direction、HandleAction、TimeoutMs、FailureMode 四项均须显式填写。</p>
                     * 
                     */
                    CustomGuardrailBehaviorConfigInput GetBehaviorConfig() const;

                    /**
                     * 设置<p>必填，Direction、HandleAction、TimeoutMs、FailureMode 四项均须显式填写。</p>
                     * @param _behaviorConfig <p>必填，Direction、HandleAction、TimeoutMs、FailureMode 四项均须显式填写。</p>
                     * 
                     */
                    void SetBehaviorConfig(const CustomGuardrailBehaviorConfigInput& _behaviorConfig);

                    /**
                     * 判断参数 BehaviorConfig 是否已赋值
                     * @return BehaviorConfig 是否已赋值
                     * 
                     */
                    bool BehaviorConfigHasBeenSet() const;

                    /**
                     * 获取<p>策略描述，最长 200</p>
                     * @return Description <p>策略描述，最长 200</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述，最长 200</p>
                     * @param _description <p>策略描述，最长 200</p>
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
                     * 获取<p>是否启用策略，默认 true</p>
                     * @return Enabled <p>是否启用策略，默认 true</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用策略，默认 true</p>
                     * @param _enabled <p>是否启用策略，默认 true</p>
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
                     * 获取<p>过滤与采样配置</p>
                     * @return FilterConfig <p>过滤与采样配置</p>
                     * 
                     */
                    CustomGuardrailFilterConfigInput GetFilterConfig() const;

                    /**
                     * 设置<p>过滤与采样配置</p>
                     * @param _filterConfig <p>过滤与采样配置</p>
                     * 
                     */
                    void SetFilterConfig(const CustomGuardrailFilterConfigInput& _filterConfig);

                    /**
                     * 判断参数 FilterConfig 是否已赋值
                     * @return FilterConfig 是否已赋值
                     * 
                     */
                    bool FilterConfigHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>策略名称，同一网关内唯一，长度 1～64</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>审核服务配置</p>
                     */
                    CustomGuardrailServiceConfigInput m_serviceConfig;
                    bool m_serviceConfigHasBeenSet;

                    /**
                     * <p>审核响应判定配置</p>
                     */
                    CustomGuardrailDecisionConfigInput m_decisionConfig;
                    bool m_decisionConfigHasBeenSet;

                    /**
                     * <p>资源绑定范围，global 或 resource。修改时传入的是新的完整范围，不是增量追加。</p>
                     */
                    CustomGuardrailScopeInput m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>必填，必须显式选择鉴权类型；无鉴权填写 {"AuthType":"none"}。</p>
                     */
                    CustomGuardrailAuthConfigInput m_authConfig;
                    bool m_authConfigHasBeenSet;

                    /**
                     * <p>必填，Direction、HandleAction、TimeoutMs、FailureMode 四项均须显式填写。</p>
                     */
                    CustomGuardrailBehaviorConfigInput m_behaviorConfig;
                    bool m_behaviorConfigHasBeenSet;

                    /**
                     * <p>策略描述，最长 200</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否启用策略，默认 true</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>过滤与采样配置</p>
                     */
                    CustomGuardrailFilterConfigInput m_filterConfig;
                    bool m_filterConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CREATEAIGWCUSTOMGUARDRAILPOLICYREQUEST_H_
