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
                     * 获取按照一个或者多个集群 ID 查询，每次请求的集群上限为 100
                     * @return ClusterIds 按照一个或者多个集群 ID 查询，每次请求的集群上限为 100
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置按照一个或者多个集群 ID 查询，每次请求的集群上限为 100
                     * @param _clusterIds 按照一个或者多个集群 ID 查询，每次请求的集群上限为 100
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
                     * 获取偏移量，默认 0
                     * @return Offset 偏移量，默认 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认 0
                     * @param _offset 偏移量，默认 0
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
                     * 获取请求的集群数量，默认 20，最大值 100
                     * @return Limit 请求的集群数量，默认 20，最大值 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置请求的集群数量，默认 20，最大值 100
                     * @param _limit 请求的集群数量，默认 20，最大值 100
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
                     * 获取集群信息结果排序规则，1 按时间降序，2 按照时间升序，3  按照状态排序
                     * @return OrderType 集群信息结果排序规则，1 按时间降序，2 按照时间升序，3  按照状态排序
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置集群信息结果排序规则，1 按时间降序，2 按照时间升序，3  按照状态排序
                     * @param _orderType 集群信息结果排序规则，1 按时间降序，2 按照时间升序，3  按照状态排序
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
                     * 获取过滤规则
    
- Name
    按照集群的名字进行模糊查询。例如：测试
    类型： String
    必选： 否
    
                     * @return Filters 过滤规则
    
- Name
    按照集群的名字进行模糊查询。例如：测试
    类型： String
    必选： 否
    
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤规则
    
- Name
    按照集群的名字进行模糊查询。例如：测试
    类型： String
    必选： 否
    
                     * @param _filters 过滤规则
    
- Name
    按照集群的名字进行模糊查询。例如：测试
    类型： String
    必选： 否
    
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
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
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
                     * 按照一个或者多个集群 ID 查询，每次请求的集群上限为 100
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 偏移量，默认 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 请求的集群数量，默认 20，最大值 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 集群信息结果排序规则，1 按时间降序，2 按照时间升序，3  按照状态排序
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 过滤规则
    
- Name
    按照集群的名字进行模糊查询。例如：测试
    类型： String
    必选： 否
    
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBECLUSTERSREQUEST_H_
