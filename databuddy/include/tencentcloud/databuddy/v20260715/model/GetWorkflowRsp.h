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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowBaseInfoDetail.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTriggerConfiguration.h>
#include <tencentcloud/databuddy/v20260715/model/ParamInfo.h>
#include <tencentcloud/databuddy/v20260715/model/LabelBrief.h>
#include <tencentcloud/databuddy/v20260715/model/AlarmBrief.h>
#include <tencentcloud/databuddy/v20260715/model/MonitorMetricBrief.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowAdvanceConfig.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTask.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * GetWorkflowRsp
                */
                class GetWorkflowRsp : public AbstractModel
                {
                public:
                    GetWorkflowRsp();
                    ~GetWorkflowRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceId <p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceId <p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>工作流基本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaseInfo <p>工作流基本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowBaseInfoDetail GetBaseInfo() const;

                    /**
                     * 设置<p>工作流基本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baseInfo <p>工作流基本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaseInfo(const WorkflowBaseInfoDetail& _baseInfo);

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取<p>工作流调度配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Trigger <p>工作流调度配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowTriggerConfiguration> GetTrigger() const;

                    /**
                     * 设置<p>工作流调度配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trigger <p>工作流调度配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrigger(const std::vector<WorkflowTriggerConfiguration>& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取<p>工作流参数列表 参数名必填且只能包含数字、大小写字母、空格、.$@#!%^&amp;*()-_+=&gt;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamList <p>工作流参数列表 参数名必填且只能包含数字、大小写字母、空格、.$@#!%^&amp;*()-_+=&gt;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamInfo> GetParamList() const;

                    /**
                     * 设置<p>工作流参数列表 参数名必填且只能包含数字、大小写字母、空格、.$@#!%^&amp;*()-_+=&gt;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramList <p>工作流参数列表 参数名必填且只能包含数字、大小写字母、空格、.$@#!%^&amp;*()-_+=&gt;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamList(const std::vector<ParamInfo>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取<p>标签 标签名必填且只能包含数字、大小写字母、空格、.$@#!%^&amp;*()-_+=&gt;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelList <p>标签 标签名必填且只能包含数字、大小写字母、空格、.$@#!%^&amp;*()-_+=&gt;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LabelBrief> GetLabelList() const;

                    /**
                     * 设置<p>标签 标签名必填且只能包含数字、大小写字母、空格、.$@#!%^&amp;*()-_+=&gt;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelList <p>标签 标签名必填且只能包含数字、大小写字母、空格、.$@#!%^&amp;*()-_+=&gt;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelList(const std::vector<LabelBrief>& _labelList);

                    /**
                     * 判断参数 LabelList 是否已赋值
                     * @return LabelList 是否已赋值
                     * 
                     */
                    bool LabelListHasBeenSet() const;

                    /**
                     * 获取<p>工作流告警配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alarm <p>工作流告警配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmBrief GetAlarm() const;

                    /**
                     * 设置<p>工作流告警配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarm <p>工作流告警配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarm(const AlarmBrief& _alarm);

                    /**
                     * 判断参数 Alarm 是否已赋值
                     * @return Alarm 是否已赋值
                     * 
                     */
                    bool AlarmHasBeenSet() const;

                    /**
                     * 获取<p>监控指标配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorMetric <p>监控指标配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MonitorMetricBrief GetMonitorMetric() const;

                    /**
                     * 设置<p>监控指标配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorMetric <p>监控指标配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorMetric(const MonitorMetricBrief& _monitorMetric);

                    /**
                     * 判断参数 MonitorMetric 是否已赋值
                     * @return MonitorMetric 是否已赋值
                     * 
                     */
                    bool MonitorMetricHasBeenSet() const;

                    /**
                     * 获取<p>工作流高级设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvanceConfig <p>工作流高级设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WorkflowAdvanceConfig GetAdvanceConfig() const;

                    /**
                     * 设置<p>工作流高级设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advanceConfig <p>工作流高级设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvanceConfig(const WorkflowAdvanceConfig& _advanceConfig);

                    /**
                     * 判断参数 AdvanceConfig 是否已赋值
                     * @return AdvanceConfig 是否已赋值
                     * 
                     */
                    bool AdvanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>工作流任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskList <p>工作流任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkflowTask> GetTaskList() const;

                    /**
                     * 设置<p>工作流任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskList <p>工作流任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskList(const std::vector<WorkflowTask>& _taskList);

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                    /**
                     * 获取<p>工作流绑定的 Bundle唯一标识，未绑定时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId <p>工作流绑定的 Bundle唯一标识，未绑定时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>工作流绑定的 Bundle唯一标识，未绑定时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId <p>工作流绑定的 Bundle唯一标识，未绑定时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取<p>Bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleInfo <p>Bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>Bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleInfo <p>Bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                    /**
                     * 获取<p>Git配置ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GitConfigId <p>Git配置ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGitConfigId() const;

                    /**
                     * 设置<p>Git配置ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gitConfigId <p>Git配置ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGitConfigId(const std::string& _gitConfigId);

                    /**
                     * 判断参数 GitConfigId 是否已赋值
                     * @return GitConfigId 是否已赋值
                     * 
                     */
                    bool GitConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>Git分支信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GitBranch <p>Git分支信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGitBranch() const;

                    /**
                     * 设置<p>Git分支信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gitBranch <p>Git分支信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGitBranch(const std::string& _gitBranch);

                    /**
                     * 判断参数 GitBranch 是否已赋值
                     * @return GitBranch 是否已赋值
                     * 
                     */
                    bool GitBranchHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>工作流基本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowBaseInfoDetail m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * <p>工作流调度配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowTriggerConfiguration> m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * <p>工作流参数列表 参数名必填且只能包含数字、大小写字母、空格、.$@#!%^&amp;*()-_+=&gt;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfo> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * <p>标签 标签名必填且只能包含数字、大小写字母、空格、.$@#!%^&amp;*()-_+=&gt;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LabelBrief> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * <p>工作流告警配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmBrief m_alarm;
                    bool m_alarmHasBeenSet;

                    /**
                     * <p>监控指标配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MonitorMetricBrief m_monitorMetric;
                    bool m_monitorMetricHasBeenSet;

                    /**
                     * <p>工作流高级设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WorkflowAdvanceConfig m_advanceConfig;
                    bool m_advanceConfigHasBeenSet;

                    /**
                     * <p>工作流任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkflowTask> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * <p>工作流绑定的 Bundle唯一标识，未绑定时为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>Bundle信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>Git配置ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gitConfigId;
                    bool m_gitConfigIdHasBeenSet;

                    /**
                     * <p>Git分支信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gitBranch;
                    bool m_gitBranchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRSP_H_
