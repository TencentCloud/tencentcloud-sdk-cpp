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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEAUTHAPIKEYLISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEAUTHAPIKEYLISTREQUEST_H_

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
                * DescribeAuthApiKeyList请求参数结构体
                */
                class DescribeAuthApiKeyListRequest : public AbstractModel
                {
                public:
                    DescribeAuthApiKeyListRequest();
                    ~DescribeAuthApiKeyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全部</p><p>默认值：false</p>
                     * @return AllPage <p>全部</p><p>默认值：false</p>
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置<p>全部</p><p>默认值：false</p>
                     * @param _allPage <p>全部</p><p>默认值：false</p>
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
                     * 获取<p>页码</p><p>默认值：0</p>
                     * @return PageNo <p>页码</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置<p>页码</p><p>默认值：0</p>
                     * @param _pageNo <p>页码</p><p>默认值：0</p>
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
                     * 获取<p>分页大小</p><p>默认值：10</p>
                     * @return PageSize <p>分页大小</p><p>默认值：10</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页大小</p><p>默认值：10</p>
                     * @param _pageSize <p>分页大小</p><p>默认值：10</p>
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
                     * 获取<p>关键字过滤</p>
                     * @return Keyword <p>关键字过滤</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键字过滤</p>
                     * @param _keyword <p>关键字过滤</p>
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
                     * <p>全部</p><p>默认值：false</p>
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * <p>页码</p><p>默认值：0</p>
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * <p>分页大小</p><p>默认值：10</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>关键字过滤</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEAUTHAPIKEYLISTREQUEST_H_
