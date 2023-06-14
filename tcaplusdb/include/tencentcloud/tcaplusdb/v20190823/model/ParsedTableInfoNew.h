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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PARSEDTABLEINFONEW_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PARSEDTABLEINFONEW_H_

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
                * 从IDL表描述文件中解析出来的表信息
                */
                class ParsedTableInfoNew : public AbstractModel
                {
                public:
                    ParsedTableInfoNew();
                    ~ParsedTableInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表格描述语言类型：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableIdlType 表格描述语言类型：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置表格描述语言类型：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableIdlType 表格描述语言类型：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableIdlType(const std::string& _tableIdlType);

                    /**
                     * 判断参数 TableIdlType 是否已赋值
                     * @return TableIdlType 是否已赋值
                     * 
                     */
                    bool TableIdlTypeHasBeenSet() const;

                    /**
                     * 获取表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableInstanceId 表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableInstanceId 表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     * 
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表格名称
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
                     * 获取表格数据结构类型：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableType 表格数据结构类型：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表格数据结构类型：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableType 表格数据结构类型：`GENERIC`或`LIST`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyFields 主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyFields() const;

                    /**
                     * 设置主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyFields 主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyFields(const std::string& _keyFields);

                    /**
                     * 判断参数 KeyFields 是否已赋值
                     * @return KeyFields 是否已赋值
                     * 
                     */
                    bool KeyFieldsHasBeenSet() const;

                    /**
                     * 获取原主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldKeyFields 原主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOldKeyFields() const;

                    /**
                     * 设置原主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldKeyFields 原主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldKeyFields(const std::string& _oldKeyFields);

                    /**
                     * 判断参数 OldKeyFields 是否已赋值
                     * @return OldKeyFields 是否已赋值
                     * 
                     */
                    bool OldKeyFieldsHasBeenSet() const;

                    /**
                     * 获取非主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueFields 非主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueFields() const;

                    /**
                     * 设置非主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueFields 非主键字段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueFields(const std::string& _valueFields);

                    /**
                     * 判断参数 ValueFields 是否已赋值
                     * @return ValueFields 是否已赋值
                     * 
                     */
                    bool ValueFieldsHasBeenSet() const;

                    /**
                     * 获取原非主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldValueFields 原非主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOldValueFields() const;

                    /**
                     * 设置原非主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldValueFields 原非主键字段信息，改表校验时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldValueFields(const std::string& _oldValueFields);

                    /**
                     * 判断参数 OldValueFields 是否已赋值
                     * @return OldValueFields 是否已赋值
                     * 
                     */
                    bool OldValueFieldsHasBeenSet() const;

                    /**
                     * 获取所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableGroupId 所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableGroupId 所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SumKeyFieldSize 主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSumKeyFieldSize() const;

                    /**
                     * 设置主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sumKeyFieldSize 主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSumKeyFieldSize(const int64_t& _sumKeyFieldSize);

                    /**
                     * 判断参数 SumKeyFieldSize 是否已赋值
                     * @return SumKeyFieldSize 是否已赋值
                     * 
                     */
                    bool SumKeyFieldSizeHasBeenSet() const;

                    /**
                     * 获取非主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SumValueFieldSize 非主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSumValueFieldSize() const;

                    /**
                     * 设置非主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sumValueFieldSize 非主键字段总大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSumValueFieldSize(const int64_t& _sumValueFieldSize);

                    /**
                     * 判断参数 SumValueFieldSize 是否已赋值
                     * @return SumValueFieldSize 是否已赋值
                     * 
                     */
                    bool SumValueFieldSizeHasBeenSet() const;

                    /**
                     * 获取索引键集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexKeySet 索引键集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexKeySet() const;

                    /**
                     * 设置索引键集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexKeySet 索引键集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexKeySet(const std::string& _indexKeySet);

                    /**
                     * 判断参数 IndexKeySet 是否已赋值
                     * @return IndexKeySet 是否已赋值
                     * 
                     */
                    bool IndexKeySetHasBeenSet() const;

                    /**
                     * 获取分表因子集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardingKeySet 分表因子集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShardingKeySet() const;

                    /**
                     * 设置分表因子集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shardingKeySet 分表因子集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShardingKeySet(const std::string& _shardingKeySet);

                    /**
                     * 判断参数 ShardingKeySet 是否已赋值
                     * @return ShardingKeySet 是否已赋值
                     * 
                     */
                    bool ShardingKeySetHasBeenSet() const;

                    /**
                     * 获取TDR版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TdrVersion TDR版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTdrVersion() const;

                    /**
                     * 设置TDR版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tdrVersion TDR版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTdrVersion(const int64_t& _tdrVersion);

                    /**
                     * 判断参数 TdrVersion 是否已赋值
                     * @return TdrVersion 是否已赋值
                     * 
                     */
                    bool TdrVersionHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取LIST类型表格元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListElementNum LIST类型表格元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetListElementNum() const;

                    /**
                     * 设置LIST类型表格元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listElementNum LIST类型表格元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListElementNum(const int64_t& _listElementNum);

                    /**
                     * 判断参数 ListElementNum 是否已赋值
                     * @return ListElementNum 是否已赋值
                     * 
                     */
                    bool ListElementNumHasBeenSet() const;

                    /**
                     * 获取SORTLIST类型表格排序字段个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SortFieldNum SORTLIST类型表格排序字段个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSortFieldNum() const;

                    /**
                     * 设置SORTLIST类型表格排序字段个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sortFieldNum SORTLIST类型表格排序字段个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSortFieldNum(const int64_t& _sortFieldNum);

                    /**
                     * 判断参数 SortFieldNum 是否已赋值
                     * @return SortFieldNum 是否已赋值
                     * 
                     */
                    bool SortFieldNumHasBeenSet() const;

                    /**
                     * 获取SORTLIST类型表格排序顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SortRule SORTLIST类型表格排序顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSortRule() const;

                    /**
                     * 设置SORTLIST类型表格排序顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sortRule SORTLIST类型表格排序顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSortRule(const int64_t& _sortRule);

                    /**
                     * 判断参数 SortRule 是否已赋值
                     * @return SortRule 是否已赋值
                     * 
                     */
                    bool SortRuleHasBeenSet() const;

                private:

                    /**
                     * 表格描述语言类型：`PROTO`或`TDR`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * 表格实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * 表格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表格数据结构类型：`GENERIC`或`LIST`
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
                     * 所属表格组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

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

                    /**
                     * LIST类型表格元素个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_listElementNum;
                    bool m_listElementNumHasBeenSet;

                    /**
                     * SORTLIST类型表格排序字段个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sortFieldNum;
                    bool m_sortFieldNumHasBeenSet;

                    /**
                     * SORTLIST类型表格排序顺序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sortRule;
                    bool m_sortRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PARSEDTABLEINFONEW_H_
