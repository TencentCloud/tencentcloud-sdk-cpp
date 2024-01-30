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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLELISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLELISTREQUEST_H_

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
                * DescribeUserRoleList请求参数结构体
                */
                class DescribeUserRoleListRequest : public AbstractModel
                {
                public:
                    DescribeUserRoleListRequest();
                    ~DescribeUserRoleListRequest() = default;
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
                     * 获取全部页码
                     * @return AllPage 全部页码
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置全部页码
                     * @param _allPage 全部页码
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
                     * 获取0 企业用户 1 访客 不填表示所有用户
                     * @return UserType 0 企业用户 1 访客 不填表示所有用户
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置0 企业用户 1 访客 不填表示所有用户
                     * @param _userType 0 企业用户 1 访客 不填表示所有用户
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取模糊搜索的关键字
                     * @return Keyword 模糊搜索的关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置模糊搜索的关键字
                     * @param _keyword 模糊搜索的关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

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
                     * 全部页码
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * 0 企业用户 1 访客 不填表示所有用户
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 模糊搜索的关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否只获取绑定企微应用的
                     */
                    bool m_isOnlyBindAppUser;
                    bool m_isOnlyBindAppUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLELISTREQUEST_H_
