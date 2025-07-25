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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPENDINGSUBMITTASKLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPENDINGSUBMITTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribePendingSubmitTaskList请求参数结构体
                */
                class DescribePendingSubmitTaskListRequest : public AbstractModel
                {
                public:
                    DescribePendingSubmitTaskListRequest();
                    ~DescribePendingSubmitTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目编号
                     * @return ProjectId 项目编号
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目编号
                     * @param _projectId 项目编号
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
                     * 获取工作流编号
                     * @return WorkflowId 工作流编号
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流编号
                     * @param _workflowId 工作流编号
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
                     * 获取任务编号列表
                     * @return TaskIdList 任务编号列表
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置任务编号列表
                     * @param _taskIdList 任务编号列表
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                private:

                    /**
                     * 项目编号
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流编号
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 任务编号列表
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPENDINGSUBMITTASKLISTREQUEST_H_
