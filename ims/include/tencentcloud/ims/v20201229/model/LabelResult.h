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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_LABELRESULT_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_LABELRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/LabelDetailItem.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 分类模型命中结果
                */
                class LabelResult : public AbstractModel
                {
                public:
                    LabelResult();
                    ~LabelResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回模型识别出的场景结果，如广告、色情、有害内容等场景。
                     * @return Scene 该字段用于返回模型识别出的场景结果，如广告、色情、有害内容等场景。
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置该字段用于返回模型识别出的场景结果，如广告、色情、有害内容等场景。
                     * @param _scene 该字段用于返回模型识别出的场景结果，如广告、色情、有害内容等场景。
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
                     * 获取该字段用于返回针对当前恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * @return Suggestion 该字段用于返回针对当前恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置该字段用于返回针对当前恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * @param _suggestion 该字段用于返回针对当前恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
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
                     * 获取该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     * @return Label 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     * @param _label 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
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
                     * 获取该字段用于返回对应恶意标签下的子标签的检测结果，如：*Porn-SexBehavior*等子标签。
                     * @return SubLabel 该字段用于返回对应恶意标签下的子标签的检测结果，如：*Porn-SexBehavior*等子标签。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置该字段用于返回对应恶意标签下的子标签的检测结果，如：*Porn-SexBehavior*等子标签。
                     * @param _subLabel 该字段用于返回对应恶意标签下的子标签的检测结果，如：*Porn-SexBehavior*等子标签。
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
                     * 获取该字段用于返回当前标签（Label）下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表图片越有可能属于当前返回的标签；如：*色情 99*，则表明该图片非常有可能属于色情内容；*色情 0*，则表明该图片不属于色情内容。
                     * @return Score 该字段用于返回当前标签（Label）下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表图片越有可能属于当前返回的标签；如：*色情 99*，则表明该图片非常有可能属于色情内容；*色情 0*，则表明该图片不属于色情内容。
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置该字段用于返回当前标签（Label）下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表图片越有可能属于当前返回的标签；如：*色情 99*，则表明该图片非常有可能属于色情内容；*色情 0*，则表明该图片不属于色情内容。
                     * @param _score 该字段用于返回当前标签（Label）下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表图片越有可能属于当前返回的标签；如：*色情 99*，则表明该图片非常有可能属于色情内容；*色情 0*，则表明该图片不属于色情内容。
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取该字段用于返回分类模型命中子标签的详细信息，如：序号、命中标签名称、分数等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Details 该字段用于返回分类模型命中子标签的详细信息，如：序号、命中标签名称、分数等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LabelDetailItem> GetDetails() const;

                    /**
                     * 设置该字段用于返回分类模型命中子标签的详细信息，如：序号、命中标签名称、分数等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _details 该字段用于返回分类模型命中子标签的详细信息，如：序号、命中标签名称、分数等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetails(const std::vector<LabelDetailItem>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回模型识别出的场景结果，如广告、色情、有害内容等场景。
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 该字段用于返回针对当前恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 该字段用于返回对应恶意标签下的子标签的检测结果，如：*Porn-SexBehavior*等子标签。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 该字段用于返回当前标签（Label）下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高** ），越高代表图片越有可能属于当前返回的标签；如：*色情 99*，则表明该图片非常有可能属于色情内容；*色情 0*，则表明该图片不属于色情内容。
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 该字段用于返回分类模型命中子标签的详细信息，如：序号、命中标签名称、分数等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LabelDetailItem> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_LABELRESULT_H_
