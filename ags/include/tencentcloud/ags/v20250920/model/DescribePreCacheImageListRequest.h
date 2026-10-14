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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEPRECACHEIMAGELISTREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEPRECACHEIMAGELISTREQUEST_H_

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
                * DescribePreCacheImageList请求参数结构体
                */
                class DescribePreCacheImageListRequest : public AbstractModel
                {
                public:
                    DescribePreCacheImageListRequest();
                    ~DescribePreCacheImageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询过滤条件。支持 Image, ImageDigest, ImageRegistryType, Status, SourceType；不同 Filter 之间为 AND，同一 Filter 的 Values 之间为 OR。</p>
                     * @return Filters <p>查询过滤条件。支持 Image, ImageDigest, ImageRegistryType, Status, SourceType；不同 Filter 之间为 AND，同一 Filter 的 Values 之间为 OR。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查询过滤条件。支持 Image, ImageDigest, ImageRegistryType, Status, SourceType；不同 Filter 之间为 AND，同一 Filter 的 Values 之间为 OR。</p>
                     * @param _filters <p>查询过滤条件。支持 Image, ImageDigest, ImageRegistryType, Status, SourceType；不同 Filter 之间为 AND，同一 Filter 的 Values 之间为 OR。</p>
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
                     * 获取<p>返回数据列数</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @return MaxResults <p>返回数据列数</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>返回数据列数</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @param _maxResults <p>返回数据列数</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
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
                     * 获取<p>NextToken是每个页面唯一的分页令牌。使用返回的令牌再次调用以检索下一页。需要保持所有其他参数不变。</p>
                     * @return NextToken <p>NextToken是每个页面唯一的分页令牌。使用返回的令牌再次调用以检索下一页。需要保持所有其他参数不变。</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>NextToken是每个页面唯一的分页令牌。使用返回的令牌再次调用以检索下一页。需要保持所有其他参数不变。</p>
                     * @param _nextToken <p>NextToken是每个页面唯一的分页令牌。使用返回的令牌再次调用以检索下一页。需要保持所有其他参数不变。</p>
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
                     * 获取<p>默认 false；仅控制是否返回精确总数</p>
                     * @return NeedTotalCount <p>默认 false；仅控制是否返回精确总数</p>
                     * 
                     */
                    bool GetNeedTotalCount() const;

                    /**
                     * 设置<p>默认 false；仅控制是否返回精确总数</p>
                     * @param _needTotalCount <p>默认 false；仅控制是否返回精确总数</p>
                     * 
                     */
                    void SetNeedTotalCount(const bool& _needTotalCount);

                    /**
                     * 判断参数 NeedTotalCount 是否已赋值
                     * @return NeedTotalCount 是否已赋值
                     * 
                     */
                    bool NeedTotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>查询过滤条件。支持 Image, ImageDigest, ImageRegistryType, Status, SourceType；不同 Filter 之间为 AND，同一 Filter 的 Values 之间为 OR。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>返回数据列数</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>NextToken是每个页面唯一的分页令牌。使用返回的令牌再次调用以检索下一页。需要保持所有其他参数不变。</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>默认 false；仅控制是否返回精确总数</p>
                     */
                    bool m_needTotalCount;
                    bool m_needTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEPRECACHEIMAGELISTREQUEST_H_
