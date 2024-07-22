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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDatabaseObjects请求参数结构体
                */
                class DescribeDatabaseObjectsRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseObjectsRequest();
                    ~DescribeDatabaseObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。	
                     * @return DBInstanceId 实例ID。	
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。	
                     * @param _dBInstanceId 实例ID。	
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取查询的对象类型。支持查询的数据对象有：database,schema,sequence,procedure,type,function,table,view,matview,column。
                     * @return ObjectType 查询的对象类型。支持查询的数据对象有：database,schema,sequence,procedure,type,function,table,view,matview,column。
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置查询的对象类型。支持查询的数据对象有：database,schema,sequence,procedure,type,function,table,view,matview,column。
                     * @param _objectType 查询的对象类型。支持查询的数据对象有：database,schema,sequence,procedure,type,function,table,view,matview,column。
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
                     * 获取单次显示数量，默认20。可选范围为[0,100]。
                     * @return Limit 单次显示数量，默认20。可选范围为[0,100]。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次显示数量，默认20。可选范围为[0,100]。
                     * @param _limit 单次显示数量，默认20。可选范围为[0,100]。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取数据偏移量，从0开始。	
                     * @return Offset 数据偏移量，从0开始。	
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，从0开始。	
                     * @param _offset 数据偏移量，从0开始。	
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询对象所属的数据库。当查询对象类型不为database时，此参数必填。
                     * @return DatabaseName 查询对象所属的数据库。当查询对象类型不为database时，此参数必填。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置查询对象所属的数据库。当查询对象类型不为database时，此参数必填。
                     * @param _databaseName 查询对象所属的数据库。当查询对象类型不为database时，此参数必填。
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
                     * 获取查询对象所属的模式。当查询对象类型不为database、schema时，此参数必填。
                     * @return SchemaName 查询对象所属的模式。当查询对象类型不为database、schema时，此参数必填。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置查询对象所属的模式。当查询对象类型不为database、schema时，此参数必填。
                     * @param _schemaName 查询对象所属的模式。当查询对象类型不为database、schema时，此参数必填。
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
                     * 获取查询对象所属的表。当查询对象类型为column时，此参数必填。
                     * @return TableName 查询对象所属的表。当查询对象类型为column时，此参数必填。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置查询对象所属的表。当查询对象类型为column时，此参数必填。
                     * @param _tableName 查询对象所属的表。当查询对象类型为column时，此参数必填。
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
                     * 实例ID。	
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 查询的对象类型。支持查询的数据对象有：database,schema,sequence,procedure,type,function,table,view,matview,column。
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * 单次显示数量，默认20。可选范围为[0,100]。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据偏移量，从0开始。	
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询对象所属的数据库。当查询对象类型不为database时，此参数必填。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 查询对象所属的模式。当查询对象类型不为database、schema时，此参数必填。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 查询对象所属的表。当查询对象类型为column时，此参数必填。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
