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
                     * 获取<p>空间ID，查询空间内的插件列表时使用</p>
                     * @return SpaceId <p>空间ID，查询空间内的插件列表时使用</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>空间ID，查询空间内的插件列表时使用</p>
                     * @param _spaceId <p>空间ID，查询空间内的插件列表时使用</p>
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
                     * 获取<p>过滤条件列表，支持 PluginKind、CategoryKey、PluginSource、PluginId、PluginClass、BillingType、AuthType、IsShared、IsCreatedByMe</p>
                     * @return FilterList <p>过滤条件列表，支持 PluginKind、CategoryKey、PluginSource、PluginId、PluginClass、BillingType、AuthType、IsShared、IsCreatedByMe</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>过滤条件列表，支持 PluginKind、CategoryKey、PluginSource、PluginId、PluginClass、BillingType、AuthType、IsShared、IsCreatedByMe</p>
                     * @param _filterList <p>过滤条件列表，支持 PluginKind、CategoryKey、PluginSource、PluginId、PluginClass、BillingType、AuthType、IsShared、IsCreatedByMe</p>
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
                     * 获取<p>是否只返回已收藏插件。取 true 时，仅返回当前用户已收藏的插件；取 false 或不传时不按收藏状态过滤。</p>
                     * @return IsFavoriteOnly <p>是否只返回已收藏插件。取 true 时，仅返回当前用户已收藏的插件；取 false 或不传时不按收藏状态过滤。</p>
                     * 
                     */
                    bool GetIsFavoriteOnly() const;

                    /**
                     * 设置<p>是否只返回已收藏插件。取 true 时，仅返回当前用户已收藏的插件；取 false 或不传时不按收藏状态过滤。</p>
                     * @param _isFavoriteOnly <p>是否只返回已收藏插件。取 true 时，仅返回当前用户已收藏的插件；取 false 或不传时不按收藏状态过滤。</p>
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
                     * 获取<p>插件展示场景。不传或取 0 时不限定场景。</p><p>枚举值：</p><ul><li>0：不限定场景</li><li>1：Agent 模式</li><li>2：工作流</li><li>3：智能工作台</li></ul>
                     * @return Module <p>插件展示场景。不传或取 0 时不限定场景。</p><p>枚举值：</p><ul><li>0：不限定场景</li><li>1：Agent 模式</li><li>2：工作流</li><li>3：智能工作台</li></ul>
                     * 
                     */
                    int64_t GetModule() const;

                    /**
                     * 设置<p>插件展示场景。不传或取 0 时不限定场景。</p><p>枚举值：</p><ul><li>0：不限定场景</li><li>1：Agent 模式</li><li>2：工作流</li><li>3：智能工作台</li></ul>
                     * @param _module <p>插件展示场景。不传或取 0 时不限定场景。</p><p>枚举值：</p><ul><li>0：不限定场景</li><li>1：Agent 模式</li><li>2：工作流</li><li>3：智能工作台</li></ul>
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
                     * 获取<p>页码 从0开始</p>
                     * @return PageNumber <p>页码 从0开始</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码 从0开始</p>
                     * @param _pageNumber <p>页码 从0开始</p>
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
                     * 获取<p>每页大小</p>
                     * @return PageSize <p>每页大小</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页大小</p>
                     * @param _pageSize <p>每页大小</p>
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
                     * 获取<p>查询内容 模糊匹配：插件名称/插件描述/工具名称/工具描述</p>
                     * @return Query <p>查询内容 模糊匹配：插件名称/插件描述/工具名称/工具描述</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询内容 模糊匹配：插件名称/插件描述/工具名称/工具描述</p>
                     * @param _query <p>查询内容 模糊匹配：插件名称/插件描述/工具名称/工具描述</p>
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
                     * 获取<p>排序方式。</p><p>枚举值：</p><ul><li>0：未指定，默认排序</li><li>1：按相关性排序</li><li>2：按更新时间排序</li><li>3：默认排序</li><li>4：按热度排序</li></ul>
                     * @return SortType <p>排序方式。</p><p>枚举值：</p><ul><li>0：未指定，默认排序</li><li>1：按相关性排序</li><li>2：按更新时间排序</li><li>3：默认排序</li><li>4：按热度排序</li></ul>
                     * 
                     */
                    int64_t GetSortType() const;

                    /**
                     * 设置<p>排序方式。</p><p>枚举值：</p><ul><li>0：未指定，默认排序</li><li>1：按相关性排序</li><li>2：按更新时间排序</li><li>3：默认排序</li><li>4：按热度排序</li></ul>
                     * @param _sortType <p>排序方式。</p><p>枚举值：</p><ul><li>0：未指定，默认排序</li><li>1：按相关性排序</li><li>2：按更新时间排序</li><li>3：默认排序</li><li>4：按热度排序</li></ul>
                     * 
                     */
                    void SetSortType(const int64_t& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取<p>筛选当前空间/企业共享插件</p><p>取值范围：[0, 2]</p>
                     * @return PluginSpaceRelation <p>筛选当前空间/企业共享插件</p><p>取值范围：[0, 2]</p>
                     * 
                     */
                    int64_t GetPluginSpaceRelation() const;

                    /**
                     * 设置<p>筛选当前空间/企业共享插件</p><p>取值范围：[0, 2]</p>
                     * @param _pluginSpaceRelation <p>筛选当前空间/企业共享插件</p><p>取值范围：[0, 2]</p>
                     * 
                     */
                    void SetPluginSpaceRelation(const int64_t& _pluginSpaceRelation);

                    /**
                     * 判断参数 PluginSpaceRelation 是否已赋值
                     * @return PluginSpaceRelation 是否已赋值
                     * 
                     */
                    bool PluginSpaceRelationHasBeenSet() const;

                private:

                    /**
                     * <p>空间ID，查询空间内的插件列表时使用</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>过滤条件列表，支持 PluginKind、CategoryKey、PluginSource、PluginId、PluginClass、BillingType、AuthType、IsShared、IsCreatedByMe</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>是否只返回已收藏插件。取 true 时，仅返回当前用户已收藏的插件；取 false 或不传时不按收藏状态过滤。</p>
                     */
                    bool m_isFavoriteOnly;
                    bool m_isFavoriteOnlyHasBeenSet;

                    /**
                     * <p>插件展示场景。不传或取 0 时不限定场景。</p><p>枚举值：</p><ul><li>0：不限定场景</li><li>1：Agent 模式</li><li>2：工作流</li><li>3：智能工作台</li></ul>
                     */
                    int64_t m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>页码 从0开始</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页大小</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>查询内容 模糊匹配：插件名称/插件描述/工具名称/工具描述</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>排序方式。</p><p>枚举值：</p><ul><li>0：未指定，默认排序</li><li>1：按相关性排序</li><li>2：按更新时间排序</li><li>3：默认排序</li><li>4：按热度排序</li></ul>
                     */
                    int64_t m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>筛选当前空间/企业共享插件</p><p>取值范围：[0, 2]</p>
                     */
                    int64_t m_pluginSpaceRelation;
                    bool m_pluginSpaceRelationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINSUMMARYLISTREQUEST_H_
