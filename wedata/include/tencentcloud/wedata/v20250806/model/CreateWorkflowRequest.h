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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEWORKFLOWREQUEST_H_

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
                * CreateWorkflow请求参数结构体
                */
                class CreateWorkflowRequest : public AbstractModel
                {
                public:
                    CreateWorkflowRequest();
                    ~CreateWorkflowRequest() = default;
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
                     * 获取所属文件夹路径
                     * @return ParentFolderPath 所属文件夹路径
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置所属文件夹路径
                     * @param _parentFolderPath 所属文件夹路径
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取工作流类型,取值示例：cycle 周期工作流；manual 手动工作流，默认传入cycle
                     * @return WorkflowType 工作流类型,取值示例：cycle 周期工作流；manual 手动工作流，默认传入cycle
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置工作流类型,取值示例：cycle 周期工作流；manual 手动工作流，默认传入cycle
                     * @param _workflowType 工作流类型,取值示例：cycle 周期工作流；manual 手动工作流，默认传入cycle
                     * 
                     */
                    void SetWorkflowType(const std::string& _workflowType);

                    /**
                     * 判断参数 WorkflowType 是否已赋值
                     * @return WorkflowType 是否已赋值
                     * 
                     */
                    bool WorkflowTypeHasBeenSet() const;

                    /**
                     * 获取工作流描述
                     * @return WorkflowDesc 工作流描述
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置工作流描述
                     * @param _workflowDesc 工作流描述
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
                     * 获取工作流负责人ID
                     * @return OwnerUin 工作流负责人ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置工作流负责人ID
                     * @param _ownerUin 工作流负责人ID
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
                     * 获取工作流参数
                     * @return WorkflowParams 工作流参数
                     * 
                     */
                    std::vector<ParamInfo> GetWorkflowParams() const;

                    /**
                     * 设置工作流参数
                     * @param _workflowParams 工作流参数
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
                     * 获取统一调度信息
                     * @return WorkflowSchedulerConfiguration 统一调度信息
                     * 
                     */
                    WorkflowSchedulerConfigurationInfo GetWorkflowSchedulerConfiguration() const;

                    /**
                     * 设置统一调度信息
                     * @param _workflowSchedulerConfiguration 统一调度信息
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
                     * 工作流名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 所属文件夹路径
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * 工作流类型,取值示例：cycle 周期工作流；manual 手动工作流，默认传入cycle
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * 工作流描述
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * 工作流负责人ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 工作流参数
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * 统一调度信息
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

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEWORKFLOWREQUEST_H_
