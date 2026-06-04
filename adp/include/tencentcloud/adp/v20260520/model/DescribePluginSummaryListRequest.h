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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINSUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINSUMMARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribePluginSummaryList请求参数结构体
                */
                class DescribePluginSummaryListRequest : public AbstractModel
                {
                public:
                    DescribePluginSummaryListRequest();
                    ~DescribePluginSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID，查询空间内的插件列表时使用
                     * @return SpaceId 空间ID，查询空间内的插件列表时使用
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间ID，查询空间内的插件列表时使用
                     * @param _spaceId 空间ID，查询空间内的插件列表时使用
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取过滤条件列表 支持：PluginKind、CategoryKey、PluginSource、PluginId、PluginClass、BillingType
                     * @return FilterList 过滤条件列表 支持：PluginKind、CategoryKey、PluginSource、PluginId、PluginClass、BillingType
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置过滤条件列表 支持：PluginKind、CategoryKey、PluginSource、PluginId、PluginClass、BillingType
                     * @param _filterList 过滤条件列表 支持：PluginKind、CategoryKey、PluginSource、PluginId、PluginClass、BillingType
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
                     * 获取true-筛选收藏的插件，false不过滤
                     * @return IsFavoriteOnly true-筛选收藏的插件，false不过滤
                     * 
                     */
                    bool GetIsFavoriteOnly() const;

                    /**
                     * 设置true-筛选收藏的插件，false不过滤
                     * @param _isFavoriteOnly true-筛选收藏的插件，false不过滤
                     * 
                     */
                    void SetIsFavoriteOnly(const bool& _isFavoriteOnly);

                    /**
                     * 判断参数 IsFavoriteOnly 是否已赋值
                     * @return IsFavoriteOnly 是否已赋值
                     * 
                     */
                    bool IsFavoriteOnlyHasBeenSet() const;

                    /**
                     * 获取module

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 所有模块 |
| 1 | agent模式模块 |
| 2 | 工作流模块 |
| 3 | 企业员工助理模块 |
                     * @return Module module

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 所有模块 |
| 1 | agent模式模块 |
| 2 | 工作流模块 |
| 3 | 企业员工助理模块 |
                     * 
                     */
                    int64_t GetModule() const;

                    /**
                     * 设置module

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 所有模块 |
| 1 | agent模式模块 |
| 2 | 工作流模块 |
| 3 | 企业员工助理模块 |
                     * @param _module module

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 所有模块 |
| 1 | agent模式模块 |
| 2 | 工作流模块 |
| 3 | 企业员工助理模块 |
                     * 
                     */
                    void SetModule(const int64_t& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取页码 从0开始
                     * @return PageNumber 页码 从0开始
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码 从0开始
                     * @param _pageNumber 页码 从0开始
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
                     * 获取每页大小
                     * @return PageSize 每页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页大小
                     * @param _pageSize 每页大小
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
                     * 获取查询内容 模糊匹配：插件名称/插件描述/工具名称/工具描述
                     * @return Query 查询内容 模糊匹配：插件名称/插件描述/工具名称/工具描述
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询内容 模糊匹配：插件名称/插件描述/工具名称/工具描述
                     * @param _query 查询内容 模糊匹配：插件名称/插件描述/工具名称/工具描述
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
                     * 获取排序类型，仅搜索场景有效

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 未指定，使用默认行为 |
| 1 | 按相关性排序 |
| 2 | 按更新时间排序 |
                     * @return SortType 排序类型，仅搜索场景有效

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 未指定，使用默认行为 |
| 1 | 按相关性排序 |
| 2 | 按更新时间排序 |
                     * 
                     */
                    int64_t GetSortType() const;

                    /**
                     * 设置排序类型，仅搜索场景有效

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 未指定，使用默认行为 |
| 1 | 按相关性排序 |
| 2 | 按更新时间排序 |
                     * @param _sortType 排序类型，仅搜索场景有效

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 未指定，使用默认行为 |
| 1 | 按相关性排序 |
| 2 | 按更新时间排序 |
                     * 
                     */
                    void SetSortType(const int64_t& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                private:

                    /**
                     * 空间ID，查询空间内的插件列表时使用
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 过滤条件列表 支持：PluginKind、CategoryKey、PluginSource、PluginId、PluginClass、BillingType
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * true-筛选收藏的插件，false不过滤
                     */
                    bool m_isFavoriteOnly;
                    bool m_isFavoriteOnlyHasBeenSet;

                    /**
                     * module

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 所有模块 |
| 1 | agent模式模块 |
| 2 | 工作流模块 |
| 3 | 企业员工助理模块 |
                     */
                    int64_t m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 页码 从0开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询内容 模糊匹配：插件名称/插件描述/工具名称/工具描述
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 排序类型，仅搜索场景有效

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 未指定，使用默认行为 |
| 1 | 按相关性排序 |
| 2 | 按更新时间排序 |
                     */
                    int64_t m_sortType;
                    bool m_sortTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINSUMMARYLISTREQUEST_H_
