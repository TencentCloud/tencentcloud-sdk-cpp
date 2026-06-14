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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERPROJECTLISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERPROJECTLISTREQUEST_H_

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
                * DescribeUserProjectList请求参数结构体
                */
                class DescribeUserProjectListRequest : public AbstractModel
                {
                public:
                    DescribeUserProjectListRequest();
                    ~DescribeUserProjectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
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
                     * 获取<p>无</p>
                     * @return AllPage <p>无</p>
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置<p>无</p>
                     * @param _allPage <p>无</p>
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
                     * 获取<p>无</p>
                     * @return PageNo <p>无</p>
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置<p>无</p>
                     * @param _pageNo <p>无</p>
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
                     * 获取<p>无</p>
                     * @return PageSize <p>无</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>无</p>
                     * @param _pageSize <p>无</p>
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
                     * 获取<p>是否过滤掉企业管理员</p>
                     * @return IsFilterPerAuthUser <p>是否过滤掉企业管理员</p>
                     * 
                     */
                    bool GetIsFilterPerAuthUser() const;

                    /**
                     * 设置<p>是否过滤掉企业管理员</p>
                     * @param _isFilterPerAuthUser <p>是否过滤掉企业管理员</p>
                     * 
                     */
                    void SetIsFilterPerAuthUser(const bool& _isFilterPerAuthUser);

                    /**
                     * 判断参数 IsFilterPerAuthUser 是否已赋值
                     * @return IsFilterPerAuthUser 是否已赋值
                     * 
                     */
                    bool IsFilterPerAuthUserHasBeenSet() const;

                    /**
                     * 获取<p>是否过滤掉当前用户</p>
                     * @return IsFilterCurrentUser <p>是否过滤掉当前用户</p>
                     * 
                     */
                    bool GetIsFilterCurrentUser() const;

                    /**
                     * 设置<p>是否过滤掉当前用户</p>
                     * @param _isFilterCurrentUser <p>是否过滤掉当前用户</p>
                     * 
                     */
                    void SetIsFilterCurrentUser(const bool& _isFilterCurrentUser);

                    /**
                     * 判断参数 IsFilterCurrentUser 是否已赋值
                     * @return IsFilterCurrentUser 是否已赋值
                     * 
                     */
                    bool IsFilterCurrentUserHasBeenSet() const;

                    /**
                     * 获取<p>关键字</p>
                     * @return Keyword <p>关键字</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键字</p>
                     * @param _keyword <p>关键字</p>
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
                     * <p>项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>是否过滤掉企业管理员</p>
                     */
                    bool m_isFilterPerAuthUser;
                    bool m_isFilterPerAuthUserHasBeenSet;

                    /**
                     * <p>是否过滤掉当前用户</p>
                     */
                    bool m_isFilterCurrentUser;
                    bool m_isFilterCurrentUserHasBeenSet;

                    /**
                     * <p>关键字</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERPROJECTLISTREQUEST_H_
