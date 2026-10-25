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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETABLESPACEDATAV2REQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETABLESPACEDATAV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeTableSpaceDataV2请求参数结构体
                */
                class DescribeTableSpaceDataV2Request : public AbstractModel
                {
                public:
                    DescribeTableSpaceDataV2Request();
                    ~DescribeTableSpaceDataV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>服务产品类型（用于云 API 平台路由到对应产品后端）。取值：mysql / cynosdb / mariadb / postgres / mongodb / sqlserver 等。</p>
                     * @return Product <p>服务产品类型（用于云 API 平台路由到对应产品后端）。取值：mysql / cynosdb / mariadb / postgres / mongodb / sqlserver 等。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型（用于云 API 平台路由到对应产品后端）。取值：mysql / cynosdb / mariadb / postgres / mongodb / sqlserver 等。</p>
                     * @param _product <p>服务产品类型（用于云 API 平台路由到对应产品后端）。取值：mysql / cynosdb / mariadb / postgres / mongodb / sqlserver 等。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>数据库名（PG 系产品的 schema 名；MongoDB 为 database 名；MySQL / CynosDB / SqlServer 为库名）。PostgreSQL / MySQL / CynosDB / SqlServer 必传；MongoDB 可不传（底层使用 optString(&quot;&quot;), 不传时按空库名查询）。</p>
                     * @return TableSchema <p>数据库名（PG 系产品的 schema 名；MongoDB 为 database 名；MySQL / CynosDB / SqlServer 为库名）。PostgreSQL / MySQL / CynosDB / SqlServer 必传；MongoDB 可不传（底层使用 optString(&quot;&quot;), 不传时按空库名查询）。</p>
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置<p>数据库名（PG 系产品的 schema 名；MongoDB 为 database 名；MySQL / CynosDB / SqlServer 为库名）。PostgreSQL / MySQL / CynosDB / SqlServer 必传；MongoDB 可不传（底层使用 optString(&quot;&quot;), 不传时按空库名查询）。</p>
                     * @param _tableSchema <p>数据库名（PG 系产品的 schema 名；MongoDB 为 database 名；MySQL / CynosDB / SqlServer 为库名）。PostgreSQL / MySQL / CynosDB / SqlServer 必传；MongoDB 可不传（底层使用 optString(&quot;&quot;), 不传时按空库名查询）。</p>
                     * 
                     */
                    void SetTableSchema(const std::string& _tableSchema);

                    /**
                     * 判断参数 TableSchema 是否已赋值
                     * @return TableSchema 是否已赋值
                     * 
                     */
                    bool TableSchemaHasBeenSet() const;

                    /**
                     * 获取<p>表名（MongoDB 场景下为 collection 名，如 oplog.rs）。PostgreSQL / MySQL / CynosDB / SqlServer 必传；MongoDB 可不传（底层对该字段为空时直接返回空列表而非报错）。</p>
                     * @return TableName <p>表名（MongoDB 场景下为 collection 名，如 oplog.rs）。PostgreSQL / MySQL / CynosDB / SqlServer 必传；MongoDB 可不传（底层对该字段为空时直接返回空列表而非报错）。</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名（MongoDB 场景下为 collection 名，如 oplog.rs）。PostgreSQL / MySQL / CynosDB / SqlServer 必传；MongoDB 可不传（底层对该字段为空时直接返回空列表而非报错）。</p>
                     * @param _tableName <p>表名（MongoDB 场景下为 collection 名，如 oplog.rs）。PostgreSQL / MySQL / CynosDB / SqlServer 必传；MongoDB 可不传（底层对该字段为空时直接返回空列表而非报错）。</p>
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取<p>表所在的 Catalog（数据库目录）名。PostgreSQL / TBase 等 PG 系产品必传（例如 postgres），用于唯一定位 (catalog, schema, name) 三元组；MySQL / CynosDB / MongoDB / SqlServer 等非 PG 系产品可不传。</p>
                     * @return TableCatalog <p>表所在的 Catalog（数据库目录）名。PostgreSQL / TBase 等 PG 系产品必传（例如 postgres），用于唯一定位 (catalog, schema, name) 三元组；MySQL / CynosDB / MongoDB / SqlServer 等非 PG 系产品可不传。</p>
                     * 
                     */
                    std::string GetTableCatalog() const;

                    /**
                     * 设置<p>表所在的 Catalog（数据库目录）名。PostgreSQL / TBase 等 PG 系产品必传（例如 postgres），用于唯一定位 (catalog, schema, name) 三元组；MySQL / CynosDB / MongoDB / SqlServer 等非 PG 系产品可不传。</p>
                     * @param _tableCatalog <p>表所在的 Catalog（数据库目录）名。PostgreSQL / TBase 等 PG 系产品必传（例如 postgres），用于唯一定位 (catalog, schema, name) 三元组；MySQL / CynosDB / MongoDB / SqlServer 等非 PG 系产品可不传。</p>
                     * 
                     */
                    void SetTableCatalog(const std::string& _tableCatalog);

                    /**
                     * 判断参数 TableCatalog 是否已赋值
                     * @return TableCatalog 是否已赋值
                     * 
                     */
                    bool TableCatalogHasBeenSet() const;

                    /**
                     * 获取<p>查询日期，格式：yyyy-MM-dd。MySQL / CynosDB / PostgreSQL / SqlServer 可选（默认当天）；MongoDB 本接口不读取该字段（底层通过 dbbrain.collInfo 直接查询实时集合空间，不区分日期）。</p>
                     * @return Date <p>查询日期，格式：yyyy-MM-dd。MySQL / CynosDB / PostgreSQL / SqlServer 可选（默认当天）；MongoDB 本接口不读取该字段（底层通过 dbbrain.collInfo 直接查询实时集合空间，不区分日期）。</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>查询日期，格式：yyyy-MM-dd。MySQL / CynosDB / PostgreSQL / SqlServer 可选（默认当天）；MongoDB 本接口不读取该字段（底层通过 dbbrain.collInfo 直接查询实时集合空间，不区分日期）。</p>
                     * @param _date <p>查询日期，格式：yyyy-MM-dd。MySQL / CynosDB / PostgreSQL / SqlServer 可选（默认当天）；MongoDB 本接口不读取该字段（底层通过 dbbrain.collInfo 直接查询实时集合空间，不区分日期）。</p>
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取<p>排序字段。本接口（单表/单集合明细查询）均为可选：MySQL / CynosDB 可选，默认按 total_length 排序；PostgreSQL 可选，默认按 relation_size 排序；SqlServer 本接口不消费该字段的值；MongoDB 本接口完全不读取该字段。如需在 Top 表/库场景使用排序，请改用 DescribeTopSpaceTablesV2 / DescribeTopSpaceSchemasV2 接口。</p>
                     * @return SortBy <p>排序字段。本接口（单表/单集合明细查询）均为可选：MySQL / CynosDB 可选，默认按 total_length 排序；PostgreSQL 可选，默认按 relation_size 排序；SqlServer 本接口不消费该字段的值；MongoDB 本接口完全不读取该字段。如需在 Top 表/库场景使用排序，请改用 DescribeTopSpaceTablesV2 / DescribeTopSpaceSchemasV2 接口。</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序字段。本接口（单表/单集合明细查询）均为可选：MySQL / CynosDB 可选，默认按 total_length 排序；PostgreSQL 可选，默认按 relation_size 排序；SqlServer 本接口不消费该字段的值；MongoDB 本接口完全不读取该字段。如需在 Top 表/库场景使用排序，请改用 DescribeTopSpaceTablesV2 / DescribeTopSpaceSchemasV2 接口。</p>
                     * @param _sortBy <p>排序字段。本接口（单表/单集合明细查询）均为可选：MySQL / CynosDB 可选，默认按 total_length 排序；PostgreSQL 可选，默认按 relation_size 排序；SqlServer 本接口不消费该字段的值；MongoDB 本接口完全不读取该字段。如需在 Top 表/库场景使用排序，请改用 DescribeTopSpaceTablesV2 / DescribeTopSpaceSchemasV2 接口。</p>
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
                     * 获取<p>返回条数上限，默认 20，最大 100。MySQL / CynosDB / PostgreSQL 本接口会读取该参数控制明细条数；MongoDB 本接口不读取该字段（底层按入参 TableName 精确匹配返回集合明细，不受 Limit 控制）；SqlServer 本接口会校验但不消费其值。</p>
                     * @return Limit <p>返回条数上限，默认 20，最大 100。MySQL / CynosDB / PostgreSQL 本接口会读取该参数控制明细条数；MongoDB 本接口不读取该字段（底层按入参 TableName 精确匹配返回集合明细，不受 Limit 控制）；SqlServer 本接口会校验但不消费其值。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回条数上限，默认 20，最大 100。MySQL / CynosDB / PostgreSQL 本接口会读取该参数控制明细条数；MongoDB 本接口不读取该字段（底层按入参 TableName 精确匹配返回集合明细，不受 Limit 控制）；SqlServer 本接口会校验但不消费其值。</p>
                     * @param _limit <p>返回条数上限，默认 20，最大 100。MySQL / CynosDB / PostgreSQL 本接口会读取该参数控制明细条数；MongoDB 本接口不读取该字段（底层按入参 TableName 精确匹配返回集合明细，不受 Limit 控制）；SqlServer 本接口会校验但不消费其值。</p>
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
                     * 获取<p>MongoDB 专用——表名/集合名是否按正则模糊匹配。默认 true。其他产品忽略该字段。</p>
                     * @return Regex <p>MongoDB 专用——表名/集合名是否按正则模糊匹配。默认 true。其他产品忽略该字段。</p>
                     * 
                     */
                    bool GetRegex() const;

                    /**
                     * 设置<p>MongoDB 专用——表名/集合名是否按正则模糊匹配。默认 true。其他产品忽略该字段。</p>
                     * @param _regex <p>MongoDB 专用——表名/集合名是否按正则模糊匹配。默认 true。其他产品忽略该字段。</p>
                     * 
                     */
                    void SetRegex(const bool& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>服务产品类型（用于云 API 平台路由到对应产品后端）。取值：mysql / cynosdb / mariadb / postgres / mongodb / sqlserver 等。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>数据库名（PG 系产品的 schema 名；MongoDB 为 database 名；MySQL / CynosDB / SqlServer 为库名）。PostgreSQL / MySQL / CynosDB / SqlServer 必传；MongoDB 可不传（底层使用 optString(&quot;&quot;), 不传时按空库名查询）。</p>
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * <p>表名（MongoDB 场景下为 collection 名，如 oplog.rs）。PostgreSQL / MySQL / CynosDB / SqlServer 必传；MongoDB 可不传（底层对该字段为空时直接返回空列表而非报错）。</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>表所在的 Catalog（数据库目录）名。PostgreSQL / TBase 等 PG 系产品必传（例如 postgres），用于唯一定位 (catalog, schema, name) 三元组；MySQL / CynosDB / MongoDB / SqlServer 等非 PG 系产品可不传。</p>
                     */
                    std::string m_tableCatalog;
                    bool m_tableCatalogHasBeenSet;

                    /**
                     * <p>查询日期，格式：yyyy-MM-dd。MySQL / CynosDB / PostgreSQL / SqlServer 可选（默认当天）；MongoDB 本接口不读取该字段（底层通过 dbbrain.collInfo 直接查询实时集合空间，不区分日期）。</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>排序字段。本接口（单表/单集合明细查询）均为可选：MySQL / CynosDB 可选，默认按 total_length 排序；PostgreSQL 可选，默认按 relation_size 排序；SqlServer 本接口不消费该字段的值；MongoDB 本接口完全不读取该字段。如需在 Top 表/库场景使用排序，请改用 DescribeTopSpaceTablesV2 / DescribeTopSpaceSchemasV2 接口。</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>返回条数上限，默认 20，最大 100。MySQL / CynosDB / PostgreSQL 本接口会读取该参数控制明细条数；MongoDB 本接口不读取该字段（底层按入参 TableName 精确匹配返回集合明细，不受 Limit 控制）；SqlServer 本接口会校验但不消费其值。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>MongoDB 专用——表名/集合名是否按正则模糊匹配。默认 true。其他产品忽略该字段。</p>
                     */
                    bool m_regex;
                    bool m_regexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETABLESPACEDATAV2REQUEST_H_
