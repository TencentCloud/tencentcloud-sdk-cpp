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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERWORKFLOWRUNREQUEST_H_

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
                * CreateTriggerWorkflowRun请求参数结构体
                */
                class CreateTriggerWorkflowRunRequest : public AbstractModel
                {
                public:
                    CreateTriggerWorkflowRunRequest();
                    ~CreateTriggerWorkflowRunRequest() = default;
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
                     * 获取自定义运行参数，如果为空或者null则使用工作流最新配置
                     * @return AdvancedParams 自定义运行参数，如果为空或者null则使用工作流最新配置
                     * 
                     */
                    std::vector<SchedulingParameter> GetAdvancedParams() const;

                    /**
                     * 设置自定义运行参数，如果为空或者null则使用工作流最新配置
                     * @param _advancedParams 自定义运行参数，如果为空或者null则使用工作流最新配置
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
                     * 获取本次需要运行指定的任务ID集合，如果为null或为空则运行全部
                     * @return TaskIds 本次需要运行指定的任务ID集合，如果为null或为空则运行全部
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置本次需要运行指定的任务ID集合，如果为null或为空则运行全部
                     * @param _taskIds 本次需要运行指定的任务ID集合，如果为null或为空则运行全部
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
                     * 获取指定的调度资源组id，为空默认原资源组
                     * @return SchedulingResourceGroupId 指定的调度资源组id，为空默认原资源组
                     * 
                     */
                    std::string GetSchedulingResourceGroupId() const;

                    /**
                     * 设置指定的调度资源组id，为空默认原资源组
                     * @param _schedulingResourceGroupId 指定的调度资源组id，为空默认原资源组
                     * 
                     */
                    void SetSchedulingResourceGroupId(const std::string& _schedulingResourceGroupId);

                    /**
                     * 判断参数 SchedulingResourceGroupId 是否已赋值
                     * @return SchedulingResourceGroupId 是否已赋值
                     * 
                     */
                    bool SchedulingResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取指定的集成资源组id，为空默认原资源组
                     * @return IntegrationResourceGroupId 指定的集成资源组id，为空默认原资源组
                     * 
                     */
                    std::string GetIntegrationResourceGroupId() const;

                    /**
                     * 设置指定的集成资源组id，为空默认原资源组
                     * @param _integrationResourceGroupId 指定的集成资源组id，为空默认原资源组
                     * 
                     */
                    void SetIntegrationResourceGroupId(const std::string& _integrationResourceGroupId);

                    /**
                     * 判断参数 IntegrationResourceGroupId 是否已赋值
                     * @return IntegrationResourceGroupId 是否已赋值
                     * 
                     */
                    bool IntegrationResourceGroupIdHasBeenSet() const;

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
                     * 自定义运行参数，如果为空或者null则使用工作流最新配置
                     */
                    std::vector<SchedulingParameter> m_advancedParams;
                    bool m_advancedParamsHasBeenSet;

                    /**
                     * 本次需要运行指定的任务ID集合，如果为null或为空则运行全部
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 指定的调度资源组id，为空默认原资源组
                     */
                    std::string m_schedulingResourceGroupId;
                    bool m_schedulingResourceGroupIdHasBeenSet;

                    /**
                     * 指定的集成资源组id，为空默认原资源组
                     */
                    std::string m_integrationResourceGroupId;
                    bool m_integrationResourceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERWORKFLOWRUNREQUEST_H_
