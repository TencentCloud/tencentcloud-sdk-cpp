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
                     * 获取<p>切片类型  0:自定义切片，1：智能切片</p>
                     * @return ChunkType <p>切片类型  0:自定义切片，1：智能切片</p>
                     * 
                     */
                    int64_t GetChunkType() const;

                    /**
                     * 设置<p>切片类型  0:自定义切片，1：智能切片</p>
                     * @param _chunkType <p>切片类型  0:自定义切片，1：智能切片</p>
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
                     * 获取<p>/智能切片：最小值 1000，默认 4800 自定义切片：正整数即可,默认值 1000</p>
                     * @return MaxChunkSize <p>/智能切片：最小值 1000，默认 4800 自定义切片：正整数即可,默认值 1000</p>
                     * 
                     */
                    int64_t GetMaxChunkSize() const;

                    /**
                     * 设置<p>/智能切片：最小值 1000，默认 4800 自定义切片：正整数即可,默认值 1000</p>
                     * @param _maxChunkSize <p>/智能切片：最小值 1000，默认 4800 自定义切片：正整数即可,默认值 1000</p>
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
                     * 获取<p>切片分隔符,自定义切片使用：默认值为：[&quot;\n\n&quot;, &quot;\n&quot;, &quot;。&quot;, &quot;！&quot;, &quot;？&quot;, &quot;，&quot;, &quot;&quot;]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Delimiters <p>切片分隔符,自定义切片使用：默认值为：[&quot;\n\n&quot;, &quot;\n&quot;, &quot;。&quot;, &quot;！&quot;, &quot;？&quot;, &quot;，&quot;, &quot;&quot;]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDelimiters() const;

                    /**
                     * 设置<p>切片分隔符,自定义切片使用：默认值为：[&quot;\n\n&quot;, &quot;\n&quot;, &quot;。&quot;, &quot;！&quot;, &quot;？&quot;, &quot;，&quot;, &quot;&quot;]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delimiters <p>切片分隔符,自定义切片使用：默认值为：[&quot;\n\n&quot;, &quot;\n&quot;, &quot;。&quot;, &quot;！&quot;, &quot;？&quot;, &quot;，&quot;, &quot;&quot;]</p>
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
                     * 获取<p>自定义切片使用:默认0 可重叠字符长度</p>
                     * @return ChunkOverlap <p>自定义切片使用:默认0 可重叠字符长度</p>
                     * 
                     */
                    int64_t GetChunkOverlap() const;

                    /**
                     * 设置<p>自定义切片使用:默认0 可重叠字符长度</p>
                     * @param _chunkOverlap <p>自定义切片使用:默认0 可重叠字符长度</p>
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
                     * 获取<p>表格类文档解析</p>
                     * @return Columns <p>表格类文档解析</p>
                     * 
                     */
                    std::vector<ColumnInfo> GetColumns() const;

                    /**
                     * 设置<p>表格类文档解析</p>
                     * @param _columns <p>表格类文档解析</p>
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
                     * 获取<p>带检索的索引列表</p>
                     * @return Indexes <p>带检索的索引列表</p>
                     * 
                     */
                    std::vector<int64_t> GetIndexes() const;

                    /**
                     * 设置<p>带检索的索引列表</p>
                     * @param _indexes <p>带检索的索引列表</p>
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
                     * 获取<p>0：不生成文档摘要，1：生成文档概要。默认0，当取1时，GenParaSummary必须也为1</p>
                     * @return GenDocSummary <p>0：不生成文档摘要，1：生成文档概要。默认0，当取1时，GenParaSummary必须也为1</p>
                     * 
                     */
                    int64_t GetGenDocSummary() const;

                    /**
                     * 设置<p>0：不生成文档摘要，1：生成文档概要。默认0，当取1时，GenParaSummary必须也为1</p>
                     * @param _genDocSummary <p>0：不生成文档摘要，1：生成文档概要。默认0，当取1时，GenParaSummary必须也为1</p>
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
                     * 获取<p>0：不生成段落摘要，1：生成段落概要。默认0</p>
                     * @return GenParaSummary <p>0：不生成段落摘要，1：生成段落概要。默认0</p>
                     * 
                     */
                    int64_t GetGenParaSummary() const;

                    /**
                     * 设置<p>0：不生成段落摘要，1：生成段落概要。默认0</p>
                     * @param _genParaSummary <p>0：不生成段落摘要，1：生成段落概要。默认0</p>
                     * 
                     */
                    void SetGenParaSummary(const int64_t& _genParaSummary);

                    /**
                     * 判断参数 GenParaSummary 是否已赋值
                     * @return GenParaSummary 是否已赋值
                     * 
                     */
                    bool GenParaSummaryHasBeenSet() const;

                    /**
                     * 获取<p>0：不开启图片理解，1：开启图片理解。默认1</p><p>取值范围：[1, 10000]</p><p>默认值：1</p>
                     * @return EnableImageUnderstanding <p>0：不开启图片理解，1：开启图片理解。默认1</p><p>取值范围：[1, 10000]</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetEnableImageUnderstanding() const;

                    /**
                     * 设置<p>0：不开启图片理解，1：开启图片理解。默认1</p><p>取值范围：[1, 10000]</p><p>默认值：1</p>
                     * @param _enableImageUnderstanding <p>0：不开启图片理解，1：开启图片理解。默认1</p><p>取值范围：[1, 10000]</p><p>默认值：1</p>
                     * 
                     */
                    void SetEnableImageUnderstanding(const int64_t& _enableImageUnderstanding);

                    /**
                     * 判断参数 EnableImageUnderstanding 是否已赋值
                     * @return EnableImageUnderstanding 是否已赋值
                     * 
                     */
                    bool EnableImageUnderstandingHasBeenSet() const;

                private:

                    /**
                     * <p>切片类型  0:自定义切片，1：智能切片</p>
                     */
                    int64_t m_chunkType;
                    bool m_chunkTypeHasBeenSet;

                    /**
                     * <p>/智能切片：最小值 1000，默认 4800 自定义切片：正整数即可,默认值 1000</p>
                     */
                    int64_t m_maxChunkSize;
                    bool m_maxChunkSizeHasBeenSet;

                    /**
                     * <p>切片分隔符,自定义切片使用：默认值为：[&quot;\n\n&quot;, &quot;\n&quot;, &quot;。&quot;, &quot;！&quot;, &quot;？&quot;, &quot;，&quot;, &quot;&quot;]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_delimiters;
                    bool m_delimitersHasBeenSet;

                    /**
                     * <p>自定义切片使用:默认0 可重叠字符长度</p>
                     */
                    int64_t m_chunkOverlap;
                    bool m_chunkOverlapHasBeenSet;

                    /**
                     * <p>表格类文档解析</p>
                     */
                    std::vector<ColumnInfo> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * <p>带检索的索引列表</p>
                     */
                    std::vector<int64_t> m_indexes;
                    bool m_indexesHasBeenSet;

                    /**
                     * <p>0：不生成文档摘要，1：生成文档概要。默认0，当取1时，GenParaSummary必须也为1</p>
                     */
                    int64_t m_genDocSummary;
                    bool m_genDocSummaryHasBeenSet;

                    /**
                     * <p>0：不生成段落摘要，1：生成段落概要。默认0</p>
                     */
                    int64_t m_genParaSummary;
                    bool m_genParaSummaryHasBeenSet;

                    /**
                     * <p>0：不开启图片理解，1：开启图片理解。默认1</p><p>取值范围：[1, 10000]</p><p>默认值：1</p>
                     */
                    int64_t m_enableImageUnderstanding;
                    bool m_enableImageUnderstandingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_KNOWLEDGETASKCONFIG_H_
