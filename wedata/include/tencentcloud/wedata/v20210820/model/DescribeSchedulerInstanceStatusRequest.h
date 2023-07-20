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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERINSTANCESTATUSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERINSTANCESTATUSREQUEST_H_

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
                * DescribeSchedulerInstanceStatus请求参数结构体
                */
                class DescribeSchedulerInstanceStatusRequest : public AbstractModel
                {
                public:
                    DescribeSchedulerInstanceStatusRequest();
                    ~DescribeSchedulerInstanceStatusRequest() = default;
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
                     * 获取任务类型ID
                     * @return TaskTypeId 任务类型ID
                     * 
                     */
                    std::string GetTaskTypeId() const;

                    /**
                     * 设置任务类型ID
                     * @param _taskTypeId 任务类型ID
                     * 
                     */
                    void SetTaskTypeId(const std::string& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取执行资源组ID
                     * @return ExecutionGroupId 执行资源组ID
                     * 
                     */
                    std::string GetExecutionGroupId() const;

                    /**
                     * 设置执行资源组ID
                     * @param _executionGroupId 执行资源组ID
                     * 
                     */
                    void SetExecutionGroupId(const std::string& _executionGroupId);

                    /**
                     * 判断参数 ExecutionGroupId 是否已赋值
                     * @return ExecutionGroupId 是否已赋值
                     * 
                     */
                    bool ExecutionGroupIdHasBeenSet() const;

                    /**
                     * 获取执行资源组名字
                     * @return ExecutionGroupName 执行资源组名字
                     * 
                     */
                    std::string GetExecutionGroupName() const;

                    /**
                     * 设置执行资源组名字
                     * @param _executionGroupName 执行资源组名字
                     * 
                     */
                    void SetExecutionGroupName(const std::string& _executionGroupName);

                    /**
                     * 判断参数 ExecutionGroupName 是否已赋值
                     * @return ExecutionGroupName 是否已赋值
                     * 
                     */
                    bool ExecutionGroupNameHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务类型ID
                     */
                    std::string m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * 执行资源组ID
                     */
                    std::string m_executionGroupId;
                    bool m_executionGroupIdHasBeenSet;

                    /**
                     * 执行资源组名字
                     */
                    std::string m_executionGroupName;
                    bool m_executionGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERINSTANCESTATUSREQUEST_H_
