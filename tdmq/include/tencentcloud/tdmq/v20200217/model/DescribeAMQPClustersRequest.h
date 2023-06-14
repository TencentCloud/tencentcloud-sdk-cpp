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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPCLUSTERSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeAMQPClusters请求参数结构体
                */
                class DescribeAMQPClustersRequest : public AbstractModel
                {
                public:
                    DescribeAMQPClustersRequest();
                    ~DescribeAMQPClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取按照集群ID关键字搜索
                     * @return IdKeyword 按照集群ID关键字搜索
                     * 
                     */
                    std::string GetIdKeyword() const;

                    /**
                     * 设置按照集群ID关键字搜索
                     * @param _idKeyword 按照集群ID关键字搜索
                     * 
                     */
                    void SetIdKeyword(const std::string& _idKeyword);

                    /**
                     * 判断参数 IdKeyword 是否已赋值
                     * @return IdKeyword 是否已赋值
                     * 
                     */
                    bool IdKeywordHasBeenSet() const;

                    /**
                     * 获取按照集群名称关键字搜索
                     * @return NameKeyword 按照集群名称关键字搜索
                     * 
                     */
                    std::string GetNameKeyword() const;

                    /**
                     * 设置按照集群名称关键字搜索
                     * @param _nameKeyword 按照集群名称关键字搜索
                     * 
                     */
                    void SetNameKeyword(const std::string& _nameKeyword);

                    /**
                     * 判断参数 NameKeyword 是否已赋值
                     * @return NameKeyword 是否已赋值
                     * 
                     */
                    bool NameKeywordHasBeenSet() const;

                    /**
                     * 获取集群ID列表过滤
                     * @return ClusterIdList 集群ID列表过滤
                     * 
                     */
                    std::vector<std::string> GetClusterIdList() const;

                    /**
                     * 设置集群ID列表过滤
                     * @param _clusterIdList 集群ID列表过滤
                     * 
                     */
                    void SetClusterIdList(const std::vector<std::string>& _clusterIdList);

                    /**
                     * 判断参数 ClusterIdList 是否已赋值
                     * @return ClusterIdList 是否已赋值
                     * 
                     */
                    bool ClusterIdListHasBeenSet() const;

                    /**
                     * 获取标签过滤查找时，需要设置为true
                     * @return IsTagFilter 标签过滤查找时，需要设置为true
                     * 
                     */
                    bool GetIsTagFilter() const;

                    /**
                     * 设置标签过滤查找时，需要设置为true
                     * @param _isTagFilter 标签过滤查找时，需要设置为true
                     * 
                     */
                    void SetIsTagFilter(const bool& _isTagFilter);

                    /**
                     * 判断参数 IsTagFilter 是否已赋值
                     * @return IsTagFilter 是否已赋值
                     * 
                     */
                    bool IsTagFilterHasBeenSet() const;

                    /**
                     * 获取过滤器。目前支持按标签过滤。
                     * @return Filters 过滤器。目前支持按标签过滤。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器。目前支持按标签过滤。
                     * @param _filters 过滤器。目前支持按标签过滤。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 按照集群ID关键字搜索
                     */
                    std::string m_idKeyword;
                    bool m_idKeywordHasBeenSet;

                    /**
                     * 按照集群名称关键字搜索
                     */
                    std::string m_nameKeyword;
                    bool m_nameKeywordHasBeenSet;

                    /**
                     * 集群ID列表过滤
                     */
                    std::vector<std::string> m_clusterIdList;
                    bool m_clusterIdListHasBeenSet;

                    /**
                     * 标签过滤查找时，需要设置为true
                     */
                    bool m_isTagFilter;
                    bool m_isTagFilterHasBeenSet;

                    /**
                     * 过滤器。目前支持按标签过滤。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPCLUSTERSREQUEST_H_
