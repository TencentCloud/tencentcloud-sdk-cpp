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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SHELLPOLICYLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SHELLPOLICYLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 反弹shell列表数据详情
                */
                class ShellPolicyList : public AbstractModel
                {
                public:
                    ShellPolicyList();
                    ~ShellPolicyList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyId 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyName 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyName 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取0 系统策略, 1 用户自定义策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyType 0 系统策略, 1 用户自定义策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPolicyType() const;

                    /**
                     * 设置0 系统策略, 1 用户自定义策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyType 0 系统策略, 1 用户自定义策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyType(const uint64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyDesc 策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyDesc() const;

                    /**
                     * 设置策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyDesc 策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyDesc(const std::string& _policyDesc);

                    /**
                     * 判断参数 PolicyDesc 是否已赋值
                     * @return PolicyDesc 是否已赋值
                     * 
                     */
                    bool PolicyDescHasBeenSet() const;

                    /**
                     * 获取策略动作[0:告警,1:放行,2:拦截+告警]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyAction 策略动作[0:告警,1:放行,2:拦截+告警]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPolicyAction() const;

                    /**
                     * 设置策略动作[0:告警,1:放行,2:拦截+告警]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyAction 策略动作[0:告警,1:放行,2:拦截+告警]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyAction(const uint64_t& _policyAction);

                    /**
                     * 判断参数 PolicyAction 是否已赋值
                     * @return PolicyAction 是否已赋值
                     * 
                     */
                    bool PolicyActionHasBeenSet() const;

                    /**
                     * 获取0 开启, 1关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEnabled 0 开启, 1关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsEnabled() const;

                    /**
                     * 设置0 开启, 1关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEnabled 0 开启, 1关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsEnabled(const uint64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主机范围:[0: 一组quuid 1: 所有专业版 2: 旗舰版 3: 所有主机]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostScope 主机范围:[0: 一组quuid 1: 所有专业版 2: 旗舰版 3: 所有主机]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHostScope() const;

                    /**
                     * 设置主机范围:[0: 一组quuid 1: 所有专业版 2: 旗舰版 3: 所有主机]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostScope 主机范围:[0: 一组quuid 1: 所有专业版 2: 旗舰版 3: 所有主机]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostScope(const uint64_t& _hostScope);

                    /**
                     * 判断参数 HostScope 是否已赋值
                     * @return HostScope 是否已赋值
                     * 
                     */
                    bool HostScopeHasBeenSet() const;

                private:

                    /**
                     * 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 0 系统策略, 1 用户自定义策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyDesc;
                    bool m_policyDescHasBeenSet;

                    /**
                     * 策略动作[0:告警,1:放行,2:拦截+告警]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_policyAction;
                    bool m_policyActionHasBeenSet;

                    /**
                     * 0 开启, 1关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 主机范围:[0: 一组quuid 1: 所有专业版 2: 旗舰版 3: 所有主机]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hostScope;
                    bool m_hostScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SHELLPOLICYLIST_H_
