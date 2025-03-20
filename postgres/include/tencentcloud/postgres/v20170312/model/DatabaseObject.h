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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEOBJECT_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 描述数据库中某个对象所属的类型、是在哪个数据库、模式、表中的对象。
                */
                class DatabaseObject : public AbstractModel
                {
                public:
                    DatabaseObject();
                    ~DatabaseObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持使用的数据库对象类型有：account,database,schema,sequence,procedure,type,function,table,view,matview,column。
                     * @return ObjectType 支持使用的数据库对象类型有：account,database,schema,sequence,procedure,type,function,table,view,matview,column。
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置支持使用的数据库对象类型有：account,database,schema,sequence,procedure,type,function,table,view,matview,column。
                     * @param _objectType 支持使用的数据库对象类型有：account,database,schema,sequence,procedure,type,function,table,view,matview,column。
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
                     * 获取所描述的数据库对象名称
                     * @return ObjectName 所描述的数据库对象名称
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置所描述的数据库对象名称
                     * @param _objectName 所描述的数据库对象名称
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                    /**
                     * 获取所要描述的数据库对象，所属的数据库名称。当描述对象类型不为database时，此参数必选。
                     * @return DatabaseName 所要描述的数据库对象，所属的数据库名称。当描述对象类型不为database时，此参数必选。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置所要描述的数据库对象，所属的数据库名称。当描述对象类型不为database时，此参数必选。
                     * @param _databaseName 所要描述的数据库对象，所属的数据库名称。当描述对象类型不为database时，此参数必选。
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
                     * 获取所要描述的数据库对象，所属的模式名称。当描述对象不为database、schema时，此参数必选。
                     * @return SchemaName 所要描述的数据库对象，所属的模式名称。当描述对象不为database、schema时，此参数必选。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置所要描述的数据库对象，所属的模式名称。当描述对象不为database、schema时，此参数必选。
                     * @param _schemaName 所要描述的数据库对象，所属的模式名称。当描述对象不为database、schema时，此参数必选。
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
                     * 获取所要描述的数据库对象，所属的表名称。当描述的对象类型为column时，此参数必填。
                     * @return TableName 所要描述的数据库对象，所属的表名称。当描述的对象类型为column时，此参数必填。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置所要描述的数据库对象，所属的表名称。当描述的对象类型为column时，此参数必填。
                     * @param _tableName 所要描述的数据库对象，所属的表名称。当描述的对象类型为column时，此参数必填。
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
                     * 支持使用的数据库对象类型有：account,database,schema,sequence,procedure,type,function,table,view,matview,column。
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * 所描述的数据库对象名称
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * 所要描述的数据库对象，所属的数据库名称。当描述对象类型不为database时，此参数必选。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 所要描述的数据库对象，所属的模式名称。当描述对象不为database、schema时，此参数必选。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 所要描述的数据库对象，所属的表名称。当描述的对象类型为column时，此参数必填。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEOBJECT_H_
