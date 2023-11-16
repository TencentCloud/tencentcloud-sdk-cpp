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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESNAMEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESNAMEREQUEST_H_

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
                * DescribeTablesName请求参数结构体
                */
                class DescribeTablesNameRequest : public AbstractModel
                {
                public:
                    DescribeTablesNameRequest();
                    ~DescribeTablesNameRequest() = default;
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
table-name - String - （过滤条件）数据表名称,形如：table-001。
table-id - String - （过滤条件）table id形如：12342。
                     * @return Filters 过滤条件，如下支持的过滤类型，传参Name应为其一
table-name - String - （过滤条件）数据表名称,形如：table-001。
table-id - String - （过滤条件）table id形如：12342。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，如下支持的过滤类型，传参Name应为其一
table-name - String - （过滤条件）数据表名称,形如：table-001。
table-id - String - （过滤条件）table id形如：12342。
                     * @param _filters 过滤条件，如下支持的过滤类型，传参Name应为其一
table-name - String - （过滤条件）数据表名称,形如：table-001。
table-id - String - （过滤条件）table id形如：12342。
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
                     * 获取指定查询的数据源名称，默认为DataLakeCatalog
                     * @return DatasourceConnectionName 指定查询的数据源名称，默认为DataLakeCatalog
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置指定查询的数据源名称，默认为DataLakeCatalog
                     * @param _datasourceConnectionName 指定查询的数据源名称，默认为DataLakeCatalog
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
                     * 获取起始时间：用于对更新时间的筛选，格式为yyyy-mm-dd HH:MM:SS
                     * @return StartTime 起始时间：用于对更新时间的筛选，格式为yyyy-mm-dd HH:MM:SS
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间：用于对更新时间的筛选，格式为yyyy-mm-dd HH:MM:SS
                     * @param _startTime 起始时间：用于对更新时间的筛选，格式为yyyy-mm-dd HH:MM:SS
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
                     * 获取终止时间：用于对更新时间的筛选，格式为yyyy-mm-dd HH:MM:SS
                     * @return EndTime 终止时间：用于对更新时间的筛选，格式为yyyy-mm-dd HH:MM:SS
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置终止时间：用于对更新时间的筛选，格式为yyyy-mm-dd HH:MM:SS
                     * @param _endTime 终止时间：用于对更新时间的筛选，格式为yyyy-mm-dd HH:MM:SS
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
                     * 获取排序字段，支持：CreateTime（创建时间）、UpdateTime（更新时间）、StorageSize（存储空间）、RecordCount（行数）、Name（表名称）（不传则默认按name升序）
                     * @return Sort 排序字段，支持：CreateTime（创建时间）、UpdateTime（更新时间）、StorageSize（存储空间）、RecordCount（行数）、Name（表名称）（不传则默认按name升序）
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序字段，支持：CreateTime（创建时间）、UpdateTime（更新时间）、StorageSize（存储空间）、RecordCount（行数）、Name（表名称）（不传则默认按name升序）
                     * @param _sort 排序字段，支持：CreateTime（创建时间）、UpdateTime（更新时间）、StorageSize（存储空间）、RecordCount（行数）、Name（表名称）（不传则默认按name升序）
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
                     * 获取排序字段，false：降序（默认）；true：升序
                     * @return Asc 排序字段，false：降序（默认）；true：升序
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置排序字段，false：降序（默认）；true：升序
                     * @param _asc 排序字段，false：降序（默认）；true：升序
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
                     * 获取table type，表类型查询,可用值:EXTERNAL_TABLE,INDEX_TABLE,MANAGED_TABLE,MATERIALIZED_VIEW,TABLE,VIEW,VIRTUAL_VIEW
                     * @return TableType table type，表类型查询,可用值:EXTERNAL_TABLE,INDEX_TABLE,MANAGED_TABLE,MATERIALIZED_VIEW,TABLE,VIEW,VIRTUAL_VIEW
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置table type，表类型查询,可用值:EXTERNAL_TABLE,INDEX_TABLE,MANAGED_TABLE,MATERIALIZED_VIEW,TABLE,VIEW,VIRTUAL_VIEW
                     * @param _tableType table type，表类型查询,可用值:EXTERNAL_TABLE,INDEX_TABLE,MANAGED_TABLE,MATERIALIZED_VIEW,TABLE,VIEW,VIRTUAL_VIEW
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取筛选字段-表格式：不传（默认）为查全部；LAKEFS：托管表；ICEBERG：非托管iceberg表；HIVE：非托管hive表；OTHER：非托管其它；
                     * @return TableFormat 筛选字段-表格式：不传（默认）为查全部；LAKEFS：托管表；ICEBERG：非托管iceberg表；HIVE：非托管hive表；OTHER：非托管其它；
                     * 
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置筛选字段-表格式：不传（默认）为查全部；LAKEFS：托管表；ICEBERG：非托管iceberg表；HIVE：非托管hive表；OTHER：非托管其它；
                     * @param _tableFormat 筛选字段-表格式：不传（默认）为查全部；LAKEFS：托管表；ICEBERG：非托管iceberg表；HIVE：非托管hive表；OTHER：非托管其它；
                     * 
                     */
                    void SetTableFormat(const std::string& _tableFormat);

                    /**
                     * 判断参数 TableFormat 是否已赋值
                     * @return TableFormat 是否已赋值
                     * 
                     */
                    bool TableFormatHasBeenSet() const;

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
table-name - String - （过滤条件）数据表名称,形如：table-001。
table-id - String - （过滤条件）table id形如：12342。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 指定查询的数据源名称，默认为DataLakeCatalog
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 起始时间：用于对更新时间的筛选，格式为yyyy-mm-dd HH:MM:SS
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 终止时间：用于对更新时间的筛选，格式为yyyy-mm-dd HH:MM:SS
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序字段，支持：CreateTime（创建时间）、UpdateTime（更新时间）、StorageSize（存储空间）、RecordCount（行数）、Name（表名称）（不传则默认按name升序）
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 排序字段，false：降序（默认）；true：升序
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * table type，表类型查询,可用值:EXTERNAL_TABLE,INDEX_TABLE,MANAGED_TABLE,MATERIALIZED_VIEW,TABLE,VIEW,VIRTUAL_VIEW
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 筛选字段-表格式：不传（默认）为查全部；LAKEFS：托管表；ICEBERG：非托管iceberg表；HIVE：非托管hive表；OTHER：非托管其它；
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESNAMEREQUEST_H_
