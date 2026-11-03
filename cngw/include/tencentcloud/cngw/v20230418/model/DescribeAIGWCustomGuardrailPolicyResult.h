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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILPOLICYRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILPOLICYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailServiceConfig.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailAuthConfig.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailDecisionConfig.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailBehaviorConfig.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailFilterConfig.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailScope.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailPolicyBinding.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 查询自定义安全护栏策略详情结果
                */
                class DescribeAIGWCustomGuardrailPolicyResult : public AbstractModel
                {
                public:
                    DescribeAIGWCustomGuardrailPolicyResult();
                    ~DescribeAIGWCustomGuardrailPolicyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>策略名称</p>
                     * @return Name <p>策略名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称</p>
                     * @param _name <p>策略名称</p>
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
                     * 获取<p>策略描述</p>
                     * @return Description <p>策略描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述</p>
                     * @param _description <p>策略描述</p>
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
                     * 获取<p>策略期望启用状态；实际生效还需检查 EffectiveEnabled 和 SyncStatus。</p>
                     * @return Enabled <p>策略期望启用状态；实际生效还需检查 EffectiveEnabled 和 SyncStatus。</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>策略期望启用状态；实际生效还需检查 EffectiveEnabled 和 SyncStatus。</p>
                     * @param _enabled <p>策略期望启用状态；实际生效还需检查 EffectiveEnabled 和 SyncStatus。</p>
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
                     * 获取<p>当前控制面计算值：Enabled=true 且 SyncStatus=synced 时为 true。不代表一次真实业务请求已通过审核，也不替代 DP 同步/链路验证。</p>
                     * @return EffectiveEnabled <p>当前控制面计算值：Enabled=true 且 SyncStatus=synced 时为 true。不代表一次真实业务请求已通过审核，也不替代 DP 同步/链路验证。</p>
                     * 
                     */
                    bool GetEffectiveEnabled() const;

                    /**
                     * 设置<p>当前控制面计算值：Enabled=true 且 SyncStatus=synced 时为 true。不代表一次真实业务请求已通过审核，也不替代 DP 同步/链路验证。</p>
                     * @param _effectiveEnabled <p>当前控制面计算值：Enabled=true 且 SyncStatus=synced 时为 true。不代表一次真实业务请求已通过审核，也不替代 DP 同步/链路验证。</p>
                     * 
                     */
                    void SetEffectiveEnabled(const bool& _effectiveEnabled);

                    /**
                     * 判断参数 EffectiveEnabled 是否已赋值
                     * @return EffectiveEnabled 是否已赋值
                     * 
                     */
                    bool EffectiveEnabledHasBeenSet() const;

                    /**
                     * 获取<p>审核服务配置</p>
                     * @return ServiceConfig <p>审核服务配置</p>
                     * 
                     */
                    CustomGuardrailServiceConfig GetServiceConfig() const;

                    /**
                     * 设置<p>审核服务配置</p>
                     * @param _serviceConfig <p>审核服务配置</p>
                     * 
                     */
                    void SetServiceConfig(const CustomGuardrailServiceConfig& _serviceConfig);

                    /**
                     * 判断参数 ServiceConfig 是否已赋值
                     * @return ServiceConfig 是否已赋值
                     * 
                     */
                    bool ServiceConfigHasBeenSet() const;

                    /**
                     * 获取<p>审核引擎鉴权的脱敏视图，仅返回鉴权类型、Header 名和密钥存在状态，不返回 ApiKey。</p>
                     * @return AuthConfig <p>审核引擎鉴权的脱敏视图，仅返回鉴权类型、Header 名和密钥存在状态，不返回 ApiKey。</p>
                     * 
                     */
                    CustomGuardrailAuthConfig GetAuthConfig() const;

                    /**
                     * 设置<p>审核引擎鉴权的脱敏视图，仅返回鉴权类型、Header 名和密钥存在状态，不返回 ApiKey。</p>
                     * @param _authConfig <p>审核引擎鉴权的脱敏视图，仅返回鉴权类型、Header 名和密钥存在状态，不返回 ApiKey。</p>
                     * 
                     */
                    void SetAuthConfig(const CustomGuardrailAuthConfig& _authConfig);

                    /**
                     * 判断参数 AuthConfig 是否已赋值
                     * @return AuthConfig 是否已赋值
                     * 
                     */
                    bool AuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>审核响应判定配置</p>
                     * @return DecisionConfig <p>审核响应判定配置</p>
                     * 
                     */
                    CustomGuardrailDecisionConfig GetDecisionConfig() const;

                    /**
                     * 设置<p>审核响应判定配置</p>
                     * @param _decisionConfig <p>审核响应判定配置</p>
                     * 
                     */
                    void SetDecisionConfig(const CustomGuardrailDecisionConfig& _decisionConfig);

                    /**
                     * 判断参数 DecisionConfig 是否已赋值
                     * @return DecisionConfig 是否已赋值
                     * 
                     */
                    bool DecisionConfigHasBeenSet() const;

                    /**
                     * 获取<p>处理行为配置</p>
                     * @return BehaviorConfig <p>处理行为配置</p>
                     * 
                     */
                    CustomGuardrailBehaviorConfig GetBehaviorConfig() const;

                    /**
                     * 设置<p>处理行为配置</p>
                     * @param _behaviorConfig <p>处理行为配置</p>
                     * 
                     */
                    void SetBehaviorConfig(const CustomGuardrailBehaviorConfig& _behaviorConfig);

                    /**
                     * 判断参数 BehaviorConfig 是否已赋值
                     * @return BehaviorConfig 是否已赋值
                     * 
                     */
                    bool BehaviorConfigHasBeenSet() const;

                    /**
                     * 获取<p>过滤与采样配置</p>
                     * @return FilterConfig <p>过滤与采样配置</p>
                     * 
                     */
                    CustomGuardrailFilterConfig GetFilterConfig() const;

                    /**
                     * 设置<p>过滤与采样配置</p>
                     * @param _filterConfig <p>过滤与采样配置</p>
                     * 
                     */
                    void SetFilterConfig(const CustomGuardrailFilterConfig& _filterConfig);

                    /**
                     * 判断参数 FilterConfig 是否已赋值
                     * @return FilterConfig 是否已赋值
                     * 
                     */
                    bool FilterConfigHasBeenSet() const;

                    /**
                     * 获取<p>生效范围</p>
                     * @return Scope <p>生效范围</p>
                     * 
                     */
                    CustomGuardrailScope GetScope() const;

                    /**
                     * 设置<p>生效范围</p>
                     * @param _scope <p>生效范围</p>
                     * 
                     */
                    void SetScope(const CustomGuardrailScope& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>业务资源到 Kong Route 的绑定及插件投影信息，一个业务资源可能对应多个 Route。</p>
                     * @return Bindings <p>业务资源到 Kong Route 的绑定及插件投影信息，一个业务资源可能对应多个 Route。</p>
                     * 
                     */
                    std::vector<CustomGuardrailPolicyBinding> GetBindings() const;

                    /**
                     * 设置<p>业务资源到 Kong Route 的绑定及插件投影信息，一个业务资源可能对应多个 Route。</p>
                     * @param _bindings <p>业务资源到 Kong Route 的绑定及插件投影信息，一个业务资源可能对应多个 Route。</p>
                     * 
                     */
                    void SetBindings(const std::vector<CustomGuardrailPolicyBinding>& _bindings);

                    /**
                     * 判断参数 Bindings 是否已赋值
                     * @return Bindings 是否已赋值
                     * 
                     */
                    bool BindingsHasBeenSet() const;

                    /**
                     * 获取<p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * @return SyncStatus <p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 设置<p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * @param _syncStatus <p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * 
                     */
                    void SetSyncStatus(const std::string& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取<p>配置同步错误摘要，无错误时可能省略。</p>
                     * @return SyncError <p>配置同步错误摘要，无错误时可能省略。</p>
                     * 
                     */
                    std::string GetSyncError() const;

                    /**
                     * 设置<p>配置同步错误摘要，无错误时可能省略。</p>
                     * @param _syncError <p>配置同步错误摘要，无错误时可能省略。</p>
                     * 
                     */
                    void SetSyncError(const std::string& _syncError);

                    /**
                     * 判断参数 SyncError 是否已赋值
                     * @return SyncError 是否已赋值
                     * 
                     */
                    bool SyncErrorHasBeenSet() const;

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
                     * 获取<p>最后修改时间</p>
                     * @return ModificationTime <p>最后修改时间</p>
                     * 
                     */
                    std::string GetModificationTime() const;

                    /**
                     * 设置<p>最后修改时间</p>
                     * @param _modificationTime <p>最后修改时间</p>
                     * 
                     */
                    void SetModificationTime(const std::string& _modificationTime);

                    /**
                     * 判断参数 ModificationTime 是否已赋值
                     * @return ModificationTime 是否已赋值
                     * 
                     */
                    bool ModificationTimeHasBeenSet() const;

                private:

                    /**
                     * <p>策略 ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>策略期望启用状态；实际生效还需检查 EffectiveEnabled 和 SyncStatus。</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>当前控制面计算值：Enabled=true 且 SyncStatus=synced 时为 true。不代表一次真实业务请求已通过审核，也不替代 DP 同步/链路验证。</p>
                     */
                    bool m_effectiveEnabled;
                    bool m_effectiveEnabledHasBeenSet;

                    /**
                     * <p>审核服务配置</p>
                     */
                    CustomGuardrailServiceConfig m_serviceConfig;
                    bool m_serviceConfigHasBeenSet;

                    /**
                     * <p>审核引擎鉴权的脱敏视图，仅返回鉴权类型、Header 名和密钥存在状态，不返回 ApiKey。</p>
                     */
                    CustomGuardrailAuthConfig m_authConfig;
                    bool m_authConfigHasBeenSet;

                    /**
                     * <p>审核响应判定配置</p>
                     */
                    CustomGuardrailDecisionConfig m_decisionConfig;
                    bool m_decisionConfigHasBeenSet;

                    /**
                     * <p>处理行为配置</p>
                     */
                    CustomGuardrailBehaviorConfig m_behaviorConfig;
                    bool m_behaviorConfigHasBeenSet;

                    /**
                     * <p>过滤与采样配置</p>
                     */
                    CustomGuardrailFilterConfig m_filterConfig;
                    bool m_filterConfigHasBeenSet;

                    /**
                     * <p>生效范围</p>
                     */
                    CustomGuardrailScope m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>业务资源到 Kong Route 的绑定及插件投影信息，一个业务资源可能对应多个 Route。</p>
                     */
                    std::vector<CustomGuardrailPolicyBinding> m_bindings;
                    bool m_bindingsHasBeenSet;

                    /**
                     * <p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     */
                    std::string m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * <p>配置同步错误摘要，无错误时可能省略。</p>
                     */
                    std::string m_syncError;
                    bool m_syncErrorHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最后修改时间</p>
                     */
                    std::string m_modificationTime;
                    bool m_modificationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILPOLICYRESULT_H_
