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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ParamInfo.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowSchedulerConfigurationInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateWorkflow请求参数结构体
                */
                class UpdateWorkflowRequest : public AbstractModel
                {
                public:
                    UpdateWorkflowRequest();
                    ~UpdateWorkflowRequest() = default;
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
                     * 获取责任人ID
                     * @return OwnerUin 责任人ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置责任人ID
                     * @param _ownerUin 责任人ID
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
                     * 获取备注
                     * @return WorkflowDesc 备注
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置备注
                     * @param _workflowDesc 备注
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
                     * 获取工作流参数列表
                     * @return WorkflowParams 工作流参数列表
                     * 
                     */
                    std::vector<ParamInfo> GetWorkflowParams() const;

                    /**
                     * 设置工作流参数列表
                     * @param _workflowParams 工作流参数列表
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
                     * 获取统一调度参数
                     * @return WorkflowSchedulerConfiguration 统一调度参数
                     * 
                     */
                    WorkflowSchedulerConfigurationInfo GetWorkflowSchedulerConfiguration() const;

                    /**
                     * 设置统一调度参数
                     * @param _workflowSchedulerConfiguration 统一调度参数
                     * 
                     */
                    void SetWorkflowSchedulerConfiguration(const WorkflowSchedulerConfigurationInfo& _workflowSchedulerConfiguration);

                    /**
                     * 判断参数 WorkflowSchedulerConfiguration 是否已赋值
                     * @return WorkflowSchedulerConfiguration 是否已赋值
                     * 
                     */
                    bool WorkflowSchedulerConfigurationHasBeenSet() const;

                    /**
                     * 获取BundleId项
                     * @return BundleId BundleId项
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置BundleId项
                     * @param _bundleId BundleId项
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
                     * 获取Bundle信息
                     * @return BundleInfo Bundle信息
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置Bundle信息
                     * @param _bundleInfo Bundle信息
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

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
                     * 工作流名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 责任人ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * 工作流参数列表
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * 统一调度参数
                     */
                    WorkflowSchedulerConfigurationInfo m_workflowSchedulerConfiguration;
                    bool m_workflowSchedulerConfigurationHasBeenSet;

                    /**
                     * BundleId项
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Bundle信息
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEWORKFLOWREQUEST_H_
