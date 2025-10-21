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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEPROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateProject请求参数结构体
                */
                class UpdateProjectRequest : public AbstractModel
                {
                public:
                    UpdateProjectRequest();
                    ~UpdateProjectRequest() = default;
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
                     * 获取项目负责人id
                     * @return ProjectOwnerUin 项目负责人id
                     * 
                     */
                    std::string GetProjectOwnerUin() const;

                    /**
                     * 设置项目负责人id
                     * @param _projectOwnerUin 项目负责人id
                     * 
                     */
                    void SetProjectOwnerUin(const std::string& _projectOwnerUin);

                    /**
                     * 判断参数 ProjectOwnerUin 是否已赋值
                     * @return ProjectOwnerUin 是否已赋值
                     * 
                     */
                    bool ProjectOwnerUinHasBeenSet() const;

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
                     * 项目负责人id
                     */
                    std::string m_projectOwnerUin;
                    bool m_projectOwnerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATEPROJECTREQUEST_H_
