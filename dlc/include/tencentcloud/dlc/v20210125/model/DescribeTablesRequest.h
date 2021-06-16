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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESREQUEST_H_

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
                * DescribeTables请求参数结构体
                */
                class DescribeTablesRequest : public AbstractModel
                {
                public:
                    DescribeTablesRequest();
                    ~DescribeTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取列出该数据库下所属数据表。
                     * @return DatabaseName 列出该数据库下所属数据表。
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置列出该数据库下所属数据表。
                     * @param DatabaseName 列出该数据库下所属数据表。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为10，最大值为100。
                     * @return Limit 返回数量，默认为10，最大值为100。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param Limit 返回数量，默认为10，最大值为100。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取数据偏移量，从0开始，默认为0。
                     * @return Offset 数据偏移量，从0开始，默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，从0开始，默认为0。
                     * @param Offset 数据偏移量，从0开始，默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取过滤条件，如下支持的过滤类型，传参Name应为其一
table-name - String - （过滤条件）数据表名称,形如：table-001。
table-id - String - （过滤条件）table id形如：12342。
                     * @return Filters 过滤条件，如下支持的过滤类型，传参Name应为其一
table-name - String - （过滤条件）数据表名称,形如：table-001。
table-id - String - （过滤条件）table id形如：12342。
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，如下支持的过滤类型，传参Name应为其一
table-name - String - （过滤条件）数据表名称,形如：table-001。
table-id - String - （过滤条件）table id形如：12342。
                     * @param Filters 过滤条件，如下支持的过滤类型，传参Name应为其一
table-name - String - （过滤条件）数据表名称,形如：table-001。
table-id - String - （过滤条件）table id形如：12342。
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取指定查询的数据源名称，默认为CosDataCatalog
                     * @return DatasourceConnectionName 指定查询的数据源名称，默认为CosDataCatalog
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置指定查询的数据源名称，默认为CosDataCatalog
                     * @param DatasourceConnectionName 指定查询的数据源名称，默认为CosDataCatalog
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

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
                     * 指定查询的数据源名称，默认为CosDataCatalog
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESREQUEST_H_
