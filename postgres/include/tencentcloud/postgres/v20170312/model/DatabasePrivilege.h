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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEPRIVILEGE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DatabaseObject.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 指定账号对数据库对象拥有的权限列表
                */
                class DatabasePrivilege : public AbstractModel
                {
                public:
                    DatabasePrivilege();
                    ~DatabasePrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库对象，当ObjectType为database时，DatabaseName/SchemaName/TableName可为空；当ObjectType为schema时，SchemaName/TableName可为空；当ObjectType为column时，TableName不可为空，其余情况均可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Object 数据库对象，当ObjectType为database时，DatabaseName/SchemaName/TableName可为空；当ObjectType为schema时，SchemaName/TableName可为空；当ObjectType为column时，TableName不可为空，其余情况均可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DatabaseObject GetObject() const;

                    /**
                     * 设置数据库对象，当ObjectType为database时，DatabaseName/SchemaName/TableName可为空；当ObjectType为schema时，SchemaName/TableName可为空；当ObjectType为column时，TableName不可为空，其余情况均可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _object 数据库对象，当ObjectType为database时，DatabaseName/SchemaName/TableName可为空；当ObjectType为schema时，SchemaName/TableName可为空；当ObjectType为column时，TableName不可为空，其余情况均可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObject(const DatabaseObject& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取指定账号对数据库对象拥有的权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivilegeSet 指定账号对数据库对象拥有的权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPrivilegeSet() const;

                    /**
                     * 设置指定账号对数据库对象拥有的权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilegeSet 指定账号对数据库对象拥有的权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivilegeSet(const std::vector<std::string>& _privilegeSet);

                    /**
                     * 判断参数 PrivilegeSet 是否已赋值
                     * @return PrivilegeSet 是否已赋值
                     * 
                     */
                    bool PrivilegeSetHasBeenSet() const;

                private:

                    /**
                     * 数据库对象，当ObjectType为database时，DatabaseName/SchemaName/TableName可为空；当ObjectType为schema时，SchemaName/TableName可为空；当ObjectType为column时，TableName不可为空，其余情况均可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DatabaseObject m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * 指定账号对数据库对象拥有的权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_privilegeSet;
                    bool m_privilegeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DATABASEPRIVILEGE_H_
