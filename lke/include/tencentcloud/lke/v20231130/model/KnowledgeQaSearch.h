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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASEARCH_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASEARCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 检索配置
                */
                class KnowledgeQaSearch : public AbstractModel
                {
                public:
                    KnowledgeQaSearch();
                    ~KnowledgeQaSearch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取知识来源 doc：文档，qa：问答  taskflow：业务流程，search：搜索增强，database:数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 知识来源 doc：文档，qa：问答  taskflow：业务流程，search：搜索增强，database:数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置知识来源 doc：文档，qa：问答  taskflow：业务流程，search：搜索增强，database:数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 知识来源 doc：文档，qa：问答  taskflow：业务流程，search：搜索增强，database:数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取问答-回复灵活度 1：已采纳答案直接回复 2：已采纳润色后回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplyFlexibility 问答-回复灵活度 1：已采纳答案直接回复 2：已采纳润色后回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReplyFlexibility() const;

                    /**
                     * 设置问答-回复灵活度 1：已采纳答案直接回复 2：已采纳润色后回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replyFlexibility 问答-回复灵活度 1：已采纳答案直接回复 2：已采纳润色后回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplyFlexibility(const uint64_t& _replyFlexibility);

                    /**
                     * 判断参数 ReplyFlexibility 是否已赋值
                     * @return ReplyFlexibility 是否已赋值
                     * 
                     */
                    bool ReplyFlexibilityHasBeenSet() const;

                    /**
                     * 获取搜索增强-搜索引擎状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseSearchEngine 搜索增强-搜索引擎状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUseSearchEngine() const;

                    /**
                     * 设置搜索增强-搜索引擎状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useSearchEngine 搜索增强-搜索引擎状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUseSearchEngine(const bool& _useSearchEngine);

                    /**
                     * 判断参数 UseSearchEngine 是否已赋值
                     * @return UseSearchEngine 是否已赋值
                     * 
                     */
                    bool UseSearchEngineHasBeenSet() const;

                    /**
                     * 获取是否显示搜索引擎检索状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowSearchEngine 是否显示搜索引擎检索状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetShowSearchEngine() const;

                    /**
                     * 设置是否显示搜索引擎检索状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showSearchEngine 是否显示搜索引擎检索状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowSearchEngine(const bool& _showSearchEngine);

                    /**
                     * 判断参数 ShowSearchEngine 是否已赋值
                     * @return ShowSearchEngine 是否已赋值
                     * 
                     */
                    bool ShowSearchEngineHasBeenSet() const;

                    /**
                     * 获取知识来源，是否选择
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEnabled 知识来源，是否选择
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsEnabled() const;

                    /**
                     * 设置知识来源，是否选择
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEnabled 知识来源，是否选择
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsEnabled(const bool& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取问答最大召回数量, 默认2，限制5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QaTopN 问答最大召回数量, 默认2，限制5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQaTopN() const;

                    /**
                     * 设置问答最大召回数量, 默认2，限制5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qaTopN 问答最大召回数量, 默认2，限制5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQaTopN(const uint64_t& _qaTopN);

                    /**
                     * 判断参数 QaTopN 是否已赋值
                     * @return QaTopN 是否已赋值
                     * 
                     */
                    bool QaTopNHasBeenSet() const;

                    /**
                     * 获取文档最大召回数量, 默认3，限制5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocTopN 文档最大召回数量, 默认3，限制5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDocTopN() const;

                    /**
                     * 设置文档最大召回数量, 默认3，限制5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docTopN 文档最大召回数量, 默认3，限制5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocTopN(const uint64_t& _docTopN);

                    /**
                     * 判断参数 DocTopN 是否已赋值
                     * @return DocTopN 是否已赋值
                     * 
                     */
                    bool DocTopNHasBeenSet() const;

                    /**
                     * 获取检索置信度，针对文档和问答有效，最小0.01，最大0.99
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Confidence 检索置信度，针对文档和问答有效，最小0.01，最大0.99
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置检索置信度，针对文档和问答有效，最小0.01，最大0.99
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _confidence 检索置信度，针对文档和问答有效，最小0.01，最大0.99
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceStatus 资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceStatus 资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                private:

                    /**
                     * 知识来源 doc：文档，qa：问答  taskflow：业务流程，search：搜索增强，database:数据库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 问答-回复灵活度 1：已采纳答案直接回复 2：已采纳润色后回复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_replyFlexibility;
                    bool m_replyFlexibilityHasBeenSet;

                    /**
                     * 搜索增强-搜索引擎状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_useSearchEngine;
                    bool m_useSearchEngineHasBeenSet;

                    /**
                     * 是否显示搜索引擎检索状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_showSearchEngine;
                    bool m_showSearchEngineHasBeenSet;

                    /**
                     * 知识来源，是否选择
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 问答最大召回数量, 默认2，限制5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qaTopN;
                    bool m_qaTopNHasBeenSet;

                    /**
                     * 文档最大召回数量, 默认3，限制5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_docTopN;
                    bool m_docTopNHasBeenSet;

                    /**
                     * 检索置信度，针对文档和问答有效，最小0.01，最大0.99
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQASEARCH_H_
