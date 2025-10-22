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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SHAREKNOWLEDGEBASE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SHAREKNOWLEDGEBASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/SearchRange.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeModelConfig.h>
#include <tencentcloud/lke/v20231130/model/SearchStrategy.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaSearch.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 共享知识库配置
                */
                class ShareKnowledgeBase : public AbstractModel
                {
                public:
                    ShareKnowledgeBase();
                    ~ShareKnowledgeBase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享知识库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeBizId 共享知识库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKnowledgeBizId() const;

                    /**
                     * 设置共享知识库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeBizId 共享知识库ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgeBizId(const std::string& _knowledgeBizId);

                    /**
                     * 判断参数 KnowledgeBizId 是否已赋值
                     * @return KnowledgeBizId 是否已赋值
                     * 
                     */
                    bool KnowledgeBizIdHasBeenSet() const;

                    /**
                     * 获取检索范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchRange 检索范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SearchRange GetSearchRange() const;

                    /**
                     * 设置检索范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchRange 检索范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchRange(const SearchRange& _searchRange);

                    /**
                     * 判断参数 SearchRange 是否已赋值
                     * @return SearchRange 是否已赋值
                     * 
                     */
                    bool SearchRangeHasBeenSet() const;

                    /**
                     * 获取知识库模型设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeModelConfig 知识库模型设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeModelConfig GetKnowledgeModelConfig() const;

                    /**
                     * 设置知识库模型设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeModelConfig 知识库模型设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgeModelConfig(const KnowledgeModelConfig& _knowledgeModelConfig);

                    /**
                     * 判断参数 KnowledgeModelConfig 是否已赋值
                     * @return KnowledgeModelConfig 是否已赋值
                     * 
                     */
                    bool KnowledgeModelConfigHasBeenSet() const;

                    /**
                     * 获取检索策略配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchStrategy 检索策略配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SearchStrategy GetSearchStrategy() const;

                    /**
                     * 设置检索策略配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchStrategy 检索策略配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchStrategy(const SearchStrategy& _searchStrategy);

                    /**
                     * 判断参数 SearchStrategy 是否已赋值
                     * @return SearchStrategy 是否已赋值
                     * 
                     */
                    bool SearchStrategyHasBeenSet() const;

                    /**
                     * 获取检索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Search 检索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KnowledgeQaSearch> GetSearch() const;

                    /**
                     * 设置检索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _search 检索配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearch(const std::vector<KnowledgeQaSearch>& _search);

                    /**
                     * 判断参数 Search 是否已赋值
                     * @return Search 是否已赋值
                     * 
                     */
                    bool SearchHasBeenSet() const;

                    /**
                     * 获取// 问答-回复灵活度 1：已采纳答案直接回复 2：已采纳润色后回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplyFlexibility // 问答-回复灵活度 1：已采纳答案直接回复 2：已采纳润色后回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplyFlexibility() const;

                    /**
                     * 设置// 问答-回复灵活度 1：已采纳答案直接回复 2：已采纳润色后回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replyFlexibility // 问答-回复灵活度 1：已采纳答案直接回复 2：已采纳润色后回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplyFlexibility(const int64_t& _replyFlexibility);

                    /**
                     * 判断参数 ReplyFlexibility 是否已赋值
                     * @return ReplyFlexibility 是否已赋值
                     * 
                     */
                    bool ReplyFlexibilityHasBeenSet() const;

                    /**
                     * 获取共享知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeName 共享知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置共享知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeName 共享知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgeName(const std::string& _knowledgeName);

                    /**
                     * 判断参数 KnowledgeName 是否已赋值
                     * @return KnowledgeName 是否已赋值
                     * 
                     */
                    bool KnowledgeNameHasBeenSet() const;

                private:

                    /**
                     * 共享知识库ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * 检索范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SearchRange m_searchRange;
                    bool m_searchRangeHasBeenSet;

                    /**
                     * 知识库模型设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeModelConfig m_knowledgeModelConfig;
                    bool m_knowledgeModelConfigHasBeenSet;

                    /**
                     * 检索策略配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SearchStrategy m_searchStrategy;
                    bool m_searchStrategyHasBeenSet;

                    /**
                     * 检索配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KnowledgeQaSearch> m_search;
                    bool m_searchHasBeenSet;

                    /**
                     * // 问答-回复灵活度 1：已采纳答案直接回复 2：已采纳润色后回复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replyFlexibility;
                    bool m_replyFlexibilityHasBeenSet;

                    /**
                     * 共享知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SHAREKNOWLEDGEBASE_H_
