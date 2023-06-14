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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_PROJECTINFO_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_PROJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 项目基础信息
                */
                class ProjectInfo : public AbstractModel
                {
                public:
                    ProjectInfo();
                    ~ProjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取项目所属机构
                     * @return ProjectOrg 项目所属机构
                     * 
                     */
                    std::string GetProjectOrg() const;

                    /**
                     * 设置项目所属机构
                     * @param _projectOrg 项目所属机构
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
                    double GetProjectBudget() const;

                    /**
                     * 设置项目预算
                     * @param _projectBudget 项目预算
                     * 
                     */
                    void SetProjectBudget(const double& _projectBudget);

                    /**
                     * 判断参数 ProjectBudget 是否已赋值
                     * @return ProjectBudget 是否已赋值
                     * 
                     */
                    bool ProjectBudgetHasBeenSet() const;

                    /**
                     * 获取项目状态
                     * @return ProjectStatus 项目状态
                     * 
                     */
                    std::string GetProjectStatus() const;

                    /**
                     * 设置项目状态
                     * @param _projectStatus 项目状态
                     * 
                     */
                    void SetProjectStatus(const std::string& _projectStatus);

                    /**
                     * 判断参数 ProjectStatus 是否已赋值
                     * @return ProjectStatus 是否已赋值
                     * 
                     */
                    bool ProjectStatusHasBeenSet() const;

                    /**
                     * 获取项目创建时间
                     * @return CreateTime 项目创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置项目创建时间
                     * @param _createTime 项目创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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
                     * 获取项目所属机构Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectOrgId 项目所属机构Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectOrgId() const;

                    /**
                     * 设置项目所属机构Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectOrgId 项目所属机构Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目所属机构
                     */
                    std::string m_projectOrg;
                    bool m_projectOrgHasBeenSet;

                    /**
                     * 项目预算
                     */
                    double m_projectBudget;
                    bool m_projectBudgetHasBeenSet;

                    /**
                     * 项目状态
                     */
                    std::string m_projectStatus;
                    bool m_projectStatusHasBeenSet;

                    /**
                     * 项目创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目简介
                     */
                    std::string m_projectIntroduction;
                    bool m_projectIntroductionHasBeenSet;

                    /**
                     * 项目所属机构Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectOrgId;
                    bool m_projectOrgIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_PROJECTINFO_H_
