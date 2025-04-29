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
                     * 获取无
                     * @return AllPage 无
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置无
                     * @param _allPage 无
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
                     * 获取无
                     * @return PageNo 无
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置无
                     * @param _pageNo 无
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
                     * 获取无
                     * @return PageSize 无
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置无
                     * @param _pageSize 无
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
                     * 获取是否过滤掉企业管理员
                     * @return IsFilterPerAuthUser 是否过滤掉企业管理员
                     * 
                     */
                    bool GetIsFilterPerAuthUser() const;

                    /**
                     * 设置是否过滤掉企业管理员
                     * @param _isFilterPerAuthUser 是否过滤掉企业管理员
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
                     * 获取是否过滤掉当前用户
                     * @return IsFilterCurrentUser 是否过滤掉当前用户
                     * 
                     */
                    bool GetIsFilterCurrentUser() const;

                    /**
                     * 设置是否过滤掉当前用户
                     * @param _isFilterCurrentUser 是否过滤掉当前用户
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
                     * 获取关键字
                     * @return Keyword 关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键字
                     * @param _keyword 关键字
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
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 无
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 是否过滤掉企业管理员
                     */
                    bool m_isFilterPerAuthUser;
                    bool m_isFilterPerAuthUserHasBeenSet;

                    /**
                     * 是否过滤掉当前用户
                     */
                    bool m_isFilterCurrentUser;
                    bool m_isFilterCurrentUserHasBeenSet;

                    /**
                     * 关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEUSERPROJECTLISTREQUEST_H_
