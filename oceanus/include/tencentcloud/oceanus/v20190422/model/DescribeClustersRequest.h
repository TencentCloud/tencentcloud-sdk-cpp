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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBECLUSTERSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Filter.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
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
                     * 获取<p>按照一个或者多个集群 ID 查询，每次请求的集群上限为 100</p>
                     * @return ClusterIds <p>按照一个或者多个集群 ID 查询，每次请求的集群上限为 100</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置<p>按照一个或者多个集群 ID 查询，每次请求的集群上限为 100</p>
                     * @param _clusterIds <p>按照一个或者多个集群 ID 查询，每次请求的集群上限为 100</p>
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
                     * 获取<p>偏移量，默认 0</p>
                     * @return Offset <p>偏移量，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认 0</p>
                     * @param _offset <p>偏移量，默认 0</p>
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
                     * 获取<p>请求的集群数量，默认 20，最大值 100</p>
                     * @return Limit <p>请求的集群数量，默认 20，最大值 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>请求的集群数量，默认 20，最大值 100</p>
                     * @param _limit <p>请求的集群数量，默认 20，最大值 100</p>
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
                     * 获取<p>集群信息结果排序规则，1 按时间降序，2 按照时间升序，3  按照状态排序</p>
                     * @return OrderType <p>集群信息结果排序规则，1 按时间降序，2 按照时间升序，3  按照状态排序</p>
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置<p>集群信息结果排序规则，1 按时间降序，2 按照时间升序，3  按照状态排序</p>
                     * @param _orderType <p>集群信息结果排序规则，1 按时间降序，2 按照时间升序，3  按照状态排序</p>
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>过滤规则</p><ul><li>Name<br>  按照集群的名字进行模糊查询。例如：测试<br>  类型： String<br>  必选： 否</li></ul>
                     * @return Filters <p>过滤规则</p><ul><li>Name<br>  按照集群的名字进行模糊查询。例如：测试<br>  类型： String<br>  必选： 否</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤规则</p><ul><li>Name<br>  按照集群的名字进行模糊查询。例如：测试<br>  类型： String<br>  必选： 否</li></ul>
                     * @param _filters <p>过滤规则</p><ul><li>Name<br>  按照集群的名字进行模糊查询。例如：测试<br>  类型： String<br>  必选： 否</li></ul>
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
                     * 获取<p>工作空间 SerialId</p>
                     * @return WorkSpaceId <p>工作空间 SerialId</p>
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置<p>工作空间 SerialId</p>
                     * @param _workSpaceId <p>工作空间 SerialId</p>
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * <p>按照一个或者多个集群 ID 查询，每次请求的集群上限为 100</p>
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * <p>偏移量，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>请求的集群数量，默认 20，最大值 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>集群信息结果排序规则，1 按时间降序，2 按照时间升序，3  按照状态排序</p>
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>过滤规则</p><ul><li>Name<br>  按照集群的名字进行模糊查询。例如：测试<br>  类型： String<br>  必选： 否</li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>工作空间 SerialId</p>
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBECLUSTERSREQUEST_H_
