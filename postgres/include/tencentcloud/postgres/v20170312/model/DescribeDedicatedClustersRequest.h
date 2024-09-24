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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDEDICATEDCLUSTERSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDEDICATEDCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusters请求参数结构体
                */
                class DescribeDedicatedClustersRequest : public AbstractModel
                {
                public:
                    DescribeDedicatedClustersRequest();
                    ~DescribeDedicatedClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
dedicated-cluster-id: 按照专属集群ID筛选，类型为string
                     * @return Filters 按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
dedicated-cluster-id: 按照专属集群ID筛选，类型为string
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
dedicated-cluster-id: 按照专属集群ID筛选，类型为string
                     * @param _filters 按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
dedicated-cluster-id: 按照专属集群ID筛选，类型为string
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
                     * 按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
dedicated-cluster-id: 按照专属集群ID筛选，类型为string
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDEDICATEDCLUSTERSREQUEST_H_
