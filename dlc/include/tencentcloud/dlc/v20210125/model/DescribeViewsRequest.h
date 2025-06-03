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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEVIEWSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEVIEWSREQUEST_H_

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
                * DescribeViews请求参数结构体
                */
                class DescribeViewsRequest : public AbstractModel
                {
                public:
                    DescribeViewsRequest();
                    ~DescribeViewsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取列出该数据库下所属数据表。
                     * @return DatabaseName 列出该数据库下所属数据表。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置列出该数据库下所属数据表。
                     * @param _databaseName 列出该数据库下所属数据表。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为10，最大值为100。
                     * @return Limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param _limit 返回数量，默认为10，最大值为100。
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
                     * 获取数据偏移量，从0开始，默认为0。
                     * @return Offset 数据偏移量，从0开始，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，从0开始，默认为0。
                     * @param _offset 数据偏移量，从0开始，默认为0。
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
                     * 获取过滤条件，如下支持的过滤类型，传参Name应为其一
view-name - String - （过滤条件）数据表名称,形如：view-001。
view-id - String - （过滤条件）view id形如：12342。
                     * @return Filters 过滤条件，如下支持的过滤类型，传参Name应为其一
view-name - String - （过滤条件）数据表名称,形如：view-001。
view-id - String - （过滤条件）view id形如：12342。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，如下支持的过滤类型，传参Name应为其一
view-name - String - （过滤条件）数据表名称,形如：view-001。
view-id - String - （过滤条件）view id形如：12342。
                     * @param _filters 过滤条件，如下支持的过滤类型，传参Name应为其一
view-name - String - （过滤条件）数据表名称,形如：view-001。
view-id - String - （过滤条件）view id形如：12342。
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
                     * 获取数据库所属的数据源名称
                     * @return DatasourceConnectionName 数据库所属的数据源名称
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据库所属的数据源名称
                     * @param _datasourceConnectionName 数据库所属的数据源名称
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return Sort 排序字段
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序字段
                     * @param _sort 排序字段
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取排序规则，true:升序；false:降序
                     * @return Asc 排序规则，true:升序；false:降序
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置排序规则，true:升序；false:降序
                     * @param _asc 排序规则，true:升序；false:降序
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                    /**
                     * 获取按视图更新时间筛选，开始时间，如2021-11-11 00:00:00
                     * @return StartTime 按视图更新时间筛选，开始时间，如2021-11-11 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置按视图更新时间筛选，开始时间，如2021-11-11 00:00:00
                     * @param _startTime 按视图更新时间筛选，开始时间，如2021-11-11 00:00:00
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
                     * 获取按视图更新时间筛选，结束时间，如2021-11-12 00:00:00
                     * @return EndTime 按视图更新时间筛选，结束时间，如2021-11-12 00:00:00
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置按视图更新时间筛选，结束时间，如2021-11-12 00:00:00
                     * @param _endTime 按视图更新时间筛选，结束时间，如2021-11-12 00:00:00
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
                     * 获取查询类型：all：全部数据（默认）、permission：有权限的数据
注意：此字段需要开启白名单使用，如果需要使用，请提交工单联系我们。
                     * @return DescribeType 查询类型：all：全部数据（默认）、permission：有权限的数据
注意：此字段需要开启白名单使用，如果需要使用，请提交工单联系我们。
                     * 
                     */
                    std::string GetDescribeType() const;

                    /**
                     * 设置查询类型：all：全部数据（默认）、permission：有权限的数据
注意：此字段需要开启白名单使用，如果需要使用，请提交工单联系我们。
                     * @param _describeType 查询类型：all：全部数据（默认）、permission：有权限的数据
注意：此字段需要开启白名单使用，如果需要使用，请提交工单联系我们。
                     * 
                     */
                    void SetDescribeType(const std::string& _describeType);

                    /**
                     * 判断参数 DescribeType 是否已赋值
                     * @return DescribeType 是否已赋值
                     * 
                     */
                    bool DescribeTypeHasBeenSet() const;

                private:

                    /**
                     * 列出该数据库下所属数据表。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 返回数量，默认为10，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据偏移量，从0开始，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件，如下支持的过滤类型，传参Name应为其一
view-name - String - （过滤条件）数据表名称,形如：view-001。
view-id - String - （过滤条件）view id形如：12342。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 数据库所属的数据源名称
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 排序规则，true:升序；false:降序
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * 按视图更新时间筛选，开始时间，如2021-11-11 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 按视图更新时间筛选，结束时间，如2021-11-12 00:00:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询类型：all：全部数据（默认）、permission：有权限的数据
注意：此字段需要开启白名单使用，如果需要使用，请提交工单联系我们。
                     */
                    std::string m_describeType;
                    bool m_describeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEVIEWSREQUEST_H_
