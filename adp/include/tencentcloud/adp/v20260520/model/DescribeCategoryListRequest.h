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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECATEGORYLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECATEGORYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>
#include <tencentcloud/adp/v20260520/model/SummaryListSwitch.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeCategoryList请求参数结构体
                */
                class DescribeCategoryListRequest : public AbstractModel
                {
                public:
                    DescribeCategoryListRequest();
                    ~DescribeCategoryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所属知识库 ID</p>
                     * @return KbId <p>所属知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>所属知识库 ID</p>
                     * @param _kbId <p>所属知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 Values 为 OR 关系）：CategoryType-分类类型,枚举值,精确匹配(CATEGORY_TYPE_DOC=1/CATEGORY_TYPE_QA=2); ParentCategoryId-父分类ID,精确匹配</p>
                     * @return FilterList <p>过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 Values 为 OR 关系）：CategoryType-分类类型,枚举值,精确匹配(CATEGORY_TYPE_DOC=1/CATEGORY_TYPE_QA=2); ParentCategoryId-父分类ID,精确匹配</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 Values 为 OR 关系）：CategoryType-分类类型,枚举值,精确匹配(CATEGORY_TYPE_DOC=1/CATEGORY_TYPE_QA=2); ParentCategoryId-父分类ID,精确匹配</p>
                     * @param _filterList <p>过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 Values 为 OR 关系）：CategoryType-分类类型,枚举值,精确匹配(CATEGORY_TYPE_DOC=1/CATEGORY_TYPE_QA=2); ParentCategoryId-父分类ID,精确匹配</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取<p>分页页码，从 0 开始</p>
                     * @return PageNumber <p>分页页码，从 0 开始</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>分页页码，从 0 开始</p>
                     * @param _pageNumber <p>分页页码，从 0 开始</p>
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
                     * 获取<p>每页数量，默认 10，最大 100</p>
                     * @return PageSize <p>每页数量，默认 10，最大 100</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量，默认 10，最大 100</p>
                     * @param _pageSize <p>每页数量，默认 10，最大 100</p>
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
                     * 获取<p>关键词搜索</p>
                     * @return Query <p>关键词搜索</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>关键词搜索</p>
                     * @param _query <p>关键词搜索</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>开关配置</p>
                     * @return SummaryListSwitch <p>开关配置</p>
                     * 
                     */
                    SummaryListSwitch GetSummaryListSwitch() const;

                    /**
                     * 设置<p>开关配置</p>
                     * @param _summaryListSwitch <p>开关配置</p>
                     * 
                     */
                    void SetSummaryListSwitch(const SummaryListSwitch& _summaryListSwitch);

                    /**
                     * 判断参数 SummaryListSwitch 是否已赋值
                     * @return SummaryListSwitch 是否已赋值
                     * 
                     */
                    bool SummaryListSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>所属知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 Values 为 OR 关系）：CategoryType-分类类型,枚举值,精确匹配(CATEGORY_TYPE_DOC=1/CATEGORY_TYPE_QA=2); ParentCategoryId-父分类ID,精确匹配</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>分页页码，从 0 开始</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数量，默认 10，最大 100</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>关键词搜索</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>开关配置</p>
                     */
                    SummaryListSwitch m_summaryListSwitch;
                    bool m_summaryListSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECATEGORYLISTREQUEST_H_
