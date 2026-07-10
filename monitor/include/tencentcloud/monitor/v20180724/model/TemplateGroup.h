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
                     * 获取<p>指标告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conditions <p>指标告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Condition> GetConditions() const;

                    /**
                     * 设置<p>指标告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditions <p>指标告警规则</p>
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
                     * 获取<p>事件告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventConditions <p>事件告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EventCondition> GetEventConditions() const;

                    /**
                     * 设置<p>事件告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventConditions <p>事件告警规则</p>
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
                     * 获取<p>关联告警策略组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyGroups <p>关联告警策略组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PolicyGroup> GetPolicyGroups() const;

                    /**
                     * 设置<p>关联告警策略组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyGroups <p>关联告警策略组</p>
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
                     * 获取<p>模板策略组ID</p>
                     * @return GroupID <p>模板策略组ID</p>
                     * 
                     */
                    int64_t GetGroupID() const;

                    /**
                     * 设置<p>模板策略组ID</p>
                     * @param _groupID <p>模板策略组ID</p>
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
                     * 获取<p>模板策略组名称</p>
                     * @return GroupName <p>模板策略组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>模板策略组名称</p>
                     * @param _groupName <p>模板策略组名称</p>
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
                     * 获取<p>创建时间</p>
                     * @return InsertTime <p>创建时间</p>
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _insertTime <p>创建时间</p>
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
                     * 获取<p>最后修改人UIN</p>
                     * @return LastEditUin <p>最后修改人UIN</p>
                     * 
                     */
                    int64_t GetLastEditUin() const;

                    /**
                     * 设置<p>最后修改人UIN</p>
                     * @param _lastEditUin <p>最后修改人UIN</p>
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
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>视图</p>
                     * @return ViewName <p>视图</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>视图</p>
                     * @param _viewName <p>视图</p>
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
                     * 获取<p>是否为与关系</p>
                     * @return IsUnionRule <p>是否为与关系</p>
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置<p>是否为与关系</p>
                     * @param _isUnionRule <p>是否为与关系</p>
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
                     * <p>指标告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Condition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * <p>事件告警规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                    /**
                     * <p>关联告警策略组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PolicyGroup> m_policyGroups;
                    bool m_policyGroupsHasBeenSet;

                    /**
                     * <p>模板策略组ID</p>
                     */
                    int64_t m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * <p>模板策略组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * <p>最后修改人UIN</p>
                     */
                    int64_t m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>视图</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>是否为与关系</p>
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_TEMPLATEGROUP_H_
