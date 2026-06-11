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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULELISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalRuleScopeInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * k8s api 异常请求规则列表Item
                */
                class K8sApiAbnormalRuleListItem : public AbstractModel
                {
                public:
                    K8sApiAbnormalRuleListItem();
                    ~K8sApiAbnormalRuleListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否全部集群生效。true表示全部集群生效，false表示仅指定集群生效
                     * @return EffectAllCluster 是否全部集群生效。true表示全部集群生效，false表示仅指定集群生效
                     * 
                     */
                    bool GetEffectAllCluster() const;

                    /**
                     * 设置是否全部集群生效。true表示全部集群生效，false表示仅指定集群生效
                     * @param _effectAllCluster 是否全部集群生效。true表示全部集群生效，false表示仅指定集群生效
                     * 
                     */
                    void SetEffectAllCluster(const bool& _effectAllCluster);

                    /**
                     * 判断参数 EffectAllCluster 是否已赋值
                     * @return EffectAllCluster 是否已赋值
                     * 
                     */
                    bool EffectAllClusterHasBeenSet() const;

                    /**
                     * 获取受影响集群总数
                     * @return EffectClusterCount 受影响集群总数
                     * 
                     */
                    uint64_t GetEffectClusterCount() const;

                    /**
                     * 设置受影响集群总数
                     * @param _effectClusterCount 受影响集群总数
                     * 
                     */
                    void SetEffectClusterCount(const uint64_t& _effectClusterCount);

                    /**
                     * 判断参数 EffectClusterCount 是否已赋值
                     * @return EffectClusterCount 是否已赋值
                     * 
                     */
                    bool EffectClusterCountHasBeenSet() const;

                    /**
                     * 获取编辑账号
                     * @return OprUin 编辑账号
                     * 
                     */
                    std::string GetOprUin() const;

                    /**
                     * 设置编辑账号
                     * @param _oprUin 编辑账号
                     * 
                     */
                    void SetOprUin(const std::string& _oprUin);

                    /**
                     * 判断参数 OprUin 是否已赋值
                     * @return OprUin 是否已赋值
                     * 
                     */
                    bool OprUinHasBeenSet() const;

                    /**
                     * 获取规则组中所有执行动作的去重列表。当前黑名单仅包含 RULE_MODE_ALERT（告警）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleActions 规则组中所有执行动作的去重列表。当前黑名单仅包含 RULE_MODE_ALERT（告警）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRuleActions() const;

                    /**
                     * 设置规则组中所有执行动作的去重列表。当前黑名单仅包含 RULE_MODE_ALERT（告警）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleActions 规则组中所有执行动作的去重列表。当前黑名单仅包含 RULE_MODE_ALERT（告警）
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
                     * 获取规则ID
                     * @return RuleID 规则ID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置规则ID
                     * @param _ruleID 规则ID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取子规则内容列表，从 rule_details JSON 反序列化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleInfoList 子规则内容列表，从 rule_details JSON 反序列化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<K8sApiAbnormalRuleScopeInfo> GetRuleInfoList() const;

                    /**
                     * 设置子规则内容列表，从 rule_details JSON 反序列化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleInfoList 子规则内容列表，从 rule_details JSON 反序列化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleInfoList(const std::vector<K8sApiAbnormalRuleScopeInfo>& _ruleInfoList);

                    /**
                     * 判断参数 RuleInfoList 是否已赋值
                     * @return RuleInfoList 是否已赋值
                     * 
                     */
                    bool RuleInfoListHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取规则类型
RT_SYSTEM 系统规则
RT_USER 用户自定义
                     * @return RuleType 规则类型
RT_SYSTEM 系统规则
RT_USER 用户自定义
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型
RT_SYSTEM 系统规则
RT_USER 用户自定义
                     * @param _ruleType 规则类型
RT_SYSTEM 系统规则
RT_USER 用户自定义
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 是否全部集群生效。true表示全部集群生效，false表示仅指定集群生效
                     */
                    bool m_effectAllCluster;
                    bool m_effectAllClusterHasBeenSet;

                    /**
                     * 受影响集群总数
                     */
                    uint64_t m_effectClusterCount;
                    bool m_effectClusterCountHasBeenSet;

                    /**
                     * 编辑账号
                     */
                    std::string m_oprUin;
                    bool m_oprUinHasBeenSet;

                    /**
                     * 规则组中所有执行动作的去重列表。当前黑名单仅包含 RULE_MODE_ALERT（告警）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ruleActions;
                    bool m_ruleActionsHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 子规则内容列表，从 rule_details JSON 反序列化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<K8sApiAbnormalRuleScopeInfo> m_ruleInfoList;
                    bool m_ruleInfoListHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则类型
RT_SYSTEM 系统规则
RT_USER 用户自定义
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 状态
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULELISTITEM_H_
