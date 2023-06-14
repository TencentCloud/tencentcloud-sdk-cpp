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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEREADONLYGROUPSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEREADONLYGROUPSREQUEST_H_

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
                * DescribeReadOnlyGroups请求参数结构体
                */
                class DescribeReadOnlyGroupsRequest : public AbstractModel
                {
                public:
                    DescribeReadOnlyGroupsRequest();
                    ~DescribeReadOnlyGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
db-master-instance-id：按照主实例过滤，类型为string。
read-only-group-id：按照只读组ID过滤，类型为string。
                     * @return Filters 按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
db-master-instance-id：按照主实例过滤，类型为string。
read-only-group-id：按照只读组ID过滤，类型为string。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
db-master-instance-id：按照主实例过滤，类型为string。
read-only-group-id：按照只读组ID过滤，类型为string。
                     * @param _filters 按照一个或者多个过滤条件进行查询，目前支持的过滤条件有：
db-master-instance-id：按照主实例过滤，类型为string。
read-only-group-id：按照只读组ID过滤，类型为string。
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
                     * 获取查询每一页的条数，默认为10
                     * @return PageSize 查询每一页的条数，默认为10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置查询每一页的条数，默认为10
                     * @param _pageSize 查询每一页的条数，默认为10
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取查询的页码，默认为1
                     * @return PageNumber 查询的页码，默认为1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置查询的页码，默认为1
                     * @param _pageNumber 查询的页码，默认为1
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取查询排序依据，目前支持:ROGroupId,CreateTime,Name
                     * @return OrderBy 查询排序依据，目前支持:ROGroupId,CreateTime,Name
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置查询排序依据，目前支持:ROGroupId,CreateTime,Name
                     * @param _orderBy 查询排序依据，目前支持:ROGroupId,CreateTime,Name
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
                     * 获取查询排序依据类型，目前支持:desc,asc
                     * @return OrderByType 查询排序依据类型，目前支持:desc,asc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置查询排序依据类型，目前支持:desc,asc
                     * @param _orderByType 查询排序依据类型，目前支持:desc,asc
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
db-master-instance-id：按照主实例过滤，类型为string。
read-only-group-id：按照只读组ID过滤，类型为string。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询每一页的条数，默认为10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询的页码，默认为1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 查询排序依据，目前支持:ROGroupId,CreateTime,Name
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 查询排序依据类型，目前支持:desc,asc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEREADONLYGROUPSREQUEST_H_
