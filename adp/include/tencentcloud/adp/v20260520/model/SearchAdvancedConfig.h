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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHADVANCEDCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHADVANCEDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/FinalRerankConfig.h>
#include <tencentcloud/adp/v20260520/model/KBRetrievalConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 检索高级配置
                */
                class SearchAdvancedConfig : public AbstractModel
                {
                public:
                    SearchAdvancedConfig();
                    ~SearchAdvancedConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>最终 rerank 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalRerankConfig <p>最终 rerank 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FinalRerankConfig GetFinalRerankConfig() const;

                    /**
                     * 设置<p>最终 rerank 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finalRerankConfig <p>最终 rerank 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinalRerankConfig(const FinalRerankConfig& _finalRerankConfig);

                    /**
                     * 判断参数 FinalRerankConfig 是否已赋值
                     * @return FinalRerankConfig 是否已赋值
                     * 
                     */
                    bool FinalRerankConfigHasBeenSet() const;

                    /**
                     * 获取<p>各知识库的检索配置</p>
                     * @return KbRetrievalList <p>各知识库的检索配置</p>
                     * 
                     */
                    std::vector<KBRetrievalConfig> GetKbRetrievalList() const;

                    /**
                     * 设置<p>各知识库的检索配置</p>
                     * @param _kbRetrievalList <p>各知识库的检索配置</p>
                     * 
                     */
                    void SetKbRetrievalList(const std::vector<KBRetrievalConfig>& _kbRetrievalList);

                    /**
                     * 判断参数 KbRetrievalList 是否已赋值
                     * @return KbRetrievalList 是否已赋值
                     * 
                     */
                    bool KbRetrievalListHasBeenSet() const;

                    /**
                     * 获取<p>检索知识类型：1=文档和问答，2=拒答<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_DOC_QA</td><td>1</td><td>文档和问答</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_REJECTED_QUESTION</td><td>2</td><td>拒答</td></tr></tbody></table></p>
                     * @return KnowledgeType <p>检索知识类型：1=文档和问答，2=拒答<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_DOC_QA</td><td>1</td><td>文档和问答</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_REJECTED_QUESTION</td><td>2</td><td>拒答</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetKnowledgeType() const;

                    /**
                     * 设置<p>检索知识类型：1=文档和问答，2=拒答<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_DOC_QA</td><td>1</td><td>文档和问答</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_REJECTED_QUESTION</td><td>2</td><td>拒答</td></tr></tbody></table></p>
                     * @param _knowledgeType <p>检索知识类型：1=文档和问答，2=拒答<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_DOC_QA</td><td>1</td><td>文档和问答</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_REJECTED_QUESTION</td><td>2</td><td>拒答</td></tr></tbody></table></p>
                     * 
                     */
                    void SetKnowledgeType(const int64_t& _knowledgeType);

                    /**
                     * 判断参数 KnowledgeType 是否已赋值
                     * @return KnowledgeType 是否已赋值
                     * 
                     */
                    bool KnowledgeTypeHasBeenSet() const;

                    /**
                     * 获取<p>最终返回结果数</p>
                     * @return RecallCount <p>最终返回结果数</p>
                     * 
                     */
                    uint64_t GetRecallCount() const;

                    /**
                     * 设置<p>最终返回结果数</p>
                     * @param _recallCount <p>最终返回结果数</p>
                     * 
                     */
                    void SetRecallCount(const uint64_t& _recallCount);

                    /**
                     * 判断参数 RecallCount 是否已赋值
                     * @return RecallCount 是否已赋值
                     * 
                     */
                    bool RecallCountHasBeenSet() const;

                private:

                    /**
                     * <p>最终 rerank 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FinalRerankConfig m_finalRerankConfig;
                    bool m_finalRerankConfigHasBeenSet;

                    /**
                     * <p>各知识库的检索配置</p>
                     */
                    std::vector<KBRetrievalConfig> m_kbRetrievalList;
                    bool m_kbRetrievalListHasBeenSet;

                    /**
                     * <p>检索知识类型：1=文档和问答，2=拒答<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_DOC_QA</td><td>1</td><td>文档和问答</td></tr><tr><td>SEARCH_KNOWLEDGE_TYPE_REJECTED_QUESTION</td><td>2</td><td>拒答</td></tr></tbody></table></p>
                     */
                    int64_t m_knowledgeType;
                    bool m_knowledgeTypeHasBeenSet;

                    /**
                     * <p>最终返回结果数</p>
                     */
                    uint64_t m_recallCount;
                    bool m_recallCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHADVANCEDCONFIG_H_
