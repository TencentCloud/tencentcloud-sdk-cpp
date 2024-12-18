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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKBYCYCLEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKBYCYCLEREQUEST_H_

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
                * DescribeTaskByCycle请求参数结构体
                */
                class DescribeTaskByCycleRequest : public AbstractModel
                {
                public:
                    DescribeTaskByCycleRequest();
                    ~DescribeTaskByCycleRequest() = default;
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
                     * 获取项目ID列表筛选
                     * @return ProjectIds 项目ID列表筛选
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID列表筛选
                     * @param _projectIds 项目ID列表筛选
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
                     * 获取资源组ID列表筛选
                     * @return ResourceGroupIds 资源组ID列表筛选
                     * 
                     */
                    std::vector<std::string> GetResourceGroupIds() const;

                    /**
                     * 设置资源组ID列表筛选
                     * @param _resourceGroupIds 资源组ID列表筛选
                     * 
                     */
                    void SetResourceGroupIds(const std::vector<std::string>& _resourceGroupIds);

                    /**
                     * 判断参数 ResourceGroupIds 是否已赋值
                     * @return ResourceGroupIds 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdsHasBeenSet() const;

                    /**
                     * 获取任务类型ID筛选
                     * @return TaskTypeIdList 任务类型ID筛选
                     * 
                     */
                    std::vector<std::string> GetTaskTypeIdList() const;

                    /**
                     * 设置任务类型ID筛选
                     * @param _taskTypeIdList 任务类型ID筛选
                     * 
                     */
                    void SetTaskTypeIdList(const std::vector<std::string>& _taskTypeIdList);

                    /**
                     * 判断参数 TaskTypeIdList 是否已赋值
                     * @return TaskTypeIdList 是否已赋值
                     * 
                     */
                    bool TaskTypeIdListHasBeenSet() const;

                private:

                    /**
                     * 项目ID
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
                     * 项目ID列表筛选
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 资源组ID列表筛选
                     */
                    std::vector<std::string> m_resourceGroupIds;
                    bool m_resourceGroupIdsHasBeenSet;

                    /**
                     * 任务类型ID筛选
                     */
                    std::vector<std::string> m_taskTypeIdList;
                    bool m_taskTypeIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKBYCYCLEREQUEST_H_
