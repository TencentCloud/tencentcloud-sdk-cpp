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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMPOLICYREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyEventCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyTriggerTask.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyFilter.h>
#include <tencentcloud/monitor/v20180724/model/Tag.h>
#include <tencentcloud/monitor/v20180724/model/LogAlarmReq.h>
#include <tencentcloud/monitor/v20180724/model/AlarmHierarchicalNotice.h>
#include <tencentcloud/monitor/v20180724/model/NoticeContentTmplBindInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateAlarmPolicy请求参数结构体
                */
                class CreateAlarmPolicyRequest : public AbstractModel
                {
                public:
                    CreateAlarmPolicyRequest();
                    ~CreateAlarmPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>固定值，为&quot;monitor&quot;</p>
                     * @return Module <p>固定值，为&quot;monitor&quot;</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>固定值，为&quot;monitor&quot;</p>
                     * @param _module <p>固定值，为&quot;monitor&quot;</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>策略名称，不超过60字符</p>
                     * @return PolicyName <p>策略名称，不超过60字符</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>策略名称，不超过60字符</p>
                     * @param _policyName <p>策略名称，不超过60字符</p>
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
                     * 获取<p>监控类型 MT_QCE=云产品监控</p>
                     * @return MonitorType <p>监控类型 MT_QCE=云产品监控</p>
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置<p>监控类型 MT_QCE=云产品监控</p>
                     * @param _monitorType <p>监控类型 MT_QCE=云产品监控</p>
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
                     * 获取<p>告警策略类型，由 <a href="https://cloud.tencent.com/document/product/248/48683">DescribeAllNamespaces</a> 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device</p>
                     * @return Namespace <p>告警策略类型，由 <a href="https://cloud.tencent.com/document/product/248/48683">DescribeAllNamespaces</a> 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>告警策略类型，由 <a href="https://cloud.tencent.com/document/product/248/48683">DescribeAllNamespaces</a> 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device</p>
                     * @param _namespace <p>告警策略类型，由 <a href="https://cloud.tencent.com/document/product/248/48683">DescribeAllNamespaces</a> 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device</p>
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
                     * 获取<p>备注，不超过100字符，仅支持中英文、数字、下划线、-</p>
                     * @return Remark <p>备注，不超过100字符，仅支持中英文、数字、下划线、-</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注，不超过100字符，仅支持中英文、数字、下划线、-</p>
                     * @param _remark <p>备注，不超过100字符，仅支持中英文、数字、下划线、-</p>
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
                     * 获取<p>是否启用 0=停用 1=启用，可不传 默认为1</p>
                     * @return Enable <p>是否启用 0=停用 1=启用，可不传 默认为1</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>是否启用 0=停用 1=启用，可不传 默认为1</p>
                     * @param _enable <p>是否启用 0=停用 1=启用，可不传 默认为1</p>
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
                     * 获取<p>项目 Id，对于区分项目的产品必须传入非 -1 的值。 -1=无项目 0=默认项目，如不传 默认为 -1。支持的项目 Id 可以在控制台 <a href="https://console.cloud.tencent.com/project">账号中心-项目管理</a> 中查看。</p>
                     * @return ProjectId <p>项目 Id，对于区分项目的产品必须传入非 -1 的值。 -1=无项目 0=默认项目，如不传 默认为 -1。支持的项目 Id 可以在控制台 <a href="https://console.cloud.tencent.com/project">账号中心-项目管理</a> 中查看。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目 Id，对于区分项目的产品必须传入非 -1 的值。 -1=无项目 0=默认项目，如不传 默认为 -1。支持的项目 Id 可以在控制台 <a href="https://console.cloud.tencent.com/project">账号中心-项目管理</a> 中查看。</p>
                     * @param _projectId <p>项目 Id，对于区分项目的产品必须传入非 -1 的值。 -1=无项目 0=默认项目，如不传 默认为 -1。支持的项目 Id 可以在控制台 <a href="https://console.cloud.tencent.com/project">账号中心-项目管理</a> 中查看。</p>
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
                     * 获取<p>触发条件模板 Id，该参数与 Condition 参数二选一。如果策略绑定触发条件模板，则传该参数；否则不传该参数，而是传 Condition 参数。触发条件模板 Id 可以从 <a href="https://cloud.tencent.com/document/api/248/70250">DescribeConditionsTemplateList</a> 接口获取。</p>
                     * @return ConditionTemplateId <p>触发条件模板 Id，该参数与 Condition 参数二选一。如果策略绑定触发条件模板，则传该参数；否则不传该参数，而是传 Condition 参数。触发条件模板 Id 可以从 <a href="https://cloud.tencent.com/document/api/248/70250">DescribeConditionsTemplateList</a> 接口获取。</p>
                     * 
                     */
                    int64_t GetConditionTemplateId() const;

                    /**
                     * 设置<p>触发条件模板 Id，该参数与 Condition 参数二选一。如果策略绑定触发条件模板，则传该参数；否则不传该参数，而是传 Condition 参数。触发条件模板 Id 可以从 <a href="https://cloud.tencent.com/document/api/248/70250">DescribeConditionsTemplateList</a> 接口获取。</p>
                     * @param _conditionTemplateId <p>触发条件模板 Id，该参数与 Condition 参数二选一。如果策略绑定触发条件模板，则传该参数；否则不传该参数，而是传 Condition 参数。触发条件模板 Id 可以从 <a href="https://cloud.tencent.com/document/api/248/70250">DescribeConditionsTemplateList</a> 接口获取。</p>
                     * 
                     */
                    void SetConditionTemplateId(const int64_t& _conditionTemplateId);

                    /**
                     * 判断参数 ConditionTemplateId 是否已赋值
                     * @return ConditionTemplateId 是否已赋值
                     * 
                     */
                    bool ConditionTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>指标触发条件，支持的指标可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
                     * @return Condition <p>指标触发条件，支持的指标可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
                     * 
                     */
                    AlarmPolicyCondition GetCondition() const;

                    /**
                     * 设置<p>指标触发条件，支持的指标可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
                     * @param _condition <p>指标触发条件，支持的指标可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
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
                     * 获取<p>事件触发条件，支持的事件可以从 <a href="https://cloud.tencent.com/document/product/248/51284">DescribeAlarmEvents</a> 查询。</p>
                     * @return EventCondition <p>事件触发条件，支持的事件可以从 <a href="https://cloud.tencent.com/document/product/248/51284">DescribeAlarmEvents</a> 查询。</p>
                     * 
                     */
                    AlarmPolicyEventCondition GetEventCondition() const;

                    /**
                     * 设置<p>事件触发条件，支持的事件可以从 <a href="https://cloud.tencent.com/document/product/248/51284">DescribeAlarmEvents</a> 查询。</p>
                     * @param _eventCondition <p>事件触发条件，支持的事件可以从 <a href="https://cloud.tencent.com/document/product/248/51284">DescribeAlarmEvents</a> 查询。</p>
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
                     * 获取<p>通知规则 Id 列表，由 <a href="https://cloud.tencent.com/document/product/248/51280">DescribeAlarmNotices</a> 获得</p>
                     * @return NoticeIds <p>通知规则 Id 列表，由 <a href="https://cloud.tencent.com/document/product/248/51280">DescribeAlarmNotices</a> 获得</p>
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置<p>通知规则 Id 列表，由 <a href="https://cloud.tencent.com/document/product/248/51280">DescribeAlarmNotices</a> 获得</p>
                     * @param _noticeIds <p>通知规则 Id 列表，由 <a href="https://cloud.tencent.com/document/product/248/51280">DescribeAlarmNotices</a> 获得</p>
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
                     * 获取<p>触发任务列表</p>
                     * @return TriggerTasks <p>触发任务列表</p>
                     * 
                     */
                    std::vector<AlarmPolicyTriggerTask> GetTriggerTasks() const;

                    /**
                     * 设置<p>触发任务列表</p>
                     * @param _triggerTasks <p>触发任务列表</p>
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
                     * 获取<p>全局过滤条件</p>
                     * @return Filter <p>全局过滤条件</p>
                     * 
                     */
                    AlarmPolicyFilter GetFilter() const;

                    /**
                     * 设置<p>全局过滤条件</p>
                     * @param _filter <p>全局过滤条件</p>
                     * 
                     */
                    void SetFilter(const AlarmPolicyFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>聚合维度列表，指定按哪些维度 key 来做 group by</p>
                     * @return GroupBy <p>聚合维度列表，指定按哪些维度 key 来做 group by</p>
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置<p>聚合维度列表，指定按哪些维度 key 来做 group by</p>
                     * @param _groupBy <p>聚合维度列表，指定按哪些维度 key 来做 group by</p>
                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取<p>是否绑定全部对象。如果是的话，不需要再传filter或者调用BindPolicyObject，0=否，1=是，默认为否</p><p>取值范围：[0, 1]</p><p>默认值：0</p><p>不是所有策略类型都支持绑定全部对象</p>
                     * @return IsBindAll <p>是否绑定全部对象。如果是的话，不需要再传filter或者调用BindPolicyObject，0=否，1=是，默认为否</p><p>取值范围：[0, 1]</p><p>默认值：0</p><p>不是所有策略类型都支持绑定全部对象</p>
                     * 
                     */
                    int64_t GetIsBindAll() const;

                    /**
                     * 设置<p>是否绑定全部对象。如果是的话，不需要再传filter或者调用BindPolicyObject，0=否，1=是，默认为否</p><p>取值范围：[0, 1]</p><p>默认值：0</p><p>不是所有策略类型都支持绑定全部对象</p>
                     * @param _isBindAll <p>是否绑定全部对象。如果是的话，不需要再传filter或者调用BindPolicyObject，0=否，1=是，默认为否</p><p>取值范围：[0, 1]</p><p>默认值：0</p><p>不是所有策略类型都支持绑定全部对象</p>
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
                     * 获取<p>模板绑定的标签</p>
                     * @return Tags <p>模板绑定的标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>模板绑定的标签</p>
                     * @param _tags <p>模板绑定的标签</p>
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
                     * 获取<p>日志告警信息</p>
                     * @return LogAlarmReqInfo <p>日志告警信息</p>
                     * 
                     */
                    LogAlarmReq GetLogAlarmReqInfo() const;

                    /**
                     * 设置<p>日志告警信息</p>
                     * @param _logAlarmReqInfo <p>日志告警信息</p>
                     * 
                     */
                    void SetLogAlarmReqInfo(const LogAlarmReq& _logAlarmReqInfo);

                    /**
                     * 判断参数 LogAlarmReqInfo 是否已赋值
                     * @return LogAlarmReqInfo 是否已赋值
                     * 
                     */
                    bool LogAlarmReqInfoHasBeenSet() const;

                    /**
                     * 获取<p>告警分级通知规则配置</p>
                     * @return HierarchicalNotices <p>告警分级通知规则配置</p>
                     * 
                     */
                    std::vector<AlarmHierarchicalNotice> GetHierarchicalNotices() const;

                    /**
                     * 设置<p>告警分级通知规则配置</p>
                     * @param _hierarchicalNotices <p>告警分级通知规则配置</p>
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
                     * 获取<p>迁移策略专用字段，0-走鉴权逻辑，1-跳过鉴权逻辑</p>
                     * @return MigrateFlag <p>迁移策略专用字段，0-走鉴权逻辑，1-跳过鉴权逻辑</p>
                     * 
                     */
                    int64_t GetMigrateFlag() const;

                    /**
                     * 设置<p>迁移策略专用字段，0-走鉴权逻辑，1-跳过鉴权逻辑</p>
                     * @param _migrateFlag <p>迁移策略专用字段，0-走鉴权逻辑，1-跳过鉴权逻辑</p>
                     * 
                     */
                    void SetMigrateFlag(const int64_t& _migrateFlag);

                    /**
                     * 判断参数 MigrateFlag 是否已赋值
                     * @return MigrateFlag 是否已赋值
                     * 
                     */
                    bool MigrateFlagHasBeenSet() const;

                    /**
                     * 获取<p>事件配置的告警</p>
                     * @return EbSubject <p>事件配置的告警</p>
                     * 
                     */
                    std::string GetEbSubject() const;

                    /**
                     * 设置<p>事件配置的告警</p>
                     * @param _ebSubject <p>事件配置的告警</p>
                     * 
                     */
                    void SetEbSubject(const std::string& _ebSubject);

                    /**
                     * 判断参数 EbSubject 是否已赋值
                     * @return EbSubject 是否已赋值
                     * 
                     */
                    bool EbSubjectHasBeenSet() const;

                    /**
                     * 获取<p>附加告警内容</p>
                     * @return AdditionalAlarmContent <p>附加告警内容</p>
                     * 
                     */
                    std::string GetAdditionalAlarmContent() const;

                    /**
                     * 设置<p>附加告警内容</p>
                     * @param _additionalAlarmContent <p>附加告警内容</p>
                     * 
                     */
                    void SetAdditionalAlarmContent(const std::string& _additionalAlarmContent);

                    /**
                     * 判断参数 AdditionalAlarmContent 是否已赋值
                     * @return AdditionalAlarmContent 是否已赋值
                     * 
                     */
                    bool AdditionalAlarmContentHasBeenSet() const;

                    /**
                     * 获取<p>通知模板绑定信息</p>
                     * @return NoticeContentTmplBindInfos <p>通知模板绑定信息</p>
                     * 
                     */
                    std::vector<NoticeContentTmplBindInfo> GetNoticeContentTmplBindInfos() const;

                    /**
                     * 设置<p>通知模板绑定信息</p>
                     * @param _noticeContentTmplBindInfos <p>通知模板绑定信息</p>
                     * 
                     */
                    void SetNoticeContentTmplBindInfos(const std::vector<NoticeContentTmplBindInfo>& _noticeContentTmplBindInfos);

                    /**
                     * 判断参数 NoticeContentTmplBindInfos 是否已赋值
                     * @return NoticeContentTmplBindInfos 是否已赋值
                     * 
                     */
                    bool NoticeContentTmplBindInfosHasBeenSet() const;

                private:

                    /**
                     * <p>固定值，为&quot;monitor&quot;</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>策略名称，不超过60字符</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>监控类型 MT_QCE=云产品监控</p>
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * <p>告警策略类型，由 <a href="https://cloud.tencent.com/document/product/248/48683">DescribeAllNamespaces</a> 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>备注，不超过100字符，仅支持中英文、数字、下划线、-</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>是否启用 0=停用 1=启用，可不传 默认为1</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>项目 Id，对于区分项目的产品必须传入非 -1 的值。 -1=无项目 0=默认项目，如不传 默认为 -1。支持的项目 Id 可以在控制台 <a href="https://console.cloud.tencent.com/project">账号中心-项目管理</a> 中查看。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>触发条件模板 Id，该参数与 Condition 参数二选一。如果策略绑定触发条件模板，则传该参数；否则不传该参数，而是传 Condition 参数。触发条件模板 Id 可以从 <a href="https://cloud.tencent.com/document/api/248/70250">DescribeConditionsTemplateList</a> 接口获取。</p>
                     */
                    int64_t m_conditionTemplateId;
                    bool m_conditionTemplateIdHasBeenSet;

                    /**
                     * <p>指标触发条件，支持的指标可以从 <a href="https://cloud.tencent.com/document/product/248/51283">DescribeAlarmMetrics</a> 查询。</p>
                     */
                    AlarmPolicyCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>事件触发条件，支持的事件可以从 <a href="https://cloud.tencent.com/document/product/248/51284">DescribeAlarmEvents</a> 查询。</p>
                     */
                    AlarmPolicyEventCondition m_eventCondition;
                    bool m_eventConditionHasBeenSet;

                    /**
                     * <p>通知规则 Id 列表，由 <a href="https://cloud.tencent.com/document/product/248/51280">DescribeAlarmNotices</a> 获得</p>
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * <p>触发任务列表</p>
                     */
                    std::vector<AlarmPolicyTriggerTask> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                    /**
                     * <p>全局过滤条件</p>
                     */
                    AlarmPolicyFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>聚合维度列表，指定按哪些维度 key 来做 group by</p>
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * <p>是否绑定全部对象。如果是的话，不需要再传filter或者调用BindPolicyObject，0=否，1=是，默认为否</p><p>取值范围：[0, 1]</p><p>默认值：0</p><p>不是所有策略类型都支持绑定全部对象</p>
                     */
                    int64_t m_isBindAll;
                    bool m_isBindAllHasBeenSet;

                    /**
                     * <p>模板绑定的标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>日志告警信息</p>
                     */
                    LogAlarmReq m_logAlarmReqInfo;
                    bool m_logAlarmReqInfoHasBeenSet;

                    /**
                     * <p>告警分级通知规则配置</p>
                     */
                    std::vector<AlarmHierarchicalNotice> m_hierarchicalNotices;
                    bool m_hierarchicalNoticesHasBeenSet;

                    /**
                     * <p>迁移策略专用字段，0-走鉴权逻辑，1-跳过鉴权逻辑</p>
                     */
                    int64_t m_migrateFlag;
                    bool m_migrateFlagHasBeenSet;

                    /**
                     * <p>事件配置的告警</p>
                     */
                    std::string m_ebSubject;
                    bool m_ebSubjectHasBeenSet;

                    /**
                     * <p>附加告警内容</p>
                     */
                    std::string m_additionalAlarmContent;
                    bool m_additionalAlarmContentHasBeenSet;

                    /**
                     * <p>通知模板绑定信息</p>
                     */
                    std::vector<NoticeContentTmplBindInfo> m_noticeContentTmplBindInfos;
                    bool m_noticeContentTmplBindInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMPOLICYREQUEST_H_
