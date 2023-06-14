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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_TAG_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 该字段用于返回审核结果明细字段的标签及分数
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keyword 该字段用于返回命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置该字段用于返回命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyword 该字段用于返回命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取该字段用于返回子标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubLabel 该字段用于返回子标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置该字段用于返回子标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subLabel 该字段用于返回子标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取该字段用于返回子标签对应的分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 该字段用于返回子标签对应的分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置该字段用于返回子标签对应的分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 该字段用于返回子标签对应的分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 该字段用于返回子标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 该字段用于返回子标签对应的分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_TAG_H_
