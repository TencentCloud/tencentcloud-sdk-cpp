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
                     * 获取<p>页码</p>
                     * @return PageNo <p>页码</p>
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置<p>页码</p>
                     * @param _pageNo <p>页码</p>
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
                     * 获取<p>页数</p>
                     * @return PageSize <p>页数</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>页数</p>
                     * @param _pageSize <p>页数</p>
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
                     * 获取<p>全部页码</p>
                     * @return AllPage <p>全部页码</p>
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置<p>全部页码</p>
                     * @param _allPage <p>全部页码</p>
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
                     * 获取<p>0 企业用户 1 访客 不填表示所有用户</p>
                     * @return UserType <p>0 企业用户 1 访客 不填表示所有用户</p>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>0 企业用户 1 访客 不填表示所有用户</p>
                     * @param _userType <p>0 企业用户 1 访客 不填表示所有用户</p>
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
                     * 获取<p>模糊搜索的关键字</p>
                     * @return Keyword <p>模糊搜索的关键字</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>模糊搜索的关键字</p>
                     * @param _keyword <p>模糊搜索的关键字</p>
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
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
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
                     * 获取<p>是否只获取绑定企微应用的</p>
                     * @return IsOnlyBindAppUser <p>是否只获取绑定企微应用的</p>
                     * 
                     */
                    bool GetIsOnlyBindAppUser() const;

                    /**
                     * 设置<p>是否只获取绑定企微应用的</p>
                     * @param _isOnlyBindAppUser <p>是否只获取绑定企微应用的</p>
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
                     * 获取<p>用户类型</p>
                     * @return IdentityType <p>用户类型</p>
                     * 
                     */
                    std::string GetIdentityType() const;

                    /**
                     * 设置<p>用户类型</p>
                     * @param _identityType <p>用户类型</p>
                     * 
                     */
                    void SetIdentityType(const std::string& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                private:

                    /**
                     * <p>页码</p>
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * <p>页数</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>全部页码</p>
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * <p>0 企业用户 1 访客 不填表示所有用户</p>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * <p>模糊搜索的关键字</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>是否只获取绑定企微应用的</p>
                     */
                    bool m_isOnlyBindAppUser;
                    bool m_isOnlyBindAppUserHasBeenSet;

                    /**
                     * <p>用户类型</p>
                     */
                    std::string m_identityType;
                    bool m_identityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERROLELISTREQUEST_H_
