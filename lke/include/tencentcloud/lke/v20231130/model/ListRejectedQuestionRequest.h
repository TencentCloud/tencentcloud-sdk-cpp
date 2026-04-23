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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTREJECTEDQUESTIONREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTREJECTEDQUESTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/FilterItem.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListRejectedQuestion请求参数结构体
                */
                class ListRejectedQuestionRequest : public AbstractModel
                {
                public:
                    ListRejectedQuestionRequest();
                    ~ListRejectedQuestionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID, 获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * @return BotBizId <p>应用ID, 获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置<p>应用ID, 获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * @param _botBizId <p>应用ID, 获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取<p>页码（必须大于0）</p><p>默认值：1</p>
                     * @return PageNumber <p>页码（必须大于0）</p><p>默认值：1</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码（必须大于0）</p><p>默认值：1</p>
                     * @param _pageNumber <p>页码（必须大于0）</p><p>默认值：1</p>
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
                     * 获取<p>每页数量（取值范围1-200）</p><p>默认值：15</p>
                     * @return PageSize <p>每页数量（取值范围1-200）</p><p>默认值：15</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量（取值范围1-200）</p><p>默认值：15</p>
                     * @param _pageSize <p>每页数量（取值范围1-200）</p><p>默认值：15</p>
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
                     * 获取<p>查询内容</p>
                     * @return Query <p>查询内容</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询内容</p>
                     * @param _query <p>查询内容</p>
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
                     * 获取<p>过滤条件：<br>生效： EnableScope: 1,2,3,4</p>
                     * @return Filters <p>过滤条件：<br>生效： EnableScope: 1,2,3,4</p>
                     * 
                     */
                    std::vector<FilterItem> GetFilters() const;

                    /**
                     * 设置<p>过滤条件：<br>生效： EnableScope: 1,2,3,4</p>
                     * @param _filters <p>过滤条件：<br>生效： EnableScope: 1,2,3,4</p>
                     * 
                     */
                    void SetFilters(const std::vector<FilterItem>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID, 获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * <p>页码（必须大于0）</p><p>默认值：1</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数量（取值范围1-200）</p><p>默认值：15</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>查询内容</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>过滤条件：<br>生效： EnableScope: 1,2,3,4</p>
                     */
                    std::vector<FilterItem> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTREJECTEDQUESTIONREQUEST_H_
