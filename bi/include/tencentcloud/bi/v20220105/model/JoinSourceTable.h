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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_JOINSOURCETABLE_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_JOINSOURCETABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/TableField.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 多表关联原始表信息
                */
                class JoinSourceTable : public AbstractModel
                {
                public:
                    JoinSourceTable();
                    ~JoinSourceTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1:数据源原表,2:本地表,3:Excel表,4:API表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableNodeType 1:数据源原表,2:本地表,3:Excel表,4:API表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTableNodeType() const;

                    /**
                     * 设置1:数据源原表,2:本地表,3:Excel表,4:API表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableNodeType 1:数据源原表,2:本地表,3:Excel表,4:API表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableNodeType(const uint64_t& _tableNodeType);

                    /**
                     * 判断参数 TableNodeType 是否已赋值
                     * @return TableNodeType 是否已赋值
                     * 
                     */
                    bool TableNodeTypeHasBeenSet() const;

                    /**
                     * 获取原始表节点Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableNodeId 原始表节点Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableNodeId() const;

                    /**
                     * 设置原始表节点Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableNodeId 原始表节点Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableNodeId(const std::string& _tableNodeId);

                    /**
                     * 判断参数 TableNodeId 是否已赋值
                     * @return TableNodeId 是否已赋值
                     * 
                     */
                    bool TableNodeIdHasBeenSet() const;

                    /**
                     * 获取父节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 父节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置父节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentId 父节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取非必填, 数据源原表没有ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 非必填, 数据源原表没有ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置非必填, 数据源原表没有ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 非必填, 数据源原表没有ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取必填,数据源原表用原始表名, 其他类型用BI的逻辑表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 必填,数据源原表用原始表名, 其他类型用BI的逻辑表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置必填,数据源原表用原始表名, 其他类型用BI的逻辑表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 必填,数据源原表用原始表名, 其他类型用BI的逻辑表名
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
                     * 获取原始表需要展示的字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fields 原始表需要展示的字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableField> GetFields() const;

                    /**
                     * 设置原始表需要展示的字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fields 原始表需要展示的字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFields(const std::vector<TableField>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDatasourceId() const;

                    /**
                     * 设置数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const uint64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取非必填,前端展示的数据源别名,excel建表需要
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableAlias 非必填,前端展示的数据源别名,excel建表需要
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableAlias() const;

                    /**
                     * 设置非必填,前端展示的数据源别名,excel建表需要
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableAlias 非必填,前端展示的数据源别名,excel建表需要
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableAlias(const std::string& _tableAlias);

                    /**
                     * 判断参数 TableAlias 是否已赋值
                     * @return TableAlias 是否已赋值
                     * 
                     */
                    bool TableAliasHasBeenSet() const;

                private:

                    /**
                     * 1:数据源原表,2:本地表,3:Excel表,4:API表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tableNodeType;
                    bool m_tableNodeTypeHasBeenSet;

                    /**
                     * 原始表节点Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableNodeId;
                    bool m_tableNodeIdHasBeenSet;

                    /**
                     * 父节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 非必填, 数据源原表没有ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 必填,数据源原表用原始表名, 其他类型用BI的逻辑表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 原始表需要展示的字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableField> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 非必填,前端展示的数据源别名,excel建表需要
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableAlias;
                    bool m_tableAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_JOINSOURCETABLE_H_
