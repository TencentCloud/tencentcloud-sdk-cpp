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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBEPROJECTRESPONSE_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBEPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/solar/v20181011/model/SubProjectInfo.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * DescribeProject返回参数结构体
                */
                class DescribeProjectResponse : public AbstractModel
                {
                public:
                    DescribeProjectResponse();
                    ~DescribeProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目预算
                     * @return ProjectBudget 项目预算
                     * 
                     */
                    double GetProjectBudget() const;

                    /**
                     * 判断参数 ProjectBudget 是否已赋值
                     * @return ProjectBudget 是否已赋值
                     * 
                     */
                    bool ProjectBudgetHasBeenSet() const;

                    /**
                     * 获取项目机构
                     * @return ProjectOrg 项目机构
                     * 
                     */
                    std::string GetProjectOrg() const;

                    /**
                     * 判断参数 ProjectOrg 是否已赋值
                     * @return ProjectOrg 是否已赋值
                     * 
                     */
                    bool ProjectOrgHasBeenSet() const;

                    /**
                     * 获取项目简介
                     * @return ProjectIntroduction 项目简介
                     * 
                     */
                    std::string GetProjectIntroduction() const;

                    /**
                     * 判断参数 ProjectIntroduction 是否已赋值
                     * @return ProjectIntroduction 是否已赋值
                     * 
                     */
                    bool ProjectIntroductionHasBeenSet() const;

                    /**
                     * 获取子项目列表
                     * @return SubProjectList 子项目列表
                     * 
                     */
                    std::vector<SubProjectInfo> GetSubProjectList() const;

                    /**
                     * 判断参数 SubProjectList 是否已赋值
                     * @return SubProjectList 是否已赋值
                     * 
                     */
                    bool SubProjectListHasBeenSet() const;

                    /**
                     * 获取项目状态
                     * @return ProjectStatus 项目状态
                     * 
                     */
                    std::string GetProjectStatus() const;

                    /**
                     * 判断参数 ProjectStatus 是否已赋值
                     * @return ProjectStatus 是否已赋值
                     * 
                     */
                    bool ProjectStatusHasBeenSet() const;

                    /**
                     * 获取项目机构Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectOrgId 项目机构Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectOrgId() const;

                    /**
                     * 判断参数 ProjectOrgId 是否已赋值
                     * @return ProjectOrgId 是否已赋值
                     * 
                     */
                    bool ProjectOrgIdHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目预算
                     */
                    double m_projectBudget;
                    bool m_projectBudgetHasBeenSet;

                    /**
                     * 项目机构
                     */
                    std::string m_projectOrg;
                    bool m_projectOrgHasBeenSet;

                    /**
                     * 项目简介
                     */
                    std::string m_projectIntroduction;
                    bool m_projectIntroductionHasBeenSet;

                    /**
                     * 子项目列表
                     */
                    std::vector<SubProjectInfo> m_subProjectList;
                    bool m_subProjectListHasBeenSet;

                    /**
                     * 项目状态
                     */
                    std::string m_projectStatus;
                    bool m_projectStatusHasBeenSet;

                    /**
                     * 项目机构Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectOrgId;
                    bool m_projectOrgIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBEPROJECTRESPONSE_H_
