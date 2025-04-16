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
#include <tencentcloud/dlc/v20210125/model/DataGovernPolicy.h>
#include <tencentcloud/dlc/v20210125/model/SmartPolicy.h>


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
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置该数据表所属数据库名字
                     * @param _databaseName 该数据表所属数据库名字
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
                     * 获取数据表名字
                     * @return TableName 数据表名字
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置数据表名字
                     * @param _tableName 数据表名字
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
                     * 获取该数据表所属数据源名字
                     * @return DatasourceConnectionName 该数据表所属数据源名字
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置该数据表所属数据源名字
                     * @param _datasourceConnectionName 该数据表所属数据源名字
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
                     * 获取该数据表备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableComment 该数据表备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置该数据表备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableComment 该数据表备注
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
                     * 获取具体类型，表or视图
                     * @return Type 具体类型，表or视图
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置具体类型，表or视图
                     * @param _type 具体类型，表or视图
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
                     * 获取数据格式类型，hive，iceberg等
                     * @return TableFormat 数据格式类型，hive，iceberg等
                     * 
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置数据格式类型，hive，iceberg等
                     * @param _tableFormat 数据格式类型，hive，iceberg等
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
                     * 获取建表用户昵称
                     * @return UserAlias 建表用户昵称
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置建表用户昵称
                     * @param _userAlias 建表用户昵称
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
                     * @return UserSubUin 建表用户ID
                     * 
                     */
                    std::string GetUserSubUin() const;

                    /**
                     * 设置建表用户ID
                     * @param _userSubUin 建表用户ID
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
                     * @deprecated
                     */
                    DataGovernPolicy GetGovernPolicy() const;

                    /**
                     * 设置数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _governPolicy 数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetGovernPolicy(const DataGovernPolicy& _governPolicy);

                    /**
                     * 判断参数 GovernPolicy 是否已赋值
                     * @return GovernPolicy 是否已赋值
                     * @deprecated
                     */
                    bool GovernPolicyHasBeenSet() const;

                    /**
                     * 获取库数据治理是否关闭，关闭：true，开启：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbGovernPolicyIsDisable 库数据治理是否关闭，关闭：true，开启：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetDbGovernPolicyIsDisable() const;

                    /**
                     * 设置库数据治理是否关闭，关闭：true，开启：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbGovernPolicyIsDisable 库数据治理是否关闭，关闭：true，开启：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetDbGovernPolicyIsDisable(const std::string& _dbGovernPolicyIsDisable);

                    /**
                     * 判断参数 DbGovernPolicyIsDisable 是否已赋值
                     * @return DbGovernPolicyIsDisable 是否已赋值
                     * @deprecated
                     */
                    bool DbGovernPolicyIsDisableHasBeenSet() const;

                    /**
                     * 获取智能数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartPolicy 智能数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartPolicy GetSmartPolicy() const;

                    /**
                     * 设置智能数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartPolicy 智能数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartPolicy(const SmartPolicy& _smartPolicy);

                    /**
                     * 判断参数 SmartPolicy 是否已赋值
                     * @return SmartPolicy 是否已赋值
                     * 
                     */
                    bool SmartPolicyHasBeenSet() const;

                    /**
                     * 获取T-ICEBERG表的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrimaryKeys T-ICEBERG表的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPrimaryKeys() const;

                    /**
                     * 设置T-ICEBERG表的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _primaryKeys T-ICEBERG表的主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrimaryKeys(const std::vector<std::string>& _primaryKeys);

                    /**
                     * 判断参数 PrimaryKeys 是否已赋值
                     * @return PrimaryKeys 是否已赋值
                     * 
                     */
                    bool PrimaryKeysHasBeenSet() const;

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
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 该数据表备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * 具体类型，表or视图
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据格式类型，hive，iceberg等
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

                    /**
                     * 建表用户昵称
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * 建表用户ID
                     */
                    std::string m_userSubUin;
                    bool m_userSubUinHasBeenSet;

                    /**
                     * 数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataGovernPolicy m_governPolicy;
                    bool m_governPolicyHasBeenSet;

                    /**
                     * 库数据治理是否关闭，关闭：true，开启：false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbGovernPolicyIsDisable;
                    bool m_dbGovernPolicyIsDisableHasBeenSet;

                    /**
                     * 智能数据治理配置项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartPolicy m_smartPolicy;
                    bool m_smartPolicyHasBeenSet;

                    /**
                     * T-ICEBERG表的主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_primaryKeys;
                    bool m_primaryKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TABLEBASEINFO_H_
