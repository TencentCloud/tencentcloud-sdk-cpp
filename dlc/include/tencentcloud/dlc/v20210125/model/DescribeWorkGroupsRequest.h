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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeWorkGroups请求参数结构体
                */
                class DescribeWorkGroupsRequest : public AbstractModel
                {
                public:
                    DescribeWorkGroupsRequest();
                    ~DescribeWorkGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的工作组Id，不填或填0表示不过滤。
                     * @return WorkGroupId 查询的工作组Id，不填或填0表示不过滤。
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置查询的工作组Id，不填或填0表示不过滤。
                     * @param _workGroupId 查询的工作组Id，不填或填0表示不过滤。
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取过滤条件，当前仅支持按照工作组名称进行模糊搜索。Key为workgroup-name
                     * @return Filters 过滤条件，当前仅支持按照工作组名称进行模糊搜索。Key为workgroup-name
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，当前仅支持按照工作组名称进行模糊搜索。Key为workgroup-name
                     * @param _filters 过滤条件，当前仅支持按照工作组名称进行模糊搜索。Key为workgroup-name
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
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回数量，默认20，最大值100
                     * @return Limit 返回数量，默认20，最大值100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认20，最大值100
                     * @param _limit 返回数量，默认20，最大值100
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
                     * 获取排序字段，支持如下字段类型，create-time
                     * @return SortBy 排序字段，支持如下字段类型，create-time
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段，支持如下字段类型，create-time
                     * @param _sortBy 排序字段，支持如下字段类型，create-time
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取排序方式，desc表示正序，asc表示反序， 默认为asc
                     * @return Sorting 排序方式，desc表示正序，asc表示反序， 默认为asc
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置排序方式，desc表示正序，asc表示反序， 默认为asc
                     * @param _sorting 排序方式，desc表示正序，asc表示反序， 默认为asc
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                private:

                    /**
                     * 查询的工作组Id，不填或填0表示不过滤。
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * 过滤条件，当前仅支持按照工作组名称进行模糊搜索。Key为workgroup-name
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认20，最大值100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，支持如下字段类型，create-time
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 排序方式，desc表示正序，asc表示反序， 默认为asc
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPSREQUEST_H_
