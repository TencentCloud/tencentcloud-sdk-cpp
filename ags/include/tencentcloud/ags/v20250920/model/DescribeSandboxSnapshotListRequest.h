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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESANDBOXSNAPSHOTLISTREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESANDBOXSNAPSHOTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Filter.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeSandboxSnapshotList请求参数结构体
                */
                class DescribeSandboxSnapshotListRequest : public AbstractModel
                {
                public:
                    DescribeSandboxSnapshotListRequest();
                    ~DescribeSandboxSnapshotListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待查询的沙箱快照 ID 列表</p>
                     * @return SnapshotIds <p>待查询的沙箱快照 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置<p>待查询的沙箱快照 ID 列表</p>
                     * @param _snapshotIds <p>待查询的沙箱快照 ID 列表</p>
                     * 
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件</p>
                     * @return Filters <p>过滤条件</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filters <p>过滤条件</p>
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
                     * 获取<p>偏移量，与 NextToken 参数互斥</p>
                     * @return Offset <p>偏移量，与 NextToken 参数互斥</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，与 NextToken 参数互斥</p>
                     * @param _offset <p>偏移量，与 NextToken 参数互斥</p>
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
                     * 获取<p>返回数量上限</p>
                     * @return Limit <p>返回数量上限</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量上限</p>
                     * @param _limit <p>返回数量上限</p>
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
                     * 获取<p>分页偏移 token，与 Offset 参数互斥</p>
                     * @return NextToken <p>分页偏移 token，与 Offset 参数互斥</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>分页偏移 token，与 Offset 参数互斥</p>
                     * @param _nextToken <p>分页偏移 token，与 Offset 参数互斥</p>
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
                     * 获取<p>每次调用返回的最大结果数。如果查询返回的时候有NextToken返回，您可以使用NextToken值获取更多页结果， 当NextToke返回空或者返回的结果数量小于MaxResults时，表示没有更多数据了。允许的最大页面大小为 100。</p>
                     * @return MaxResults <p>每次调用返回的最大结果数。如果查询返回的时候有NextToken返回，您可以使用NextToken值获取更多页结果， 当NextToke返回空或者返回的结果数量小于MaxResults时，表示没有更多数据了。允许的最大页面大小为 100。</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>每次调用返回的最大结果数。如果查询返回的时候有NextToken返回，您可以使用NextToken值获取更多页结果， 当NextToke返回空或者返回的结果数量小于MaxResults时，表示没有更多数据了。允许的最大页面大小为 100。</p>
                     * @param _maxResults <p>每次调用返回的最大结果数。如果查询返回的时候有NextToken返回，您可以使用NextToken值获取更多页结果， 当NextToke返回空或者返回的结果数量小于MaxResults时，表示没有更多数据了。允许的最大页面大小为 100。</p>
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                private:

                    /**
                     * <p>待查询的沙箱快照 ID 列表</p>
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>偏移量，与 NextToken 参数互斥</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量上限</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移 token，与 Offset 参数互斥</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>每次调用返回的最大结果数。如果查询返回的时候有NextToken返回，您可以使用NextToken值获取更多页结果， 当NextToke返回空或者返回的结果数量小于MaxResults时，表示没有更多数据了。允许的最大页面大小为 100。</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBESANDBOXSNAPSHOTLISTREQUEST_H_
