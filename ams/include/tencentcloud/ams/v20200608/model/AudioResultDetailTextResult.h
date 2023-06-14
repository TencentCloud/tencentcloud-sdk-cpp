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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_AUDIORESULTDETAILTEXTRESULT_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_AUDIORESULTDETAILTEXTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * 音频ASR文本审核结果
                */
                class AudioResultDetailTextResult : public AbstractModel
                {
                public:
                    AudioResultDetailTextResult();
                    ~AudioResultDetailTextResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keywords 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keywords 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取命中的LibId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibId 命中的LibId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置命中的LibId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libId 命中的LibId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取命中的LibName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibName 命中的LibName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置命中的LibName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libName 命中的LibName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 得分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 得分
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

                    /**
                     * 获取审核建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 审核建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置审核建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suggestion 审核建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取词库类型 1 黑白库 2 自定义库
                     * @return LibType 词库类型 1 黑白库 2 自定义库
                     * 
                     */
                    int64_t GetLibType() const;

                    /**
                     * 设置词库类型 1 黑白库 2 自定义库
                     * @param _libType 词库类型 1 黑白库 2 自定义库
                     * 
                     */
                    void SetLibType(const int64_t& _libType);

                    /**
                     * 判断参数 LibType 是否已赋值
                     * @return LibType 是否已赋值
                     * 
                     */
                    bool LibTypeHasBeenSet() const;

                private:

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 命中的LibId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * 命中的LibName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 得分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 审核建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 词库类型 1 黑白库 2 自定义库
                     */
                    int64_t m_libType;
                    bool m_libTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_AUDIORESULTDETAILTEXTRESULT_H_
