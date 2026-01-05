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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTRIGGERWORKFLOWRUNASYNCREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTRIGGERWORKFLOWRUNASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/SchedulingParameter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * RerunTriggerWorkflowRunAsync请求参数结构体
                */
                class RerunTriggerWorkflowRunAsyncRequest : public AbstractModel
                {
                public:
                    RerunTriggerWorkflowRunAsyncRequest();
                    ~RerunTriggerWorkflowRunAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取工作流ID
                     * @return WorkflowId 工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowId 工作流ID
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
                     * 获取工作流运行ID
                     * @return WorkflowExecutionId 工作流运行ID
                     * 
                     */
                    std::string GetWorkflowExecutionId() const;

                    /**
                     * 设置工作流运行ID
                     * @param _workflowExecutionId 工作流运行ID
                     * 
                     */
                    void SetWorkflowExecutionId(const std::string& _workflowExecutionId);

                    /**
                     * 判断参数 WorkflowExecutionId 是否已赋值
                     * @return WorkflowExecutionId 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionIdHasBeenSet() const;

                    /**
                     * 获取运行方式：普通运行默认所有参数：1，高级运行可选任务范围和运行参数：2
                     * @return ExecuteType 运行方式：普通运行默认所有参数：1，高级运行可选任务范围和运行参数：2
                     * 
                     */
                    std::string GetExecuteType() const;

                    /**
                     * 设置运行方式：普通运行默认所有参数：1，高级运行可选任务范围和运行参数：2
                     * @param _executeType 运行方式：普通运行默认所有参数：1，高级运行可选任务范围和运行参数：2
                     * 
                     */
                    void SetExecuteType(const std::string& _executeType);

                    /**
                     * 判断参数 ExecuteType 是否已赋值
                     * @return ExecuteType 是否已赋值
                     * 
                     */
                    bool ExecuteTypeHasBeenSet() const;

                    /**
                     * 获取运行类型为高级运行时填写的自定义运行参数
                     * @return AdvancedParams 运行类型为高级运行时填写的自定义运行参数
                     * 
                     */
                    std::vector<SchedulingParameter> GetAdvancedParams() const;

                    /**
                     * 设置运行类型为高级运行时填写的自定义运行参数
                     * @param _advancedParams 运行类型为高级运行时填写的自定义运行参数
                     * 
                     */
                    void SetAdvancedParams(const std::vector<SchedulingParameter>& _advancedParams);

                    /**
                     * 判断参数 AdvancedParams 是否已赋值
                     * @return AdvancedParams 是否已赋值
                     * 
                     */
                    bool AdvancedParamsHasBeenSet() const;

                    /**
                     * 获取高级运行模式下本次需要运行指定的任务ID集合
                     * @return TaskIds 高级运行模式下本次需要运行指定的任务ID集合
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置高级运行模式下本次需要运行指定的任务ID集合
                     * @param _taskIds 高级运行模式下本次需要运行指定的任务ID集合
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取指定调度资源组,为空时默认使用配置的原调度资源组
                     * @return SchedulingResourceGroup 指定调度资源组,为空时默认使用配置的原调度资源组
                     * 
                     */
                    std::string GetSchedulingResourceGroup() const;

                    /**
                     * 设置指定调度资源组,为空时默认使用配置的原调度资源组
                     * @param _schedulingResourceGroup 指定调度资源组,为空时默认使用配置的原调度资源组
                     * 
                     */
                    void SetSchedulingResourceGroup(const std::string& _schedulingResourceGroup);

                    /**
                     * 判断参数 SchedulingResourceGroup 是否已赋值
                     * @return SchedulingResourceGroup 是否已赋值
                     * 
                     */
                    bool SchedulingResourceGroupHasBeenSet() const;

                    /**
                     * 获取指定集成资源组,为空时默认使用配置的原集成资源组
                     * @return IntegrationResourceGroup 指定集成资源组,为空时默认使用配置的原集成资源组
                     * 
                     */
                    std::string GetIntegrationResourceGroup() const;

                    /**
                     * 设置指定集成资源组,为空时默认使用配置的原集成资源组
                     * @param _integrationResourceGroup 指定集成资源组,为空时默认使用配置的原集成资源组
                     * 
                     */
                    void SetIntegrationResourceGroup(const std::string& _integrationResourceGroup);

                    /**
                     * 判断参数 IntegrationResourceGroup 是否已赋值
                     * @return IntegrationResourceGroup 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流运行ID
                     */
                    std::string m_workflowExecutionId;
                    bool m_workflowExecutionIdHasBeenSet;

                    /**
                     * 运行方式：普通运行默认所有参数：1，高级运行可选任务范围和运行参数：2
                     */
                    std::string m_executeType;
                    bool m_executeTypeHasBeenSet;

                    /**
                     * 运行类型为高级运行时填写的自定义运行参数
                     */
                    std::vector<SchedulingParameter> m_advancedParams;
                    bool m_advancedParamsHasBeenSet;

                    /**
                     * 高级运行模式下本次需要运行指定的任务ID集合
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 指定调度资源组,为空时默认使用配置的原调度资源组
                     */
                    std::string m_schedulingResourceGroup;
                    bool m_schedulingResourceGroupHasBeenSet;

                    /**
                     * 指定集成资源组,为空时默认使用配置的原集成资源组
                     */
                    std::string m_integrationResourceGroup;
                    bool m_integrationResourceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RERUNTRIGGERWORKFLOWRUNASYNCREQUEST_H_
