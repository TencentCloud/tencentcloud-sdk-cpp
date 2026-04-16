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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DIFFCHUNKITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DIFFCHUNKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据块内不一致数据的详情信息
                */
                class DiffChunkItem : public AbstractModel
                {
                public:
                    DiffChunkItem();
                    ~DiffChunkItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBName 数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBName 数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取schema名
                     * @return SchemaName schema名
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema名
                     * @param _schemaName schema名
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
                     * 获取数据表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 数据表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置数据表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 数据表名
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
                     * 获取分块号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChunkId 分块号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChunkId() const;

                    /**
                     * 设置分块号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chunkId 分块号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChunkId(const int64_t& _chunkId);

                    /**
                     * 判断参数 ChunkId 是否已赋值
                     * @return ChunkId 是否已赋值
                     * 
                     */
                    bool ChunkIdHasBeenSet() const;

                    /**
                     * 获取数据标识符，比如主键信息等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Identifier 数据标识符，比如主键信息等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置数据标识符，比如主键信息等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identifier 数据标识符，比如主键信息等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取不一致类型，可能的取值为：data - 两边数据不一致；srcLack - 源缺失；dstLack - 目标缺失
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiffType 不一致类型，可能的取值为：data - 两边数据不一致；srcLack - 源缺失；dstLack - 目标缺失
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiffType() const;

                    /**
                     * 设置不一致类型，可能的取值为：data - 两边数据不一致；srcLack - 源缺失；dstLack - 目标缺失
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diffType 不一致类型，可能的取值为：data - 两边数据不一致；srcLack - 源缺失；dstLack - 目标缺失
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiffType(const std::string& _diffType);

                    /**
                     * 判断参数 DiffType 是否已赋值
                     * @return DiffType 是否已赋值
                     * 
                     */
                    bool DiffTypeHasBeenSet() const;

                    /**
                     * 获取表结构信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaInfo 表结构信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSchemaInfo() const;

                    /**
                     * 设置表结构信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaInfo 表结构信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaInfo(const std::vector<std::string>& _schemaInfo);

                    /**
                     * 判断参数 SchemaInfo 是否已赋值
                     * @return SchemaInfo 是否已赋值
                     * 
                     */
                    bool SchemaInfoHasBeenSet() const;

                    /**
                     * 获取源端数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcItem 源端数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSrcItem() const;

                    /**
                     * 设置源端数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcItem 源端数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcItem(const std::vector<std::string>& _srcItem);

                    /**
                     * 判断参数 SrcItem 是否已赋值
                     * @return SrcItem 是否已赋值
                     * 
                     */
                    bool SrcItemHasBeenSet() const;

                    /**
                     * 获取目标端数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstItem 目标端数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDstItem() const;

                    /**
                     * 设置目标端数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstItem 目标端数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstItem(const std::vector<std::string>& _dstItem);

                    /**
                     * 判断参数 DstItem 是否已赋值
                     * @return DstItem 是否已赋值
                     * 
                     */
                    bool DstItemHasBeenSet() const;

                    /**
                     * 获取完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishedAt 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishedAt 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinishedAt(const std::string& _finishedAt);

                    /**
                     * 判断参数 FinishedAt 是否已赋值
                     * @return FinishedAt 是否已赋值
                     * 
                     */
                    bool FinishedAtHasBeenSet() const;

                private:

                    /**
                     * 数据库名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * schema名
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 数据表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 分块号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chunkId;
                    bool m_chunkIdHasBeenSet;

                    /**
                     * 数据标识符，比如主键信息等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * 不一致类型，可能的取值为：data - 两边数据不一致；srcLack - 源缺失；dstLack - 目标缺失
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diffType;
                    bool m_diffTypeHasBeenSet;

                    /**
                     * 表结构信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_schemaInfo;
                    bool m_schemaInfoHasBeenSet;

                    /**
                     * 源端数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_srcItem;
                    bool m_srcItemHasBeenSet;

                    /**
                     * 目标端数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dstItem;
                    bool m_dstItemHasBeenSet;

                    /**
                     * 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DIFFCHUNKITEM_H_
