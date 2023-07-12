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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNAGGREGATIONLINEAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNAGGREGATIONLINEAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SimpleColumnInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 列血缘聚合信息
                */
                class ColumnAggregationLineage : public AbstractModel
                {
                public:
                    ColumnAggregationLineage();
                    ~ColumnAggregationLineage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名
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
                     * 获取父节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 父节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置父节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentId 父节点ID
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
                     * 获取元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetastoreType 元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetastoreType() const;

                    /**
                     * 设置元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metastoreType 元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetastoreType(const std::string& _metastoreType);

                    /**
                     * 判断参数 MetastoreType 是否已赋值
                     * @return MetastoreType 是否已赋值
                     * 
                     */
                    bool MetastoreTypeHasBeenSet() const;

                    /**
                     * 获取字符串类型的父节点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentSet 字符串类型的父节点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentSet() const;

                    /**
                     * 设置字符串类型的父节点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentSet 字符串类型的父节点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentSet(const std::string& _parentSet);

                    /**
                     * 判断参数 ParentSet 是否已赋值
                     * @return ParentSet 是否已赋值
                     * 
                     */
                    bool ParentSetHasBeenSet() const;

                    /**
                     * 获取字符串类型的子节点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChildSet 字符串类型的子节点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChildSet() const;

                    /**
                     * 设置字符串类型的子节点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _childSet 字符串类型的子节点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildSet(const std::string& _childSet);

                    /**
                     * 判断参数 ChildSet 是否已赋值
                     * @return ChildSet 是否已赋值
                     * 
                     */
                    bool ChildSetHasBeenSet() const;

                    /**
                     * 获取列信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnInfoSet 列信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SimpleColumnInfo> GetColumnInfoSet() const;

                    /**
                     * 设置列信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnInfoSet 列信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnInfoSet(const std::vector<SimpleColumnInfo>& _columnInfoSet);

                    /**
                     * 判断参数 ColumnInfoSet 是否已赋值
                     * @return ColumnInfoSet 是否已赋值
                     * 
                     */
                    bool ColumnInfoSetHasBeenSet() const;

                private:

                    /**
                     * 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 父节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metastoreType;
                    bool m_metastoreTypeHasBeenSet;

                    /**
                     * 字符串类型的父节点集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentSet;
                    bool m_parentSetHasBeenSet;

                    /**
                     * 字符串类型的子节点集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_childSet;
                    bool m_childSetHasBeenSet;

                    /**
                     * 列信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SimpleColumnInfo> m_columnInfoSet;
                    bool m_columnInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNAGGREGATIONLINEAGE_H_
