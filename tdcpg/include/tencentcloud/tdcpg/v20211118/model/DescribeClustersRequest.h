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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERSREQUEST_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdcpg/v20211118/model/Filter.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
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
                     * 获取页码，取值范围为[1,INF)，默认值为1
                     * @return PageNumber 页码，取值范围为[1,INF)，默认值为1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，取值范围为[1,INF)，默认值为1
                     * @param _pageNumber 页码，取值范围为[1,INF)，默认值为1
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页条数，取值范围为默认为[1,100]，默认值为20
                     * @return PageSize 每页条数，取值范围为默认为[1,100]，默认值为20
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页条数，取值范围为默认为[1,100]，默认值为20
                     * @param _pageSize 每页条数，取值范围为默认为[1,100]，默认值为20
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取目前支持查询条件包括：
 - ClusterId : 集群ID
 - ClusterName : 集群名
 - ProjectId : 项目ID
 - Status : 集群状态
 - PayMode : 付费模式
                     * @return Filters 目前支持查询条件包括：
 - ClusterId : 集群ID
 - ClusterName : 集群名
 - ProjectId : 项目ID
 - Status : 集群状态
 - PayMode : 付费模式
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置目前支持查询条件包括：
 - ClusterId : 集群ID
 - ClusterName : 集群名
 - ProjectId : 项目ID
 - Status : 集群状态
 - PayMode : 付费模式
                     * @param _filters 目前支持查询条件包括：
 - ClusterId : 集群ID
 - ClusterName : 集群名
 - ProjectId : 项目ID
 - Status : 集群状态
 - PayMode : 付费模式
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
                     * 获取排序字段，可选字段：
 - CreateTime : 集群创建时间(默认值)
 - PayPeriodEndTime : 集群过期时间
                     * @return OrderBy 排序字段，可选字段：
 - CreateTime : 集群创建时间(默认值)
 - PayPeriodEndTime : 集群过期时间
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，可选字段：
 - CreateTime : 集群创建时间(默认值)
 - PayPeriodEndTime : 集群过期时间
                     * @param _orderBy 排序字段，可选字段：
 - CreateTime : 集群创建时间(默认值)
 - PayPeriodEndTime : 集群过期时间
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
                     * 获取排序方式，可选字段：
 - DESC : 降序(默认值)
 - ASC : 升序
                     * @return OrderByType 排序方式，可选字段：
 - DESC : 降序(默认值)
 - ASC : 升序
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，可选字段：
 - DESC : 降序(默认值)
 - ASC : 升序
                     * @param _orderByType 排序方式，可选字段：
 - DESC : 降序(默认值)
 - ASC : 升序
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
                     * 页码，取值范围为[1,INF)，默认值为1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页条数，取值范围为默认为[1,100]，默认值为20
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 目前支持查询条件包括：
 - ClusterId : 集群ID
 - ClusterName : 集群名
 - ProjectId : 项目ID
 - Status : 集群状态
 - PayMode : 付费模式
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段，可选字段：
 - CreateTime : 集群创建时间(默认值)
 - PayPeriodEndTime : 集群过期时间
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，可选字段：
 - DESC : 降序(默认值)
 - ASC : 升序
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBECLUSTERSREQUEST_H_
