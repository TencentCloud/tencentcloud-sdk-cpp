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

#ifndef TENCENTCLOUD_CLOUDRC_V20240606_MODEL_SEARCHRESOURCESREQUEST_H_
#define TENCENTCLOUD_CLOUDRC_V20240606_MODEL_SEARCHRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudrc/v20240606/model/ExtendedFilter.h>


namespace TencentCloud
{
    namespace Cloudrc
    {
        namespace V20240606
        {
            namespace Model
            {
                /**
                * SearchResources请求参数结构体
                */
                class SearchResourcesRequest : public AbstractModel
                {
                public:
                    SearchResourcesRequest();
                    ~SearchResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>视图ID</p>
                     * @return ViewId <p>视图ID</p>
                     * 
                     */
                    std::string GetViewId() const;

                    /**
                     * 设置<p>视图ID</p>
                     * @param _viewId <p>视图ID</p>
                     * 
                     */
                    void SetViewId(const std::string& _viewId);

                    /**
                     * 判断参数 ViewId 是否已赋值
                     * @return ViewId 是否已赋值
                     * 
                     */
                    bool ViewIdHasBeenSet() const;

                    /**
                     * 获取<p>每页返回的最大记录数</p>
                     * @return MaxResults <p>每页返回的最大记录数</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>每页返回的最大记录数</p>
                     * @param _maxResults <p>每页返回的最大记录数</p>
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>分页Token，首次查询不传</p>
                     * @return NextToken <p>分页Token，首次查询不传</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>分页Token，首次查询不传</p>
                     * @param _nextToken <p>分页Token，首次查询不传</p>
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件列表</p>
                     * @return Filters <p>过滤条件列表</p>
                     * 
                     */
                    std::vector<ExtendedFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件列表</p>
                     * @param _filters <p>过滤条件列表</p>
                     * 
                     */
                    void SetFilters(const std::vector<ExtendedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>排序条件</p><p>枚举值：</p><ul><li>CreateTime： 表示按资源创建时间排序</li><li>ExpireTime： 表示按资源到期时间排序</li><li>IpAddress： 表示按资源IP地址排序</li></ul>
                     * @return SortBy <p>排序条件</p><p>枚举值：</p><ul><li>CreateTime： 表示按资源创建时间排序</li><li>ExpireTime： 表示按资源到期时间排序</li><li>IpAddress： 表示按资源IP地址排序</li></ul>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序条件</p><p>枚举值：</p><ul><li>CreateTime： 表示按资源创建时间排序</li><li>ExpireTime： 表示按资源到期时间排序</li><li>IpAddress： 表示按资源IP地址排序</li></ul>
                     * @param _sortBy <p>排序条件</p><p>枚举值：</p><ul><li>CreateTime： 表示按资源创建时间排序</li><li>ExpireTime： 表示按资源到期时间排序</li><li>IpAddress： 表示按资源IP地址排序</li></ul>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>排序顺序</p><p>枚举值：</p><ul><li>Asc： 升序</li><li>Desc： 降序</li></ul><p>默认值：Asc</p>
                     * @return SortOrder <p>排序顺序</p><p>枚举值：</p><ul><li>Asc： 升序</li><li>Desc： 降序</li></ul><p>默认值：Asc</p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>排序顺序</p><p>枚举值：</p><ul><li>Asc： 升序</li><li>Desc： 降序</li></ul><p>默认值：Asc</p>
                     * @param _sortOrder <p>排序顺序</p><p>枚举值：</p><ul><li>Asc： 升序</li><li>Desc： 降序</li></ul><p>默认值：Asc</p>
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * <p>视图ID</p>
                     */
                    std::string m_viewId;
                    bool m_viewIdHasBeenSet;

                    /**
                     * <p>每页返回的最大记录数</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>分页Token，首次查询不传</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>过滤条件列表</p>
                     */
                    std::vector<ExtendedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序条件</p><p>枚举值：</p><ul><li>CreateTime： 表示按资源创建时间排序</li><li>ExpireTime： 表示按资源到期时间排序</li><li>IpAddress： 表示按资源IP地址排序</li></ul>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>排序顺序</p><p>枚举值：</p><ul><li>Asc： 升序</li><li>Desc： 降序</li></ul><p>默认值：Asc</p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDRC_V20240606_MODEL_SEARCHRESOURCESREQUEST_H_
