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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLEXPLAINTABLEREFV2_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLEXPLAINTABLEREFV2_H_

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
                * SQL 涉及的表信息。包含库名与表名，用于在前端展示 SQL 涉及的表清单。
                */
                class SqlExplainTableRefV2 : public AbstractModel
                {
                public:
                    SqlExplainTableRefV2();
                    ~SqlExplainTableRefV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>表名。</p>
                     * @return TableName <p>表名。</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名。</p>
                     * @param _tableName <p>表名。</p>
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
                     * 获取<p>表所在的数据库名。</p>
                     * @return TableSchema <p>表所在的数据库名。</p>
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置<p>表所在的数据库名。</p>
                     * @param _tableSchema <p>表所在的数据库名。</p>
                     * 
                     */
                    void SetTableSchema(const std::string& _tableSchema);

                    /**
                     * 判断参数 TableSchema 是否已赋值
                     * @return TableSchema 是否已赋值
                     * 
                     */
                    bool TableSchemaHasBeenSet() const;

                private:

                    /**
                     * <p>表名。</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>表所在的数据库名。</p>
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLEXPLAINTABLEREFV2_H_
