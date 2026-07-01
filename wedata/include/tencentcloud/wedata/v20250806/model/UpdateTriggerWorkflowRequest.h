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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERWORKFLOWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ParamInfo.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowTriggerConfig.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowGeneralTaskParam.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowRunConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateTriggerWorkflow请求参数结构体
                */
                class UpdateTriggerWorkflowRequest : public AbstractModel
                {
                public:
                    UpdateTriggerWorkflowRequest();
                    ~UpdateTriggerWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>工作流ID</p>
                     * @return WorkflowId <p>工作流ID</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>工作流ID</p>
                     * @param _workflowId <p>工作流ID</p>
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取<p>工作流名称</p>
                     * @return WorkflowName <p>工作流名称</p>
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置<p>工作流名称</p>
                     * @param _workflowName <p>工作流名称</p>
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取<p>责任人ID</p>
                     * @return OwnerUin <p>责任人ID</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>责任人ID</p>
                     * @param _ownerUin <p>责任人ID</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return WorkflowDesc <p>备注</p>
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _workflowDesc <p>备注</p>
                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

                    /**
                     * 获取<p>工作流参数列表</p>
                     * @return WorkflowParams <p>工作流参数列表</p>
                     * 
                     */
                    std::vector<ParamInfo> GetWorkflowParams() const;

                    /**
                     * 设置<p>工作流参数列表</p>
                     * @param _workflowParams <p>工作流参数列表</p>
                     * 
                     */
                    void SetWorkflowParams(const std::vector<ParamInfo>& _workflowParams);

                    /**
                     * 判断参数 WorkflowParams 是否已赋值
                     * @return WorkflowParams 是否已赋值
                     * 
                     */
                    bool WorkflowParamsHasBeenSet() const;

                    /**
                     * 获取<p>统一调度参数</p>
                     * @return TriggerWorkflowSchedulerConfigurations <p>统一调度参数</p>
                     * 
                     */
                    std::vector<WorkflowTriggerConfig> GetTriggerWorkflowSchedulerConfigurations() const;

                    /**
                     * 设置<p>统一调度参数</p>
                     * @param _triggerWorkflowSchedulerConfigurations <p>统一调度参数</p>
                     * 
                     */
                    void SetTriggerWorkflowSchedulerConfigurations(const std::vector<WorkflowTriggerConfig>& _triggerWorkflowSchedulerConfigurations);

                    /**
                     * 判断参数 TriggerWorkflowSchedulerConfigurations 是否已赋值
                     * @return TriggerWorkflowSchedulerConfigurations 是否已赋值
                     * 
                     */
                    bool TriggerWorkflowSchedulerConfigurationsHasBeenSet() const;

                    /**
                     * 获取<p>BundleId项</p>
                     * @return BundleId <p>BundleId项</p>
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>BundleId项</p>
                     * @param _bundleId <p>BundleId项</p>
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
                     * 获取<p>通用参数配置</p>
                     * @return GeneralTaskParams <p>通用参数配置</p>
                     * 
                     */
                    std::vector<WorkflowGeneralTaskParam> GetGeneralTaskParams() const;

                    /**
                     * 设置<p>通用参数配置</p>
                     * @param _generalTaskParams <p>通用参数配置</p>
                     * 
                     */
                    void SetGeneralTaskParams(const std::vector<WorkflowGeneralTaskParam>& _generalTaskParams);

                    /**
                     * 判断参数 GeneralTaskParams 是否已赋值
                     * @return GeneralTaskParams 是否已赋值
                     * 
                     */
                    bool GeneralTaskParamsHasBeenSet() const;

                    /**
                     * 获取<p>调度运行配置</p>
                     * @return TriggerWorkflowRunConfiguration <p>调度运行配置</p>
                     * 
                     */
                    WorkflowRunConfig GetTriggerWorkflowRunConfiguration() const;

                    /**
                     * 设置<p>调度运行配置</p>
                     * @param _triggerWorkflowRunConfiguration <p>调度运行配置</p>
                     * 
                     */
                    void SetTriggerWorkflowRunConfiguration(const WorkflowRunConfig& _triggerWorkflowRunConfiguration);

                    /**
                     * 判断参数 TriggerWorkflowRunConfiguration 是否已赋值
                     * @return TriggerWorkflowRunConfiguration 是否已赋值
                     * 
                     */
                    bool TriggerWorkflowRunConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>Trigger 状态 启动ACTIVE，暂停PAUSED。配置完之后，内部的SchedulerStatus可不配置，如果配置，内容会被改值覆盖。</p><p>枚举值：</p><ul><li>ACTIVE： 启动</li><li>PAUSED： 暂停</li></ul>
                     * @return SchedulerStatus <p>Trigger 状态 启动ACTIVE，暂停PAUSED。配置完之后，内部的SchedulerStatus可不配置，如果配置，内容会被改值覆盖。</p><p>枚举值：</p><ul><li>ACTIVE： 启动</li><li>PAUSED： 暂停</li></ul>
                     * 
                     */
                    std::string GetSchedulerStatus() const;

                    /**
                     * 设置<p>Trigger 状态 启动ACTIVE，暂停PAUSED。配置完之后，内部的SchedulerStatus可不配置，如果配置，内容会被改值覆盖。</p><p>枚举值：</p><ul><li>ACTIVE： 启动</li><li>PAUSED： 暂停</li></ul>
                     * @param _schedulerStatus <p>Trigger 状态 启动ACTIVE，暂停PAUSED。配置完之后，内部的SchedulerStatus可不配置，如果配置，内容会被改值覆盖。</p><p>枚举值：</p><ul><li>ACTIVE： 启动</li><li>PAUSED： 暂停</li></ul>
                     * 
                     */
                    void SetSchedulerStatus(const std::string& _schedulerStatus);

                    /**
                     * 判断参数 SchedulerStatus 是否已赋值
                     * @return SchedulerStatus 是否已赋值
                     * 
                     */
                    bool SchedulerStatusHasBeenSet() const;

                    /**
                     * 获取<p>触发方式：定时触发：TIME_TRIGGER 。配置完之后，内部的TriggerMode状态可不配置，如果配置，内容会被该值覆盖。</p><p>枚举值：</p><ul><li>TIME_TRIGGER： 定时触发</li></ul>
                     * @return TriggerMode <p>触发方式：定时触发：TIME_TRIGGER 。配置完之后，内部的TriggerMode状态可不配置，如果配置，内容会被该值覆盖。</p><p>枚举值：</p><ul><li>TIME_TRIGGER： 定时触发</li></ul>
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置<p>触发方式：定时触发：TIME_TRIGGER 。配置完之后，内部的TriggerMode状态可不配置，如果配置，内容会被该值覆盖。</p><p>枚举值：</p><ul><li>TIME_TRIGGER： 定时触发</li></ul>
                     * @param _triggerMode <p>触发方式：定时触发：TIME_TRIGGER 。配置完之后，内部的TriggerMode状态可不配置，如果配置，内容会被该值覆盖。</p><p>枚举值：</p><ul><li>TIME_TRIGGER： 定时触发</li></ul>
                     * 
                     */
                    void SetTriggerMode(const std::string& _triggerMode);

                    /**
                     * 判断参数 TriggerMode 是否已赋值
                     * @return TriggerMode 是否已赋值
                     * 
                     */
                    bool TriggerModeHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>工作流ID</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>工作流名称</p>
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * <p>责任人ID</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * <p>工作流参数列表</p>
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * <p>统一调度参数</p>
                     */
                    std::vector<WorkflowTriggerConfig> m_triggerWorkflowSchedulerConfigurations;
                    bool m_triggerWorkflowSchedulerConfigurationsHasBeenSet;

                    /**
                     * <p>BundleId项</p>
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>Bundle信息</p>
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>通用参数配置</p>
                     */
                    std::vector<WorkflowGeneralTaskParam> m_generalTaskParams;
                    bool m_generalTaskParamsHasBeenSet;

                    /**
                     * <p>调度运行配置</p>
                     */
                    WorkflowRunConfig m_triggerWorkflowRunConfiguration;
                    bool m_triggerWorkflowRunConfigurationHasBeenSet;

                    /**
                     * <p>Trigger 状态 启动ACTIVE，暂停PAUSED。配置完之后，内部的SchedulerStatus可不配置，如果配置，内容会被改值覆盖。</p><p>枚举值：</p><ul><li>ACTIVE： 启动</li><li>PAUSED： 暂停</li></ul>
                     */
                    std::string m_schedulerStatus;
                    bool m_schedulerStatusHasBeenSet;

                    /**
                     * <p>触发方式：定时触发：TIME_TRIGGER 。配置完之后，内部的TriggerMode状态可不配置，如果配置，内容会被该值覆盖。</p><p>枚举值：</p><ul><li>TIME_TRIGGER： 定时触发</li></ul>
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERWORKFLOWREQUEST_H_
