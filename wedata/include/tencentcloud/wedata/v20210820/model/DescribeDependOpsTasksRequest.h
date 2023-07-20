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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDEPENDOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDEPENDOPSTASKSREQUEST_H_

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
                * DescribeDependOpsTasks请求参数结构体
                */
                class DescribeDependOpsTasksRequest : public AbstractModel
                {
                public:
                    DescribeDependOpsTasksRequest();
                    ~DescribeDependOpsTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
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
                     * 获取上游/下游层级1-6级
                     * @return Deep 上游/下游层级1-6级
                     * 
                     */
                    uint64_t GetDeep() const;

                    /**
                     * 设置上游/下游层级1-6级
                     * @param _deep 上游/下游层级1-6级
                     * 
                     */
                    void SetDeep(const uint64_t& _deep);

                    /**
                     * 判断参数 Deep 是否已赋值
                     * @return Deep 是否已赋值
                     * 
                     */
                    bool DeepHasBeenSet() const;

                    /**
                     * 获取1: 表示查询上游节点；0:表示查询下游节点；2：表示查询上游和下游节点
                     * @return Up 1: 表示查询上游节点；0:表示查询下游节点；2：表示查询上游和下游节点
                     * 
                     */
                    uint64_t GetUp() const;

                    /**
                     * 设置1: 表示查询上游节点；0:表示查询下游节点；2：表示查询上游和下游节点
                     * @param _up 1: 表示查询上游节点；0:表示查询下游节点；2：表示查询上游和下游节点
                     * 
                     */
                    void SetUp(const uint64_t& _up);

                    /**
                     * 判断参数 Up 是否已赋值
                     * @return Up 是否已赋值
                     * 
                     */
                    bool UpHasBeenSet() const;

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
                     * 获取任务工作流id
                     * @return WorkflowId 任务工作流id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置任务工作流id
                     * @param _workflowId 任务工作流id
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 上游/下游层级1-6级
                     */
                    uint64_t m_deep;
                    bool m_deepHasBeenSet;

                    /**
                     * 1: 表示查询上游节点；0:表示查询下游节点；2：表示查询上游和下游节点
                     */
                    uint64_t m_up;
                    bool m_upHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDEPENDOPSTASKSREQUEST_H_
