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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTMEMBERSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTMEMBERSREQUEST_H_

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
                * ListProjectMembers请求参数结构体
                */
                class ListProjectMembersRequest : public AbstractModel
                {
                public:
                    ListProjectMembersRequest();
                    ~ListProjectMembersRequest() = default;
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
                     * 获取使用成员名过滤，支持模糊查询
                     * @return UserName 使用成员名过滤，支持模糊查询
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置使用成员名过滤，支持模糊查询
                     * @param _userName 使用成员名过滤，支持模糊查询
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取使用成员id过滤，支持模糊查询
                     * @return UserUin 使用成员id过滤，支持模糊查询
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置使用成员id过滤，支持模糊查询
                     * @param _userUin 使用成员id过滤，支持模糊查询
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取分页大小，默认第一页
                     * @return PageSize 分页大小，默认第一页
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小，默认第一页
                     * @param _pageSize 分页大小，默认第一页
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页条数，默认10条
                     * @return PageNumber 分页条数，默认10条
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页条数，默认10条
                     * @param _pageNumber 分页条数，默认10条
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 使用成员名过滤，支持模糊查询
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 使用成员id过滤，支持模糊查询
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 分页大小，默认第一页
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页条数，默认10条
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROJECTMEMBERSREQUEST_H_
