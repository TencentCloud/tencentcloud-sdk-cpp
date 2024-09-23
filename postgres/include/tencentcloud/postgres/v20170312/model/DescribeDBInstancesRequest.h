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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

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
                * DescribeDBInstances请求参数结构体
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
db-instance-id：按照实例ID过滤，类型为string
db-instance-name：按照实例名过滤，类型为string
db-project-id：按照项目ID过滤，类型为integer
db-pay-mode：按照实例付费模式过滤，类型为string
db-tag-key：按照标签键过滤，类型为string
db-private-ip： 按照实例私有网络IP过滤，类型为string
db-public-address： 按照实例外网地址过滤，类型为string
db-dedicated-cluster-id: 按照私有集群Id过滤，类型为string
                     * @return Filters 按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
db-instance-id：按照实例ID过滤，类型为string
db-instance-name：按照实例名过滤，类型为string
db-project-id：按照项目ID过滤，类型为integer
db-pay-mode：按照实例付费模式过滤，类型为string
db-tag-key：按照标签键过滤，类型为string
db-private-ip： 按照实例私有网络IP过滤，类型为string
db-public-address： 按照实例外网地址过滤，类型为string
db-dedicated-cluster-id: 按照私有集群Id过滤，类型为string
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
db-instance-id：按照实例ID过滤，类型为string
db-instance-name：按照实例名过滤，类型为string
db-project-id：按照项目ID过滤，类型为integer
db-pay-mode：按照实例付费模式过滤，类型为string
db-tag-key：按照标签键过滤，类型为string
db-private-ip： 按照实例私有网络IP过滤，类型为string
db-public-address： 按照实例外网地址过滤，类型为string
db-dedicated-cluster-id: 按照私有集群Id过滤，类型为string
                     * @param _filters 按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
db-instance-id：按照实例ID过滤，类型为string
db-instance-name：按照实例名过滤，类型为string
db-project-id：按照项目ID过滤，类型为integer
db-pay-mode：按照实例付费模式过滤，类型为string
db-tag-key：按照标签键过滤，类型为string
db-private-ip： 按照实例私有网络IP过滤，类型为string
db-public-address： 按照实例外网地址过滤，类型为string
db-dedicated-cluster-id: 按照私有集群Id过滤，类型为string
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
                     * 获取每页显示数量，取值范围为1-100，默认为返回10条。
                     * @return Limit 每页显示数量，取值范围为1-100，默认为返回10条。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页显示数量，取值范围为1-100，默认为返回10条。
                     * @param _limit 每页显示数量，取值范围为1-100，默认为返回10条。
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
                     * 获取数据偏移量，从0开始。
                     * @return Offset 数据偏移量，从0开始。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，从0开始。
                     * @param _offset 数据偏移量，从0开始。
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
                     * 获取排序指标，如实例名、创建时间等，支持DBInstanceId,CreateTime,Name,EndTime
                     * @return OrderBy 排序指标，如实例名、创建时间等，支持DBInstanceId,CreateTime,Name,EndTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序指标，如实例名、创建时间等，支持DBInstanceId,CreateTime,Name,EndTime
                     * @param _orderBy 排序指标，如实例名、创建时间等，支持DBInstanceId,CreateTime,Name,EndTime
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
                     * 获取排序方式，包括升序：asc、降序：desc。
                     * @return OrderByType 排序方式，包括升序：asc、降序：desc。
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，包括升序：asc、降序：desc。
                     * @param _orderByType 排序方式，包括升序：asc、降序：desc。
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
db-instance-id：按照实例ID过滤，类型为string
db-instance-name：按照实例名过滤，类型为string
db-project-id：按照项目ID过滤，类型为integer
db-pay-mode：按照实例付费模式过滤，类型为string
db-tag-key：按照标签键过滤，类型为string
db-private-ip： 按照实例私有网络IP过滤，类型为string
db-public-address： 按照实例外网地址过滤，类型为string
db-dedicated-cluster-id: 按照私有集群Id过滤，类型为string
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 每页显示数量，取值范围为1-100，默认为返回10条。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据偏移量，从0开始。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序指标，如实例名、创建时间等，支持DBInstanceId,CreateTime,Name,EndTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，包括升序：asc、降序：desc。
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
