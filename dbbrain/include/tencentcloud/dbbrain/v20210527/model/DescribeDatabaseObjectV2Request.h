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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDATABASEOBJECTV2REQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDATABASEOBJECTV2REQUEST_H_

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
                * DescribeDatabaseObjectV2请求参数结构体
                */
                class DescribeDatabaseObjectV2Request : public AbstractModel
                {
                public:
                    DescribeDatabaseObjectV2Request();
                    ~DescribeDatabaseObjectV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务产品类型。取值：sqlserver（云数据库 Sqlserver）。</p>
                     * @return Product <p>服务产品类型。取值：sqlserver（云数据库 Sqlserver）。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型。取值：sqlserver（云数据库 Sqlserver）。</p>
                     * @param _product <p>服务产品类型。取值：sqlserver（云数据库 Sqlserver）。</p>
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
                     * 获取<p>查询对象类型。</p><p>枚举值：</p><ul><li>TableDDL： 建表+索引DDL</li><li>TableStatistics： 表空间统计</li></ul>
                     * @return ObjectType <p>查询对象类型。</p><p>枚举值：</p><ul><li>TableDDL： 建表+索引DDL</li><li>TableStatistics： 表空间统计</li></ul>
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置<p>查询对象类型。</p><p>枚举值：</p><ul><li>TableDDL： 建表+索引DDL</li><li>TableStatistics： 表空间统计</li></ul>
                     * @param _objectType <p>查询对象类型。</p><p>枚举值：</p><ul><li>TableDDL： 建表+索引DDL</li><li>TableStatistics： 表空间统计</li></ul>
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID。SQLServer: mssql-xxxx。</p>
                     * @return InstanceId <p>实例 ID。SQLServer: mssql-xxxx。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。SQLServer: mssql-xxxx。</p>
                     * @param _instanceId <p>实例 ID。SQLServer: mssql-xxxx。</p>
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
                     * 获取<p>库名（catalog）。TableStatistics 时必填；TableDDL 时可选。</p>
                     * @return TableSchema <p>库名（catalog）。TableStatistics 时必填；TableDDL 时可选。</p>
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置<p>库名（catalog）。TableStatistics 时必填；TableDDL 时可选。</p>
                     * @param _tableSchema <p>库名（catalog）。TableStatistics 时必填；TableDDL 时可选。</p>
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
                     * 获取<p>当产品为sqlserver时，表名/视图名，支持 schema.table 格式，未带 schema 默认 dbo</p>
                     * @return TableName <p>当产品为sqlserver时，表名/视图名，支持 schema.table 格式，未带 schema 默认 dbo</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>当产品为sqlserver时，表名/视图名，支持 schema.table 格式，未带 schema 默认 dbo</p>
                     * @param _tableName <p>当产品为sqlserver时，表名/视图名，支持 schema.table 格式，未带 schema 默认 dbo</p>
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * <p>服务产品类型。取值：sqlserver（云数据库 Sqlserver）。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>查询对象类型。</p><p>枚举值：</p><ul><li>TableDDL： 建表+索引DDL</li><li>TableStatistics： 表空间统计</li></ul>
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * <p>实例 ID。SQLServer: mssql-xxxx。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>库名（catalog）。TableStatistics 时必填；TableDDL 时可选。</p>
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * <p>当产品为sqlserver时，表名/视图名，支持 schema.table 格式，未带 schema 默认 dbo</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDATABASEOBJECTV2REQUEST_H_
