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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TABLEBASEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TABLEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据表配置信息
                */
                class TableBaseInfo : public AbstractModel
                {
                public:
                    TableBaseInfo();
                    ~TableBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该数据表所属数据库名字
                     * @return DatabaseName 该数据表所属数据库名字
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置该数据表所属数据库名字
                     * @param DatabaseName 该数据表所属数据库名字
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取数据表名字
                     * @return TableName 数据表名字
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置数据表名字
                     * @param TableName 数据表名字
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取该数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceConnectionName 该数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置该数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasourceConnectionName 该数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 该数据表所属数据库名字
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据表名字
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 该数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TABLEBASEINFO_H_
