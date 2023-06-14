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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoCondition.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoEventCondition.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoReceiverInfo.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoConditionTpl.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListGroupInstanceGroup.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyGroupList.Group
                */
                class DescribePolicyGroupListGroup : public AbstractModel
                {
                public:
                    DescribePolicyGroupListGroup();
                    ~DescribePolicyGroupListGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略组id
                     * @return GroupId 策略组id
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置策略组id
                     * @param _groupId 策略组id
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取策略组名称
                     * @return GroupName 策略组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置策略组名称
                     * @param _groupName 策略组名称
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
                     * 获取是否开启
                     * @return IsOpen 是否开启
                     * 
                     */
                    bool GetIsOpen() const;

                    /**
                     * 设置是否开启
                     * @param _isOpen 是否开启
                     * 
                     */
                    void SetIsOpen(const bool& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     * 
                     */
                    bool IsOpenHasBeenSet() const;

                    /**
                     * 获取策略视图名称
                     * @return ViewName 策略视图名称
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置策略视图名称
                     * @param _viewName 策略视图名称
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
                     * 获取最近编辑的用户uin
                     * @return LastEditUin 最近编辑的用户uin
                     * 
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置最近编辑的用户uin
                     * @param _lastEditUin 最近编辑的用户uin
                     * 
                     */
                    void SetLastEditUin(const std::string& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     * 
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取最后修改时间
                     * @return UpdateTime 最后修改时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置最后修改时间
                     * @param _updateTime 最后修改时间
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
                     * 获取策略组绑定的实例数
                     * @return UseSum 策略组绑定的实例数
                     * 
                     */
                    int64_t GetUseSum() const;

                    /**
                     * 设置策略组绑定的实例数
                     * @param _useSum 策略组绑定的实例数
                     * 
                     */
                    void SetUseSum(const int64_t& _useSum);

                    /**
                     * 判断参数 UseSum 是否已赋值
                     * @return UseSum 是否已赋值
                     * 
                     */
                    bool UseSumHasBeenSet() const;

                    /**
                     * 获取策略组绑定的未屏蔽实例数
                     * @return NoShieldedSum 策略组绑定的未屏蔽实例数
                     * 
                     */
                    int64_t GetNoShieldedSum() const;

                    /**
                     * 设置策略组绑定的未屏蔽实例数
                     * @param _noShieldedSum 策略组绑定的未屏蔽实例数
                     * 
                     */
                    void SetNoShieldedSum(const int64_t& _noShieldedSum);

                    /**
                     * 判断参数 NoShieldedSum 是否已赋值
                     * @return NoShieldedSum 是否已赋值
                     * 
                     */
                    bool NoShieldedSumHasBeenSet() const;

                    /**
                     * 获取是否为默认策略，0表示非默认策略，1表示默认策略
                     * @return IsDefault 是否为默认策略，0表示非默认策略，1表示默认策略
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否为默认策略，0表示非默认策略，1表示默认策略
                     * @param _isDefault 是否为默认策略，0表示非默认策略，1表示默认策略
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取是否可以设置成默认策略
                     * @return CanSetDefault 是否可以设置成默认策略
                     * 
                     */
                    bool GetCanSetDefault() const;

                    /**
                     * 设置是否可以设置成默认策略
                     * @param _canSetDefault 是否可以设置成默认策略
                     * 
                     */
                    void SetCanSetDefault(const bool& _canSetDefault);

                    /**
                     * 判断参数 CanSetDefault 是否已赋值
                     * @return CanSetDefault 是否已赋值
                     * 
                     */
                    bool CanSetDefaultHasBeenSet() const;

                    /**
                     * 获取父策略组id
                     * @return ParentGroupId 父策略组id
                     * 
                     */
                    int64_t GetParentGroupId() const;

                    /**
                     * 设置父策略组id
                     * @param _parentGroupId 父策略组id
                     * 
                     */
                    void SetParentGroupId(const int64_t& _parentGroupId);

                    /**
                     * 判断参数 ParentGroupId 是否已赋值
                     * @return ParentGroupId 是否已赋值
                     * 
                     */
                    bool ParentGroupIdHasBeenSet() const;

                    /**
                     * 获取策略组备注
                     * @return Remark 策略组备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置策略组备注
                     * @param _remark 策略组备注
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
                     * 获取策略组所属项目id
                     * @return ProjectId 策略组所属项目id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置策略组所属项目id
                     * @param _projectId 策略组所属项目id
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取阈值规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conditions 阈值规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribePolicyGroupInfoCondition> GetConditions() const;

                    /**
                     * 设置阈值规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditions 阈值规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditions(const std::vector<DescribePolicyGroupInfoCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取产品事件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventConditions 产品事件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribePolicyGroupInfoEventCondition> GetEventConditions() const;

                    /**
                     * 设置产品事件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventConditions 产品事件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventConditions(const std::vector<DescribePolicyGroupInfoEventCondition>& _eventConditions);

                    /**
                     * 判断参数 EventConditions 是否已赋值
                     * @return EventConditions 是否已赋值
                     * 
                     */
                    bool EventConditionsHasBeenSet() const;

                    /**
                     * 获取用户接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverInfos 用户接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribePolicyGroupInfoReceiverInfo> GetReceiverInfos() const;

                    /**
                     * 设置用户接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverInfos 用户接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverInfos(const std::vector<DescribePolicyGroupInfoReceiverInfo>& _receiverInfos);

                    /**
                     * 判断参数 ReceiverInfos 是否已赋值
                     * @return ReceiverInfos 是否已赋值
                     * 
                     */
                    bool ReceiverInfosHasBeenSet() const;

                    /**
                     * 获取模板策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionsTemp 模板策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyGroupInfoConditionTpl GetConditionsTemp() const;

                    /**
                     * 设置模板策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionsTemp 模板策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditionsTemp(const DescribePolicyGroupInfoConditionTpl& _conditionsTemp);

                    /**
                     * 判断参数 ConditionsTemp 是否已赋值
                     * @return ConditionsTemp 是否已赋值
                     * 
                     */
                    bool ConditionsTempHasBeenSet() const;

                    /**
                     * 获取策略组绑定的实例组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroup 策略组绑定的实例组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyGroupListGroupInstanceGroup GetInstanceGroup() const;

                    /**
                     * 设置策略组绑定的实例组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceGroup 策略组绑定的实例组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceGroup(const DescribePolicyGroupListGroupInstanceGroup& _instanceGroup);

                    /**
                     * 判断参数 InstanceGroup 是否已赋值
                     * @return InstanceGroup 是否已赋值
                     * 
                     */
                    bool InstanceGroupHasBeenSet() const;

                    /**
                     * 获取且或规则标识, 0表示或规则(任意一条规则满足阈值条件就告警), 1表示且规则(所有规则都满足阈值条件才告警)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUnionRule 且或规则标识, 0表示或规则(任意一条规则满足阈值条件就告警), 1表示且规则(所有规则都满足阈值条件才告警)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置且或规则标识, 0表示或规则(任意一条规则满足阈值条件就告警), 1表示且规则(所有规则都满足阈值条件才告警)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isUnionRule 且或规则标识, 0表示或规则(任意一条规则满足阈值条件就告警), 1表示且规则(所有规则都满足阈值条件才告警)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 策略组id
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 策略组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 是否开启
                     */
                    bool m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * 策略视图名称
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 最近编辑的用户uin
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * 最后修改时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 策略组绑定的实例数
                     */
                    int64_t m_useSum;
                    bool m_useSumHasBeenSet;

                    /**
                     * 策略组绑定的未屏蔽实例数
                     */
                    int64_t m_noShieldedSum;
                    bool m_noShieldedSumHasBeenSet;

                    /**
                     * 是否为默认策略，0表示非默认策略，1表示默认策略
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 是否可以设置成默认策略
                     */
                    bool m_canSetDefault;
                    bool m_canSetDefaultHasBeenSet;

                    /**
                     * 父策略组id
                     */
                    int64_t m_parentGroupId;
                    bool m_parentGroupIdHasBeenSet;

                    /**
                     * 策略组备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 策略组所属项目id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 阈值规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribePolicyGroupInfoCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 产品事件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribePolicyGroupInfoEventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                    /**
                     * 用户接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribePolicyGroupInfoReceiverInfo> m_receiverInfos;
                    bool m_receiverInfosHasBeenSet;

                    /**
                     * 模板策略组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyGroupInfoConditionTpl m_conditionsTemp;
                    bool m_conditionsTempHasBeenSet;

                    /**
                     * 策略组绑定的实例组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyGroupListGroupInstanceGroup m_instanceGroup;
                    bool m_instanceGroupHasBeenSet;

                    /**
                     * 且或规则标识, 0表示或规则(任意一条规则满足阈值条件就告警), 1表示且规则(所有规则都满足阈值条件才告警)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUP_H_
