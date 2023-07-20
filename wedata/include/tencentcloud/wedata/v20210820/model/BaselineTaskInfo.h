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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINETASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BaselineTaskInfo
                */
                class BaselineTaskInfo : public AbstractModel
                {
                public:
                    BaselineTaskInfo();
                    ~BaselineTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务调度周期
                     * @return TaskCycle 任务调度周期
                     * 
                     */
                    std::string GetTaskCycle() const;

                    /**
                     * 设置任务调度周期
                     * @param _taskCycle 任务调度周期
                     * 
                     */
                    void SetTaskCycle(const std::string& _taskCycle);

                    /**
                     * 判断参数 TaskCycle 是否已赋值
                     * @return TaskCycle 是否已赋值
                     * 
                     */
                    bool TaskCycleHasBeenSet() const;

                    /**
                     * 获取工作流名称
                     * @return WorkflowName 工作流名称
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
                     * @param _workflowName 工作流名称
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
                     * 获取工作流id
                     * @return WorkflowId 工作流id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
                     * @param _workflowId 工作流id
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
                     * 获取任务责任人名称
                     * @return TaskInChargeName 任务责任人名称
                     * 
                     */
                    std::string GetTaskInChargeName() const;

                    /**
                     * 设置任务责任人名称
                     * @param _taskInChargeName 任务责任人名称
                     * 
                     */
                    void SetTaskInChargeName(const std::string& _taskInChargeName);

                    /**
                     * 判断参数 TaskInChargeName 是否已赋值
                     * @return TaskInChargeName 是否已赋值
                     * 
                     */
                    bool TaskInChargeNameHasBeenSet() const;

                    /**
                     * 获取任务责任人id
                     * @return TaskInChargeUin 任务责任人id
                     * 
                     */
                    std::string GetTaskInChargeUin() const;

                    /**
                     * 设置任务责任人id
                     * @param _taskInChargeUin 任务责任人id
                     * 
                     */
                    void SetTaskInChargeUin(const std::string& _taskInChargeUin);

                    /**
                     * 判断参数 TaskInChargeUin 是否已赋值
                     * @return TaskInChargeUin 是否已赋值
                     * 
                     */
                    bool TaskInChargeUinHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务调度周期
                     */
                    std::string m_taskCycle;
                    bool m_taskCycleHasBeenSet;

                    /**
                     * 工作流名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务责任人名称
                     */
                    std::string m_taskInChargeName;
                    bool m_taskInChargeNameHasBeenSet;

                    /**
                     * 任务责任人id
                     */
                    std::string m_taskInChargeUin;
                    bool m_taskInChargeUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINETASKINFO_H_
