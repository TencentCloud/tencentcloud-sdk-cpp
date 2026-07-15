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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKLISTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKLISTREQUEST_H_

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
                * DescribeTaskList请求参数结构体
                */
                class DescribeTaskListRequest : public AbstractModel
                {
                public:
                    DescribeTaskListRequest();
                    ~DescribeTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回数量，默认为10，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为10，最大值为100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为10，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为10，最大值为100。</p>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
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
                     * 获取<p>过滤条件，如下支持的过滤类型，传参Name应为以下其中一个,其中task-id支持最大50个过滤个数，其他过滤参数支持的总数不超过5个。<br>task-id - String - （任务ID准确过滤）task-id取值形如：e386471f-139a-4e59-877f-50ece8135b99。<br>task-state - String - （任务状态过滤）取值范围 0(初始化)， 1(运行中)， 2(成功)， -1(失败)。<br>task-sql-keyword - String - （SQL语句关键字模糊过滤）取值形如：DROP TABLE。<br>task-operator- string （子uin过滤）<br>task-kind - string （任务类型过滤）</p>
                     * @return Filters <p>过滤条件，如下支持的过滤类型，传参Name应为以下其中一个,其中task-id支持最大50个过滤个数，其他过滤参数支持的总数不超过5个。<br>task-id - String - （任务ID准确过滤）task-id取值形如：e386471f-139a-4e59-877f-50ece8135b99。<br>task-state - String - （任务状态过滤）取值范围 0(初始化)， 1(运行中)， 2(成功)， -1(失败)。<br>task-sql-keyword - String - （SQL语句关键字模糊过滤）取值形如：DROP TABLE。<br>task-operator- string （子uin过滤）<br>task-kind - string （任务类型过滤）</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，如下支持的过滤类型，传参Name应为以下其中一个,其中task-id支持最大50个过滤个数，其他过滤参数支持的总数不超过5个。<br>task-id - String - （任务ID准确过滤）task-id取值形如：e386471f-139a-4e59-877f-50ece8135b99。<br>task-state - String - （任务状态过滤）取值范围 0(初始化)， 1(运行中)， 2(成功)， -1(失败)。<br>task-sql-keyword - String - （SQL语句关键字模糊过滤）取值形如：DROP TABLE。<br>task-operator- string （子uin过滤）<br>task-kind - string （任务类型过滤）</p>
                     * @param _filters <p>过滤条件，如下支持的过滤类型，传参Name应为以下其中一个,其中task-id支持最大50个过滤个数，其他过滤参数支持的总数不超过5个。<br>task-id - String - （任务ID准确过滤）task-id取值形如：e386471f-139a-4e59-877f-50ece8135b99。<br>task-state - String - （任务状态过滤）取值范围 0(初始化)， 1(运行中)， 2(成功)， -1(失败)。<br>task-sql-keyword - String - （SQL语句关键字模糊过滤）取值形如：DROP TABLE。<br>task-operator- string （子uin过滤）<br>task-kind - string （任务类型过滤）</p>
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
                     * 获取<p>排序字段，支持如下字段类型，create-time（创建时间，默认）、update-time（更新时间）</p>
                     * @return SortBy <p>排序字段，支持如下字段类型，create-time（创建时间，默认）、update-time（更新时间）</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序字段，支持如下字段类型，create-time（创建时间，默认）、update-time（更新时间）</p>
                     * @param _sortBy <p>排序字段，支持如下字段类型，create-time（创建时间，默认）、update-time（更新时间）</p>
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
                     * 获取<p>排序方式，desc表示正序，asc表示反序， 默认为asc。</p>
                     * @return Sorting <p>排序方式，desc表示正序，asc表示反序， 默认为asc。</p>
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置<p>排序方式，desc表示正序，asc表示反序， 默认为asc。</p>
                     * @param _sorting <p>排序方式，desc表示正序，asc表示反序， 默认为asc。</p>
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
                     * 获取<p>起始时间点，格式为yyyy-mm-dd HH:MM:SS。默认为45天前的当前时刻</p>
                     * @return StartTime <p>起始时间点，格式为yyyy-mm-dd HH:MM:SS。默认为45天前的当前时刻</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>起始时间点，格式为yyyy-mm-dd HH:MM:SS。默认为45天前的当前时刻</p>
                     * @param _startTime <p>起始时间点，格式为yyyy-mm-dd HH:MM:SS。默认为45天前的当前时刻</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近45天数据查询。默认为当前时刻</p>
                     * @return EndTime <p>结束时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近45天数据查询。默认为当前时刻</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近45天数据查询。默认为当前时刻</p>
                     * @param _endTime <p>结束时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近45天数据查询。默认为当前时刻</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>数据引擎名称，用于筛选</p>
                     * @return DataEngineName <p>数据引擎名称，用于筛选</p>
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置<p>数据引擎名称，用于筛选</p>
                     * @param _dataEngineName <p>数据引擎名称，用于筛选</p>
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取<p>spark引擎资源组名称</p>
                     * @return ResourceGroupName <p>spark引擎资源组名称</p>
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>spark引擎资源组名称</p>
                     * @param _resourceGroupName <p>spark引擎资源组名称</p>
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>引擎id列表</p>
                     * @return HouseIds <p>引擎id列表</p>
                     * 
                     */
                    std::vector<std::string> GetHouseIds() const;

                    /**
                     * 设置<p>引擎id列表</p>
                     * @param _houseIds <p>引擎id列表</p>
                     * 
                     */
                    void SetHouseIds(const std::vector<std::string>& _houseIds);

                    /**
                     * 判断参数 HouseIds 是否已赋值
                     * @return HouseIds 是否已赋值
                     * 
                     */
                    bool HouseIdsHasBeenSet() const;

                private:

                    /**
                     * <p>返回数量，默认为10，最大值为100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件，如下支持的过滤类型，传参Name应为以下其中一个,其中task-id支持最大50个过滤个数，其他过滤参数支持的总数不超过5个。<br>task-id - String - （任务ID准确过滤）task-id取值形如：e386471f-139a-4e59-877f-50ece8135b99。<br>task-state - String - （任务状态过滤）取值范围 0(初始化)， 1(运行中)， 2(成功)， -1(失败)。<br>task-sql-keyword - String - （SQL语句关键字模糊过滤）取值形如：DROP TABLE。<br>task-operator- string （子uin过滤）<br>task-kind - string （任务类型过滤）</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序字段，支持如下字段类型，create-time（创建时间，默认）、update-time（更新时间）</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>排序方式，desc表示正序，asc表示反序， 默认为asc。</p>
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * <p>起始时间点，格式为yyyy-mm-dd HH:MM:SS。默认为45天前的当前时刻</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间点，格式为yyyy-mm-dd HH:MM:SS时间跨度在(0,30天]，支持最近45天数据查询。默认为当前时刻</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>数据引擎名称，用于筛选</p>
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * <p>spark引擎资源组名称</p>
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>引擎id列表</p>
                     */
                    std::vector<std::string> m_houseIds;
                    bool m_houseIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKLISTREQUEST_H_
