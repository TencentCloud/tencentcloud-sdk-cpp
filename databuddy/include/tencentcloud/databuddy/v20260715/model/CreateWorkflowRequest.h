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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowBaseInfo.h>
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
                * CreateWorkflow请求参数结构体
                */
                class CreateWorkflowRequest : public AbstractModel
                {
                public:
                    CreateWorkflowRequest();
                    ~CreateWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * @return WorkspaceId <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * @param _workspaceId <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
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
                     * 获取<p>工作流基本信息。必填，其中 WorkflowName 必填且工作空间内唯一</p>
                     * @return BaseInfo <p>工作流基本信息。必填，其中 WorkflowName 必填且工作空间内唯一</p>
                     * 
                     */
                    WorkflowBaseInfo GetBaseInfo() const;

                    /**
                     * 设置<p>工作流基本信息。必填，其中 WorkflowName 必填且工作空间内唯一</p>
                     * @param _baseInfo <p>工作流基本信息。必填，其中 WorkflowName 必填且工作空间内唯一</p>
                     * 
                     */
                    void SetBaseInfo(const WorkflowBaseInfo& _baseInfo);

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取<p>工作流调度配置</p>
                     * @return Trigger <p>工作流调度配置</p>
                     * 
                     */
                    std::vector<WorkflowTriggerConfiguration> GetTrigger() const;

                    /**
                     * 设置<p>工作流调度配置</p>
                     * @param _trigger <p>工作流调度配置</p>
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
                     * 获取<p>工作流参数列表</p>
                     * @return ParamList <p>工作流参数列表</p>
                     * 
                     */
                    std::vector<ParamInfo> GetParamList() const;

                    /**
                     * 设置<p>工作流参数列表</p>
                     * @param _paramList <p>工作流参数列表</p>
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
                     * 获取<p>标签列表</p>
                     * @return LabelList <p>标签列表</p>
                     * 
                     */
                    std::vector<LabelBrief> GetLabelList() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _labelList <p>标签列表</p>
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
                     * @return Alarm <p>工作流告警配置</p>
                     * 
                     */
                    AlarmBrief GetAlarm() const;

                    /**
                     * 设置<p>工作流告警配置</p>
                     * @param _alarm <p>工作流告警配置</p>
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
                     * 获取<p>监控指标配置。若告警条件中选择了监控告警，则本字段必填</p>
                     * @return MonitorMetric <p>监控指标配置。若告警条件中选择了监控告警，则本字段必填</p>
                     * 
                     */
                    MonitorMetricBrief GetMonitorMetric() const;

                    /**
                     * 设置<p>监控指标配置。若告警条件中选择了监控告警，则本字段必填</p>
                     * @param _monitorMetric <p>监控指标配置。若告警条件中选择了监控告警，则本字段必填</p>
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
                     * @return AdvanceConfig <p>工作流高级设置</p>
                     * 
                     */
                    WorkflowAdvanceConfig GetAdvanceConfig() const;

                    /**
                     * 设置<p>工作流高级设置</p>
                     * @param _advanceConfig <p>工作流高级设置</p>
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
                     * @return TaskList <p>工作流任务列表</p>
                     * 
                     */
                    std::vector<WorkflowTask> GetTaskList() const;

                    /**
                     * 设置<p>工作流任务列表</p>
                     * @param _taskList <p>工作流任务列表</p>
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
                     * 获取<p>BundleId，可通过 Bundle 相关接口获取</p>
                     * @return BundleId <p>BundleId，可通过 Bundle 相关接口获取</p>
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>BundleId，可通过 Bundle 相关接口获取</p>
                     * @param _bundleId <p>BundleId，可通过 Bundle 相关接口获取</p>
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
                     * @return BundleInfo <p>Bundle信息</p>
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>Bundle信息</p>
                     * @param _bundleInfo <p>Bundle信息</p>
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
                     * 获取<p>Git配置ID，可通过 Git 配置相关接口获取</p>
                     * @return GitConfigId <p>Git配置ID，可通过 Git 配置相关接口获取</p>
                     * 
                     */
                    std::string GetGitConfigId() const;

                    /**
                     * 设置<p>Git配置ID，可通过 Git 配置相关接口获取</p>
                     * @param _gitConfigId <p>Git配置ID，可通过 Git 配置相关接口获取</p>
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
                     * @return GitBranch <p>Git分支信息</p>
                     * 
                     */
                    std::string GetGitBranch() const;

                    /**
                     * 设置<p>Git分支信息</p>
                     * @param _gitBranch <p>Git分支信息</p>
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
                     * <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>工作流基本信息。必填，其中 WorkflowName 必填且工作空间内唯一</p>
                     */
                    WorkflowBaseInfo m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * <p>工作流调度配置</p>
                     */
                    std::vector<WorkflowTriggerConfiguration> m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * <p>工作流参数列表</p>
                     */
                    std::vector<ParamInfo> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<LabelBrief> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * <p>工作流告警配置</p>
                     */
                    AlarmBrief m_alarm;
                    bool m_alarmHasBeenSet;

                    /**
                     * <p>监控指标配置。若告警条件中选择了监控告警，则本字段必填</p>
                     */
                    MonitorMetricBrief m_monitorMetric;
                    bool m_monitorMetricHasBeenSet;

                    /**
                     * <p>工作流高级设置</p>
                     */
                    WorkflowAdvanceConfig m_advanceConfig;
                    bool m_advanceConfigHasBeenSet;

                    /**
                     * <p>工作流任务列表</p>
                     */
                    std::vector<WorkflowTask> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * <p>BundleId，可通过 Bundle 相关接口获取</p>
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>Bundle信息</p>
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>Git配置ID，可通过 Git 配置相关接口获取</p>
                     */
                    std::string m_gitConfigId;
                    bool m_gitConfigIdHasBeenSet;

                    /**
                     * <p>Git分支信息</p>
                     */
                    std::string m_gitBranch;
                    bool m_gitBranchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEWORKFLOWREQUEST_H_
