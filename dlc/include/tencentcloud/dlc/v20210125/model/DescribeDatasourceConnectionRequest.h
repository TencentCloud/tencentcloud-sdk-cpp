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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATASOURCECONNECTIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATASOURCECONNECTIONREQUEST_H_

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
                * DescribeDatasourceConnection请求参数结构体
                */
                class DescribeDatasourceConnectionRequest : public AbstractModel
                {
                public:
                    DescribeDatasourceConnectionRequest();
                    ~DescribeDatasourceConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取连接ID列表，指定要查询的连接ID
                     * @return DatasourceConnectionIds 连接ID列表，指定要查询的连接ID
                     * 
                     */
                    std::vector<std::string> GetDatasourceConnectionIds() const;

                    /**
                     * 设置连接ID列表，指定要查询的连接ID
                     * @param _datasourceConnectionIds 连接ID列表，指定要查询的连接ID
                     * 
                     */
                    void SetDatasourceConnectionIds(const std::vector<std::string>& _datasourceConnectionIds);

                    /**
                     * 判断参数 DatasourceConnectionIds 是否已赋值
                     * @return DatasourceConnectionIds 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，当前支持的过滤键为：DatasourceConnectionName（数据源连接名）。
DatasourceConnectionType   （数据源连接连接类型）
                     * @return Filters 过滤条件，当前支持的过滤键为：DatasourceConnectionName（数据源连接名）。
DatasourceConnectionType   （数据源连接连接类型）
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，当前支持的过滤键为：DatasourceConnectionName（数据源连接名）。
DatasourceConnectionType   （数据源连接连接类型）
                     * @param _filters 过滤条件，当前支持的过滤键为：DatasourceConnectionName（数据源连接名）。
DatasourceConnectionType   （数据源连接连接类型）
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
                     * 获取排序字段，支持如下字段类型，create-time（默认，创建时间）、update-time（更新时间）
                     * @return SortBy 排序字段，支持如下字段类型，create-time（默认，创建时间）、update-time（更新时间）
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段，支持如下字段类型，create-time（默认，创建时间）、update-time（更新时间）
                     * @param _sortBy 排序字段，支持如下字段类型，create-time（默认，创建时间）、update-time（更新时间）
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
                     * 获取排序方式，desc表示正序，asc表示反序， 默认为desc
                     * @return Sorting 排序方式，desc表示正序，asc表示反序， 默认为desc
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置排序方式，desc表示正序，asc表示反序， 默认为desc
                     * @param _sorting 排序方式，desc表示正序，asc表示反序， 默认为desc
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
                     * 获取筛选字段：起始时间
                     * @return StartTime 筛选字段：起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置筛选字段：起始时间
                     * @param _startTime 筛选字段：起始时间
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
                     * 获取筛选字段：截止时间
                     * @return EndTime 筛选字段：截止时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置筛选字段：截止时间
                     * @param _endTime 筛选字段：截止时间
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
                     * 获取连接名称列表，指定要查询的连接名称
                     * @return DatasourceConnectionNames 连接名称列表，指定要查询的连接名称
                     * 
                     */
                    std::vector<std::string> GetDatasourceConnectionNames() const;

                    /**
                     * 设置连接名称列表，指定要查询的连接名称
                     * @param _datasourceConnectionNames 连接名称列表，指定要查询的连接名称
                     * 
                     */
                    void SetDatasourceConnectionNames(const std::vector<std::string>& _datasourceConnectionNames);

                    /**
                     * 判断参数 DatasourceConnectionNames 是否已赋值
                     * @return DatasourceConnectionNames 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNamesHasBeenSet() const;

                    /**
                     * 获取连接类型，支持Mysql/HiveCos/Kafka/DataLakeCatalog
                     * @return DatasourceConnectionTypes 连接类型，支持Mysql/HiveCos/Kafka/DataLakeCatalog
                     * 
                     */
                    std::vector<std::string> GetDatasourceConnectionTypes() const;

                    /**
                     * 设置连接类型，支持Mysql/HiveCos/Kafka/DataLakeCatalog
                     * @param _datasourceConnectionTypes 连接类型，支持Mysql/HiveCos/Kafka/DataLakeCatalog
                     * 
                     */
                    void SetDatasourceConnectionTypes(const std::vector<std::string>& _datasourceConnectionTypes);

                    /**
                     * 判断参数 DatasourceConnectionTypes 是否已赋值
                     * @return DatasourceConnectionTypes 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionTypesHasBeenSet() const;

                    /**
                     * 获取返回指定hive版本的数据源，该参数指定后，会过滤掉该参数指定版本以外的hive数据源，非hive数据源正常返回
                     * @return HiveVersion 返回指定hive版本的数据源，该参数指定后，会过滤掉该参数指定版本以外的hive数据源，非hive数据源正常返回
                     * 
                     */
                    std::vector<std::string> GetHiveVersion() const;

                    /**
                     * 设置返回指定hive版本的数据源，该参数指定后，会过滤掉该参数指定版本以外的hive数据源，非hive数据源正常返回
                     * @param _hiveVersion 返回指定hive版本的数据源，该参数指定后，会过滤掉该参数指定版本以外的hive数据源，非hive数据源正常返回
                     * 
                     */
                    void SetHiveVersion(const std::vector<std::string>& _hiveVersion);

                    /**
                     * 判断参数 HiveVersion 是否已赋值
                     * @return HiveVersion 是否已赋值
                     * 
                     */
                    bool HiveVersionHasBeenSet() const;

                private:

                    /**
                     * 连接ID列表，指定要查询的连接ID
                     */
                    std::vector<std::string> m_datasourceConnectionIds;
                    bool m_datasourceConnectionIdsHasBeenSet;

                    /**
                     * 过滤条件，当前支持的过滤键为：DatasourceConnectionName（数据源连接名）。
DatasourceConnectionType   （数据源连接连接类型）
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
                     * 排序字段，支持如下字段类型，create-time（默认，创建时间）、update-time（更新时间）
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 排序方式，desc表示正序，asc表示反序， 默认为desc
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * 筛选字段：起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 筛选字段：截止时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 连接名称列表，指定要查询的连接名称
                     */
                    std::vector<std::string> m_datasourceConnectionNames;
                    bool m_datasourceConnectionNamesHasBeenSet;

                    /**
                     * 连接类型，支持Mysql/HiveCos/Kafka/DataLakeCatalog
                     */
                    std::vector<std::string> m_datasourceConnectionTypes;
                    bool m_datasourceConnectionTypesHasBeenSet;

                    /**
                     * 返回指定hive版本的数据源，该参数指定后，会过滤掉该参数指定版本以外的hive数据源，非hive数据源正常返回
                     */
                    std::vector<std::string> m_hiveVersion;
                    bool m_hiveVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATASOURCECONNECTIONREQUEST_H_
