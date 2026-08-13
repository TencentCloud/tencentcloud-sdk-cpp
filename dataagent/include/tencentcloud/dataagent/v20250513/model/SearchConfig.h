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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SEARCHCONFIG_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SEARCHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 检索配置
                */
                class SearchConfig : public AbstractModel
                {
                public:
                    SearchConfig();
                    ~SearchConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检索类型：0:混合搜索 1：向量搜索 2：全文搜索</p>
                     * @return Type <p>检索类型：0:混合搜索 1：向量搜索 2：全文搜索</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>检索类型：0:混合搜索 1：向量搜索 2：全文搜索</p>
                     * @param _type <p>检索类型：0:混合搜索 1：向量搜索 2：全文搜索</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>召回数量最大值</p>
                     * @return Num <p>召回数量最大值</p>
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置<p>召回数量最大值</p>
                     * @param _num <p>召回数量最大值</p>
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取<p>权重配置</p>
                     * @return EmbeddingWeight <p>权重配置</p>
                     * 
                     */
                    double GetEmbeddingWeight() const;

                    /**
                     * 设置<p>权重配置</p>
                     * @param _embeddingWeight <p>权重配置</p>
                     * 
                     */
                    void SetEmbeddingWeight(const double& _embeddingWeight);

                    /**
                     * 判断参数 EmbeddingWeight 是否已赋值
                     * @return EmbeddingWeight 是否已赋值
                     * 
                     */
                    bool EmbeddingWeightHasBeenSet() const;

                    /**
                     * 获取<p>0:关闭 1:开启，默认1</p>
                     * @return Rerank <p>0:关闭 1:开启，默认1</p>
                     * 
                     */
                    int64_t GetRerank() const;

                    /**
                     * 设置<p>0:关闭 1:开启，默认1</p>
                     * @param _rerank <p>0:关闭 1:开启，默认1</p>
                     * 
                     */
                    void SetRerank(const int64_t& _rerank);

                    /**
                     * 判断参数 Rerank 是否已赋值
                     * @return Rerank 是否已赋值
                     * 
                     */
                    bool RerankHasBeenSet() const;

                    /**
                     * 获取<p>0:关闭 1:开启，默认0</p>
                     * @return AutoRag <p>0:关闭 1:开启，默认0</p>
                     * 
                     */
                    int64_t GetAutoRag() const;

                    /**
                     * 设置<p>0:关闭 1:开启，默认0</p>
                     * @param _autoRag <p>0:关闭 1:开启，默认0</p>
                     * 
                     */
                    void SetAutoRag(const int64_t& _autoRag);

                    /**
                     * 判断参数 AutoRag 是否已赋值
                     * @return AutoRag 是否已赋值
                     * 
                     */
                    bool AutoRagHasBeenSet() const;

                    /**
                     * 获取<p>AutoRag关联的知识库ID列表</p>
                     * @return KnowledgeBaseIds <p>AutoRag关联的知识库ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetKnowledgeBaseIds() const;

                    /**
                     * 设置<p>AutoRag关联的知识库ID列表</p>
                     * @param _knowledgeBaseIds <p>AutoRag关联的知识库ID列表</p>
                     * 
                     */
                    void SetKnowledgeBaseIds(const std::vector<std::string>& _knowledgeBaseIds);

                    /**
                     * 判断参数 KnowledgeBaseIds 是否已赋值
                     * @return KnowledgeBaseIds 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdsHasBeenSet() const;

                    /**
                     * 获取<p>AutoRag搜索状态：0-未完成，1-已完成。仅当AutoRag=1时，该字段有效</p>
                     * @return SearchStatus <p>AutoRag搜索状态：0-未完成，1-已完成。仅当AutoRag=1时，该字段有效</p>
                     * 
                     */
                    int64_t GetSearchStatus() const;

                    /**
                     * 设置<p>AutoRag搜索状态：0-未完成，1-已完成。仅当AutoRag=1时，该字段有效</p>
                     * @param _searchStatus <p>AutoRag搜索状态：0-未完成，1-已完成。仅当AutoRag=1时，该字段有效</p>
                     * 
                     */
                    void SetSearchStatus(const int64_t& _searchStatus);

                    /**
                     * 判断参数 SearchStatus 是否已赋值
                     * @return SearchStatus 是否已赋值
                     * 
                     */
                    bool SearchStatusHasBeenSet() const;

                    /**
                     * 获取<p>0:关闭 1:开启图谱检索，默认0</p>
                     * @return EnableGraphSearch <p>0:关闭 1:开启图谱检索，默认0</p>
                     * 
                     */
                    int64_t GetEnableGraphSearch() const;

                    /**
                     * 设置<p>0:关闭 1:开启图谱检索，默认0</p>
                     * @param _enableGraphSearch <p>0:关闭 1:开启图谱检索，默认0</p>
                     * 
                     */
                    void SetEnableGraphSearch(const int64_t& _enableGraphSearch);

                    /**
                     * 判断参数 EnableGraphSearch 是否已赋值
                     * @return EnableGraphSearch 是否已赋值
                     * 
                     */
                    bool EnableGraphSearchHasBeenSet() const;

                    /**
                     * 获取<p>0:关闭 1:开启树检索，默认0</p>
                     * @return EnableTreeSearch <p>0:关闭 1:开启树检索，默认0</p>
                     * 
                     */
                    int64_t GetEnableTreeSearch() const;

                    /**
                     * 设置<p>0:关闭 1:开启树检索，默认0</p>
                     * @param _enableTreeSearch <p>0:关闭 1:开启树检索，默认0</p>
                     * 
                     */
                    void SetEnableTreeSearch(const int64_t& _enableTreeSearch);

                    /**
                     * 判断参数 EnableTreeSearch 是否已赋值
                     * @return EnableTreeSearch 是否已赋值
                     * 
                     */
                    bool EnableTreeSearchHasBeenSet() const;

                private:

                    /**
                     * <p>检索类型：0:混合搜索 1：向量搜索 2：全文搜索</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>召回数量最大值</p>
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * <p>权重配置</p>
                     */
                    double m_embeddingWeight;
                    bool m_embeddingWeightHasBeenSet;

                    /**
                     * <p>0:关闭 1:开启，默认1</p>
                     */
                    int64_t m_rerank;
                    bool m_rerankHasBeenSet;

                    /**
                     * <p>0:关闭 1:开启，默认0</p>
                     */
                    int64_t m_autoRag;
                    bool m_autoRagHasBeenSet;

                    /**
                     * <p>AutoRag关联的知识库ID列表</p>
                     */
                    std::vector<std::string> m_knowledgeBaseIds;
                    bool m_knowledgeBaseIdsHasBeenSet;

                    /**
                     * <p>AutoRag搜索状态：0-未完成，1-已完成。仅当AutoRag=1时，该字段有效</p>
                     */
                    int64_t m_searchStatus;
                    bool m_searchStatusHasBeenSet;

                    /**
                     * <p>0:关闭 1:开启图谱检索，默认0</p>
                     */
                    int64_t m_enableGraphSearch;
                    bool m_enableGraphSearchHasBeenSet;

                    /**
                     * <p>0:关闭 1:开启树检索，默认0</p>
                     */
                    int64_t m_enableTreeSearch;
                    bool m_enableTreeSearchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SEARCHCONFIG_H_
