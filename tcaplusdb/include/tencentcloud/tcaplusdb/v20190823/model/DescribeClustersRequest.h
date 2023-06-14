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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBECLUSTERSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/Filter.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeClusters请求参数结构体
                */
                class DescribeClustersRequest : public AbstractModel
                {
                public:
                    DescribeClustersRequest();
                    ~DescribeClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定查询的集群ID列表
                     * @return ClusterIds 指定查询的集群ID列表
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置指定查询的集群ID列表
                     * @param _clusterIds 指定查询的集群ID列表
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取查询过滤条件
                     * @return Filters 查询过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询过滤条件
                     * @param _filters 查询过滤条件
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
                     * 获取查询列表偏移量
                     * @return Offset 查询列表偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询列表偏移量
                     * @param _offset 查询列表偏移量
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
                     * 获取查询列表返回记录数，默认值20
                     * @return Limit 查询列表返回记录数，默认值20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询列表返回记录数，默认值20
                     * @param _limit 查询列表返回记录数，默认值20
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
                     * 获取是否启用Ipv6
                     * @return Ipv6Enable 是否启用Ipv6
                     * 
                     */
                    int64_t GetIpv6Enable() const;

                    /**
                     * 设置是否启用Ipv6
                     * @param _ipv6Enable 是否启用Ipv6
                     * 
                     */
                    void SetIpv6Enable(const int64_t& _ipv6Enable);

                    /**
                     * 判断参数 Ipv6Enable 是否已赋值
                     * @return Ipv6Enable 是否已赋值
                     * 
                     */
                    bool Ipv6EnableHasBeenSet() const;

                private:

                    /**
                     * 指定查询的集群ID列表
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 查询过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询列表偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询列表返回记录数，默认值20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否启用Ipv6
                     */
                    int64_t m_ipv6Enable;
                    bool m_ipv6EnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBECLUSTERSREQUEST_H_
