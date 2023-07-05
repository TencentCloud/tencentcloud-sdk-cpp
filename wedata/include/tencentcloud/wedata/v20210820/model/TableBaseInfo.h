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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DlcDataGovernPolicy.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 建dlc表所需信息
                */
                class TableBaseInfo : public AbstractModel
                {
                public:
                    TableBaseInfo();
                    ~TableBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceConnectionName 数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceConnectionName 数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取表备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableComment 表备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置表备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableComment 表备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableComment(const std::string& _tableComment);

                    /**
                     * 判断参数 TableComment 是否已赋值
                     * @return TableComment 是否已赋值
                     * 
                     */
                    bool TableCommentHasBeenSet() const;

                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据格式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableFormat 数据格式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置数据格式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableFormat 数据格式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableFormat(const std::string& _tableFormat);

                    /**
                     * 判断参数 TableFormat 是否已赋值
                     * @return TableFormat 是否已赋值
                     * 
                     */
                    bool TableFormatHasBeenSet() const;

                    /**
                     * 获取用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAlias 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userAlias 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取建表用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserSubUin 建表用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserSubUin() const;

                    /**
                     * 设置建表用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userSubUin 建表用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserSubUin(const std::string& _userSubUin);

                    /**
                     * 判断参数 UserSubUin 是否已赋值
                     * @return UserSubUin 是否已赋值
                     * 
                     */
                    bool UserSubUinHasBeenSet() const;

                    /**
                     * 获取数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GovernPolicy 数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DlcDataGovernPolicy GetGovernPolicy() const;

                    /**
                     * 设置数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _governPolicy 数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGovernPolicy(const DlcDataGovernPolicy& _governPolicy);

                    /**
                     * 判断参数 GovernPolicy 是否已赋值
                     * @return GovernPolicy 是否已赋值
                     * 
                     */
                    bool GovernPolicyHasBeenSet() const;

                    /**
                     * 获取库数据治理是否关闭，关闭：true，开启：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbGovernPolicyIsDisable 库数据治理是否关闭，关闭：true，开启：false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbGovernPolicyIsDisable() const;

                    /**
                     * 设置库数据治理是否关闭，关闭：true，开启：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbGovernPolicyIsDisable 库数据治理是否关闭，关闭：true，开启：false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbGovernPolicyIsDisable(const std::string& _dbGovernPolicyIsDisable);

                    /**
                     * 判断参数 DbGovernPolicyIsDisable 是否已赋值
                     * @return DbGovernPolicyIsDisable 是否已赋值
                     * 
                     */
                    bool DbGovernPolicyIsDisableHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 表备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据格式类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

                    /**
                     * 用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * 建表用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userSubUin;
                    bool m_userSubUinHasBeenSet;

                    /**
                     * 数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DlcDataGovernPolicy m_governPolicy;
                    bool m_governPolicyHasBeenSet;

                    /**
                     * 库数据治理是否关闭，关闭：true，开启：false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbGovernPolicyIsDisable;
                    bool m_dbGovernPolicyIsDisableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEBASEINFO_H_
