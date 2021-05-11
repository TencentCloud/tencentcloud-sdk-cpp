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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_DPTOKEN_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_DPTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * 句法依存分析结果，包括基础词，基础词的序号，当前词父节点的序号，句法依存关系的类型
                */
                class DpToken : public AbstractModel
                {
                public:
                    DpToken();
                    ~DpToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取句法依存关系的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Relation 句法依存关系的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRelation() const;

                    /**
                     * 设置句法依存关系的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Relation 句法依存关系的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelation(const std::string& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     */
                    bool RelationHasBeenSet() const;

                    /**
                     * 获取当前词父节点的序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadId 当前词父节点的序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetHeadId() const;

                    /**
                     * 设置当前词父节点的序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HeadId 当前词父节点的序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHeadId(const uint64_t& _headId);

                    /**
                     * 判断参数 HeadId 是否已赋值
                     * @return HeadId 是否已赋值
                     */
                    bool HeadIdHasBeenSet() const;

                    /**
                     * 获取基础词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Word 基础词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWord() const;

                    /**
                     * 设置基础词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Word 基础词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取基础词的序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 基础词的序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置基础词的序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Id 基础词的序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 句法依存关系的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relation;
                    bool m_relationHasBeenSet;

                    /**
                     * 当前词父节点的序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_headId;
                    bool m_headIdHasBeenSet;

                    /**
                     * 基础词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 基础词的序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_DPTOKEN_H_
