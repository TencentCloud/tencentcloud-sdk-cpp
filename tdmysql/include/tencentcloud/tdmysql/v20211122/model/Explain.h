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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPLAIN_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPLAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 执行计划
                */
                class Explain : public AbstractModel
                {
                public:
                    Explain();
                    ~Explain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标识符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID <p>标识符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>标识符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD <p>标识符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>查询类型</p><p>枚举值：</p><ul><li>SIMPLE： 没有子查询和 UNION 的普通查询，单表或普通 JOIN 都是 SIMPLE。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectType <p>查询类型</p><p>枚举值：</p><ul><li>SIMPLE： 没有子查询和 UNION 的普通查询，单表或普通 JOIN 都是 SIMPLE。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelectType() const;

                    /**
                     * 设置<p>查询类型</p><p>枚举值：</p><ul><li>SIMPLE： 没有子查询和 UNION 的普通查询，单表或普通 JOIN 都是 SIMPLE。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selectType <p>查询类型</p><p>枚举值：</p><ul><li>SIMPLE： 没有子查询和 UNION 的普通查询，单表或普通 JOIN 都是 SIMPLE。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSelectType(const std::string& _selectType);

                    /**
                     * 判断参数 SelectType 是否已赋值
                     * @return SelectType 是否已赋值
                     * 
                     */
                    bool SelectTypeHasBeenSet() const;

                    /**
                     * 获取<p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Table <p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置<p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _table <p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取<p>分区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitions <p>分区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPartitions() const;

                    /**
                     * 设置<p>分区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitions <p>分区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitions(const std::string& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取<p>访问类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>访问类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>访问类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>访问类型</p>
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
                     * 获取<p>可能使用的索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PossibleKeys <p>可能使用的索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPossibleKeys() const;

                    /**
                     * 设置<p>可能使用的索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _possibleKeys <p>可能使用的索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPossibleKeys(const std::string& _possibleKeys);

                    /**
                     * 判断参数 PossibleKeys 是否已赋值
                     * @return PossibleKeys 是否已赋值
                     * 
                     */
                    bool PossibleKeysHasBeenSet() const;

                    /**
                     * 获取<p>实际使用的索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key <p>实际使用的索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>实际使用的索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key <p>实际使用的索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>使用的索引长度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyLen <p>使用的索引长度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyLen() const;

                    /**
                     * 设置<p>使用的索引长度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyLen <p>使用的索引长度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyLen(const std::string& _keyLen);

                    /**
                     * 判断参数 KeyLen 是否已赋值
                     * @return KeyLen 是否已赋值
                     * 
                     */
                    bool KeyLenHasBeenSet() const;

                    /**
                     * 获取<p>与索引比较的列或常量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ref <p>与索引比较的列或常量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRef() const;

                    /**
                     * 设置<p>与索引比较的列或常量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ref <p>与索引比较的列或常量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRef(const std::string& _ref);

                    /**
                     * 判断参数 Ref 是否已赋值
                     * @return Ref 是否已赋值
                     * 
                     */
                    bool RefHasBeenSet() const;

                    /**
                     * 获取<p>估算扫描行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rows <p>估算扫描行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRows() const;

                    /**
                     * 设置<p>估算扫描行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rows <p>估算扫描行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRows(const std::string& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取<p>条件过滤后剩余行的估算百分比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filtered <p>条件过滤后剩余行的估算百分比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFiltered() const;

                    /**
                     * 设置<p>条件过滤后剩余行的估算百分比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filtered <p>条件过滤后剩余行的估算百分比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFiltered(const std::string& _filtered);

                    /**
                     * 判断参数 Filtered 是否已赋值
                     * @return Filtered 是否已赋值
                     * 
                     */
                    bool FilteredHasBeenSet() const;

                    /**
                     * 获取<p>附加信息，如 Using index、Using filesort 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra <p>附加信息，如 Using index、Using filesort 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>附加信息，如 Using index、Using filesort 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extra <p>附加信息，如 Using index、Using filesort 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * <p>标识符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>查询类型</p><p>枚举值：</p><ul><li>SIMPLE： 没有子查询和 UNION 的普通查询，单表或普通 JOIN 都是 SIMPLE。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selectType;
                    bool m_selectTypeHasBeenSet;

                    /**
                     * <p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * <p>分区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * <p>访问类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>可能使用的索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_possibleKeys;
                    bool m_possibleKeysHasBeenSet;

                    /**
                     * <p>实际使用的索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>使用的索引长度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyLen;
                    bool m_keyLenHasBeenSet;

                    /**
                     * <p>与索引比较的列或常量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ref;
                    bool m_refHasBeenSet;

                    /**
                     * <p>估算扫描行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * <p>条件过滤后剩余行的估算百分比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filtered;
                    bool m_filteredHasBeenSet;

                    /**
                     * <p>附加信息，如 Using index、Using filesort 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_EXPLAIN_H_
