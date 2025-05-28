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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLEPROJECTLISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLEPROJECTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeUserRoleProjectList请求参数结构体
                */
                class DescribeUserRoleProjectListRequest : public AbstractModel
                {
                public:
                    DescribeUserRoleProjectListRequest();
                    ~DescribeUserRoleProjectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码
                     * @return PageNo 页码
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置页码
                     * @param _pageNo 页码
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return PageSize 页数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页数
                     * @param _pageSize 页数
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取是否只获取绑定企微应用的
                     * @return IsOnlyBindAppUser 是否只获取绑定企微应用的
                     * 
                     */
                    bool GetIsOnlyBindAppUser() const;

                    /**
                     * 设置是否只获取绑定企微应用的
                     * @param _isOnlyBindAppUser 是否只获取绑定企微应用的
                     * 
                     */
                    void SetIsOnlyBindAppUser(const bool& _isOnlyBindAppUser);

                    /**
                     * 判断参数 IsOnlyBindAppUser 是否已赋值
                     * @return IsOnlyBindAppUser 是否已赋值
                     * 
                     */
                    bool IsOnlyBindAppUserHasBeenSet() const;

                    /**
                     * 获取是否获取全部数据
                     * @return AllPage 是否获取全部数据
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置是否获取全部数据
                     * @param _allPage 是否获取全部数据
                     * 
                     */
                    void SetAllPage(const bool& _allPage);

                    /**
                     * 判断参数 AllPage 是否已赋值
                     * @return AllPage 是否已赋值
                     * 
                     */
                    bool AllPageHasBeenSet() const;

                    /**
                     * 获取角色编码
                     * @return RoleCode 角色编码
                     * 
                     */
                    std::string GetRoleCode() const;

                    /**
                     * 设置角色编码
                     * @param _roleCode 角色编码
                     * 
                     */
                    void SetRoleCode(const std::string& _roleCode);

                    /**
                     * 判断参数 RoleCode 是否已赋值
                     * @return RoleCode 是否已赋值
                     * 
                     */
                    bool RoleCodeHasBeenSet() const;

                    /**
                     * 获取用户id列表
                     * @return UserIdList 用户id列表
                     * 
                     */
                    std::vector<std::string> GetUserIdList() const;

                    /**
                     * 设置用户id列表
                     * @param _userIdList 用户id列表
                     * 
                     */
                    void SetUserIdList(const std::vector<std::string>& _userIdList);

                    /**
                     * 判断参数 UserIdList 是否已赋值
                     * @return UserIdList 是否已赋值
                     * 
                     */
                    bool UserIdListHasBeenSet() const;

                    /**
                     * 获取搜索关键词
                     * @return Keyword 搜索关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键词
                     * @param _keyword 搜索关键词
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 页码
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 页数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否只获取绑定企微应用的
                     */
                    bool m_isOnlyBindAppUser;
                    bool m_isOnlyBindAppUserHasBeenSet;

                    /**
                     * 是否获取全部数据
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * 角色编码
                     */
                    std::string m_roleCode;
                    bool m_roleCodeHasBeenSet;

                    /**
                     * 用户id列表
                     */
                    std::vector<std::string> m_userIdList;
                    bool m_userIdListHasBeenSet;

                    /**
                     * 搜索关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLEPROJECTLISTREQUEST_H_
