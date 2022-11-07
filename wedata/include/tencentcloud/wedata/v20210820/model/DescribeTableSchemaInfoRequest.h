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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCHEMAINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCHEMAINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableSchemaInfo请求参数结构体
                */
                class DescribeTableSchemaInfoRequest : public AbstractModel
                {
                public:
                    DescribeTableSchemaInfoRequest();
                    ~DescribeTableSchemaInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表名称
                     * @return Name 表名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置表名称
                     * @param Name 表名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DatabaseName 数据库名称
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
                     * @param DatabaseName 数据库名称
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取表类型
                     * @return MsType 表类型
                     */
                    std::string GetMsType() const;

                    /**
                     * 设置表类型
                     * @param MsType 表类型
                     */
                    void SetMsType(const std::string& _msType);

                    /**
                     * 判断参数 MsType 是否已赋值
                     * @return MsType 是否已赋值
                     */
                    bool MsTypeHasBeenSet() const;

                    /**
                     * 获取数据源id
                     * @return DatasourceId 数据源id
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源id
                     * @param DatasourceId 数据源id
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取HIVE传rpc
                     * @return ConnectionType HIVE传rpc
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置HIVE传rpc
                     * @param ConnectionType HIVE传rpc
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取元数据Database下的Schema名称
                     * @return SchemaName 元数据Database下的Schema名称
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置元数据Database下的Schema名称
                     * @param SchemaName 元数据Database下的Schema名称
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     */
                    bool SchemaNameHasBeenSet() const;

                private:

                    /**
                     * 表名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表类型
                     */
                    std::string m_msType;
                    bool m_msTypeHasBeenSet;

                    /**
                     * 数据源id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * HIVE传rpc
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * 元数据Database下的Schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCHEMAINFOREQUEST_H_
