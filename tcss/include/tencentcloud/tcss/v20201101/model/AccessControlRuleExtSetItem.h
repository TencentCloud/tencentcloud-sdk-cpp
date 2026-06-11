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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLRULEEXTSETITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLRULEEXTSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AccessControlChildRuleInfo.h>
#include <tencentcloud/tcss/v20201101/model/AccessControlSystemChildRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 文件篡改策略列表扩展项（扁平独立结构体，含子规则内容和执行动作）
                */
                class AccessControlRuleExtSetItem : public AbstractModel
                {
                public:
                    AccessControlRuleExtSetItem();
                    ~AccessControlRuleExtSetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户自定义策略子规则列表。IsDefault=false时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChildRules 用户自定义策略子规则列表。IsDefault=false时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AccessControlChildRuleInfo> GetChildRules() const;

                    /**
                     * 设置用户自定义策略子规则列表。IsDefault=false时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _childRules 用户自定义策略子规则列表。IsDefault=false时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildRules(const std::vector<AccessControlChildRuleInfo>& _childRules);

                    /**
                     * 判断参数 ChildRules 是否已赋值
                     * @return ChildRules 是否已赋值
                     * 
                     */
                    bool ChildRulesHasBeenSet() const;

                    /**
                     * 获取编辑用户名称
                     * @return EditUserName 编辑用户名称
                     * 
                     */
                    std::string GetEditUserName() const;

                    /**
                     * 设置编辑用户名称
                     * @param _editUserName 编辑用户名称
                     * 
                     */
                    void SetEditUserName(const std::string& _editUserName);

                    /**
                     * 判断参数 EditUserName 是否已赋值
                     * @return EditUserName 是否已赋值
                     * 
                     */
                    bool EditUserNameHasBeenSet() const;

                    /**
                     * 获取策略生效镜像数量
                     * @return EffectImageCount 策略生效镜像数量
                     * 
                     */
                    uint64_t GetEffectImageCount() const;

                    /**
                     * 设置策略生效镜像数量
                     * @param _effectImageCount 策略生效镜像数量
                     * 
                     */
                    void SetEffectImageCount(const uint64_t& _effectImageCount);

                    /**
                     * 判断参数 EffectImageCount 是否已赋值
                     * @return EffectImageCount 是否已赋值
                     * 
                     */
                    bool EffectImageCountHasBeenSet() const;

                    /**
                     * 获取true: 默认策略，false:自定义策略
                     * @return IsDefault true: 默认策略，false:自定义策略
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置true: 默认策略，false:自定义策略
                     * @param _isDefault true: 默认策略，false:自定义策略
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取是否为全部镜像规则。true表示对所有镜像生效
                     * @return IsGlobal 是否为全部镜像规则。true表示对所有镜像生效
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置是否为全部镜像规则。true表示对所有镜像生效
                     * @param _isGlobal 是否为全部镜像规则。true表示对所有镜像生效
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取true: 策略启用，false：策略禁用
                     * @return IsEnable true: 策略启用，false：策略禁用
                     * 
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置true: 策略启用，false：策略禁用
                     * @param _isEnable true: 策略启用，false：策略禁用
                     * 
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                    /**
                     * 获取规则组中所有执行动作的去重列表。RULE_MODE_ALERT:告警 RULE_MODE_HOLDUP:拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleActions 规则组中所有执行动作的去重列表。RULE_MODE_ALERT:告警 RULE_MODE_HOLDUP:拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRuleActions() const;

                    /**
                     * 设置规则组中所有执行动作的去重列表。RULE_MODE_ALERT:告警 RULE_MODE_HOLDUP:拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleActions 规则组中所有执行动作的去重列表。RULE_MODE_ALERT:告警 RULE_MODE_HOLDUP:拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleActions(const std::vector<std::string>& _ruleActions);

                    /**
                     * 判断参数 RuleActions 是否已赋值
                     * @return RuleActions 是否已赋值
                     * 
                     */
                    bool RuleActionsHasBeenSet() const;

                    /**
                     * 获取策略Id
                     * @return RuleId 策略Id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置策略Id
                     * @param _ruleId 策略Id
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取策略名字
                     * @return RuleName 策略名字
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置策略名字
                     * @param _ruleName 策略名字
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取系统策略子规则列表。IsDefault=true时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemChildRules 系统策略子规则列表。IsDefault=true时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AccessControlSystemChildRuleInfo> GetSystemChildRules() const;

                    /**
                     * 设置系统策略子规则列表。IsDefault=true时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemChildRules 系统策略子规则列表。IsDefault=true时有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemChildRules(const std::vector<AccessControlSystemChildRuleInfo>& _systemChildRules);

                    /**
                     * 判断参数 SystemChildRules 是否已赋值
                     * @return SystemChildRules 是否已赋值
                     * 
                     */
                    bool SystemChildRulesHasBeenSet() const;

                    /**
                     * 获取策略更新时间, 存在为空的情况
                     * @return UpdateTime 策略更新时间, 存在为空的情况
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置策略更新时间, 存在为空的情况
                     * @param _updateTime 策略更新时间, 存在为空的情况
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 用户自定义策略子规则列表。IsDefault=false时有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AccessControlChildRuleInfo> m_childRules;
                    bool m_childRulesHasBeenSet;

                    /**
                     * 编辑用户名称
                     */
                    std::string m_editUserName;
                    bool m_editUserNameHasBeenSet;

                    /**
                     * 策略生效镜像数量
                     */
                    uint64_t m_effectImageCount;
                    bool m_effectImageCountHasBeenSet;

                    /**
                     * true: 默认策略，false:自定义策略
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 是否为全部镜像规则。true表示对所有镜像生效
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * true: 策略启用，false：策略禁用
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * 规则组中所有执行动作的去重列表。RULE_MODE_ALERT:告警 RULE_MODE_HOLDUP:拦截
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ruleActions;
                    bool m_ruleActionsHasBeenSet;

                    /**
                     * 策略Id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 策略名字
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 系统策略子规则列表。IsDefault=true时有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AccessControlSystemChildRuleInfo> m_systemChildRules;
                    bool m_systemChildRulesHasBeenSet;

                    /**
                     * 策略更新时间, 存在为空的情况
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLRULEEXTSETITEM_H_
