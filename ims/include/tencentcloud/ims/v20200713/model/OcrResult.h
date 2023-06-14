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

#ifndef TENCENTCLOUD_IMS_V20200713_MODEL_OCRRESULT_H_
#define TENCENTCLOUD_IMS_V20200713_MODEL_OCRRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20200713/model/OcrTextDetail.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * OCR结果检测详情
                */
                class OcrResult : public AbstractModel
                {
                public:
                    OcrResult();
                    ~OcrResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景识别结果
                     * @return Scene 场景识别结果
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置场景识别结果
                     * @param _scene 场景识别结果
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
                     * 获取建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     * @return Suggestion 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     * @param _suggestion 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
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
                     * 获取恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及令人反感、不安全或不适宜的内容类型。
                     * @return Label 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及令人反感、不安全或不适宜的内容类型。
                     * @param _label 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及令人反感、不安全或不适宜的内容类型。
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
                     * 获取子标签检测结果
                     * @return SubLabel 子标签检测结果
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置子标签检测结果
                     * @param _subLabel 子标签检测结果
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
                     * 获取该标签模型命中的分值
                     * @return Score 该标签模型命中的分值
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置该标签模型命中的分值
                     * @param _score 该标签模型命中的分值
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
                     * 获取ocr结果详情
                     * @return Details ocr结果详情
                     * 
                     */
                    std::vector<OcrTextDetail> GetDetails() const;

                    /**
                     * 设置ocr结果详情
                     * @param _details ocr结果详情
                     * 
                     */
                    void SetDetails(const std::vector<OcrTextDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取ocr识别出的文本结果
                     * @return Text ocr识别出的文本结果
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置ocr识别出的文本结果
                     * @param _text ocr识别出的文本结果
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
                     * 获取是否命中结果，0 未命中 1命中
                     * @return HitFlag 是否命中结果，0 未命中 1命中
                     * 
                     */
                    uint64_t GetHitFlag() const;

                    /**
                     * 设置是否命中结果，0 未命中 1命中
                     * @param _hitFlag 是否命中结果，0 未命中 1命中
                     * 
                     */
                    void SetHitFlag(const uint64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                private:

                    /**
                     * 场景识别结果
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及令人反感、不安全或不适宜的内容类型。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 子标签检测结果
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 该标签模型命中的分值
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * ocr结果详情
                     */
                    std::vector<OcrTextDetail> m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * ocr识别出的文本结果
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 是否命中结果，0 未命中 1命中
                     */
                    uint64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_MODEL_OCRRESULT_H_
