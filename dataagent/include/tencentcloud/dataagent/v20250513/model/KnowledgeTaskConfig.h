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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_KNOWLEDGETASKCONFIG_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_KNOWLEDGETASKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/ColumnInfo.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 任务配置
                */
                class KnowledgeTaskConfig : public AbstractModel
                {
                public:
                    KnowledgeTaskConfig();
                    ~KnowledgeTaskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取切片类型  0:自定义切片，1：智能切片
                     * @return ChunkType 切片类型  0:自定义切片，1：智能切片
                     * 
                     */
                    int64_t GetChunkType() const;

                    /**
                     * 设置切片类型  0:自定义切片，1：智能切片
                     * @param _chunkType 切片类型  0:自定义切片，1：智能切片
                     * 
                     */
                    void SetChunkType(const int64_t& _chunkType);

                    /**
                     * 判断参数 ChunkType 是否已赋值
                     * @return ChunkType 是否已赋值
                     * 
                     */
                    bool ChunkTypeHasBeenSet() const;

                    /**
                     * 获取/智能切片：最小值 1000，默认 4800 自定义切片：正整数即可,默认值 1000
                     * @return MaxChunkSize /智能切片：最小值 1000，默认 4800 自定义切片：正整数即可,默认值 1000
                     * 
                     */
                    int64_t GetMaxChunkSize() const;

                    /**
                     * 设置/智能切片：最小值 1000，默认 4800 自定义切片：正整数即可,默认值 1000
                     * @param _maxChunkSize /智能切片：最小值 1000，默认 4800 自定义切片：正整数即可,默认值 1000
                     * 
                     */
                    void SetMaxChunkSize(const int64_t& _maxChunkSize);

                    /**
                     * 判断参数 MaxChunkSize 是否已赋值
                     * @return MaxChunkSize 是否已赋值
                     * 
                     */
                    bool MaxChunkSizeHasBeenSet() const;

                    /**
                     * 获取 切片分隔符,自定义切片使用：默认值为：["\n\n", "\n", "。", "！", "？", "，", ""]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Delimiters  切片分隔符,自定义切片使用：默认值为：["\n\n", "\n", "。", "！", "？", "，", ""]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDelimiters() const;

                    /**
                     * 设置 切片分隔符,自定义切片使用：默认值为：["\n\n", "\n", "。", "！", "？", "，", ""]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delimiters  切片分隔符,自定义切片使用：默认值为：["\n\n", "\n", "。", "！", "？", "，", ""]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDelimiters(const std::vector<std::string>& _delimiters);

                    /**
                     * 判断参数 Delimiters 是否已赋值
                     * @return Delimiters 是否已赋值
                     * 
                     */
                    bool DelimitersHasBeenSet() const;

                    /**
                     * 获取自定义切片使用:默认0 可重叠字符长度
                     * @return ChunkOverlap 自定义切片使用:默认0 可重叠字符长度
                     * 
                     */
                    int64_t GetChunkOverlap() const;

                    /**
                     * 设置自定义切片使用:默认0 可重叠字符长度
                     * @param _chunkOverlap 自定义切片使用:默认0 可重叠字符长度
                     * 
                     */
                    void SetChunkOverlap(const int64_t& _chunkOverlap);

                    /**
                     * 判断参数 ChunkOverlap 是否已赋值
                     * @return ChunkOverlap 是否已赋值
                     * 
                     */
                    bool ChunkOverlapHasBeenSet() const;

                    /**
                     * 获取表格类文档解析
                     * @return Columns 表格类文档解析
                     * 
                     */
                    std::vector<ColumnInfo> GetColumns() const;

                    /**
                     * 设置表格类文档解析
                     * @param _columns 表格类文档解析
                     * 
                     */
                    void SetColumns(const std::vector<ColumnInfo>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取带检索的索引列表
                     * @return Indexes 带检索的索引列表
                     * 
                     */
                    std::vector<int64_t> GetIndexes() const;

                    /**
                     * 设置带检索的索引列表
                     * @param _indexes 带检索的索引列表
                     * 
                     */
                    void SetIndexes(const std::vector<int64_t>& _indexes);

                    /**
                     * 判断参数 Indexes 是否已赋值
                     * @return Indexes 是否已赋值
                     * 
                     */
                    bool IndexesHasBeenSet() const;

                    /**
                     * 获取0：不生成文档摘要，1：生成文档概要。默认0，当取1时，GenParaSummary必须也为1
                     * @return GenDocSummary 0：不生成文档摘要，1：生成文档概要。默认0，当取1时，GenParaSummary必须也为1
                     * 
                     */
                    int64_t GetGenDocSummary() const;

                    /**
                     * 设置0：不生成文档摘要，1：生成文档概要。默认0，当取1时，GenParaSummary必须也为1
                     * @param _genDocSummary 0：不生成文档摘要，1：生成文档概要。默认0，当取1时，GenParaSummary必须也为1
                     * 
                     */
                    void SetGenDocSummary(const int64_t& _genDocSummary);

                    /**
                     * 判断参数 GenDocSummary 是否已赋值
                     * @return GenDocSummary 是否已赋值
                     * 
                     */
                    bool GenDocSummaryHasBeenSet() const;

                    /**
                     * 获取0：不生成段落摘要，1：生成段落概要。默认0
                     * @return GenParaSummary 0：不生成段落摘要，1：生成段落概要。默认0
                     * 
                     */
                    int64_t GetGenParaSummary() const;

                    /**
                     * 设置0：不生成段落摘要，1：生成段落概要。默认0
                     * @param _genParaSummary 0：不生成段落摘要，1：生成段落概要。默认0
                     * 
                     */
                    void SetGenParaSummary(const int64_t& _genParaSummary);

                    /**
                     * 判断参数 GenParaSummary 是否已赋值
                     * @return GenParaSummary 是否已赋值
                     * 
                     */
                    bool GenParaSummaryHasBeenSet() const;

                private:

                    /**
                     * 切片类型  0:自定义切片，1：智能切片
                     */
                    int64_t m_chunkType;
                    bool m_chunkTypeHasBeenSet;

                    /**
                     * /智能切片：最小值 1000，默认 4800 自定义切片：正整数即可,默认值 1000
                     */
                    int64_t m_maxChunkSize;
                    bool m_maxChunkSizeHasBeenSet;

                    /**
                     *  切片分隔符,自定义切片使用：默认值为：["\n\n", "\n", "。", "！", "？", "，", ""]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_delimiters;
                    bool m_delimitersHasBeenSet;

                    /**
                     * 自定义切片使用:默认0 可重叠字符长度
                     */
                    int64_t m_chunkOverlap;
                    bool m_chunkOverlapHasBeenSet;

                    /**
                     * 表格类文档解析
                     */
                    std::vector<ColumnInfo> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 带检索的索引列表
                     */
                    std::vector<int64_t> m_indexes;
                    bool m_indexesHasBeenSet;

                    /**
                     * 0：不生成文档摘要，1：生成文档概要。默认0，当取1时，GenParaSummary必须也为1
                     */
                    int64_t m_genDocSummary;
                    bool m_genDocSummaryHasBeenSet;

                    /**
                     * 0：不生成段落摘要，1：生成段落概要。默认0
                     */
                    int64_t m_genParaSummary;
                    bool m_genParaSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_KNOWLEDGETASKCONFIG_H_
