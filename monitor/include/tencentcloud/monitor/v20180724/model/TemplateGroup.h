/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_TEMPLATEGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_TEMPLATEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Condition.h>
#include <tencentcloud/monitor/v20180724/model/EventCondition.h>
#include <tencentcloud/monitor/v20180724/model/PolicyGroup.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 模板列表
                */
                class TemplateGroup : public AbstractModel
                {
                public:
                    TemplateGroup();
                    ~TemplateGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conditions 指标告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Condition> GetConditions() const;

                    /**
                     * 设置指标告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditions 指标告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditions(const std::vector<Condition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取事件告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventConditions 事件告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventCondition> GetEventConditions() const;

                    /**
                     * 设置事件告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventConditions 事件告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventConditions(const std::vector<EventCondition>& _eventConditions);

                    /**
                     * 判断参数 EventConditions 是否已赋值
                     * @return EventConditions 是否已赋值
                     * 
                     */
                    bool EventConditionsHasBeenSet() const;

                    /**
                     * 获取关联告警策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyGroups 关联告警策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PolicyGroup> GetPolicyGroups() const;

                    /**
                     * 设置关联告警策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyGroups 关联告警策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyGroups(const std::vector<PolicyGroup>& _policyGroups);

                    /**
                     * 判断参数 PolicyGroups 是否已赋值
                     * @return PolicyGroups 是否已赋值
                     * 
                     */
                    bool PolicyGroupsHasBeenSet() const;

                    /**
                     * 获取模板策略组ID
                     * @return GroupID 模板策略组ID
                     * 
                     */
                    int64_t GetGroupID() const;

                    /**
                     * 设置模板策略组ID
                     * @param _groupID 模板策略组ID
                     * 
                     */
                    void SetGroupID(const int64_t& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取模板策略组名称
                     * @return GroupName 模板策略组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置模板策略组名称
                     * @param _groupName 模板策略组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return InsertTime 创建时间
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置创建时间
                     * @param _insertTime 创建时间
                     * 
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取最后修改人UIN
                     * @return LastEditUin 最后修改人UIN
                     * 
                     */
                    int64_t GetLastEditUin() const;

                    /**
                     * 设置最后修改人UIN
                     * @param _lastEditUin 最后修改人UIN
                     * 
                     */
                    void SetLastEditUin(const int64_t& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     * 
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取视图
                     * @return ViewName 视图
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置视图
                     * @param _viewName 视图
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取是否为与关系
                     * @return IsUnionRule 是否为与关系
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置是否为与关系
                     * @param _isUnionRule 是否为与关系
                     * 
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     * 
                     */
                    bool IsUnionRuleHasBeenSet() const;

                private:

                    /**
                     * 指标告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Condition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 事件告警规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                    /**
                     * 关联告警策略组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PolicyGroup> m_policyGroups;
                    bool m_policyGroupsHasBeenSet;

                    /**
                     * 模板策略组ID
                     */
                    int64_t m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * 模板策略组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 最后修改人UIN
                     */
                    int64_t m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 视图
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 是否为与关系
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_TEMPLATEGROUP_H_
