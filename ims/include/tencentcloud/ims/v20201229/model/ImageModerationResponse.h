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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONRESPONSE_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/LabelResult.h>
#include <tencentcloud/ims/v20201229/model/ObjectResult.h>
#include <tencentcloud/ims/v20201229/model/OcrResult.h>
#include <tencentcloud/ims/v20201229/model/LibResult.h>
#include <tencentcloud/ims/v20201229/model/RecognitionResult.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
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
                     * 获取<p>该字段用于返回Label标签下的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     * @return Suggestion <p>该字段用于返回Label标签下的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
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
                     * 获取<p>该字段用于返回检测结果（LabelResults）中所对应的<strong>优先级最高的恶意标签</strong>，表示模型推荐的审核结果，建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值标签示例：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；（说明：文档仅示例了部分风险类型，更多返回类型请以实际值为准或<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>进行咨询）。</p>
                     * @return Label <p>该字段用于返回检测结果（LabelResults）中所对应的<strong>优先级最高的恶意标签</strong>，表示模型推荐的审核结果，建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值标签示例：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；（说明：文档仅示例了部分风险类型，更多返回类型请以实际值为准或<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>进行咨询）。</p>
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
                     * 获取<p>该字段用于返回检测结果所命中优先级最高的恶意标签下的子标签名称，如：<em>色情--性行为</em>；若未命中任何子标签则返回空字符串。</p>
                     * @return SubLabel <p>该字段用于返回检测结果所命中优先级最高的恶意标签下的子标签名称，如：<em>色情--性行为</em>；若未命中任何子标签则返回空字符串。</p>
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
                     * 获取<p>该字段用于返回当前标签（Label）下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表图片越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该图片非常有可能属于色情内容；<em>色情 0</em>，则表明该图片不属于色情内容。</p>
                     * @return Score <p>该字段用于返回当前标签（Label）下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表图片越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该图片非常有可能属于色情内容；<em>色情 0</em>，则表明该图片不属于色情内容。</p>
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
                     * 获取<p>该字段用于返回分类检测模型的详细检测结果；表示模型推荐的审核结果，建议您按照业务所需，对不同违规类型与建议值进行处理。详细返回值信息可参阅对应的数据结构（LabelResults）描述。</p><p>返回值标签示例：Normal:正常，Porn:色情，Abuse:谩骂，Ad:广告（说明：文档仅示例了部分风险类型，更多返回类型请以实际值为准或<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>进行咨询）<br>注意：此字段可能返回 null，表示取不到有效值。</p>
                     * @return LabelResults <p>该字段用于返回分类检测模型的详细检测结果；表示模型推荐的审核结果，建议您按照业务所需，对不同违规类型与建议值进行处理。详细返回值信息可参阅对应的数据结构（LabelResults）描述。</p><p>返回值标签示例：Normal:正常，Porn:色情，Abuse:谩骂，Ad:广告（说明：文档仅示例了部分风险类型，更多返回类型请以实际值为准或<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>进行咨询）<br>注意：此字段可能返回 null，表示取不到有效值。</p>
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
                     * 获取<p>该字段用于返回物体检测模型的详细检测结果；包括：实体、广告台标、二维码等内容命中的标签名称、标签分数、坐标信息、场景识别结果、建议操作等内容审核信息；详细返回值信息可参阅对应的数据结构（ObjectResults）描述。</p>
                     * @return ObjectResults <p>该字段用于返回物体检测模型的详细检测结果；包括：实体、广告台标、二维码等内容命中的标签名称、标签分数、坐标信息、场景识别结果、建议操作等内容审核信息；详细返回值信息可参阅对应的数据结构（ObjectResults）描述。</p>
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
                     * 获取<p>该字段用于返回OCR文本识别的详细检测结果；包括：文本坐标信息、文本识别结果、建议操作等内容审核信息；详细返回值信息可参阅对应的数据结构（OcrResults）描述。</p>
                     * @return OcrResults <p>该字段用于返回OCR文本识别的详细检测结果；包括：文本坐标信息、文本识别结果、建议操作等内容审核信息；详细返回值信息可参阅对应的数据结构（OcrResults）描述。</p>
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
                     * 获取<p>该字段用于返回基于图片风险库（风险黑库与正常白库）识别的结果,详细返回值信息可参阅对应的数据结构（LibResults）描述。<br>备注：图片风险库目前<strong>暂不支持自定义库</strong>。</p>
                     * @return LibResults <p>该字段用于返回基于图片风险库（风险黑库与正常白库）识别的结果,详细返回值信息可参阅对应的数据结构（LibResults）描述。<br>备注：图片风险库目前<strong>暂不支持自定义库</strong>。</p>
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
                     * 获取<p>该字段用于返回检测对象对应请求参数中的DataId。</p>
                     * @return DataId <p>该字段用于返回检测对象对应请求参数中的DataId。</p>
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
                     * 获取<p>该字段用于返回检测对象对应请求参数中的BizType。</p>
                     * @return BizType <p>该字段用于返回检测对象对应请求参数中的BizType。</p>
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
                     * 获取<p>该字段用于返回根据您的需求配置的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra <p>该字段用于返回根据您的需求配置的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
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
                     * 获取<p>该字段用于返回检测对象对应的MD5校验值，以方便校验文件完整性。</p>
                     * @return FileMD5 <p>该字段用于返回检测对象对应的MD5校验值，以方便校验文件完整性。</p>
                     * 
                     */
                    std::string GetFileMD5() const;

                    /**
                     * 判断参数 FileMD5 是否已赋值
                     * @return FileMD5 是否已赋值
                     * 
                     */
                    bool FileMD5HasBeenSet() const;

                    /**
                     * 获取<p>该字段用于返回仅识别图片元素的模型结果；包括：场景模型命中的标签、置信度和位置信息</p>
                     * @return RecognitionResults <p>该字段用于返回仅识别图片元素的模型结果；包括：场景模型命中的标签、置信度和位置信息</p>
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
                     * <p>该字段用于返回Label标签下的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：<strong>Block</strong>：建议屏蔽，<strong>Review</strong> ：建议人工复审，<strong>Pass</strong>：建议通过</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>该字段用于返回检测结果（LabelResults）中所对应的<strong>优先级最高的恶意标签</strong>，表示模型推荐的审核结果，建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值标签示例：<strong>Normal</strong>：正常，<strong>Porn</strong>：色情，<strong>Abuse</strong>：谩骂，<strong>Ad</strong>：广告；（说明：文档仅示例了部分风险类型，更多返回类型请以实际值为准或<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>进行咨询）。</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>该字段用于返回检测结果所命中优先级最高的恶意标签下的子标签名称，如：<em>色情--性行为</em>；若未命中任何子标签则返回空字符串。</p>
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * <p>该字段用于返回当前标签（Label）下的置信度，取值范围：0（<strong>置信度最低</strong>）-100（<strong>置信度最高</strong> ），越高代表图片越有可能属于当前返回的标签；如：<em>色情 99</em>，则表明该图片非常有可能属于色情内容；<em>色情 0</em>，则表明该图片不属于色情内容。</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>该字段用于返回分类检测模型的详细检测结果；表示模型推荐的审核结果，建议您按照业务所需，对不同违规类型与建议值进行处理。详细返回值信息可参阅对应的数据结构（LabelResults）描述。</p><p>返回值标签示例：Normal:正常，Porn:色情，Abuse:谩骂，Ad:广告（说明：文档仅示例了部分风险类型，更多返回类型请以实际值为准或<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>进行咨询）<br>注意：此字段可能返回 null，表示取不到有效值。</p>
                     */
                    std::vector<LabelResult> m_labelResults;
                    bool m_labelResultsHasBeenSet;

                    /**
                     * <p>该字段用于返回物体检测模型的详细检测结果；包括：实体、广告台标、二维码等内容命中的标签名称、标签分数、坐标信息、场景识别结果、建议操作等内容审核信息；详细返回值信息可参阅对应的数据结构（ObjectResults）描述。</p>
                     */
                    std::vector<ObjectResult> m_objectResults;
                    bool m_objectResultsHasBeenSet;

                    /**
                     * <p>该字段用于返回OCR文本识别的详细检测结果；包括：文本坐标信息、文本识别结果、建议操作等内容审核信息；详细返回值信息可参阅对应的数据结构（OcrResults）描述。</p>
                     */
                    std::vector<OcrResult> m_ocrResults;
                    bool m_ocrResultsHasBeenSet;

                    /**
                     * <p>该字段用于返回基于图片风险库（风险黑库与正常白库）识别的结果,详细返回值信息可参阅对应的数据结构（LibResults）描述。<br>备注：图片风险库目前<strong>暂不支持自定义库</strong>。</p>
                     */
                    std::vector<LibResult> m_libResults;
                    bool m_libResultsHasBeenSet;

                    /**
                     * <p>该字段用于返回检测对象对应请求参数中的DataId。</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>该字段用于返回检测对象对应请求参数中的BizType。</p>
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>该字段用于返回根据您的需求配置的额外附加信息（Extra），如未配置则默认返回值为空。<br>备注：不同客户或Biztype下返回信息不同，如需配置该字段请提交工单咨询或联系售后专员处理。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * <p>该字段用于返回检测对象对应的MD5校验值，以方便校验文件完整性。</p>
                     */
                    std::string m_fileMD5;
                    bool m_fileMD5HasBeenSet;

                    /**
                     * <p>该字段用于返回仅识别图片元素的模型结果；包括：场景模型命中的标签、置信度和位置信息</p>
                     */
                    std::vector<RecognitionResult> m_recognitionResults;
                    bool m_recognitionResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONRESPONSE_H_
