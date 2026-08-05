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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUERYDASHBOARDSERVICELISTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUERYDASHBOARDSERVICELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>
#include <tencentcloud/dlc/v20210125/model/SortField.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * QueryDashboardServiceList请求参数结构体
                */
                class QueryDashboardServiceListRequest : public AbstractModel
                {
                public:
                    QueryDashboardServiceListRequest();
                    ~QueryDashboardServiceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>页码（默认1）</p>
                     * @return Page <p>页码（默认1）</p>
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置<p>页码（默认1）</p>
                     * @param _page <p>页码（默认1）</p>
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>每页数量（默认20）</p>
                     * @return PageSize <p>每页数量（默认20）</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量（默认20）</p>
                     * @param _pageSize <p>每页数量（默认20）</p>
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
                     * 获取<p>过滤条件。支持的过滤字段：Keyword（服务名称/模型名称模糊搜索）、Status（服务状态精确匹配，如 Running）、Engine（推理引擎匹配，如 vllm，用于 LLM 推理专项 tab，只要服务有至少一个 deployment 的 engine 匹配即返回）、ResourcePartitionId（资源分区精确匹配）</p>
                     * @return Filters <p>过滤条件。支持的过滤字段：Keyword（服务名称/模型名称模糊搜索）、Status（服务状态精确匹配，如 Running）、Engine（推理引擎匹配，如 vllm，用于 LLM 推理专项 tab，只要服务有至少一个 deployment 的 engine 匹配即返回）、ResourcePartitionId（资源分区精确匹配）</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。支持的过滤字段：Keyword（服务名称/模型名称模糊搜索）、Status（服务状态精确匹配，如 Running）、Engine（推理引擎匹配，如 vllm，用于 LLM 推理专项 tab，只要服务有至少一个 deployment 的 engine 匹配即返回）、ResourcePartitionId（资源分区精确匹配）</p>
                     * @param _filters <p>过滤条件。支持的过滤字段：Keyword（服务名称/模型名称模糊搜索）、Status（服务状态精确匹配，如 Running）、Engine（推理引擎匹配，如 vllm，用于 LLM 推理专项 tab，只要服务有至少一个 deployment 的 engine 匹配即返回）、ResourcePartitionId（资源分区精确匹配）</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>排序字段列表（全局排序，支持按指标字段排序）</p>
                     * @return SortFields <p>排序字段列表（全局排序，支持按指标字段排序）</p>
                     * 
                     */
                    std::vector<SortField> GetSortFields() const;

                    /**
                     * 设置<p>排序字段列表（全局排序，支持按指标字段排序）</p>
                     * @param _sortFields <p>排序字段列表（全局排序，支持按指标字段排序）</p>
                     * 
                     */
                    void SetSortFields(const std::vector<SortField>& _sortFields);

                    /**
                     * 判断参数 SortFields 是否已赋值
                     * @return SortFields 是否已赋值
                     * 
                     */
                    bool SortFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>页码（默认1）</p>
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>每页数量（默认20）</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>过滤条件。支持的过滤字段：Keyword（服务名称/模型名称模糊搜索）、Status（服务状态精确匹配，如 Running）、Engine（推理引擎匹配，如 vllm，用于 LLM 推理专项 tab，只要服务有至少一个 deployment 的 engine 匹配即返回）、ResourcePartitionId（资源分区精确匹配）</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序字段列表（全局排序，支持按指标字段排序）</p>
                     */
                    std::vector<SortField> m_sortFields;
                    bool m_sortFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUERYDASHBOARDSERVICELISTREQUEST_H_
