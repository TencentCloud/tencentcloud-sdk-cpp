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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTROLESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTROLESREQUEST_H_

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
                * ListProjectRoles请求参数结构体
                */
                class ListProjectRolesRequest : public AbstractModel
                {
                public:
                    ListProjectRolesRequest();
                    ~ListProjectRolesRequest() = default;
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
                     * 获取角色中文展示名模糊查询，只能传一个值
                     * @return RoleDisplayName 角色中文展示名模糊查询，只能传一个值
                     * 
                     */
                    std::string GetRoleDisplayName() const;

                    /**
                     * 设置角色中文展示名模糊查询，只能传一个值
                     * @param _roleDisplayName 角色中文展示名模糊查询，只能传一个值
                     * 
                     */
                    void SetRoleDisplayName(const std::string& _roleDisplayName);

                    /**
                     * 判断参数 RoleDisplayName 是否已赋值
                     * @return RoleDisplayName 是否已赋值
                     * 
                     */
                    bool RoleDisplayNameHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页信息
                     * @return PageSize 分页信息
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页信息
                     * @param _pageSize 分页信息
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 角色中文展示名模糊查询，只能传一个值
                     */
                    std::string m_roleDisplayName;
                    bool m_roleDisplayNameHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页信息
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTROLESREQUEST_H_
