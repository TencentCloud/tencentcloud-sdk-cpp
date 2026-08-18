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
                     * 获取<p>目标修改的项目ID</p>
                     * @return ProjectId <p>目标修改的项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>目标修改的项目ID</p>
                     * @param _projectId <p>目标修改的项目ID</p>
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
                     * 获取<p>项目显示名称，可以为中文名,需要租户范围内唯一</p>
                     * @return DisplayName <p>项目显示名称，可以为中文名,需要租户范围内唯一</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>项目显示名称，可以为中文名,需要租户范围内唯一</p>
                     * @param _displayName <p>项目显示名称，可以为中文名,需要租户范围内唯一</p>
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
                     * 获取<p>备注</p>
                     * @return Description <p>备注</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _description <p>备注</p>
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
                     * 获取<p>true/false则修改，不带该参数不修改。</p>
                     * @return TaskSubmitApproval <p>true/false则修改，不带该参数不修改。</p>
                     * 
                     */
                    bool GetTaskSubmitApproval() const;

                    /**
                     * 设置<p>true/false则修改，不带该参数不修改。</p>
                     * @param _taskSubmitApproval <p>true/false则修改，不带该参数不修改。</p>
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
                     * 获取<p>资源池信息</p>
                     * @return ResourcePoolInfo <p>资源池信息</p>
                     * 
                     */
                    ResourcePoolInfo GetResourcePoolInfo() const;

                    /**
                     * 设置<p>资源池信息</p>
                     * @param _resourcePoolInfo <p>资源池信息</p>
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
                     * 获取<p>项目管理员</p>
                     * @return ProjectManagers <p>项目管理员</p>
                     * 
                     */
                    std::vector<std::string> GetProjectManagers() const;

                    /**
                     * 设置<p>项目管理员</p>
                     * @param _projectManagers <p>项目管理员</p>
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
                     * 获取<p>调度任务严格模式</p>
                     * @return TaskStrictMode <p>调度任务严格模式</p>
                     * 
                     */
                    bool GetTaskStrictMode() const;

                    /**
                     * 设置<p>调度任务严格模式</p>
                     * @param _taskStrictMode <p>调度任务严格模式</p>
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
                     * 获取<p>以后新增选项可以直接通过前端的json格式写入去实现</p>
                     * @return ExtraOptions <p>以后新增选项可以直接通过前端的json格式写入去实现</p>
                     * 
                     */
                    std::string GetExtraOptions() const;

                    /**
                     * 设置<p>以后新增选项可以直接通过前端的json格式写入去实现</p>
                     * @param _extraOptions <p>以后新增选项可以直接通过前端的json格式写入去实现</p>
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
                     * 获取<p>项目类型，SIMPLE：简单模式 STANDARD：标准模式</p>
                     * @return Model <p>项目类型，SIMPLE：简单模式 STANDARD：标准模式</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>项目类型，SIMPLE：简单模式 STANDARD：标准模式</p>
                     * @param _model <p>项目类型，SIMPLE：简单模式 STANDARD：标准模式</p>
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
                     * 获取<p>项目负责人</p>
                     * @return ProjectOwner <p>项目负责人</p>
                     * 
                     */
                    std::vector<std::string> GetProjectOwner() const;

                    /**
                     * 设置<p>项目负责人</p>
                     * @param _projectOwner <p>项目负责人</p>
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
                     * 获取<p>更新类型</p>
                     * @return ModifyType <p>更新类型</p>
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置<p>更新类型</p>
                     * @param _modifyType <p>更新类型</p>
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
                     * <p>目标修改的项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>项目显示名称，可以为中文名,需要租户范围内唯一</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>true/false则修改，不带该参数不修改。</p>
                     */
                    bool m_taskSubmitApproval;
                    bool m_taskSubmitApprovalHasBeenSet;

                    /**
                     * <p>资源池信息</p>
                     */
                    ResourcePoolInfo m_resourcePoolInfo;
                    bool m_resourcePoolInfoHasBeenSet;

                    /**
                     * <p>项目管理员</p>
                     */
                    std::vector<std::string> m_projectManagers;
                    bool m_projectManagersHasBeenSet;

                    /**
                     * <p>调度任务严格模式</p>
                     */
                    bool m_taskStrictMode;
                    bool m_taskStrictModeHasBeenSet;

                    /**
                     * <p>以后新增选项可以直接通过前端的json格式写入去实现</p>
                     */
                    std::string m_extraOptions;
                    bool m_extraOptionsHasBeenSet;

                    /**
                     * <p>项目类型，SIMPLE：简单模式 STANDARD：标准模式</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>项目负责人</p>
                     */
                    std::vector<std::string> m_projectOwner;
                    bool m_projectOwnerHasBeenSet;

                    /**
                     * <p>更新类型</p>
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYPROJECTREQUEST_H_
