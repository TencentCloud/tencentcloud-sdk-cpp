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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTRESULT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/ImageResultsResultDetail.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 图片输出结果的子结果
                */
                class ImageResultResult : public AbstractModel
                {
                public:
                    ImageResultResult();
                    ~ImageResultResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景
Porn 色情
Sexy 性感
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scene 场景
Porn 色情
Sexy 性感
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置场景
Porn 色情
Sexy 性感
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scene 场景
Porn 色情
Sexy 性感
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取是否命中
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitFlag 是否命中
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置是否命中
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitFlag 是否命中
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suggestion 审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
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
                     * 获取子标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubLabel 子标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置子标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subLabel 子标签
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
                     * 获取分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 分数
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
                     * 获取人物名称列表，如未识别，则为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Names 人物名称列表，如未识别，则为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置人物名称列表，如未识别，则为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _names 人物名称列表，如未识别，则为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取图片OCR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 图片OCR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置图片OCR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 图片OCR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取其他详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Details 其他详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImageResultsResultDetail> GetDetails() const;

                    /**
                     * 设置其他详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _details 其他详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetails(const std::vector<ImageResultsResultDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 场景
Porn 色情
Sexy 性感
Polity 政治
Illegal 违法
Abuse 谩骂
Terror 暴恐
Ad 广告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 是否命中
0 未命中
1 命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 审核建议，可选值：
Pass 通过，
Review 建议人审，
Block 确认违规
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 子标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 人物名称列表，如未识别，则为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * 图片OCR文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 其他详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImageResultsResultDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTRESULT_H_
