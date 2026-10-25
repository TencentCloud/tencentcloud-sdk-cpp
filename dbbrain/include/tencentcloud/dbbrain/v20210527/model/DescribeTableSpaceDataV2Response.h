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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETABLESPACEDATAV2RESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETABLESPACEDATAV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MysqlSpaceObjectItem.h>
#include <tencentcloud/dbbrain/v20210527/model/PostgresSpaceObjectItem.h>
#include <tencentcloud/dbbrain/v20210527/model/MongodbSpaceObjectItem.h>
#include <tencentcloud/dbbrain/v20210527/model/SqlServerSpaceObjectItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeTableSpaceDataV2返回参数结构体
                */
                class DescribeTableSpaceDataV2Response : public AbstractModel
                {
                public:
                    DescribeTableSpaceDataV2Response();
                    ~DescribeTableSpaceDataV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>MySQL 系列产品表空间数据。当产品为 mysql/cynosdb/tdsql/dcdb/mariadb 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MysqlTableSpaceData <p>MySQL 系列产品表空间数据。当产品为 mysql/cynosdb/tdsql/dcdb/mariadb 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MysqlSpaceObjectItem GetMysqlTableSpaceData() const;

                    /**
                     * 判断参数 MysqlTableSpaceData 是否已赋值
                     * @return MysqlTableSpaceData 是否已赋值
                     * 
                     */
                    bool MysqlTableSpaceDataHasBeenSet() const;

                    /**
                     * 获取<p>PostgreSQL 产品表空间数据。当产品为 postgres 时返回。字段语义与 MySQL 不同：使用 RelationSize / TableSize / IndexSize / TotalRelationSize / TableBloat 等 PG 特有指标。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostgresTableSpaceData <p>PostgreSQL 产品表空间数据。当产品为 postgres 时返回。字段语义与 MySQL 不同：使用 RelationSize / TableSize / IndexSize / TotalRelationSize / TableBloat 等 PG 特有指标。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PostgresSpaceObjectItem GetPostgresTableSpaceData() const;

                    /**
                     * 判断参数 PostgresTableSpaceData 是否已赋值
                     * @return PostgresTableSpaceData 是否已赋值
                     * 
                     */
                    bool PostgresTableSpaceDataHasBeenSet() const;

                    /**
                     * 获取<p>MongoDB 产品表空间数据。当产品为 mongodb 时返回。包含集合级明细数组 SpaceSchemas 以及外层采集时间戳 Timestamp（秒级）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MongodbTableSpaceData <p>MongoDB 产品表空间数据。当产品为 mongodb 时返回。包含集合级明细数组 SpaceSchemas 以及外层采集时间戳 Timestamp（秒级）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MongodbSpaceObjectItem GetMongodbTableSpaceData() const;

                    /**
                     * 判断参数 MongodbTableSpaceData 是否已赋值
                     * @return MongodbTableSpaceData 是否已赋值
                     * 
                     */
                    bool MongodbTableSpaceDataHasBeenSet() const;

                    /**
                     * 获取<p>SQL Server 产品表空间数据。当产品为 sqlserver 时返回。字段结构与 MysqlSpaceObjectItem 同构，无 FragRatio / PhysicalFileSize。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlServerTableSpaceData <p>SQL Server 产品表空间数据。当产品为 sqlserver 时返回。字段结构与 MysqlSpaceObjectItem 同构，无 FragRatio / PhysicalFileSize。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SqlServerSpaceObjectItem GetSqlServerTableSpaceData() const;

                    /**
                     * 判断参数 SqlServerTableSpaceData 是否已赋值
                     * @return SqlServerTableSpaceData 是否已赋值
                     * 
                     */
                    bool SqlServerTableSpaceDataHasBeenSet() const;

                    /**
                     * 获取<p>数据采集时间戳（秒）。可能为空（部分产品分支/异常场景下不保证返回），调用方请做空值兼容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp <p>数据采集时间戳（秒）。可能为空（部分产品分支/异常场景下不保证返回），调用方请做空值兼容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * <p>MySQL 系列产品表空间数据。当产品为 mysql/cynosdb/tdsql/dcdb/mariadb 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MysqlSpaceObjectItem m_mysqlTableSpaceData;
                    bool m_mysqlTableSpaceDataHasBeenSet;

                    /**
                     * <p>PostgreSQL 产品表空间数据。当产品为 postgres 时返回。字段语义与 MySQL 不同：使用 RelationSize / TableSize / IndexSize / TotalRelationSize / TableBloat 等 PG 特有指标。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostgresSpaceObjectItem m_postgresTableSpaceData;
                    bool m_postgresTableSpaceDataHasBeenSet;

                    /**
                     * <p>MongoDB 产品表空间数据。当产品为 mongodb 时返回。包含集合级明细数组 SpaceSchemas 以及外层采集时间戳 Timestamp（秒级）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MongodbSpaceObjectItem m_mongodbTableSpaceData;
                    bool m_mongodbTableSpaceDataHasBeenSet;

                    /**
                     * <p>SQL Server 产品表空间数据。当产品为 sqlserver 时返回。字段结构与 MysqlSpaceObjectItem 同构，无 FragRatio / PhysicalFileSize。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SqlServerSpaceObjectItem m_sqlServerTableSpaceData;
                    bool m_sqlServerTableSpaceDataHasBeenSet;

                    /**
                     * <p>数据采集时间戳（秒）。可能为空（部分产品分支/异常场景下不保证返回），调用方请做空值兼容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETABLESPACEDATAV2RESPONSE_H_
