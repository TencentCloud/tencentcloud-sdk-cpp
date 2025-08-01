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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTANDARDENGINERESOURCEGROUPSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTANDARDENGINERESOURCEGROUPSREQUEST_H_

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
                * DescribeStandardEngineResourceGroups请求参数结构体
                */
                class DescribeStandardEngineResourceGroupsRequest : public AbstractModel
                {
                public:
                    DescribeStandardEngineResourceGroupsRequest();
                    ~DescribeStandardEngineResourceGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取排序字段
                     * @return SortBy 排序字段
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段
                     * @param _sortBy 排序字段
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
                     * 获取升序，降序
                     * @return Sorting 升序，降序
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置升序，降序
                     * @param _sorting 升序，降序
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                    /**
                     * 获取过滤条件可选，app-id--用户appID，engine-resource-group-id--引擎资源组ID，data-engine-name--引擎名称，engine-resource-group-name---引擎资源组名称（模糊查询），engine-resource-group-state---引擎资源组状态engine-resource-group-name-unique --引擎资源组名称（完全匹配）
                     * @return Filters 过滤条件可选，app-id--用户appID，engine-resource-group-id--引擎资源组ID，data-engine-name--引擎名称，engine-resource-group-name---引擎资源组名称（模糊查询），engine-resource-group-state---引擎资源组状态engine-resource-group-name-unique --引擎资源组名称（完全匹配）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件可选，app-id--用户appID，engine-resource-group-id--引擎资源组ID，data-engine-name--引擎名称，engine-resource-group-name---引擎资源组名称（模糊查询），engine-resource-group-state---引擎资源组状态engine-resource-group-name-unique --引擎资源组名称（完全匹配）
                     * @param _filters 过滤条件可选，app-id--用户appID，engine-resource-group-id--引擎资源组ID，data-engine-name--引擎名称，engine-resource-group-name---引擎资源组名称（模糊查询），engine-resource-group-state---引擎资源组状态engine-resource-group-name-unique --引擎资源组名称（完全匹配）
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
                     * 获取数据条数，默认10
                     * @return Limit 数据条数，默认10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置数据条数，默认10
                     * @param _limit 数据条数，默认10
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
                     * 获取偏移量，默认0
                     * @return Offset 偏移量，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0
                     * @param _offset 偏移量，默认0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 排序字段
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 升序，降序
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * 过滤条件可选，app-id--用户appID，engine-resource-group-id--引擎资源组ID，data-engine-name--引擎名称，engine-resource-group-name---引擎资源组名称（模糊查询），engine-resource-group-state---引擎资源组状态engine-resource-group-name-unique --引擎资源组名称（完全匹配）
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 数据条数，默认10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTANDARDENGINERESOURCEGROUPSREQUEST_H_
