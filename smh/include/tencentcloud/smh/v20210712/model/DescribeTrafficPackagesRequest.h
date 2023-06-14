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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBETRAFFICPACKAGESREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBETRAFFICPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * DescribeTrafficPackages请求参数结构体
                */
                class DescribeTrafficPackagesRequest : public AbstractModel
                {
                public:
                    DescribeTrafficPackagesRequest();
                    ~DescribeTrafficPackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个资源 ID 查询，每次请求的上限为 100 个。
                     * @return ResourceIds 按照一个或者多个资源 ID 查询，每次请求的上限为 100 个。
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置按照一个或者多个资源 ID 查询，每次请求的上限为 100 个。
                     * @param _resourceIds 按照一个或者多个资源 ID 查询，每次请求的上限为 100 个。
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取页码，整型，配合 PageSize 使用，默认值为 1。
                     * @return PageNumber 页码，整型，配合 PageSize 使用，默认值为 1。
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，整型，配合 PageSize 使用，默认值为 1。
                     * @param _pageNumber 页码，整型，配合 PageSize 使用，默认值为 1。
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
                     * 获取每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     * @return PageSize 每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     * @param _pageSize 每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
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
                     * 获取对指定列进行排序
                     * @return OrderBy 对指定列进行排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置对指定列进行排序
                     * @param _orderBy 对指定列进行排序
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
                     * 获取排序方式
                     * @return OrderByType 排序方式
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式
                     * @param _orderByType 排序方式
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取来源类型筛选
                     * @return Type 来源类型筛选
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置来源类型筛选
                     * @param _type 来源类型筛选
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 按照一个或者多个资源 ID 查询，每次请求的上限为 100 个。
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 页码，整型，配合 PageSize 使用，默认值为 1。
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 对指定列进行排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 来源类型筛选
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBETRAFFICPACKAGESREQUEST_H_
