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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PARSEDTABLEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PARSEDTABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 从表描述文件中解析出来的表信息
                */
                class ParsedTableInfo : public AbstractModel
                {
                public:
                    ParsedTableInfo();
                    ~ParsedTableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表描述语言类型：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableIdlType 表描述语言类型：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置表描述语言类型：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableIdlType 表描述语言类型：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableIdlType(const std::string& _tableIdlType);

                    /**
                     * 判断参数 TableIdlType 是否已赋值
                     * @return TableIdlType 是否已赋值
                     */
                    bool TableIdlTypeHasBeenSet() const;

                    /**
                     * 获取表实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableInstanceId 表实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置表实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableInstanceId 表实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableName 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取表数据类型：`GENERIC`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableType 表数据类型：`GENERIC`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表数据类型：`GENERIC`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableType 表数据类型：`GENERIC`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyFields 主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKeyFields() const;

                    /**
                     * 设置主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KeyFields 主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKeyFields(const std::string& _keyFields);

                    /**
                     * 判断参数 KeyFields 是否已赋值
                     * @return KeyFields 是否已赋值
                     */
                    bool KeyFieldsHasBeenSet() const;

                    /**
                     * 获取原主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldKeyFields 原主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOldKeyFields() const;

                    /**
                     * 设置原主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OldKeyFields 原主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOldKeyFields(const std::string& _oldKeyFields);

                    /**
                     * 判断参数 OldKeyFields 是否已赋值
                     * @return OldKeyFields 是否已赋值
                     */
                    bool OldKeyFieldsHasBeenSet() const;

                    /**
                     * 获取非主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueFields 非主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValueFields() const;

                    /**
                     * 设置非主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ValueFields 非主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValueFields(const std::string& _valueFields);

                    /**
                     * 判断参数 ValueFields 是否已赋值
                     * @return ValueFields 是否已赋值
                     */
                    bool ValueFieldsHasBeenSet() const;

                    /**
                     * 获取原非主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldValueFields 原非主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOldValueFields() const;

                    /**
                     * 设置原非主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OldValueFields 原非主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOldValueFields(const std::string& _oldValueFields);

                    /**
                     * 判断参数 OldValueFields 是否已赋值
                     * @return OldValueFields 是否已赋值
                     */
                    bool OldValueFieldsHasBeenSet() const;

                    /**
                     * 获取所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogicZoneId 所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogicZoneId() const;

                    /**
                     * 设置所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogicZoneId 所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogicZoneId(const std::string& _logicZoneId);

                    /**
                     * 判断参数 LogicZoneId 是否已赋值
                     * @return LogicZoneId 是否已赋值
                     */
                    bool LogicZoneIdHasBeenSet() const;

                    /**
                     * 获取主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SumKeyFieldSize 主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSumKeyFieldSize() const;

                    /**
                     * 设置主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SumKeyFieldSize 主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSumKeyFieldSize(const int64_t& _sumKeyFieldSize);

                    /**
                     * 判断参数 SumKeyFieldSize 是否已赋值
                     * @return SumKeyFieldSize 是否已赋值
                     */
                    bool SumKeyFieldSizeHasBeenSet() const;

                    /**
                     * 获取非主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SumValueFieldSize 非主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSumValueFieldSize() const;

                    /**
                     * 设置非主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SumValueFieldSize 非主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSumValueFieldSize(const int64_t& _sumValueFieldSize);

                    /**
                     * 判断参数 SumValueFieldSize 是否已赋值
                     * @return SumValueFieldSize 是否已赋值
                     */
                    bool SumValueFieldSizeHasBeenSet() const;

                    /**
                     * 获取索引键集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexKeySet 索引键集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIndexKeySet() const;

                    /**
                     * 设置索引键集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IndexKeySet 索引键集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIndexKeySet(const std::string& _indexKeySet);

                    /**
                     * 判断参数 IndexKeySet 是否已赋值
                     * @return IndexKeySet 是否已赋值
                     */
                    bool IndexKeySetHasBeenSet() const;

                    /**
                     * 获取分表因子集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardingKeySet 分表因子集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetShardingKeySet() const;

                    /**
                     * 设置分表因子集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ShardingKeySet 分表因子集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetShardingKeySet(const std::string& _shardingKeySet);

                    /**
                     * 判断参数 ShardingKeySet 是否已赋值
                     * @return ShardingKeySet 是否已赋值
                     */
                    bool ShardingKeySetHasBeenSet() const;

                    /**
                     * 获取TDR版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TdrVersion TDR版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTdrVersion() const;

                    /**
                     * 设置TDR版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TdrVersion TDR版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTdrVersion(const int64_t& _tdrVersion);

                    /**
                     * 判断参数 TdrVersion 是否已赋值
                     * @return TdrVersion 是否已赋值
                     */
                    bool TdrVersionHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 表描述语言类型：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * 表实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表数据类型：`GENERIC`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyFields;
                    bool m_keyFieldsHasBeenSet;

                    /**
                     * 原主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldKeyFields;
                    bool m_oldKeyFieldsHasBeenSet;

                    /**
                     * 非主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueFields;
                    bool m_valueFieldsHasBeenSet;

                    /**
                     * 原非主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldValueFields;
                    bool m_oldValueFieldsHasBeenSet;

                    /**
                     * 所属大区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logicZoneId;
                    bool m_logicZoneIdHasBeenSet;

                    /**
                     * 主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sumKeyFieldSize;
                    bool m_sumKeyFieldSizeHasBeenSet;

                    /**
                     * 非主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sumValueFieldSize;
                    bool m_sumValueFieldSizeHasBeenSet;

                    /**
                     * 索引键集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexKeySet;
                    bool m_indexKeySetHasBeenSet;

                    /**
                     * 分表因子集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shardingKeySet;
                    bool m_shardingKeySetHasBeenSet;

                    /**
                     * TDR版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tdrVersion;
                    bool m_tdrVersionHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PARSEDTABLEINFO_H_
