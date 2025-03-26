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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICY_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyEventCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmNotice.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyTriggerTask.h>
#include <tencentcloud/monitor/v20180724/model/ConditionsTemp.h>
#include <tencentcloud/monitor/v20180724/model/TagInstance.h>
#include <tencentcloud/monitor/v20180724/model/AlarmConditionFilter.h>
#include <tencentcloud/monitor/v20180724/model/AlarmGroupByItem.h>
#include <tencentcloud/monitor/v20180724/model/Tag.h>
#include <tencentcloud/monitor/v20180724/model/NoticeContentTmplBindInfo.h>
#include <tencentcloud/monitor/v20180724/model/AlarmHierarchicalNotice.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警策略详情
                */
                class AlarmPolicy : public AbstractModel
                {
                public:
                    AlarmPolicy();
                    ~AlarmPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警策略 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId 告警策略 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyId 告警策略 ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取告警策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyName 告警策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置告警策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyName 告警策略名称
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
                     * 获取备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取监控类型 MT_QCE=云产品监控
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType 监控类型 MT_QCE=云产品监控
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型 MT_QCE=云产品监控
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorType 监控类型 MT_QCE=云产品监控
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取启停状态 0=停用 1=启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 启停状态 0=停用 1=启用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置启停状态 0=停用 1=启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 启停状态 0=停用 1=启用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取策略组绑定的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseSum 策略组绑定的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUseSum() const;

                    /**
                     * 设置策略组绑定的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useSum 策略组绑定的实例数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取项目 Id -1=无项目 0=默认项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目 Id -1=无项目 0=默认项目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 Id -1=无项目 0=默认项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目 Id -1=无项目 0=默认项目
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取告警策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 告警策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置告警策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 告警策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取触发条件模板 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionTemplateId 触发条件模板 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConditionTemplateId() const;

                    /**
                     * 设置触发条件模板 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionTemplateId 触发条件模板 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditionTemplateId(const std::string& _conditionTemplateId);

                    /**
                     * 判断参数 ConditionTemplateId 是否已赋值
                     * @return ConditionTemplateId 是否已赋值
                     * 
                     */
                    bool ConditionTemplateIdHasBeenSet() const;

                    /**
                     * 获取指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Condition 指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmPolicyCondition GetCondition() const;

                    /**
                     * 设置指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _condition 指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCondition(const AlarmPolicyCondition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取事件触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventCondition 事件触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmPolicyEventCondition GetEventCondition() const;

                    /**
                     * 设置事件触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventCondition 事件触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventCondition(const AlarmPolicyEventCondition& _eventCondition);

                    /**
                     * 判断参数 EventCondition 是否已赋值
                     * @return EventCondition 是否已赋值
                     * 
                     */
                    bool EventConditionHasBeenSet() const;

                    /**
                     * 获取通知规则 id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeIds 通知规则 id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置通知规则 id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noticeIds 通知规则 id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     * 
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取通知规则 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notices 通知规则 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmNotice> GetNotices() const;

                    /**
                     * 设置通知规则 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notices 通知规则 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotices(const std::vector<AlarmNotice>& _notices);

                    /**
                     * 判断参数 Notices 是否已赋值
                     * @return Notices 是否已赋值
                     * 
                     */
                    bool NoticesHasBeenSet() const;

                    /**
                     * 获取触发任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerTasks 触发任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmPolicyTriggerTask> GetTriggerTasks() const;

                    /**
                     * 设置触发任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerTasks 触发任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerTasks(const std::vector<AlarmPolicyTriggerTask>& _triggerTasks);

                    /**
                     * 判断参数 TriggerTasks 是否已赋值
                     * @return TriggerTasks 是否已赋值
                     * 
                     */
                    bool TriggerTasksHasBeenSet() const;

                    /**
                     * 获取模板策略组
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionsTemp 模板策略组
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConditionsTemp GetConditionsTemp() const;

                    /**
                     * 设置模板策略组
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionsTemp 模板策略组
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditionsTemp(const ConditionsTemp& _conditionsTemp);

                    /**
                     * 判断参数 ConditionsTemp 是否已赋值
                     * @return ConditionsTemp 是否已赋值
                     * 
                     */
                    bool ConditionsTempHasBeenSet() const;

                    /**
                     * 获取最后编辑的用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastEditUin 最后编辑的用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置最后编辑的用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastEditUin 最后编辑的用户uin
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _insertTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取namespace显示名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceShowName namespace显示名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceShowName() const;

                    /**
                     * 设置namespace显示名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceShowName namespace显示名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceShowName(const std::string& _namespaceShowName);

                    /**
                     * 判断参数 NamespaceShowName 是否已赋值
                     * @return NamespaceShowName 是否已赋值
                     * 
                     */
                    bool NamespaceShowNameHasBeenSet() const;

                    /**
                     * 获取是否默认策略，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefault 是否默认策略，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否默认策略，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDefault 是否默认策略，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取能否设置默认策略，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanSetDefault 能否设置默认策略，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCanSetDefault() const;

                    /**
                     * 设置能否设置默认策略，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canSetDefault 能否设置默认策略，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanSetDefault(const int64_t& _canSetDefault);

                    /**
                     * 判断参数 CanSetDefault 是否已赋值
                     * @return CanSetDefault 是否已赋值
                     * 
                     */
                    bool CanSetDefaultHasBeenSet() const;

                    /**
                     * 获取实例分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroupId 实例分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置实例分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceGroupId 实例分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取实例分组总实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceSum 实例分组总实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceSum() const;

                    /**
                     * 设置实例分组总实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceSum 实例分组总实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceSum(const int64_t& _instanceSum);

                    /**
                     * 判断参数 InstanceSum 是否已赋值
                     * @return InstanceSum 是否已赋值
                     * 
                     */
                    bool InstanceSumHasBeenSet() const;

                    /**
                     * 获取实例分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroupName 实例分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceGroupName() const;

                    /**
                     * 设置实例分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceGroupName 实例分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceGroupName(const std::string& _instanceGroupName);

                    /**
                     * 判断参数 InstanceGroupName 是否已赋值
                     * @return InstanceGroupName 是否已赋值
                     * 
                     */
                    bool InstanceGroupNameHasBeenSet() const;

                    /**
                     * 获取触发条件类型 STATIC=静态阈值 DYNAMIC=动态类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 触发条件类型 STATIC=静态阈值 DYNAMIC=动态类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置触发条件类型 STATIC=静态阈值 DYNAMIC=动态类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 触发条件类型 STATIC=静态阈值 DYNAMIC=动态类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginId 用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originId 用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagInstances 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInstance> GetTagInstances() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagInstances 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagInstances(const std::vector<TagInstance>& _tagInstances);

                    /**
                     * 判断参数 TagInstances 是否已赋值
                     * @return TagInstances 是否已赋值
                     * 
                     */
                    bool TagInstancesHasBeenSet() const;

                    /**
                     * 获取过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filter 过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmConditionFilter GetFilter() const;

                    /**
                     * 设置过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filter 过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilter(const AlarmConditionFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取聚合条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupBy 聚合条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmGroupByItem> GetGroupBy() const;

                    /**
                     * 设置聚合条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupBy 聚合条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupBy(const std::vector<AlarmGroupByItem>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取策略关联的过滤维度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterDimensionsParam 策略关联的过滤维度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilterDimensionsParam() const;

                    /**
                     * 设置策略关联的过滤维度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filterDimensionsParam 策略关联的过滤维度信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilterDimensionsParam(const std::string& _filterDimensionsParam);

                    /**
                     * 判断参数 FilterDimensionsParam 是否已赋值
                     * @return FilterDimensionsParam 是否已赋值
                     * 
                     */
                    bool FilterDimensionsParamHasBeenSet() const;

                    /**
                     * 获取是否为一键告警策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOneClick 是否为一键告警策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsOneClick() const;

                    /**
                     * 设置是否为一键告警策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isOneClick 是否为一键告警策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsOneClick(const int64_t& _isOneClick);

                    /**
                     * 判断参数 IsOneClick 是否已赋值
                     * @return IsOneClick 是否已赋值
                     * 
                     */
                    bool IsOneClickHasBeenSet() const;

                    /**
                     * 获取一键告警策略是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OneClickStatus 一键告警策略是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOneClickStatus() const;

                    /**
                     * 设置一键告警策略是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oneClickStatus 一键告警策略是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOneClickStatus(const int64_t& _oneClickStatus);

                    /**
                     * 判断参数 OneClickStatus 是否已赋值
                     * @return OneClickStatus 是否已赋值
                     * 
                     */
                    bool OneClickStatusHasBeenSet() const;

                    /**
                     * 获取高级指标数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedMetricNumber 高级指标数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAdvancedMetricNumber() const;

                    /**
                     * 设置高级指标数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedMetricNumber 高级指标数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedMetricNumber(const int64_t& _advancedMetricNumber);

                    /**
                     * 判断参数 AdvancedMetricNumber 是否已赋值
                     * @return AdvancedMetricNumber 是否已赋值
                     * 
                     */
                    bool AdvancedMetricNumberHasBeenSet() const;

                    /**
                     * 获取策略是否是全部对象策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsBindAll 策略是否是全部对象策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsBindAll() const;

                    /**
                     * 设置策略是否是全部对象策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isBindAll 策略是否是全部对象策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsBindAll(const int64_t& _isBindAll);

                    /**
                     * 判断参数 IsBindAll 是否已赋值
                     * @return IsBindAll 是否已赋值
                     * 
                     */
                    bool IsBindAllHasBeenSet() const;

                    /**
                     * 获取策略标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 策略标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置策略标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 策略标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否支持告警标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportAlarmTag 是否支持告警标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsSupportAlarmTag() const;

                    /**
                     * 设置是否支持告警标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSupportAlarmTag 是否支持告警标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSupportAlarmTag(const int64_t& _isSupportAlarmTag);

                    /**
                     * 判断参数 IsSupportAlarmTag 是否已赋值
                     * @return IsSupportAlarmTag 是否已赋值
                     * 
                     */
                    bool IsSupportAlarmTagHasBeenSet() const;

                    /**
                     * 获取多标签交/并集关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagOperation 多标签交/并集关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagOperation() const;

                    /**
                     * 设置多标签交/并集关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagOperation 多标签交/并集关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagOperation(const std::string& _tagOperation);

                    /**
                     * 判断参数 TagOperation 是否已赋值
                     * @return TagOperation 是否已赋值
                     * 
                     */
                    bool TagOperationHasBeenSet() const;

                    /**
                     * 获取通知模板绑定内容模板信息
                     * @return NoticeTmplBindInfos 通知模板绑定内容模板信息
                     * 
                     */
                    std::vector<NoticeContentTmplBindInfo> GetNoticeTmplBindInfos() const;

                    /**
                     * 设置通知模板绑定内容模板信息
                     * @param _noticeTmplBindInfos 通知模板绑定内容模板信息
                     * 
                     */
                    void SetNoticeTmplBindInfos(const std::vector<NoticeContentTmplBindInfo>& _noticeTmplBindInfos);

                    /**
                     * 判断参数 NoticeTmplBindInfos 是否已赋值
                     * @return NoticeTmplBindInfos 是否已赋值
                     * 
                     */
                    bool NoticeTmplBindInfosHasBeenSet() const;

                    /**
                     * 获取模板通知的等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HierarchicalNotices 模板通知的等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmHierarchicalNotice> GetHierarchicalNotices() const;

                    /**
                     * 设置模板通知的等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hierarchicalNotices 模板通知的等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHierarchicalNotices(const std::vector<AlarmHierarchicalNotice>& _hierarchicalNotices);

                    /**
                     * 判断参数 HierarchicalNotices 是否已赋值
                     * @return HierarchicalNotices 是否已赋值
                     * 
                     */
                    bool HierarchicalNoticesHasBeenSet() const;

                    /**
                     * 获取通知模板绑定内容模板信息，同NoticeTmplBindInfos
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeContentTmplBindInfos 通知模板绑定内容模板信息，同NoticeTmplBindInfos
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NoticeContentTmplBindInfo> GetNoticeContentTmplBindInfos() const;

                    /**
                     * 设置通知模板绑定内容模板信息，同NoticeTmplBindInfos
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noticeContentTmplBindInfos 通知模板绑定内容模板信息，同NoticeTmplBindInfos
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoticeContentTmplBindInfos(const std::vector<NoticeContentTmplBindInfo>& _noticeContentTmplBindInfos);

                    /**
                     * 判断参数 NoticeContentTmplBindInfos 是否已赋值
                     * @return NoticeContentTmplBindInfos 是否已赋值
                     * 
                     */
                    bool NoticeContentTmplBindInfosHasBeenSet() const;

                    /**
                     * 获取预设配置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PredefinedConfigID 预设配置id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPredefinedConfigID() const;

                    /**
                     * 设置预设配置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _predefinedConfigID 预设配置id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPredefinedConfigID(const std::string& _predefinedConfigID);

                    /**
                     * 判断参数 PredefinedConfigID 是否已赋值
                     * @return PredefinedConfigID 是否已赋值
                     * 
                     */
                    bool PredefinedConfigIDHasBeenSet() const;

                private:

                    /**
                     * 告警策略 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 告警策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 监控类型 MT_QCE=云产品监控
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 启停状态 0=停用 1=启用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 策略组绑定的实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_useSum;
                    bool m_useSumHasBeenSet;

                    /**
                     * 项目 Id -1=无项目 0=默认项目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 告警策略类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 触发条件模板 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_conditionTemplateId;
                    bool m_conditionTemplateIdHasBeenSet;

                    /**
                     * 指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmPolicyCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 事件触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmPolicyEventCondition m_eventCondition;
                    bool m_eventConditionHasBeenSet;

                    /**
                     * 通知规则 id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * 通知规则 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmNotice> m_notices;
                    bool m_noticesHasBeenSet;

                    /**
                     * 触发任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmPolicyTriggerTask> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                    /**
                     * 模板策略组
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConditionsTemp m_conditionsTemp;
                    bool m_conditionsTempHasBeenSet;

                    /**
                     * 最后编辑的用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * namespace显示名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceShowName;
                    bool m_namespaceShowNameHasBeenSet;

                    /**
                     * 是否默认策略，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 能否设置默认策略，1是，0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_canSetDefault;
                    bool m_canSetDefaultHasBeenSet;

                    /**
                     * 实例分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 实例分组总实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceSum;
                    bool m_instanceSumHasBeenSet;

                    /**
                     * 实例分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceGroupName;
                    bool m_instanceGroupNameHasBeenSet;

                    /**
                     * 触发条件类型 STATIC=静态阈值 DYNAMIC=动态类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInstance> m_tagInstances;
                    bool m_tagInstancesHasBeenSet;

                    /**
                     * 过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmConditionFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 聚合条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmGroupByItem> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * 策略关联的过滤维度信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filterDimensionsParam;
                    bool m_filterDimensionsParamHasBeenSet;

                    /**
                     * 是否为一键告警策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isOneClick;
                    bool m_isOneClickHasBeenSet;

                    /**
                     * 一键告警策略是否开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_oneClickStatus;
                    bool m_oneClickStatusHasBeenSet;

                    /**
                     * 高级指标数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_advancedMetricNumber;
                    bool m_advancedMetricNumberHasBeenSet;

                    /**
                     * 策略是否是全部对象策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isBindAll;
                    bool m_isBindAllHasBeenSet;

                    /**
                     * 策略标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否支持告警标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isSupportAlarmTag;
                    bool m_isSupportAlarmTagHasBeenSet;

                    /**
                     * 多标签交/并集关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagOperation;
                    bool m_tagOperationHasBeenSet;

                    /**
                     * 通知模板绑定内容模板信息
                     */
                    std::vector<NoticeContentTmplBindInfo> m_noticeTmplBindInfos;
                    bool m_noticeTmplBindInfosHasBeenSet;

                    /**
                     * 模板通知的等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmHierarchicalNotice> m_hierarchicalNotices;
                    bool m_hierarchicalNoticesHasBeenSet;

                    /**
                     * 通知模板绑定内容模板信息，同NoticeTmplBindInfos
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NoticeContentTmplBindInfo> m_noticeContentTmplBindInfos;
                    bool m_noticeContentTmplBindInfosHasBeenSet;

                    /**
                     * 预设配置id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_predefinedConfigID;
                    bool m_predefinedConfigIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICY_H_
