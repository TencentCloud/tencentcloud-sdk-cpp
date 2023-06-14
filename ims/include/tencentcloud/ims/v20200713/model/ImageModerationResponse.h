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

#ifndef TENCENTCLOUD_IMS_V20200713_MODEL_IMAGEMODERATIONRESPONSE_H_
#define TENCENTCLOUD_IMS_V20200713_MODEL_IMAGEMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20200713/model/LabelResult.h>
#include <tencentcloud/ims/v20200713/model/ObjectResult.h>
#include <tencentcloud/ims/v20200713/model/OcrResult.h>
#include <tencentcloud/ims/v20200713/model/LibResult.h>
#include <tencentcloud/ims/v20200713/model/RecognitionResult.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * ImageModeration返回参数结构体
                */
                class ImageModerationResponse : public AbstractModel
                {
                public:
                    ImageModerationResponse();
                    ~ImageModerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据是否属于恶意类型。
0：正常，1：可疑；
                     * @return HitFlag 数据是否属于恶意类型。
0：正常，1：可疑；
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     * @return Suggestion 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义图片。
以及令人反感、不安全或不适宜的内容类型。
                     * @return Label 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义图片。
以及令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取子标签名称，如色情--性行为；当未命中子标签时，返回空字符串；
                     * @return SubLabel 子标签名称，如色情--性行为；当未命中子标签时，返回空字符串；
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取机器判断当前分类的置信度，取值范围：0.00~100.00。分数越高，表示越有可能属于当前分类。
（如：色情 99.99，则该样本属于色情的置信度非常高。）
                     * @return Score 机器判断当前分类的置信度，取值范围：0.00~100.00。分数越高，表示越有可能属于当前分类。
（如：色情 99.99，则该样本属于色情的置信度非常高。）
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取智能模型的识别结果，包括涉黄、广告等令人反感、不安全或不适宜的内容类型识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelResults 智能模型的识别结果，包括涉黄、广告等令人反感、不安全或不适宜的内容类型识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LabelResult> GetLabelResults() const;

                    /**
                     * 判断参数 LabelResults 是否已赋值
                     * @return LabelResults 是否已赋值
                     * 
                     */
                    bool LabelResultsHasBeenSet() const;

                    /**
                     * 获取物体检测模型的审核结果，包括实体、广告台标/二维码等物体坐标信息与内容审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectResults 物体检测模型的审核结果，包括实体、广告台标/二维码等物体坐标信息与内容审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ObjectResult> GetObjectResults() const;

                    /**
                     * 判断参数 ObjectResults 是否已赋值
                     * @return ObjectResults 是否已赋值
                     * 
                     */
                    bool ObjectResultsHasBeenSet() const;

                    /**
                     * 获取OCR识别后的文本识别结果，包括文本所处图片的OCR坐标信息以及图片文本的识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrResults OCR识别后的文本识别结果，包括文本所处图片的OCR坐标信息以及图片文本的识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OcrResult> GetOcrResults() const;

                    /**
                     * 判断参数 OcrResults 是否已赋值
                     * @return OcrResults 是否已赋值
                     * 
                     */
                    bool OcrResultsHasBeenSet() const;

                    /**
                     * 获取基于图片风险库识别的结果。
风险库包括不安全黑库与正常白库的结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibResults 基于图片风险库识别的结果。
风险库包括不安全黑库与正常白库的结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LibResult> GetLibResults() const;

                    /**
                     * 判断参数 LibResults 是否已赋值
                     * @return LibResults 是否已赋值
                     * 
                     */
                    bool LibResultsHasBeenSet() const;

                    /**
                     * 获取请求参数中的DataId。
                     * @return DataId 请求参数中的DataId。
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取您在入参时所填入的Biztype参数。 -- 该字段暂未开放。
                     * @return BizType 您在入参时所填入的Biztype参数。 -- 该字段暂未开放。
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取扩展字段，用于特定信息返回，不同客户/Biztype下返回信息不同。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 扩展字段，用于特定信息返回，不同客户/Biztype下返回信息不同。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取该字段用于返回仅识别图片元素的模型结果；包括：场景模型命中的标签、置信度和位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecognitionResults 该字段用于返回仅识别图片元素的模型结果；包括：场景模型命中的标签、置信度和位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecognitionResult> GetRecognitionResults() const;

                    /**
                     * 判断参数 RecognitionResults 是否已赋值
                     * @return RecognitionResults 是否已赋值
                     * 
                     */
                    bool RecognitionResultsHasBeenSet() const;

                private:

                    /**
                     * 数据是否属于恶意类型。
0：正常，1：可疑；
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义图片。
以及令人反感、不安全或不适宜的内容类型。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 子标签名称，如色情--性行为；当未命中子标签时，返回空字符串；
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 机器判断当前分类的置信度，取值范围：0.00~100.00。分数越高，表示越有可能属于当前分类。
（如：色情 99.99，则该样本属于色情的置信度非常高。）
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 智能模型的识别结果，包括涉黄、广告等令人反感、不安全或不适宜的内容类型识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LabelResult> m_labelResults;
                    bool m_labelResultsHasBeenSet;

                    /**
                     * 物体检测模型的审核结果，包括实体、广告台标/二维码等物体坐标信息与内容审核信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ObjectResult> m_objectResults;
                    bool m_objectResultsHasBeenSet;

                    /**
                     * OCR识别后的文本识别结果，包括文本所处图片的OCR坐标信息以及图片文本的识别结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OcrResult> m_ocrResults;
                    bool m_ocrResultsHasBeenSet;

                    /**
                     * 基于图片风险库识别的结果。
风险库包括不安全黑库与正常白库的结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LibResult> m_libResults;
                    bool m_libResultsHasBeenSet;

                    /**
                     * 请求参数中的DataId。
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 您在入参时所填入的Biztype参数。 -- 该字段暂未开放。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 扩展字段，用于特定信息返回，不同客户/Biztype下返回信息不同。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 该字段用于返回仅识别图片元素的模型结果；包括：场景模型命中的标签、置信度和位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecognitionResult> m_recognitionResults;
                    bool m_recognitionResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_MODEL_IMAGEMODERATIONRESPONSE_H_
