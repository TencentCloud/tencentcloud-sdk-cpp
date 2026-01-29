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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_TABLEINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_TABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 表信息
                */
                class TableInfo : public AbstractModel
                {
                public:
                    TableInfo();
                    ~TableInfo() = default;
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
                     * 获取表中文档数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 表中文档数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置表中文档数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 表中文档数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取表的大小（即表中文档总大小），单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 表的大小（即表中文档总大小），单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置表的大小（即表中文档总大小），单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size 表的大小（即表中文档总大小），单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取索引数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexCount 索引数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndexCount() const;

                    /**
                     * 设置索引数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexCount 索引数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexCount(const int64_t& _indexCount);

                    /**
                     * 判断参数 IndexCount 是否已赋值
                     * @return IndexCount 是否已赋值
                     * 
                     */
                    bool IndexCountHasBeenSet() const;

                    /**
                     * 获取索引占用空间，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexSize 索引占用空间，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndexSize() const;

                    /**
                     * 设置索引占用空间，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexSize 索引占用空间，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexSize(const int64_t& _indexSize);

                    /**
                     * 判断参数 IndexSize 是否已赋值
                     * @return IndexSize 是否已赋值
                     * 
                     */
                    bool IndexSizeHasBeenSet() const;

                private:

                    /**
                     * 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表中文档数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 表的大小（即表中文档总大小），单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 索引数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indexCount;
                    bool m_indexCountHasBeenSet;

                    /**
                     * 索引占用空间，单位：字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indexSize;
                    bool m_indexSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_TABLEINFO_H_
