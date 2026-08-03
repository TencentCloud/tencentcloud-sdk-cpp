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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTEXAMPLESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTEXAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ListExamples请求参数结构体
                */
                class ListExamplesRequest : public AbstractModel
                {
                public:
                    ListExamplesRequest();
                    ~ListExamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分类</p>
                     * @return Category <p>分类</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>分类</p>
                     * @param _category <p>分类</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>关键词</p>
                     * @return Keyword <p>关键词</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键词</p>
                     * @param _keyword <p>关键词</p>
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
                     * 获取<p>标签数组，多个标签 AND 关系；与 Category/Keyword 之间也是 AND</p>
                     * @return Tags <p>标签数组，多个标签 AND 关系；与 Category/Keyword 之间也是 AND</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签数组，多个标签 AND 关系；与 Category/Keyword 之间也是 AND</p>
                     * @param _tags <p>标签数组，多个标签 AND 关系；与 Category/Keyword 之间也是 AND</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>DEFAULT（sort_order ASC, create_time DESC）/ POPULARITY（按热度降序），非法值降级为 DEFAULT</p>
                     * @return OrderBy <p>DEFAULT（sort_order ASC, create_time DESC）/ POPULARITY（按热度降序），非法值降级为 DEFAULT</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>DEFAULT（sort_order ASC, create_time DESC）/ POPULARITY（按热度降序），非法值降级为 DEFAULT</p>
                     * @param _orderBy <p>DEFAULT（sort_order ASC, create_time DESC）/ POPULARITY（按热度降序），非法值降级为 DEFAULT</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>当前页码（从1开始）</p>
                     * @return Page <p>当前页码（从1开始）</p>
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置<p>当前页码（从1开始）</p>
                     * @param _page <p>当前页码（从1开始）</p>
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

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

                private:

                    /**
                     * <p>分类</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>关键词</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>标签数组，多个标签 AND 关系；与 Category/Keyword 之间也是 AND</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>DEFAULT（sort_order ASC, create_time DESC）/ POPULARITY（按热度降序），非法值降级为 DEFAULT</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>当前页码（从1开始）</p>
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>页数</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTEXAMPLESREQUEST_H_
