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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYPROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ResourcePoolInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyProject请求参数结构体
                */
                class ModifyProjectRequest : public AbstractModel
                {
                public:
                    ModifyProjectRequest();
                    ~ModifyProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标修改的项目ID
                     * @return ProjectId 目标修改的项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置目标修改的项目ID
                     * @param _projectId 目标修改的项目ID
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
                     * 获取项目显示名称，可以为中文名,需要租户范围内唯一
                     * @return DisplayName 项目显示名称，可以为中文名,需要租户范围内唯一
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置项目显示名称，可以为中文名,需要租户范围内唯一
                     * @param _displayName 项目显示名称，可以为中文名,需要租户范围内唯一
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取true/false则修改，不带该参数不修改。
                     * @return TaskSubmitApproval true/false则修改，不带该参数不修改。
                     * 
                     */
                    bool GetTaskSubmitApproval() const;

                    /**
                     * 设置true/false则修改，不带该参数不修改。
                     * @param _taskSubmitApproval true/false则修改，不带该参数不修改。
                     * 
                     */
                    void SetTaskSubmitApproval(const bool& _taskSubmitApproval);

                    /**
                     * 判断参数 TaskSubmitApproval 是否已赋值
                     * @return TaskSubmitApproval 是否已赋值
                     * 
                     */
                    bool TaskSubmitApprovalHasBeenSet() const;

                    /**
                     * 获取资源池信息
                     * @return ResourcePoolInfo 资源池信息
                     * 
                     */
                    ResourcePoolInfo GetResourcePoolInfo() const;

                    /**
                     * 设置资源池信息
                     * @param _resourcePoolInfo 资源池信息
                     * 
                     */
                    void SetResourcePoolInfo(const ResourcePoolInfo& _resourcePoolInfo);

                    /**
                     * 判断参数 ResourcePoolInfo 是否已赋值
                     * @return ResourcePoolInfo 是否已赋值
                     * 
                     */
                    bool ResourcePoolInfoHasBeenSet() const;

                    /**
                     * 获取项目管理员
                     * @return ProjectManagers 项目管理员
                     * 
                     */
                    std::vector<std::string> GetProjectManagers() const;

                    /**
                     * 设置项目管理员
                     * @param _projectManagers 项目管理员
                     * 
                     */
                    void SetProjectManagers(const std::vector<std::string>& _projectManagers);

                    /**
                     * 判断参数 ProjectManagers 是否已赋值
                     * @return ProjectManagers 是否已赋值
                     * 
                     */
                    bool ProjectManagersHasBeenSet() const;

                    /**
                     * 获取调度任务严格模式
                     * @return TaskStrictMode 调度任务严格模式
                     * 
                     */
                    bool GetTaskStrictMode() const;

                    /**
                     * 设置调度任务严格模式
                     * @param _taskStrictMode 调度任务严格模式
                     * 
                     */
                    void SetTaskStrictMode(const bool& _taskStrictMode);

                    /**
                     * 判断参数 TaskStrictMode 是否已赋值
                     * @return TaskStrictMode 是否已赋值
                     * 
                     */
                    bool TaskStrictModeHasBeenSet() const;

                    /**
                     * 获取以后新增选项可以直接通过前端的json格式写入去实现
                     * @return ExtraOptions 以后新增选项可以直接通过前端的json格式写入去实现
                     * 
                     */
                    std::string GetExtraOptions() const;

                    /**
                     * 设置以后新增选项可以直接通过前端的json格式写入去实现
                     * @param _extraOptions 以后新增选项可以直接通过前端的json格式写入去实现
                     * 
                     */
                    void SetExtraOptions(const std::string& _extraOptions);

                    /**
                     * 判断参数 ExtraOptions 是否已赋值
                     * @return ExtraOptions 是否已赋值
                     * 
                     */
                    bool ExtraOptionsHasBeenSet() const;

                    /**
                     * 获取项目类型，SIMPLE：简单模式 STANDARD：标准模式
                     * @return Model 项目类型，SIMPLE：简单模式 STANDARD：标准模式
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置项目类型，SIMPLE：简单模式 STANDARD：标准模式
                     * @param _model 项目类型，SIMPLE：简单模式 STANDARD：标准模式
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取项目负责人
                     * @return ProjectOwner 项目负责人
                     * 
                     */
                    std::vector<std::string> GetProjectOwner() const;

                    /**
                     * 设置项目负责人
                     * @param _projectOwner 项目负责人
                     * 
                     */
                    void SetProjectOwner(const std::vector<std::string>& _projectOwner);

                    /**
                     * 判断参数 ProjectOwner 是否已赋值
                     * @return ProjectOwner 是否已赋值
                     * 
                     */
                    bool ProjectOwnerHasBeenSet() const;

                    /**
                     * 获取更新类型
                     * @return ModifyType 更新类型
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置更新类型
                     * @param _modifyType 更新类型
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                private:

                    /**
                     * 目标修改的项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目显示名称，可以为中文名,需要租户范围内唯一
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * true/false则修改，不带该参数不修改。
                     */
                    bool m_taskSubmitApproval;
                    bool m_taskSubmitApprovalHasBeenSet;

                    /**
                     * 资源池信息
                     */
                    ResourcePoolInfo m_resourcePoolInfo;
                    bool m_resourcePoolInfoHasBeenSet;

                    /**
                     * 项目管理员
                     */
                    std::vector<std::string> m_projectManagers;
                    bool m_projectManagersHasBeenSet;

                    /**
                     * 调度任务严格模式
                     */
                    bool m_taskStrictMode;
                    bool m_taskStrictModeHasBeenSet;

                    /**
                     * 以后新增选项可以直接通过前端的json格式写入去实现
                     */
                    std::string m_extraOptions;
                    bool m_extraOptionsHasBeenSet;

                    /**
                     * 项目类型，SIMPLE：简单模式 STANDARD：标准模式
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 项目负责人
                     */
                    std::vector<std::string> m_projectOwner;
                    bool m_projectOwnerHasBeenSet;

                    /**
                     * 更新类型
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYPROJECTREQUEST_H_
