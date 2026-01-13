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
                     * 获取检索类型：0:混合搜索 1：向量搜索 2：全文搜索
                     * @return Type 检索类型：0:混合搜索 1：向量搜索 2：全文搜索
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置检索类型：0:混合搜索 1：向量搜索 2：全文搜索
                     * @param _type 检索类型：0:混合搜索 1：向量搜索 2：全文搜索
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
                     * 获取召回数量最大值
                     * @return Num 召回数量最大值
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置召回数量最大值
                     * @param _num 召回数量最大值
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
                     * 获取权重配置
                     * @return EmbeddingWeight 权重配置
                     * 
                     */
                    double GetEmbeddingWeight() const;

                    /**
                     * 设置权重配置
                     * @param _embeddingWeight 权重配置
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
                     * 获取0:关闭 1:开启，默认1
                     * @return Rerank 0:关闭 1:开启，默认1
                     * 
                     */
                    int64_t GetRerank() const;

                    /**
                     * 设置0:关闭 1:开启，默认1
                     * @param _rerank 0:关闭 1:开启，默认1
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
                     * 获取0:关闭 1:开启，默认0
                     * @return AutoRag 0:关闭 1:开启，默认0
                     * 
                     */
                    int64_t GetAutoRag() const;

                    /**
                     * 设置0:关闭 1:开启，默认0
                     * @param _autoRag 0:关闭 1:开启，默认0
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
                     * 获取AutoRag关联的知识库ID列表
                     * @return KnowledgeBaseIds AutoRag关联的知识库ID列表
                     * 
                     */
                    std::vector<std::string> GetKnowledgeBaseIds() const;

                    /**
                     * 设置AutoRag关联的知识库ID列表
                     * @param _knowledgeBaseIds AutoRag关联的知识库ID列表
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
                     * 获取AutoRag搜索状态：0-未完成，1-已完成。仅当AutoRag=1时，该字段有效
                     * @return SearchStatus AutoRag搜索状态：0-未完成，1-已完成。仅当AutoRag=1时，该字段有效
                     * 
                     */
                    int64_t GetSearchStatus() const;

                    /**
                     * 设置AutoRag搜索状态：0-未完成，1-已完成。仅当AutoRag=1时，该字段有效
                     * @param _searchStatus AutoRag搜索状态：0-未完成，1-已完成。仅当AutoRag=1时，该字段有效
                     * 
                     */
                    void SetSearchStatus(const int64_t& _searchStatus);

                    /**
                     * 判断参数 SearchStatus 是否已赋值
                     * @return SearchStatus 是否已赋值
                     * 
                     */
                    bool SearchStatusHasBeenSet() const;

                private:

                    /**
                     * 检索类型：0:混合搜索 1：向量搜索 2：全文搜索
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 召回数量最大值
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 权重配置
                     */
                    double m_embeddingWeight;
                    bool m_embeddingWeightHasBeenSet;

                    /**
                     * 0:关闭 1:开启，默认1
                     */
                    int64_t m_rerank;
                    bool m_rerankHasBeenSet;

                    /**
                     * 0:关闭 1:开启，默认0
                     */
                    int64_t m_autoRag;
                    bool m_autoRagHasBeenSet;

                    /**
                     * AutoRag关联的知识库ID列表
                     */
                    std::vector<std::string> m_knowledgeBaseIds;
                    bool m_knowledgeBaseIdsHasBeenSet;

                    /**
                     * AutoRag搜索状态：0-未完成，1-已完成。仅当AutoRag=1时，该字段有效
                     */
                    int64_t m_searchStatus;
                    bool m_searchStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_SEARCHCONFIG_H_
