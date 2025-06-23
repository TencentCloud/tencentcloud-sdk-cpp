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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETASREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableMetas请求参数结构体
                */
                class DescribeTableMetasRequest : public AbstractModel
                {
                public:
                    DescribeTableMetasRequest();
                    ~DescribeTableMetasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页页码
                     * @return PageNumber 分页页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页码
                     * @param _pageNumber 分页页码
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
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
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
                     * 获取过滤字段:
dbName-数据库名称
bizCatalogIds-资产目录ID
DataLayerUuid-数仓分层ID
ownerAccount-负责人ID
assetStatus-资产状态：1-已上架 0-未上架
assetLevel-资产等级：40-核心30-重要 20-一般 10-临时 
msTypes-数据源类型：例如TENCENT_MYSQL-腾讯云MySQL，数据源类型ID可参考
[
  {
    "DisplayName": "TCHouse-P",
    "Id": "TCHOUSE_P"
  },
  {
    "DisplayName": "Iceberg",
    "Id": "ICEBERG"
  },
  {
    "DisplayName": "Hive",
    "Id": "HIVE"
  },
  {
    "DisplayName": "HBase",
    "Id": "HBASE"
  },
  {
    "DisplayName": "DLC",
    "Id": "DLC"
  },
  {
    "DisplayName": "腾讯云MySQL",
    "Id": "TENCENT_MYSQL"
  },
  {
    "DisplayName": "TCHouse-D",
    "Id": "TCHOUSE_D"
  },
  {
    "DisplayName": "TCHouse-C",
    "Id": "TCHOUSE_C"
  },
  {
    "DisplayName": "EMR StarRocks",
    "Id": "EMR_STARROCKS"
  },
  {
    "DisplayName": "Doris",
    "Id": "DORIS"
  },
  {
    "DisplayName": "MySQL",
    "Id": "MYSQL"
  },
  {
    "DisplayName": "Oracle",
    "Id": "ORACLE"
  },
  {
    "DisplayName": "PostgreSQL",
    "Id": "POSTGRE"
  },
  {
    "DisplayName": "SQL Server",
    "Id": "SQLSERVER"
  },
  {
    "DisplayName": "TDSQL PostgreSQL",
    "Id": "TDSQL_POSTGRE"
  },
  {
    "DisplayName": "Greenplum",
    "Id": "GREENPLUM"
  },
  {
    "DisplayName": "StarRocks",
    "Id": "STARROCKS"
  },
  {
    "DisplayName": "ClickHouse",
    "Id": "CLICKHOUSE"
  },
  {
    "DisplayName": "INFLUXDB",
    "Id": "INFLUXDB"
  },
  {
    "DisplayName": "达梦DM",
    "Id": "DM"
  },
  {
    "DisplayName": "OceanBase",
    "Id": "OCEANBASE"
  },
  {
    "DisplayName": "TDSQL MySQL",
    "Id": "TDSQL_MYSQL"
  },
  {
    "DisplayName": "GaussDB",
    "Id": "GAUSSDB"
  }
]
projectIds-归属项目ID
keyword-关键字，支持表名/表中文名/数据库名
                     * @return Filters 过滤字段:
dbName-数据库名称
bizCatalogIds-资产目录ID
DataLayerUuid-数仓分层ID
ownerAccount-负责人ID
assetStatus-资产状态：1-已上架 0-未上架
assetLevel-资产等级：40-核心30-重要 20-一般 10-临时 
msTypes-数据源类型：例如TENCENT_MYSQL-腾讯云MySQL，数据源类型ID可参考
[
  {
    "DisplayName": "TCHouse-P",
    "Id": "TCHOUSE_P"
  },
  {
    "DisplayName": "Iceberg",
    "Id": "ICEBERG"
  },
  {
    "DisplayName": "Hive",
    "Id": "HIVE"
  },
  {
    "DisplayName": "HBase",
    "Id": "HBASE"
  },
  {
    "DisplayName": "DLC",
    "Id": "DLC"
  },
  {
    "DisplayName": "腾讯云MySQL",
    "Id": "TENCENT_MYSQL"
  },
  {
    "DisplayName": "TCHouse-D",
    "Id": "TCHOUSE_D"
  },
  {
    "DisplayName": "TCHouse-C",
    "Id": "TCHOUSE_C"
  },
  {
    "DisplayName": "EMR StarRocks",
    "Id": "EMR_STARROCKS"
  },
  {
    "DisplayName": "Doris",
    "Id": "DORIS"
  },
  {
    "DisplayName": "MySQL",
    "Id": "MYSQL"
  },
  {
    "DisplayName": "Oracle",
    "Id": "ORACLE"
  },
  {
    "DisplayName": "PostgreSQL",
    "Id": "POSTGRE"
  },
  {
    "DisplayName": "SQL Server",
    "Id": "SQLSERVER"
  },
  {
    "DisplayName": "TDSQL PostgreSQL",
    "Id": "TDSQL_POSTGRE"
  },
  {
    "DisplayName": "Greenplum",
    "Id": "GREENPLUM"
  },
  {
    "DisplayName": "StarRocks",
    "Id": "STARROCKS"
  },
  {
    "DisplayName": "ClickHouse",
    "Id": "CLICKHOUSE"
  },
  {
    "DisplayName": "INFLUXDB",
    "Id": "INFLUXDB"
  },
  {
    "DisplayName": "达梦DM",
    "Id": "DM"
  },
  {
    "DisplayName": "OceanBase",
    "Id": "OCEANBASE"
  },
  {
    "DisplayName": "TDSQL MySQL",
    "Id": "TDSQL_MYSQL"
  },
  {
    "DisplayName": "GaussDB",
    "Id": "GAUSSDB"
  }
]
projectIds-归属项目ID
keyword-关键字，支持表名/表中文名/数据库名
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤字段:
dbName-数据库名称
bizCatalogIds-资产目录ID
DataLayerUuid-数仓分层ID
ownerAccount-负责人ID
assetStatus-资产状态：1-已上架 0-未上架
assetLevel-资产等级：40-核心30-重要 20-一般 10-临时 
msTypes-数据源类型：例如TENCENT_MYSQL-腾讯云MySQL，数据源类型ID可参考
[
  {
    "DisplayName": "TCHouse-P",
    "Id": "TCHOUSE_P"
  },
  {
    "DisplayName": "Iceberg",
    "Id": "ICEBERG"
  },
  {
    "DisplayName": "Hive",
    "Id": "HIVE"
  },
  {
    "DisplayName": "HBase",
    "Id": "HBASE"
  },
  {
    "DisplayName": "DLC",
    "Id": "DLC"
  },
  {
    "DisplayName": "腾讯云MySQL",
    "Id": "TENCENT_MYSQL"
  },
  {
    "DisplayName": "TCHouse-D",
    "Id": "TCHOUSE_D"
  },
  {
    "DisplayName": "TCHouse-C",
    "Id": "TCHOUSE_C"
  },
  {
    "DisplayName": "EMR StarRocks",
    "Id": "EMR_STARROCKS"
  },
  {
    "DisplayName": "Doris",
    "Id": "DORIS"
  },
  {
    "DisplayName": "MySQL",
    "Id": "MYSQL"
  },
  {
    "DisplayName": "Oracle",
    "Id": "ORACLE"
  },
  {
    "DisplayName": "PostgreSQL",
    "Id": "POSTGRE"
  },
  {
    "DisplayName": "SQL Server",
    "Id": "SQLSERVER"
  },
  {
    "DisplayName": "TDSQL PostgreSQL",
    "Id": "TDSQL_POSTGRE"
  },
  {
    "DisplayName": "Greenplum",
    "Id": "GREENPLUM"
  },
  {
    "DisplayName": "StarRocks",
    "Id": "STARROCKS"
  },
  {
    "DisplayName": "ClickHouse",
    "Id": "CLICKHOUSE"
  },
  {
    "DisplayName": "INFLUXDB",
    "Id": "INFLUXDB"
  },
  {
    "DisplayName": "达梦DM",
    "Id": "DM"
  },
  {
    "DisplayName": "OceanBase",
    "Id": "OCEANBASE"
  },
  {
    "DisplayName": "TDSQL MySQL",
    "Id": "TDSQL_MYSQL"
  },
  {
    "DisplayName": "GaussDB",
    "Id": "GAUSSDB"
  }
]
projectIds-归属项目ID
keyword-关键字，支持表名/表中文名/数据库名
                     * @param _filters 过滤字段:
dbName-数据库名称
bizCatalogIds-资产目录ID
DataLayerUuid-数仓分层ID
ownerAccount-负责人ID
assetStatus-资产状态：1-已上架 0-未上架
assetLevel-资产等级：40-核心30-重要 20-一般 10-临时 
msTypes-数据源类型：例如TENCENT_MYSQL-腾讯云MySQL，数据源类型ID可参考
[
  {
    "DisplayName": "TCHouse-P",
    "Id": "TCHOUSE_P"
  },
  {
    "DisplayName": "Iceberg",
    "Id": "ICEBERG"
  },
  {
    "DisplayName": "Hive",
    "Id": "HIVE"
  },
  {
    "DisplayName": "HBase",
    "Id": "HBASE"
  },
  {
    "DisplayName": "DLC",
    "Id": "DLC"
  },
  {
    "DisplayName": "腾讯云MySQL",
    "Id": "TENCENT_MYSQL"
  },
  {
    "DisplayName": "TCHouse-D",
    "Id": "TCHOUSE_D"
  },
  {
    "DisplayName": "TCHouse-C",
    "Id": "TCHOUSE_C"
  },
  {
    "DisplayName": "EMR StarRocks",
    "Id": "EMR_STARROCKS"
  },
  {
    "DisplayName": "Doris",
    "Id": "DORIS"
  },
  {
    "DisplayName": "MySQL",
    "Id": "MYSQL"
  },
  {
    "DisplayName": "Oracle",
    "Id": "ORACLE"
  },
  {
    "DisplayName": "PostgreSQL",
    "Id": "POSTGRE"
  },
  {
    "DisplayName": "SQL Server",
    "Id": "SQLSERVER"
  },
  {
    "DisplayName": "TDSQL PostgreSQL",
    "Id": "TDSQL_POSTGRE"
  },
  {
    "DisplayName": "Greenplum",
    "Id": "GREENPLUM"
  },
  {
    "DisplayName": "StarRocks",
    "Id": "STARROCKS"
  },
  {
    "DisplayName": "ClickHouse",
    "Id": "CLICKHOUSE"
  },
  {
    "DisplayName": "INFLUXDB",
    "Id": "INFLUXDB"
  },
  {
    "DisplayName": "达梦DM",
    "Id": "DM"
  },
  {
    "DisplayName": "OceanBase",
    "Id": "OCEANBASE"
  },
  {
    "DisplayName": "TDSQL MySQL",
    "Id": "TDSQL_MYSQL"
  },
  {
    "DisplayName": "GaussDB",
    "Id": "GAUSSDB"
  }
]
projectIds-归属项目ID
keyword-关键字，支持表名/表中文名/数据库名
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
                     * 获取排序字段
                     * @return OrderFields 排序字段
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序字段
                     * @param _orderFields 排序字段
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                private:

                    /**
                     * 分页页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤字段:
dbName-数据库名称
bizCatalogIds-资产目录ID
DataLayerUuid-数仓分层ID
ownerAccount-负责人ID
assetStatus-资产状态：1-已上架 0-未上架
assetLevel-资产等级：40-核心30-重要 20-一般 10-临时 
msTypes-数据源类型：例如TENCENT_MYSQL-腾讯云MySQL，数据源类型ID可参考
[
  {
    "DisplayName": "TCHouse-P",
    "Id": "TCHOUSE_P"
  },
  {
    "DisplayName": "Iceberg",
    "Id": "ICEBERG"
  },
  {
    "DisplayName": "Hive",
    "Id": "HIVE"
  },
  {
    "DisplayName": "HBase",
    "Id": "HBASE"
  },
  {
    "DisplayName": "DLC",
    "Id": "DLC"
  },
  {
    "DisplayName": "腾讯云MySQL",
    "Id": "TENCENT_MYSQL"
  },
  {
    "DisplayName": "TCHouse-D",
    "Id": "TCHOUSE_D"
  },
  {
    "DisplayName": "TCHouse-C",
    "Id": "TCHOUSE_C"
  },
  {
    "DisplayName": "EMR StarRocks",
    "Id": "EMR_STARROCKS"
  },
  {
    "DisplayName": "Doris",
    "Id": "DORIS"
  },
  {
    "DisplayName": "MySQL",
    "Id": "MYSQL"
  },
  {
    "DisplayName": "Oracle",
    "Id": "ORACLE"
  },
  {
    "DisplayName": "PostgreSQL",
    "Id": "POSTGRE"
  },
  {
    "DisplayName": "SQL Server",
    "Id": "SQLSERVER"
  },
  {
    "DisplayName": "TDSQL PostgreSQL",
    "Id": "TDSQL_POSTGRE"
  },
  {
    "DisplayName": "Greenplum",
    "Id": "GREENPLUM"
  },
  {
    "DisplayName": "StarRocks",
    "Id": "STARROCKS"
  },
  {
    "DisplayName": "ClickHouse",
    "Id": "CLICKHOUSE"
  },
  {
    "DisplayName": "INFLUXDB",
    "Id": "INFLUXDB"
  },
  {
    "DisplayName": "达梦DM",
    "Id": "DM"
  },
  {
    "DisplayName": "OceanBase",
    "Id": "OCEANBASE"
  },
  {
    "DisplayName": "TDSQL MySQL",
    "Id": "TDSQL_MYSQL"
  },
  {
    "DisplayName": "GaussDB",
    "Id": "GAUSSDB"
  }
]
projectIds-归属项目ID
keyword-关键字，支持表名/表中文名/数据库名
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEMETASREQUEST_H_
