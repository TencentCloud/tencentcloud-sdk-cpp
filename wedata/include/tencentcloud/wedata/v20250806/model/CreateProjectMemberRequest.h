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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEPROJECTMEMBERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEPROJECTMEMBERREQUEST_H_

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
                * CreateProjectMember请求参数结构体
                */
                class CreateProjectMemberRequest : public AbstractModel
                {
                public:
                    CreateProjectMemberRequest();
                    ~CreateProjectMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取用户id
                     * @return UseUins 用户id
                     * 
                     */
                    std::vector<std::string> GetUseUins() const;

                    /**
                     * 设置用户id
                     * @param _useUins 用户id
                     * 
                     */
                    void SetUseUins(const std::vector<std::string>& _useUins);

                    /**
                     * 判断参数 UseUins 是否已赋值
                     * @return UseUins 是否已赋值
                     * 
                     */
                    bool UseUinsHasBeenSet() const;

                    /**
                     * 获取角色id
                     * @return RoleIds 角色id
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置角色id
                     * @param _roleIds 角色id
                     * 
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     * 
                     */
                    bool RoleIdsHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 用户id
                     */
                    std::vector<std::string> m_useUins;
                    bool m_useUinsHasBeenSet;

                    /**
                     * 角色id
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEPROJECTMEMBERREQUEST_H_
