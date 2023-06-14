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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeTKEEdgeClusters请求参数结构体
                */
                class DescribeTKEEdgeClustersRequest : public AbstractModel
                {
                public:
                    DescribeTKEEdgeClustersRequest();
                    ~DescribeTKEEdgeClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID列表(为空时，
表示获取账号下所有集群)
                     * @return ClusterIds 集群ID列表(为空时，
表示获取账号下所有集群)
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置集群ID列表(为空时，
表示获取账号下所有集群)
                     * @param _clusterIds 集群ID列表(为空时，
表示获取账号下所有集群)
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
                     * 获取偏移量,默认0
                     * @return Offset 偏移量,默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认0
                     * @param _offset 偏移量,默认0
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
                     * 获取最大输出条数，默认20
                     * @return Limit 最大输出条数，默认20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置最大输出条数，默认20
                     * @param _limit 最大输出条数，默认20
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
                     * 获取过滤条件,当前只支持按照ClusterName和云标签进行过滤,云标签过滤格式Tags:["key1:value1","key2:value2"]
                     * @return Filters 过滤条件,当前只支持按照ClusterName和云标签进行过滤,云标签过滤格式Tags:["key1:value1","key2:value2"]
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件,当前只支持按照ClusterName和云标签进行过滤,云标签过滤格式Tags:["key1:value1","key2:value2"]
                     * @param _filters 过滤条件,当前只支持按照ClusterName和云标签进行过滤,云标签过滤格式Tags:["key1:value1","key2:value2"]
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
                     * 集群ID列表(为空时，
表示获取账号下所有集群)
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 偏移量,默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大输出条数，默认20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件,当前只支持按照ClusterName和云标签进行过滤,云标签过滤格式Tags:["key1:value1","key2:value2"]
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERSREQUEST_H_
