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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESERVERLESSDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESERVERLESSDBINSTANCESREQUEST_H_

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
                * DescribeServerlessDBInstances请求参数结构体
                */
                class DescribeServerlessDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeServerlessDBInstancesRequest();
                    ~DescribeServerlessDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询条件。按照一个或者多个过滤条件进行查询，目前支持的过滤条件类型（name字段指定）有： 

- db-instance-id：按照实例ID过滤，类型为string
- db-instance-name：按照实例名过滤，类型为string
- db-tag-key：按照实例的tag过滤，类型为string

value字段指定该类型过滤条件下具体要过滤的实例ID/实例名/实例tag-key。
                     * @return Filter 查询条件。按照一个或者多个过滤条件进行查询，目前支持的过滤条件类型（name字段指定）有： 

- db-instance-id：按照实例ID过滤，类型为string
- db-instance-name：按照实例名过滤，类型为string
- db-tag-key：按照实例的tag过滤，类型为string

value字段指定该类型过滤条件下具体要过滤的实例ID/实例名/实例tag-key。
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置查询条件。按照一个或者多个过滤条件进行查询，目前支持的过滤条件类型（name字段指定）有： 

- db-instance-id：按照实例ID过滤，类型为string
- db-instance-name：按照实例名过滤，类型为string
- db-tag-key：按照实例的tag过滤，类型为string

value字段指定该类型过滤条件下具体要过滤的实例ID/实例名/实例tag-key。
                     * @param _filter 查询条件。按照一个或者多个过滤条件进行查询，目前支持的过滤条件类型（name字段指定）有： 

- db-instance-id：按照实例ID过滤，类型为string
- db-instance-name：按照实例名过滤，类型为string
- db-tag-key：按照实例的tag过滤，类型为string

value字段指定该类型过滤条件下具体要过滤的实例ID/实例名/实例tag-key。
                     * 
                     */
                    void SetFilter(const std::vector<Filter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取查询个数
                     * @return Limit 查询个数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询个数
                     * @param _limit 查询个数
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
                     * 获取排序指标，目前支持实例创建时间CreateTime
                     * @return OrderBy 排序指标，目前支持实例创建时间CreateTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序指标，目前支持实例创建时间CreateTime
                     * @param _orderBy 排序指标，目前支持实例创建时间CreateTime
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
                     * 获取排序方式，包括升序、降序
                     * @return OrderByType 排序方式，包括升序、降序
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，包括升序、降序
                     * @param _orderByType 排序方式，包括升序、降序
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
                     * 查询条件。按照一个或者多个过滤条件进行查询，目前支持的过滤条件类型（name字段指定）有： 

- db-instance-id：按照实例ID过滤，类型为string
- db-instance-name：按照实例名过滤，类型为string
- db-tag-key：按照实例的tag过滤，类型为string

value字段指定该类型过滤条件下具体要过滤的实例ID/实例名/实例tag-key。
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 查询个数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序指标，目前支持实例创建时间CreateTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，包括升序、降序
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESERVERLESSDBINSTANCESREQUEST_H_
