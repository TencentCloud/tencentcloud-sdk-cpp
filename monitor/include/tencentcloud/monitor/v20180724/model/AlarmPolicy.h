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
                     * 获取<p>告警策略 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId <p>告警策略 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>告警策略 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyId <p>告警策略 ID</p>
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
                     * 获取<p>告警策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyName <p>告警策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>告警策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyName <p>告警策略名称</p>
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
                     * 获取<p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>备注信息</p>
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
                     * 获取<p>监控类型 MT_QCE=云产品监控</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType <p>监控类型 MT_QCE=云产品监控</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置<p>监控类型 MT_QCE=云产品监控</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorType <p>监控类型 MT_QCE=云产品监控</p>
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
                     * 获取<p>启停状态 0=停用 1=启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable <p>启停状态 0=停用 1=启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>启停状态 0=停用 1=启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable <p>启停状态 0=停用 1=启用</p>
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
                     * 获取<p>策略组绑定的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseSum <p>策略组绑定的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUseSum() const;

                    /**
                     * 设置<p>策略组绑定的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useSum <p>策略组绑定的实例数</p>
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
                     * 获取<p>项目 Id -1=无项目 0=默认项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目 Id -1=无项目 0=默认项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目 Id -1=无项目 0=默认项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目 Id -1=无项目 0=默认项目</p>
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
                     * 获取<p>项目名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName <p>项目名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>项目名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName <p>项目名</p>
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
                     * 获取<p>告警策略类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace <p>告警策略类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>告警策略类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace <p>告警策略类型</p>
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
                     * 获取<p>触发条件模板 Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionTemplateId <p>触发条件模板 Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConditionTemplateId() const;

                    /**
                     * 设置<p>触发条件模板 Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionTemplateId <p>触发条件模板 Id</p>
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
                     * 获取<p>指标触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Condition <p>指标触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmPolicyCondition GetCondition() const;

                    /**
                     * 设置<p>指标触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _condition <p>指标触发条件</p>
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
                     * 获取<p>事件触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventCondition <p>事件触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmPolicyEventCondition GetEventCondition() const;

                    /**
                     * 设置<p>事件触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventCondition <p>事件触发条件</p>
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
                     * 获取<p>通知规则 id 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeIds <p>通知规则 id 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置<p>通知规则 id 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noticeIds <p>通知规则 id 列表</p>
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
                     * 获取<p>通知规则 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notices <p>通知规则 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmNotice> GetNotices() const;

                    /**
                     * 设置<p>通知规则 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notices <p>通知规则 列表</p>
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
                     * 获取<p>触发任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerTasks <p>触发任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmPolicyTriggerTask> GetTriggerTasks() const;

                    /**
                     * 设置<p>触发任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerTasks <p>触发任务列表</p>
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
                     * 获取<p>模板策略组<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionsTemp <p>模板策略组<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConditionsTemp GetConditionsTemp() const;

                    /**
                     * 设置<p>模板策略组<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionsTemp <p>模板策略组<br>注意：此字段可能返回 null，表示取不到有效值。</p>
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
                     * 获取<p>最后编辑的用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastEditUin <p>最后编辑的用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置<p>最后编辑的用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastEditUin <p>最后编辑的用户uin</p>
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
                     * 获取<p>更新时间<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间<br>注意：此字段可能返回 null，表示取不到有效值。</p>
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
                     * 获取<p>创建时间<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime <p>创建时间<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置<p>创建时间<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _insertTime <p>创建时间<br>注意：此字段可能返回 null，表示取不到有效值。</p>
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
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
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
                     * 获取<p>namespace显示名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceShowName <p>namespace显示名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceShowName() const;

                    /**
                     * 设置<p>namespace显示名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceShowName <p>namespace显示名字</p>
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
                     * 获取<p>是否默认策略，1是，0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefault <p>是否默认策略，1是，0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置<p>是否默认策略，1是，0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDefault <p>是否默认策略，1是，0否</p>
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
                     * 获取<p>能否设置默认策略，1是，0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanSetDefault <p>能否设置默认策略，1是，0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCanSetDefault() const;

                    /**
                     * 设置<p>能否设置默认策略，1是，0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canSetDefault <p>能否设置默认策略，1是，0否</p>
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
                     * 获取<p>实例分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroupId <p>实例分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置<p>实例分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceGroupId <p>实例分组ID</p>
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
                     * 获取<p>实例分组总实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceSum <p>实例分组总实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceSum() const;

                    /**
                     * 设置<p>实例分组总实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceSum <p>实例分组总实例数</p>
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
                     * 获取<p>实例分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroupName <p>实例分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceGroupName() const;

                    /**
                     * 设置<p>实例分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceGroupName <p>实例分组名称</p>
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
                     * 获取<p>触发条件类型 STATIC=静态阈值 DYNAMIC=动态类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType <p>触发条件类型 STATIC=静态阈值 DYNAMIC=动态类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>触发条件类型 STATIC=静态阈值 DYNAMIC=动态类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType <p>触发条件类型 STATIC=静态阈值 DYNAMIC=动态类型</p>
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
                     * 获取<p>用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginId <p>用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置<p>用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originId <p>用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID</p>
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
                     * 获取<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagInstances <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInstance> GetTagInstances() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagInstances <p>标签</p>
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
                     * 获取<p>过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filter <p>过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmConditionFilter GetFilter() const;

                    /**
                     * 设置<p>过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filter <p>过滤条件</p>
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
                     * 获取<p>聚合条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupBy <p>聚合条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmGroupByItem> GetGroupBy() const;

                    /**
                     * 设置<p>聚合条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupBy <p>聚合条件</p>
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
                     * 获取<p>策略关联的过滤维度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterDimensionsParam <p>策略关联的过滤维度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilterDimensionsParam() const;

                    /**
                     * 设置<p>策略关联的过滤维度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filterDimensionsParam <p>策略关联的过滤维度信息</p>
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
                     * 获取<p>是否为一键告警策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOneClick <p>是否为一键告警策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsOneClick() const;

                    /**
                     * 设置<p>是否为一键告警策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isOneClick <p>是否为一键告警策略</p>
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
                     * 获取<p>一键告警策略是否开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OneClickStatus <p>一键告警策略是否开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOneClickStatus() const;

                    /**
                     * 设置<p>一键告警策略是否开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oneClickStatus <p>一键告警策略是否开启</p>
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
                     * 获取<p>高级指标数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedMetricNumber <p>高级指标数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAdvancedMetricNumber() const;

                    /**
                     * 设置<p>高级指标数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedMetricNumber <p>高级指标数量</p>
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
                     * 获取<p>策略是否是全部对象策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsBindAll <p>策略是否是全部对象策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsBindAll() const;

                    /**
                     * 设置<p>策略是否是全部对象策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isBindAll <p>策略是否是全部对象策略</p>
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
                     * 获取<p>策略标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>策略标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>策略标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>策略标签</p>
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
                     * 获取<p>是否支持告警标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportAlarmTag <p>是否支持告警标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsSupportAlarmTag() const;

                    /**
                     * 设置<p>是否支持告警标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSupportAlarmTag <p>是否支持告警标签</p>
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
                     * 获取<p>多标签交/并集关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagOperation <p>多标签交/并集关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagOperation() const;

                    /**
                     * 设置<p>多标签交/并集关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagOperation <p>多标签交/并集关系</p>
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
                     * 获取<p>通知模板绑定内容模板信息</p>
                     * @return NoticeTmplBindInfos <p>通知模板绑定内容模板信息</p>
                     * 
                     */
                    std::vector<NoticeContentTmplBindInfo> GetNoticeTmplBindInfos() const;

                    /**
                     * 设置<p>通知模板绑定内容模板信息</p>
                     * @param _noticeTmplBindInfos <p>通知模板绑定内容模板信息</p>
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
                     * 获取<p>模板通知的等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HierarchicalNotices <p>模板通知的等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmHierarchicalNotice> GetHierarchicalNotices() const;

                    /**
                     * 设置<p>模板通知的等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hierarchicalNotices <p>模板通知的等级</p>
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
                     * 获取<p>通知模板绑定内容模板信息，同NoticeTmplBindInfos</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeContentTmplBindInfos <p>通知模板绑定内容模板信息，同NoticeTmplBindInfos</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NoticeContentTmplBindInfo> GetNoticeContentTmplBindInfos() const;

                    /**
                     * 设置<p>通知模板绑定内容模板信息，同NoticeTmplBindInfos</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noticeContentTmplBindInfos <p>通知模板绑定内容模板信息，同NoticeTmplBindInfos</p>
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
                     * 获取<p>预设配置id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PredefinedConfigID <p>预设配置id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPredefinedConfigID() const;

                    /**
                     * 设置<p>预设配置id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _predefinedConfigID <p>预设配置id</p>
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
                     * <p>告警策略 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>告警策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>监控类型 MT_QCE=云产品监控</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * <p>启停状态 0=停用 1=启用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>策略组绑定的实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_useSum;
                    bool m_useSumHasBeenSet;

                    /**
                     * <p>项目 Id -1=无项目 0=默认项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>项目名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>告警策略类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>触发条件模板 Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_conditionTemplateId;
                    bool m_conditionTemplateIdHasBeenSet;

                    /**
                     * <p>指标触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmPolicyCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>事件触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmPolicyEventCondition m_eventCondition;
                    bool m_eventConditionHasBeenSet;

                    /**
                     * <p>通知规则 id 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * <p>通知规则 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmNotice> m_notices;
                    bool m_noticesHasBeenSet;

                    /**
                     * <p>触发任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmPolicyTriggerTask> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                    /**
                     * <p>模板策略组<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConditionsTemp m_conditionsTemp;
                    bool m_conditionsTempHasBeenSet;

                    /**
                     * <p>最后编辑的用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * <p>更新时间<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>创建时间<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>namespace显示名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceShowName;
                    bool m_namespaceShowNameHasBeenSet;

                    /**
                     * <p>是否默认策略，1是，0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>能否设置默认策略，1是，0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_canSetDefault;
                    bool m_canSetDefaultHasBeenSet;

                    /**
                     * <p>实例分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * <p>实例分组总实例数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceSum;
                    bool m_instanceSumHasBeenSet;

                    /**
                     * <p>实例分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceGroupName;
                    bool m_instanceGroupNameHasBeenSet;

                    /**
                     * <p>触发条件类型 STATIC=静态阈值 DYNAMIC=动态类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>用于实例、实例组绑定和解绑接口（BindingPolicyObject、UnBindingAllPolicyObject、UnBindingPolicyObject）的策略 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInstance> m_tagInstances;
                    bool m_tagInstancesHasBeenSet;

                    /**
                     * <p>过滤条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmConditionFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>聚合条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmGroupByItem> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * <p>策略关联的过滤维度信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filterDimensionsParam;
                    bool m_filterDimensionsParamHasBeenSet;

                    /**
                     * <p>是否为一键告警策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isOneClick;
                    bool m_isOneClickHasBeenSet;

                    /**
                     * <p>一键告警策略是否开启</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_oneClickStatus;
                    bool m_oneClickStatusHasBeenSet;

                    /**
                     * <p>高级指标数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_advancedMetricNumber;
                    bool m_advancedMetricNumberHasBeenSet;

                    /**
                     * <p>策略是否是全部对象策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isBindAll;
                    bool m_isBindAllHasBeenSet;

                    /**
                     * <p>策略标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否支持告警标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isSupportAlarmTag;
                    bool m_isSupportAlarmTagHasBeenSet;

                    /**
                     * <p>多标签交/并集关系</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagOperation;
                    bool m_tagOperationHasBeenSet;

                    /**
                     * <p>通知模板绑定内容模板信息</p>
                     */
                    std::vector<NoticeContentTmplBindInfo> m_noticeTmplBindInfos;
                    bool m_noticeTmplBindInfosHasBeenSet;

                    /**
                     * <p>模板通知的等级</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmHierarchicalNotice> m_hierarchicalNotices;
                    bool m_hierarchicalNoticesHasBeenSet;

                    /**
                     * <p>通知模板绑定内容模板信息，同NoticeTmplBindInfos</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NoticeContentTmplBindInfo> m_noticeContentTmplBindInfos;
                    bool m_noticeContentTmplBindInfosHasBeenSet;

                    /**
                     * <p>预设配置id</p>
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
