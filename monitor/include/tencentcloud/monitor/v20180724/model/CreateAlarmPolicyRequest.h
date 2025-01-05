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
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
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
                     * 获取策略名称，不超过60字符
                     * @return PolicyName 策略名称，不超过60字符
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称，不超过60字符
                     * @param _policyName 策略名称，不超过60字符
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
                     * 获取监控类型 MT_QCE=云产品监控
                     * @return MonitorType 监控类型 MT_QCE=云产品监控
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型 MT_QCE=云产品监控
                     * @param _monitorType 监控类型 MT_QCE=云产品监控
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
                     * 获取告警策略类型，由 [DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device
                     * @return Namespace 告警策略类型，由 [DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置告警策略类型，由 [DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device
                     * @param _namespace 告警策略类型，由 [DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device
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
                     * 获取备注，不超过100字符，仅支持中英文、数字、下划线、-
                     * @return Remark 备注，不超过100字符，仅支持中英文、数字、下划线、-
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，不超过100字符，仅支持中英文、数字、下划线、-
                     * @param _remark 备注，不超过100字符，仅支持中英文、数字、下划线、-
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
                     * 获取是否启用 0=停用 1=启用，可不传 默认为1
                     * @return Enable 是否启用 0=停用 1=启用，可不传 默认为1
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否启用 0=停用 1=启用，可不传 默认为1
                     * @param _enable 是否启用 0=停用 1=启用，可不传 默认为1
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
                     * 获取项目 Id，对于区分项目的产品必须传入非 -1 的值。 -1=无项目 0=默认项目，如不传 默认为 -1。支持的项目 Id 可以在控制台 [账号中心-项目管理](https://console.cloud.tencent.com/project) 中查看。
                     * @return ProjectId 项目 Id，对于区分项目的产品必须传入非 -1 的值。 -1=无项目 0=默认项目，如不传 默认为 -1。支持的项目 Id 可以在控制台 [账号中心-项目管理](https://console.cloud.tencent.com/project) 中查看。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 Id，对于区分项目的产品必须传入非 -1 的值。 -1=无项目 0=默认项目，如不传 默认为 -1。支持的项目 Id 可以在控制台 [账号中心-项目管理](https://console.cloud.tencent.com/project) 中查看。
                     * @param _projectId 项目 Id，对于区分项目的产品必须传入非 -1 的值。 -1=无项目 0=默认项目，如不传 默认为 -1。支持的项目 Id 可以在控制台 [账号中心-项目管理](https://console.cloud.tencent.com/project) 中查看。
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
                     * 获取触发条件模板 Id，该参数与 Condition 参数二选一。如果策略绑定触发条件模板，则传该参数；否则不传该参数，而是传 Condition 参数。触发条件模板 Id 可以从 [DescribeConditionsTemplateList](https://cloud.tencent.com/document/api/248/70250) 接口获取。
                     * @return ConditionTemplateId 触发条件模板 Id，该参数与 Condition 参数二选一。如果策略绑定触发条件模板，则传该参数；否则不传该参数，而是传 Condition 参数。触发条件模板 Id 可以从 [DescribeConditionsTemplateList](https://cloud.tencent.com/document/api/248/70250) 接口获取。
                     * 
                     */
                    int64_t GetConditionTemplateId() const;

                    /**
                     * 设置触发条件模板 Id，该参数与 Condition 参数二选一。如果策略绑定触发条件模板，则传该参数；否则不传该参数，而是传 Condition 参数。触发条件模板 Id 可以从 [DescribeConditionsTemplateList](https://cloud.tencent.com/document/api/248/70250) 接口获取。
                     * @param _conditionTemplateId 触发条件模板 Id，该参数与 Condition 参数二选一。如果策略绑定触发条件模板，则传该参数；否则不传该参数，而是传 Condition 参数。触发条件模板 Id 可以从 [DescribeConditionsTemplateList](https://cloud.tencent.com/document/api/248/70250) 接口获取。
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
                     * 获取指标触发条件，支持的指标可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
                     * @return Condition 指标触发条件，支持的指标可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
                     * 
                     */
                    AlarmPolicyCondition GetCondition() const;

                    /**
                     * 设置指标触发条件，支持的指标可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
                     * @param _condition 指标触发条件，支持的指标可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
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
                     * 获取事件触发条件，支持的事件可以从 [DescribeAlarmEvents](https://cloud.tencent.com/document/product/248/51284) 查询。
                     * @return EventCondition 事件触发条件，支持的事件可以从 [DescribeAlarmEvents](https://cloud.tencent.com/document/product/248/51284) 查询。
                     * 
                     */
                    AlarmPolicyEventCondition GetEventCondition() const;

                    /**
                     * 设置事件触发条件，支持的事件可以从 [DescribeAlarmEvents](https://cloud.tencent.com/document/product/248/51284) 查询。
                     * @param _eventCondition 事件触发条件，支持的事件可以从 [DescribeAlarmEvents](https://cloud.tencent.com/document/product/248/51284) 查询。
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
                     * 获取通知规则 Id 列表，由 [DescribeAlarmNotices](https://cloud.tencent.com/document/product/248/51280) 获得
                     * @return NoticeIds 通知规则 Id 列表，由 [DescribeAlarmNotices](https://cloud.tencent.com/document/product/248/51280) 获得
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置通知规则 Id 列表，由 [DescribeAlarmNotices](https://cloud.tencent.com/document/product/248/51280) 获得
                     * @param _noticeIds 通知规则 Id 列表，由 [DescribeAlarmNotices](https://cloud.tencent.com/document/product/248/51280) 获得
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
                     * 获取触发任务列表
                     * @return TriggerTasks 触发任务列表
                     * 
                     */
                    std::vector<AlarmPolicyTriggerTask> GetTriggerTasks() const;

                    /**
                     * 设置触发任务列表
                     * @param _triggerTasks 触发任务列表
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
                     * 获取全局过滤条件
                     * @return Filter 全局过滤条件
                     * 
                     */
                    AlarmPolicyFilter GetFilter() const;

                    /**
                     * 设置全局过滤条件
                     * @param _filter 全局过滤条件
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
                     * 获取聚合维度列表，指定按哪些维度 key 来做 group by
                     * @return GroupBy 聚合维度列表，指定按哪些维度 key 来做 group by
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置聚合维度列表，指定按哪些维度 key 来做 group by
                     * @param _groupBy 聚合维度列表，指定按哪些维度 key 来做 group by
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
                     * 获取模板绑定的标签
                     * @return Tags 模板绑定的标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置模板绑定的标签
                     * @param _tags 模板绑定的标签
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
                     * 获取日志告警信息
                     * @return LogAlarmReqInfo 日志告警信息
                     * 
                     */
                    LogAlarmReq GetLogAlarmReqInfo() const;

                    /**
                     * 设置日志告警信息
                     * @param _logAlarmReqInfo 日志告警信息
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
                     * 获取告警分级通知规则配置
                     * @return HierarchicalNotices 告警分级通知规则配置
                     * 
                     */
                    std::vector<AlarmHierarchicalNotice> GetHierarchicalNotices() const;

                    /**
                     * 设置告警分级通知规则配置
                     * @param _hierarchicalNotices 告警分级通知规则配置
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
                     * 获取迁移策略专用字段，0-走鉴权逻辑，1-跳过鉴权逻辑
                     * @return MigrateFlag 迁移策略专用字段，0-走鉴权逻辑，1-跳过鉴权逻辑
                     * 
                     */
                    int64_t GetMigrateFlag() const;

                    /**
                     * 设置迁移策略专用字段，0-走鉴权逻辑，1-跳过鉴权逻辑
                     * @param _migrateFlag 迁移策略专用字段，0-走鉴权逻辑，1-跳过鉴权逻辑
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
                     * 获取事件配置的告警
                     * @return EbSubject 事件配置的告警
                     * 
                     */
                    std::string GetEbSubject() const;

                    /**
                     * 设置事件配置的告警
                     * @param _ebSubject 事件配置的告警
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
                     * 获取附加告警内容
                     * @return AdditionalAlarmContent 附加告警内容
                     * 
                     */
                    std::string GetAdditionalAlarmContent() const;

                    /**
                     * 设置附加告警内容
                     * @param _additionalAlarmContent 附加告警内容
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
                     * 获取通知模板绑定信息
                     * @return NoticeContentTmplBindInfos 通知模板绑定信息
                     * 
                     */
                    std::vector<NoticeContentTmplBindInfo> GetNoticeContentTmplBindInfos() const;

                    /**
                     * 设置通知模板绑定信息
                     * @param _noticeContentTmplBindInfos 通知模板绑定信息
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
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 策略名称，不超过60字符
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 监控类型 MT_QCE=云产品监控
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 告警策略类型，由 [DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 备注，不超过100字符，仅支持中英文、数字、下划线、-
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否启用 0=停用 1=启用，可不传 默认为1
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 项目 Id，对于区分项目的产品必须传入非 -1 的值。 -1=无项目 0=默认项目，如不传 默认为 -1。支持的项目 Id 可以在控制台 [账号中心-项目管理](https://console.cloud.tencent.com/project) 中查看。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 触发条件模板 Id，该参数与 Condition 参数二选一。如果策略绑定触发条件模板，则传该参数；否则不传该参数，而是传 Condition 参数。触发条件模板 Id 可以从 [DescribeConditionsTemplateList](https://cloud.tencent.com/document/api/248/70250) 接口获取。
                     */
                    int64_t m_conditionTemplateId;
                    bool m_conditionTemplateIdHasBeenSet;

                    /**
                     * 指标触发条件，支持的指标可以从 [DescribeAlarmMetrics](https://cloud.tencent.com/document/product/248/51283) 查询。
                     */
                    AlarmPolicyCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 事件触发条件，支持的事件可以从 [DescribeAlarmEvents](https://cloud.tencent.com/document/product/248/51284) 查询。
                     */
                    AlarmPolicyEventCondition m_eventCondition;
                    bool m_eventConditionHasBeenSet;

                    /**
                     * 通知规则 Id 列表，由 [DescribeAlarmNotices](https://cloud.tencent.com/document/product/248/51280) 获得
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * 触发任务列表
                     */
                    std::vector<AlarmPolicyTriggerTask> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                    /**
                     * 全局过滤条件
                     */
                    AlarmPolicyFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 聚合维度列表，指定按哪些维度 key 来做 group by
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * 模板绑定的标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 日志告警信息
                     */
                    LogAlarmReq m_logAlarmReqInfo;
                    bool m_logAlarmReqInfoHasBeenSet;

                    /**
                     * 告警分级通知规则配置
                     */
                    std::vector<AlarmHierarchicalNotice> m_hierarchicalNotices;
                    bool m_hierarchicalNoticesHasBeenSet;

                    /**
                     * 迁移策略专用字段，0-走鉴权逻辑，1-跳过鉴权逻辑
                     */
                    int64_t m_migrateFlag;
                    bool m_migrateFlagHasBeenSet;

                    /**
                     * 事件配置的告警
                     */
                    std::string m_ebSubject;
                    bool m_ebSubjectHasBeenSet;

                    /**
                     * 附加告警内容
                     */
                    std::string m_additionalAlarmContent;
                    bool m_additionalAlarmContentHasBeenSet;

                    /**
                     * 通知模板绑定信息
                     */
                    std::vector<NoticeContentTmplBindInfo> m_noticeContentTmplBindInfos;
                    bool m_noticeContentTmplBindInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMPOLICYREQUEST_H_
