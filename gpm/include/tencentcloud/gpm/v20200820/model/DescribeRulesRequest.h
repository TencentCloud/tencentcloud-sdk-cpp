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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBERULESREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/Tag.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * DescribeRules请求参数结构体
                */
                class DescribeRulesRequest : public AbstractModel
                {
                public:
                    DescribeRulesRequest();
                    ~DescribeRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当前页号，不传则返回第一页
                     * @return PageNumber 当前页号，不传则返回第一页
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页号，不传则返回第一页
                     * @param _pageNumber 当前页号，不传则返回第一页
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
                     * 获取单页大小，最大 30，不填默认30
                     * @return PageSize 单页大小，最大 30，不填默认30
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置单页大小，最大 30，不填默认30
                     * @param _pageSize 单页大小，最大 30，不填默认30
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
                     * 获取查询类型（可选）：match表示通过matchCode或者matchName来搜索，rule表示通过ruleCode或者ruleName来搜索，其余类型不做过滤处理。
                     * @return SearchType 查询类型（可选）：match表示通过matchCode或者matchName来搜索，rule表示通过ruleCode或者ruleName来搜索，其余类型不做过滤处理。
                     * 
                     */
                    std::string GetSearchType() const;

                    /**
                     * 设置查询类型（可选）：match表示通过matchCode或者matchName来搜索，rule表示通过ruleCode或者ruleName来搜索，其余类型不做过滤处理。
                     * @param _searchType 查询类型（可选）：match表示通过matchCode或者matchName来搜索，rule表示通过ruleCode或者ruleName来搜索，其余类型不做过滤处理。
                     * 
                     */
                    void SetSearchType(const std::string& _searchType);

                    /**
                     * 判断参数 SearchType 是否已赋值
                     * @return SearchType 是否已赋值
                     * 
                     */
                    bool SearchTypeHasBeenSet() const;

                    /**
                     * 获取查询关键词，针对SearchType进行具体过滤的内容。
                     * @return Keyword 查询关键词，针对SearchType进行具体过滤的内容。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置查询关键词，针对SearchType进行具体过滤的内容。
                     * @param _keyword 查询关键词，针对SearchType进行具体过滤的内容。
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
                     * 获取标签列表，用于过滤。
                     * @return Tags 标签列表，用于过滤。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表，用于过滤。
                     * @param _tags 标签列表，用于过滤。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 当前页号，不传则返回第一页
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 单页大小，最大 30，不填默认30
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询类型（可选）：match表示通过matchCode或者matchName来搜索，rule表示通过ruleCode或者ruleName来搜索，其余类型不做过滤处理。
                     */
                    std::string m_searchType;
                    bool m_searchTypeHasBeenSet;

                    /**
                     * 查询关键词，针对SearchType进行具体过滤的内容。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 标签列表，用于过滤。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBERULESREQUEST_H_
