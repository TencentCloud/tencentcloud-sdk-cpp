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
                     * 获取<p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBName <p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置<p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBName <p>数据库名</p>
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
                     * 获取<p>schema名</p>
                     * @return SchemaName <p>schema名</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>schema名</p>
                     * @param _schemaName <p>schema名</p>
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
                     * 获取<p>数据表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName <p>数据表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>数据表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName <p>数据表名</p>
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
                     * 获取<p>分块号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChunkId <p>分块号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChunkId() const;

                    /**
                     * 设置<p>分块号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chunkId <p>分块号</p>
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
                     * 获取<p>数据标识符，比如主键信息等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Identifier <p>数据标识符，比如主键信息等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>数据标识符，比如主键信息等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identifier <p>数据标识符，比如主键信息等</p>
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
                     * 获取<p>不一致类型，可能的取值为：data - 两边数据不一致；srcLack - 源缺失；dstLack - 目标缺失</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiffType <p>不一致类型，可能的取值为：data - 两边数据不一致；srcLack - 源缺失；dstLack - 目标缺失</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiffType() const;

                    /**
                     * 设置<p>不一致类型，可能的取值为：data - 两边数据不一致；srcLack - 源缺失；dstLack - 目标缺失</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diffType <p>不一致类型，可能的取值为：data - 两边数据不一致；srcLack - 源缺失；dstLack - 目标缺失</p>
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
                     * 获取<p>表结构信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaInfo <p>表结构信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSchemaInfo() const;

                    /**
                     * 设置<p>表结构信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaInfo <p>表结构信息</p>
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
                     * 获取<p>源端数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcItem <p>源端数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSrcItem() const;

                    /**
                     * 设置<p>源端数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcItem <p>源端数据</p>
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
                     * 获取<p>目标端数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstItem <p>目标端数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDstItem() const;

                    /**
                     * 设置<p>目标端数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstItem <p>目标端数据</p>
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
                     * 获取<p>完成时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishedAt <p>完成时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置<p>完成时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishedAt <p>完成时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * <p>数据库名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * <p>schema名</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>数据表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>分块号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chunkId;
                    bool m_chunkIdHasBeenSet;

                    /**
                     * <p>数据标识符，比如主键信息等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * <p>不一致类型，可能的取值为：data - 两边数据不一致；srcLack - 源缺失；dstLack - 目标缺失</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diffType;
                    bool m_diffTypeHasBeenSet;

                    /**
                     * <p>表结构信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_schemaInfo;
                    bool m_schemaInfoHasBeenSet;

                    /**
                     * <p>源端数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_srcItem;
                    bool m_srcItemHasBeenSet;

                    /**
                     * <p>目标端数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dstItem;
                    bool m_dstItemHasBeenSet;

                    /**
                     * <p>完成时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
