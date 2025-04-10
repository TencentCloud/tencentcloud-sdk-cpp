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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_RERANKRESULT_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_RERANKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * 输出结果
                */
                class RerankResult : public AbstractModel
                {
                public:
                    RerankResult();
                    ~RerankResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应的doc在输入候选doc数组中的位置索引值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 对应的doc在输入候选doc数组中的位置索引值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置对应的doc在输入候选doc数组中的位置索引值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 对应的doc在输入候选doc数组中的位置索引值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取相似度分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelevanceScore 相似度分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRelevanceScore() const;

                    /**
                     * 设置相似度分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relevanceScore 相似度分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelevanceScore(const double& _relevanceScore);

                    /**
                     * 判断参数 RelevanceScore 是否已赋值
                     * @return RelevanceScore 是否已赋值
                     * 
                     */
                    bool RelevanceScoreHasBeenSet() const;

                    /**
                     * 获取doc原文内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Document doc原文内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocument() const;

                    /**
                     * 设置doc原文内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _document doc原文内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocument(const std::string& _document);

                    /**
                     * 判断参数 Document 是否已赋值
                     * @return Document 是否已赋值
                     * 
                     */
                    bool DocumentHasBeenSet() const;

                private:

                    /**
                     * 对应的doc在输入候选doc数组中的位置索引值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 相似度分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_relevanceScore;
                    bool m_relevanceScoreHasBeenSet;

                    /**
                     * doc原文内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_document;
                    bool m_documentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_RERANKRESULT_H_
