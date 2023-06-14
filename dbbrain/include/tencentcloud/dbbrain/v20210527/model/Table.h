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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 表结构。
                */
                class Table : public AbstractModel
                {
                public:
                    Table();
                    ~Table() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取库名。
                     * @return TableSchema 库名。
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置库名。
                     * @param _tableSchema 库名。
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
                     * 获取表名。
                     * @return TableName 表名。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名。
                     * @param _tableName 表名。
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
                     * 获取库表的存储引擎。
                     * @return Engine 库表的存储引擎。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置库表的存储引擎。
                     * @param _engine 库表的存储引擎。
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取行数。
                     * @return TableRows 行数。
                     * 
                     */
                    int64_t GetTableRows() const;

                    /**
                     * 设置行数。
                     * @param _tableRows 行数。
                     * 
                     */
                    void SetTableRows(const int64_t& _tableRows);

                    /**
                     * 判断参数 TableRows 是否已赋值
                     * @return TableRows 是否已赋值
                     * 
                     */
                    bool TableRowsHasBeenSet() const;

                    /**
                     * 获取总使用空间（MB）。
                     * @return TotalLength 总使用空间（MB）。
                     * 
                     */
                    double GetTotalLength() const;

                    /**
                     * 设置总使用空间（MB）。
                     * @param _totalLength 总使用空间（MB）。
                     * 
                     */
                    void SetTotalLength(const double& _totalLength);

                    /**
                     * 判断参数 TotalLength 是否已赋值
                     * @return TotalLength 是否已赋值
                     * 
                     */
                    bool TotalLengthHasBeenSet() const;

                private:

                    /**
                     * 库名。
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * 表名。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 库表的存储引擎。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 行数。
                     */
                    int64_t m_tableRows;
                    bool m_tableRowsHasBeenSet;

                    /**
                     * 总使用空间（MB）。
                     */
                    double m_totalLength;
                    bool m_totalLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLE_H_
