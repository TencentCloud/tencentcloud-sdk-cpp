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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * CreateProject请求参数结构体
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
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
                     * 获取项目机构
                     * @return ProjectOrg 项目机构
                     * 
                     */
                    std::string GetProjectOrg() const;

                    /**
                     * 设置项目机构
                     * @param _projectOrg 项目机构
                     * 
                     */
                    void SetProjectOrg(const std::string& _projectOrg);

                    /**
                     * 判断参数 ProjectOrg 是否已赋值
                     * @return ProjectOrg 是否已赋值
                     * 
                     */
                    bool ProjectOrgHasBeenSet() const;

                    /**
                     * 获取项目预算
                     * @return ProjectBudget 项目预算
                     * 
                     */
                    std::string GetProjectBudget() const;

                    /**
                     * 设置项目预算
                     * @param _projectBudget 项目预算
                     * 
                     */
                    void SetProjectBudget(const std::string& _projectBudget);

                    /**
                     * 判断参数 ProjectBudget 是否已赋值
                     * @return ProjectBudget 是否已赋值
                     * 
                     */
                    bool ProjectBudgetHasBeenSet() const;

                    /**
                     * 获取项目简介
                     * @return ProjectIntroduction 项目简介
                     * 
                     */
                    std::string GetProjectIntroduction() const;

                    /**
                     * 设置项目简介
                     * @param _projectIntroduction 项目简介
                     * 
                     */
                    void SetProjectIntroduction(const std::string& _projectIntroduction);

                    /**
                     * 判断参数 ProjectIntroduction 是否已赋值
                     * @return ProjectIntroduction 是否已赋值
                     * 
                     */
                    bool ProjectIntroductionHasBeenSet() const;

                    /**
                     * 获取所属部门ID
                     * @return ProjectOrgId 所属部门ID
                     * 
                     */
                    std::string GetProjectOrgId() const;

                    /**
                     * 设置所属部门ID
                     * @param _projectOrgId 所属部门ID
                     * 
                     */
                    void SetProjectOrgId(const std::string& _projectOrgId);

                    /**
                     * 判断参数 ProjectOrgId 是否已赋值
                     * @return ProjectOrgId 是否已赋值
                     * 
                     */
                    bool ProjectOrgIdHasBeenSet() const;

                private:

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目机构
                     */
                    std::string m_projectOrg;
                    bool m_projectOrgHasBeenSet;

                    /**
                     * 项目预算
                     */
                    std::string m_projectBudget;
                    bool m_projectBudgetHasBeenSet;

                    /**
                     * 项目简介
                     */
                    std::string m_projectIntroduction;
                    bool m_projectIntroductionHasBeenSet;

                    /**
                     * 所属部门ID
                     */
                    std::string m_projectOrgId;
                    bool m_projectOrgIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_CREATEPROJECTREQUEST_H_
