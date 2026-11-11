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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESQLEXPLAINV2REQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESQLEXPLAINV2REQUEST_H_

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
                * DescribeSqlExplainV2请求参数结构体
                */
                class DescribeSqlExplainV2Request : public AbstractModel
                {
                public:
                    DescribeSqlExplainV2Request();
                    ~DescribeSqlExplainV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务产品类型。取值：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、dcdb（TDSQL MySQL 版）、mariadb（TDSQL MariaDB 版）。</p>
                     * @return Product <p>服务产品类型。取值：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、dcdb（TDSQL MySQL 版）、mariadb（TDSQL MariaDB 版）。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型。取值：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、dcdb（TDSQL MySQL 版）、mariadb（TDSQL MariaDB 版）。</p>
                     * @param _product <p>服务产品类型。取值：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、dcdb（TDSQL MySQL 版）、mariadb（TDSQL MariaDB 版）。</p>
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
                     * 获取<p>待分析的 SQL 语句。仅支持单条 SELECT 语句；若以 EXPLAIN 开头会自动剥离 EXPLAIN 前缀后分析。最大 4096 字符。</p>
                     * @return SqlText <p>待分析的 SQL 语句。仅支持单条 SELECT 语句；若以 EXPLAIN 开头会自动剥离 EXPLAIN 前缀后分析。最大 4096 字符。</p>
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置<p>待分析的 SQL 语句。仅支持单条 SELECT 语句；若以 EXPLAIN 开头会自动剥离 EXPLAIN 前缀后分析。最大 4096 字符。</p>
                     * @param _sqlText <p>待分析的 SQL 语句。仅支持单条 SELECT 语句；若以 EXPLAIN 开头会自动剥离 EXPLAIN 前缀后分析。最大 4096 字符。</p>
                     * 
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID。MySQL: cdb-xxxxxxx，TDSQL-C: cynosdbmysql-ins-xxxxxxx，MariaDB: tdsql-xxxxx，TDSQL-MySQL： '集群id&amp;分片id',如果TDSQL-MySQL数据库类型同时传入了集群id则instanceId字段只需要传入分片id。最大 64 字符。与 ClusterId 至少需传入其一。</p>
                     * @return InstanceId <p>实例 ID。MySQL: cdb-xxxxxxx，TDSQL-C: cynosdbmysql-ins-xxxxxxx，MariaDB: tdsql-xxxxx，TDSQL-MySQL： '集群id&amp;分片id',如果TDSQL-MySQL数据库类型同时传入了集群id则instanceId字段只需要传入分片id。最大 64 字符。与 ClusterId 至少需传入其一。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。MySQL: cdb-xxxxxxx，TDSQL-C: cynosdbmysql-ins-xxxxxxx，MariaDB: tdsql-xxxxx，TDSQL-MySQL： '集群id&amp;分片id',如果TDSQL-MySQL数据库类型同时传入了集群id则instanceId字段只需要传入分片id。最大 64 字符。与 ClusterId 至少需传入其一。</p>
                     * @param _instanceId <p>实例 ID。MySQL: cdb-xxxxxxx，TDSQL-C: cynosdbmysql-ins-xxxxxxx，MariaDB: tdsql-xxxxx，TDSQL-MySQL： '集群id&amp;分片id',如果TDSQL-MySQL数据库类型同时传入了集群id则instanceId字段只需要传入分片id。最大 64 字符。与 ClusterId 至少需传入其一。</p>
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
                     * 获取<p>数据库名。可选；为空时按当前 SQL 上下文执行。最大 64 字符。</p>
                     * @return Schema <p>数据库名。可选；为空时按当前 SQL 上下文执行。最大 64 字符。</p>
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置<p>数据库名。可选；为空时按当前 SQL 上下文执行。最大 64 字符。</p>
                     * @param _schema <p>数据库名。可选；为空时按当前 SQL 上下文执行。最大 64 字符。</p>
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取<p>集群 ID。仅 TDSQL-MySQL时使用，与 InstanceId 至少需传入其一。最大 64 字符。</p>
                     * @return ClusterId <p>集群 ID。仅 TDSQL-MySQL时使用，与 InstanceId 至少需传入其一。最大 64 字符。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID。仅 TDSQL-MySQL时使用，与 InstanceId 至少需传入其一。最大 64 字符。</p>
                     * @param _clusterId <p>集群 ID。仅 TDSQL-MySQL时使用，与 InstanceId 至少需传入其一。最大 64 字符。</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>是否输出可视化执行树</p><p>默认值：false</p>
                     * @return Visual <p>是否输出可视化执行树</p><p>默认值：false</p>
                     * 
                     */
                    bool GetVisual() const;

                    /**
                     * 设置<p>是否输出可视化执行树</p><p>默认值：false</p>
                     * @param _visual <p>是否输出可视化执行树</p><p>默认值：false</p>
                     * 
                     */
                    void SetVisual(const bool& _visual);

                    /**
                     * 判断参数 Visual 是否已赋值
                     * @return Visual 是否已赋值
                     * 
                     */
                    bool VisualHasBeenSet() const;

                private:

                    /**
                     * <p>服务产品类型。取值：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、dcdb（TDSQL MySQL 版）、mariadb（TDSQL MariaDB 版）。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>待分析的 SQL 语句。仅支持单条 SELECT 语句；若以 EXPLAIN 开头会自动剥离 EXPLAIN 前缀后分析。最大 4096 字符。</p>
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * <p>实例 ID。MySQL: cdb-xxxxxxx，TDSQL-C: cynosdbmysql-ins-xxxxxxx，MariaDB: tdsql-xxxxx，TDSQL-MySQL： '集群id&amp;分片id',如果TDSQL-MySQL数据库类型同时传入了集群id则instanceId字段只需要传入分片id。最大 64 字符。与 ClusterId 至少需传入其一。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>数据库名。可选；为空时按当前 SQL 上下文执行。最大 64 字符。</p>
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * <p>集群 ID。仅 TDSQL-MySQL时使用，与 InstanceId 至少需传入其一。最大 64 字符。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>是否输出可视化执行树</p><p>默认值：false</p>
                     */
                    bool m_visual;
                    bool m_visualHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESQLEXPLAINV2REQUEST_H_
