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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERTASKCNTBYSTATUSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERTASKCNTBYSTATUSREQUEST_H_

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
                * DescribeSchedulerTaskCntByStatus请求参数结构体
                */
                class DescribeSchedulerTaskCntByStatusRequest : public AbstractModel
                {
                public:
                    DescribeSchedulerTaskCntByStatusRequest();
                    ~DescribeSchedulerTaskCntByStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1
                     * @return TaskType 1
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置1
                     * @param _taskType 1
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Y
                     * @return TypeName Y
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Y
                     * @param _typeName Y
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取111
                     * @return ProjectId 111
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置111
                     * @param _projectId 111
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
                     * 获取1
                     * @return InCharge 1
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置1
                     * @param _inCharge 1
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

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
                     * 获取项目ID列表，如果传了 ProjectIds ，ProjectId 不会生效
                     * @return ProjectIds 项目ID列表，如果传了 ProjectIds ，ProjectId 不会生效
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID列表，如果传了 ProjectIds ，ProjectId 不会生效
                     * @param _projectIds 项目ID列表，如果传了 ProjectIds ，ProjectId 不会生效
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取资源组ID筛选
                     * @return ResourceGroupIds 资源组ID筛选
                     * 
                     */
                    std::vector<std::string> GetResourceGroupIds() const;

                    /**
                     * 设置资源组ID筛选
                     * @param _resourceGroupIds 资源组ID筛选
                     * 
                     */
                    void SetResourceGroupIds(const std::vector<std::string>& _resourceGroupIds);

                    /**
                     * 判断参数 ResourceGroupIds 是否已赋值
                     * @return ResourceGroupIds 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 1
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Y
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 111
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 项目ID列表，如果传了 ProjectIds ，ProjectId 不会生效
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 资源组ID筛选
                     */
                    std::vector<std::string> m_resourceGroupIds;
                    bool m_resourceGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESCHEDULERTASKCNTBYSTATUSREQUEST_H_
