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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSPARTITIONSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSPARTITIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DropDMSPartitions请求参数结构体
                */
                class DropDMSPartitionsRequest : public AbstractModel
                {
                public:
                    DropDMSPartitionsRequest();
                    ~DropDMSPartitionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名称
                     * @return DatabaseName 数据库名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
                     * @param _databaseName 数据库名称
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取数据库Schema名称
                     * @return SchemaName 数据库Schema名称
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置数据库Schema名称
                     * @param _schemaName 数据库Schema名称
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取数据表名称
                     * @return TableName 数据表名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置数据表名称
                     * @param _tableName 数据表名称
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
                     * 获取分区名称
                     * @return Name 分区名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分区名称
                     * @param _name 分区名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取单个分区名称
                     * @return Values 单个分区名称
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置单个分区名称
                     * @param _values 单个分区名称
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取是否删除分区数据
                     * @return DeleteData 是否删除分区数据
                     * 
                     */
                    bool GetDeleteData() const;

                    /**
                     * 设置是否删除分区数据
                     * @param _deleteData 是否删除分区数据
                     * 
                     */
                    void SetDeleteData(const bool& _deleteData);

                    /**
                     * 判断参数 DeleteData 是否已赋值
                     * @return DeleteData 是否已赋值
                     * 
                     */
                    bool DeleteDataHasBeenSet() const;

                    /**
                     * 获取数据源连接名
                     * @return DatasourceConnectionName 数据源连接名
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源连接名
                     * @param _datasourceConnectionName 数据源连接名
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据库Schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 数据表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 分区名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 单个分区名称
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否删除分区数据
                     */
                    bool m_deleteData;
                    bool m_deleteDataHasBeenSet;

                    /**
                     * 数据源连接名
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSPARTITIONSREQUEST_H_
