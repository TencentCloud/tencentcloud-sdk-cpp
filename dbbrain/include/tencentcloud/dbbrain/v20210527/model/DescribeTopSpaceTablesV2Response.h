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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLESV2RESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLESV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MysqlSpaceObjectItem.h>
#include <tencentcloud/dbbrain/v20210527/model/PostgresSpaceObjectItem.h>
#include <tencentcloud/dbbrain/v20210527/model/MongoDBTableSpaceItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeTopSpaceTablesV2返回参数结构体
                */
                class DescribeTopSpaceTablesV2Response : public AbstractModel
                {
                public:
                    DescribeTopSpaceTablesV2Response();
                    ~DescribeTopSpaceTablesV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>MySQL/PG/TDSQL 系列产品表级空间对象列表。当产品为 mysql/cynosdb/tdsql/dcdb/mariadb/postgres 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MysqlObjects <p>MySQL/PG/TDSQL 系列产品表级空间对象列表。当产品为 mysql/cynosdb/tdsql/dcdb/mariadb/postgres 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MysqlSpaceObjectItem> GetMysqlObjects() const;

                    /**
                     * 判断参数 MysqlObjects 是否已赋值
                     * @return MysqlObjects 是否已赋值
                     * 
                     */
                    bool MysqlObjectsHasBeenSet() const;

                    /**
                     * 获取<p>PostgreSQL 产品表级空间对象列表。当产品为 postgres 时返回。字段语义与 MySQL 不同：使用 RelationSize / TableSize / IndexSize / TotalRelationSize / TableBloat 等 PG 特有指标。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostgresObjects <p>PostgreSQL 产品表级空间对象列表。当产品为 postgres 时返回。字段语义与 MySQL 不同：使用 RelationSize / TableSize / IndexSize / TotalRelationSize / TableBloat 等 PG 特有指标。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PostgresSpaceObjectItem> GetPostgresObjects() const;

                    /**
                     * 判断参数 PostgresObjects 是否已赋值
                     * @return PostgresObjects 是否已赋值
                     * 
                     */
                    bool PostgresObjectsHasBeenSet() const;

                    /**
                     * 获取<p>MongoDB 产品表级（集合级）空间对象列表。当产品为 mongodb 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MongodbObjects <p>MongoDB 产品表级（集合级）空间对象列表。当产品为 mongodb 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MongoDBTableSpaceItem> GetMongodbObjects() const;

                    /**
                     * 判断参数 MongodbObjects 是否已赋值
                     * @return MongodbObjects 是否已赋值
                     * 
                     */
                    bool MongodbObjectsHasBeenSet() const;

                    /**
                     * 获取<p>数据采集时间戳（秒）。</p>
                     * @return Timestamp <p>数据采集时间戳（秒）。</p>
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
                     * <p>MySQL/PG/TDSQL 系列产品表级空间对象列表。当产品为 mysql/cynosdb/tdsql/dcdb/mariadb/postgres 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MysqlSpaceObjectItem> m_mysqlObjects;
                    bool m_mysqlObjectsHasBeenSet;

                    /**
                     * <p>PostgreSQL 产品表级空间对象列表。当产品为 postgres 时返回。字段语义与 MySQL 不同：使用 RelationSize / TableSize / IndexSize / TotalRelationSize / TableBloat 等 PG 特有指标。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PostgresSpaceObjectItem> m_postgresObjects;
                    bool m_postgresObjectsHasBeenSet;

                    /**
                     * <p>MongoDB 产品表级（集合级）空间对象列表。当产品为 mongodb 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MongoDBTableSpaceItem> m_mongodbObjects;
                    bool m_mongodbObjectsHasBeenSet;

                    /**
                     * <p>数据采集时间戳（秒）。</p>
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLESV2RESPONSE_H_
