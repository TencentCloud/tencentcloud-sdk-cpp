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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPROJECTREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
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
                     * 获取目标修改项目的项目ID
                     * @return ProjectId 目标修改项目的项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置目标修改项目的项目ID
                     * @param _projectId 目标修改项目的项目ID
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
                     * 获取修改后的项目名称，不填则不修改
                     * @return ProjectName 修改后的项目名称，不填则不修改
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置修改后的项目名称，不填则不修改
                     * @param _projectName 修改后的项目名称，不填则不修改
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取修改后的项目描述，不填则不修改
                     * @return ProjectDescription 修改后的项目描述，不填则不修改
                     * 
                     */
                    std::string GetProjectDescription() const;

                    /**
                     * 设置修改后的项目描述，不填则不修改
                     * @param _projectDescription 修改后的项目描述，不填则不修改
                     * 
                     */
                    void SetProjectDescription(const std::string& _projectDescription);

                    /**
                     * 判断参数 ProjectDescription 是否已赋值
                     * @return ProjectDescription 是否已赋值
                     * 
                     */
                    bool ProjectDescriptionHasBeenSet() const;

                    /**
                     * 获取修改后的权限模式，black为黑名单，white为白名单,不填则不修改
                     * @return PolicyMode 修改后的权限模式，black为黑名单，white为白名单,不填则不修改
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 设置修改后的权限模式，black为黑名单，white为白名单,不填则不修改
                     * @param _policyMode 修改后的权限模式，black为黑名单，white为白名单,不填则不修改
                     * 
                     */
                    void SetPolicyMode(const std::string& _policyMode);

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                private:

                    /**
                     * 目标修改项目的项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 修改后的项目名称，不填则不修改
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 修改后的项目描述，不填则不修改
                     */
                    std::string m_projectDescription;
                    bool m_projectDescriptionHasBeenSet;

                    /**
                     * 修改后的权限模式，black为黑名单，white为白名单,不填则不修改
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPROJECTREQUEST_H_
