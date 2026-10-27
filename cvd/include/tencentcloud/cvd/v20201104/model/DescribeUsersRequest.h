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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEUSERSREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeUsers请求参数结构体
                */
                class DescribeUsersRequest : public AbstractModel
                {
                public:
                    DescribeUsersRequest();
                    ~DescribeUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>搜索关键字。</p>
                     * @return Keyword <p>搜索关键字。</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>搜索关键字。</p>
                     * @param _keyword <p>搜索关键字。</p>
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
                     * 获取<p>页面编号。从1开始</p>
                     * @return PageNumber <p>页面编号。从1开始</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页面编号。从1开始</p>
                     * @param _pageNumber <p>页面编号。从1开始</p>
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>页面大小。默认20，不超过100。</p>
                     * @return PageSize <p>页面大小。默认20，不超过100。</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>页面大小。默认20，不超过100。</p>
                     * @param _pageSize <p>页面大小。默认20，不超过100。</p>
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
                     * 获取<p>部门ID。</p>
                     * @return DepartmentId <p>部门ID。</p>
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置<p>部门ID。</p>
                     * @param _departmentId <p>部门ID。</p>
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                private:

                    /**
                     * <p>搜索关键字。</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>页面编号。从1开始</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>页面大小。默认20，不超过100。</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>部门ID。</p>
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEUSERSREQUEST_H_
