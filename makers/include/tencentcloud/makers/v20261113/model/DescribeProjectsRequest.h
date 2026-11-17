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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEPROJECTSREQUEST_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/ProjectFilter.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * DescribeProjects请求参数结构体
                */
                class DescribeProjectsRequest : public AbstractModel
                {
                public:
                    DescribeProjectsRequest();
                    ~DescribeProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Makers 站点 ID</p>
                     * @return ZoneId <p>Makers 站点 ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Makers 站点 ID</p>
                     * @param _zoneId <p>Makers 站点 ID</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>页码偏移，从 0 开始。后端跳过 Offset * Limit 条</p>
                     * @return Offset <p>页码偏移，从 0 开始。后端跳过 Offset * Limit 条</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>页码偏移，从 0 开始。后端跳过 Offset * Limit 条</p>
                     * @param _offset <p>页码偏移，从 0 开始。后端跳过 Offset * Limit 条</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页数量，最大 100</p>
                     * @return Limit <p>每页数量，最大 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，最大 100</p>
                     * @param _limit <p>每页数量，最大 100</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件。Name 取值 ProjectId、Name、Status、Provider</p>
                     * @return Filters <p>过滤条件。Name 取值 ProjectId、Name、Status、Provider</p>
                     * 
                     */
                    std::vector<ProjectFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。Name 取值 ProjectId、Name、Status、Provider</p>
                     * @param _filters <p>过滤条件。Name 取值 ProjectId、Name、Status、Provider</p>
                     * 
                     */
                    void SetFilters(const std::vector<ProjectFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>按项目 ID 查询</p>
                     * @return ProjectIds <p>按项目 ID 查询</p>
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置<p>按项目 ID 查询</p>
                     * @param _projectIds <p>按项目 ID 查询</p>
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取<p>排序字段。CreatedOn、ModifiedOn。默认 CreatedOn</p>
                     * @return OrderBy <p>排序字段。CreatedOn、ModifiedOn。默认 CreatedOn</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段。CreatedOn、ModifiedOn。默认 CreatedOn</p>
                     * @param _orderBy <p>排序字段。CreatedOn、ModifiedOn。默认 CreatedOn</p>
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
                     * 获取<p>排序方向。Asc、Desc、ASC、DESC。默认 DESC</p>
                     * @return OrderType <p>排序方向。Asc、Desc、ASC、DESC。默认 DESC</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>排序方向。Asc、Desc、ASC、DESC。默认 DESC</p>
                     * @param _orderType <p>排序方向。Asc、Desc、ASC、DESC。默认 DESC</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>来源。drop 时只返回 Upload 项目</p>
                     * @return Source <p>来源。drop 时只返回 Upload 项目</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>来源。drop 时只返回 Upload 项目</p>
                     * @param _source <p>来源。drop 时只返回 Upload 项目</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>按项目名称模糊搜索</p>
                     * @return Query <p>按项目名称模糊搜索</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>按项目名称模糊搜索</p>
                     * @param _query <p>按项目名称模糊搜索</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * <p>Makers 站点 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>页码偏移，从 0 开始。后端跳过 Offset * Limit 条</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量，最大 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件。Name 取值 ProjectId、Name、Status、Provider</p>
                     */
                    std::vector<ProjectFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>按项目 ID 查询</p>
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>排序字段。CreatedOn、ModifiedOn。默认 CreatedOn</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序方向。Asc、Desc、ASC、DESC。默认 DESC</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>来源。drop 时只返回 Upload 项目</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>按项目名称模糊搜索</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEPROJECTSREQUEST_H_
