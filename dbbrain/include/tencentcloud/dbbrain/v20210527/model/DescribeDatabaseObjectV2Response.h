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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDATABASEOBJECTV2RESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDATABASEOBJECTV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/IndexDDLInfo.h>
#include <tencentcloud/dbbrain/v20210527/model/TableStatistics.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDatabaseObjectV2返回参数结构体
                */
                class DescribeDatabaseObjectV2Response : public AbstractModel
                {
                public:
                    DescribeDatabaseObjectV2Response();
                    ~DescribeDatabaseObjectV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>索引 DDL 列表，每项为一条 CREATE INDEX 语句，无索引时为空数组。</p>
                     * @return IndexDDLs <p>索引 DDL 列表，每项为一条 CREATE INDEX 语句，无索引时为空数组。</p>
                     * 
                     */
                    std::vector<IndexDDLInfo> GetIndexDDLs() const;

                    /**
                     * 判断参数 IndexDDLs 是否已赋值
                     * @return IndexDDLs 是否已赋值
                     * 
                     */
                    bool IndexDDLsHasBeenSet() const;

                    /**
                     * 获取<p>建表 DDL 语句，对象不存在时为空串。</p>
                     * @return TableDDL <p>建表 DDL 语句，对象不存在时为空串。</p>
                     * 
                     */
                    std::string GetTableDDL() const;

                    /**
                     * 判断参数 TableDDL 是否已赋值
                     * @return TableDDL 是否已赋值
                     * 
                     */
                    bool TableDDLHasBeenSet() const;

                    /**
                     * 获取<p>表名。</p>
                     * @return TableName <p>表名。</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取<p>库名。</p>
                     * @return TableSchema <p>库名。</p>
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 判断参数 TableSchema 是否已赋值
                     * @return TableSchema 是否已赋值
                     * 
                     */
                    bool TableSchemaHasBeenSet() const;

                    /**
                     * 获取<p>表空间统计。</p>
                     * @return TableStatistics <p>表空间统计。</p>
                     * 
                     */
                    TableStatistics GetTableStatistics() const;

                    /**
                     * 判断参数 TableStatistics 是否已赋值
                     * @return TableStatistics 是否已赋值
                     * 
                     */
                    bool TableStatisticsHasBeenSet() const;

                private:

                    /**
                     * <p>索引 DDL 列表，每项为一条 CREATE INDEX 语句，无索引时为空数组。</p>
                     */
                    std::vector<IndexDDLInfo> m_indexDDLs;
                    bool m_indexDDLsHasBeenSet;

                    /**
                     * <p>建表 DDL 语句，对象不存在时为空串。</p>
                     */
                    std::string m_tableDDL;
                    bool m_tableDDLHasBeenSet;

                    /**
                     * <p>表名。</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>库名。</p>
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * <p>表空间统计。</p>
                     */
                    TableStatistics m_tableStatistics;
                    bool m_tableStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDATABASEOBJECTV2RESPONSE_H_
