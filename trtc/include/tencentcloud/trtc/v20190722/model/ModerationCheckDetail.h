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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONCHECKDETAIL_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONCHECKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AudioSegments.h>
#include <tencentcloud/trtc/v20190722/model/ImageLocation.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 内容理解明细
                */
                class ModerationCheckDetail : public AbstractModel
                {
                public:
                    ModerationCheckDetail();
                    ~ModerationCheckDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该字段在内容理解回调事件中可直接忽略，仅在第三方审核时存在，检出违规的模型场景，枚举值：Ad/Porn/Abuse/Illegal/Polity/Terror/Sexy/Moan/Custom</p>
                     * @return Scene <p>该字段在内容理解回调事件中可直接忽略，仅在第三方审核时存在，检出违规的模型场景，枚举值：Ad/Porn/Abuse/Illegal/Polity/Terror/Sexy/Moan/Custom</p>
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置<p>该字段在内容理解回调事件中可直接忽略，仅在第三方审核时存在，检出违规的模型场景，枚举值：Ad/Porn/Abuse/Illegal/Polity/Terror/Sexy/Moan/Custom</p>
                     * @param _scene <p>该字段在内容理解回调事件中可直接忽略，仅在第三方审核时存在，检出违规的模型场景，枚举值：Ad/Porn/Abuse/Illegal/Polity/Terror/Sexy/Moan/Custom</p>
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
                     * 获取<p>Normal：正常文本  Ad:广告 Porn：色情 Abuse：谩骂 Illegal: 违禁 Polity: 涉政 Terror: 暴恐 Sexy: 性感 Moan: 呻吟/娇喘 QRCode: 二维码 Custom: 自定义</p>
                     * @return Label <p>Normal：正常文本  Ad:广告 Porn：色情 Abuse：谩骂 Illegal: 违禁 Polity: 涉政 Terror: 暴恐 Sexy: 性感 Moan: 呻吟/娇喘 QRCode: 二维码 Custom: 自定义</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>Normal：正常文本  Ad:广告 Porn：色情 Abuse：谩骂 Illegal: 违禁 Polity: 涉政 Terror: 暴恐 Sexy: 性感 Moan: 呻吟/娇喘 QRCode: 二维码 Custom: 自定义</p>
                     * @param _label <p>Normal：正常文本  Ad:广告 Porn：色情 Abuse：谩骂 Illegal: 违禁 Polity: 涉政 Terror: 暴恐 Sexy: 性感 Moan: 呻吟/娇喘 QRCode: 二维码 Custom: 自定义</p>
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
                     * 获取<p>子标签</p>
                     * @return SubLabel <p>子标签</p>
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置<p>子标签</p>
                     * @param _subLabel <p>子标签</p>
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
                     * 获取<p>0：建议通过。 1 ：建议人工重新内容识别。 2：建议屏蔽。</p>
                     * @return Suggest <p>0：建议通过。 1 ：建议人工重新内容识别。 2：建议屏蔽。</p>
                     * 
                     */
                    int64_t GetSuggest() const;

                    /**
                     * 设置<p>0：建议通过。 1 ：建议人工重新内容识别。 2：建议屏蔽。</p>
                     * @param _suggest <p>0：建议通过。 1 ：建议人工重新内容识别。 2：建议屏蔽。</p>
                     * 
                     */
                    void SetSuggest(const int64_t& _suggest);

                    /**
                     * 判断参数 Suggest 是否已赋值
                     * @return Suggest 是否已赋值
                     * 
                     */
                    bool SuggestHasBeenSet() const;

                    /**
                     * 获取<p>自定义词库名。</p>
                     * @return LibName <p>自定义词库名。</p>
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置<p>自定义词库名。</p>
                     * @param _libName <p>自定义词库名。</p>
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
                     * 获取<p>关键词。</p>
                     * @return Keywords <p>关键词。</p>
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置<p>关键词。</p>
                     * @param _keywords <p>关键词。</p>
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
                     * 获取<p>中文二级标签。</p>
                     * @return Desc <p>中文二级标签。</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>中文二级标签。</p>
                     * @param _desc <p>中文二级标签。</p>
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取<p>置信度分数，取值范围：0（置信度最低）-100（置信度最高 ），越高代表越有可能属于当前返回的标签。 实例值：100</p>
                     * @return Score <p>置信度分数，取值范围：0（置信度最低）-100（置信度最高 ），越高代表越有可能属于当前返回的标签。 实例值：100</p>
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置<p>置信度分数，取值范围：0（置信度最低）-100（置信度最高 ），越高代表越有可能属于当前返回的标签。 实例值：100</p>
                     * @param _score <p>置信度分数，取值范围：0（置信度最低）-100（置信度最高 ），越高代表越有可能属于当前返回的标签。 实例值：100</p>
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
                     * 获取<p>违规严重程度: 0-不区分 1-轻度 2-严重</p>
                     * @return Severity <p>违规严重程度: 0-不区分 1-轻度 2-严重</p>
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 设置<p>违规严重程度: 0-不区分 1-轻度 2-严重</p>
                     * @param _severity <p>违规严重程度: 0-不区分 1-轻度 2-严重</p>
                     * 
                     */
                    void SetSeverity(const int64_t& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取<p>违规严重程度描述 仅名单内sdkappid返回 负面表达,正面或中性表达,语义模糊</p>
                     * @return SeverityDesc <p>违规严重程度描述 仅名单内sdkappid返回 负面表达,正面或中性表达,语义模糊</p>
                     * 
                     */
                    std::string GetSeverityDesc() const;

                    /**
                     * 设置<p>违规严重程度描述 仅名单内sdkappid返回 负面表达,正面或中性表达,语义模糊</p>
                     * @param _severityDesc <p>违规严重程度描述 仅名单内sdkappid返回 负面表达,正面或中性表达,语义模糊</p>
                     * 
                     */
                    void SetSeverityDesc(const std::string& _severityDesc);

                    /**
                     * 判断参数 SeverityDesc 是否已赋值
                     * @return SeverityDesc 是否已赋值
                     * 
                     */
                    bool SeverityDescHasBeenSet() const;

                    /**
                     * 获取<p>音频切片位置信息。</p>
                     * @return AudioSegments <p>音频切片位置信息。</p>
                     * 
                     */
                    AudioSegments GetAudioSegments() const;

                    /**
                     * 设置<p>音频切片位置信息。</p>
                     * @param _audioSegments <p>音频切片位置信息。</p>
                     * 
                     */
                    void SetAudioSegments(const AudioSegments& _audioSegments);

                    /**
                     * 判断参数 AudioSegments 是否已赋值
                     * @return AudioSegments 是否已赋值
                     * 
                     */
                    bool AudioSegmentsHasBeenSet() const;

                    /**
                     * 获取<p>图片命中坐标信息。</p>
                     * @return ImageLocation <p>图片命中坐标信息。</p>
                     * 
                     */
                    ImageLocation GetImageLocation() const;

                    /**
                     * 设置<p>图片命中坐标信息。</p>
                     * @param _imageLocation <p>图片命中坐标信息。</p>
                     * 
                     */
                    void SetImageLocation(const ImageLocation& _imageLocation);

                    /**
                     * 判断参数 ImageLocation 是否已赋值
                     * @return ImageLocation 是否已赋值
                     * 
                     */
                    bool ImageLocationHasBeenSet() const;

                private:

                    /**
                     * <p>该字段在内容理解回调事件中可直接忽略，仅在第三方审核时存在，检出违规的模型场景，枚举值：Ad/Porn/Abuse/Illegal/Polity/Terror/Sexy/Moan/Custom</p>
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * <p>Normal：正常文本  Ad:广告 Porn：色情 Abuse：谩骂 Illegal: 违禁 Polity: 涉政 Terror: 暴恐 Sexy: 性感 Moan: 呻吟/娇喘 QRCode: 二维码 Custom: 自定义</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>子标签</p>
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * <p>0：建议通过。 1 ：建议人工重新内容识别。 2：建议屏蔽。</p>
                     */
                    int64_t m_suggest;
                    bool m_suggestHasBeenSet;

                    /**
                     * <p>自定义词库名。</p>
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * <p>关键词。</p>
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>中文二级标签。</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>置信度分数，取值范围：0（置信度最低）-100（置信度最高 ），越高代表越有可能属于当前返回的标签。 实例值：100</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>违规严重程度: 0-不区分 1-轻度 2-严重</p>
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>违规严重程度描述 仅名单内sdkappid返回 负面表达,正面或中性表达,语义模糊</p>
                     */
                    std::string m_severityDesc;
                    bool m_severityDescHasBeenSet;

                    /**
                     * <p>音频切片位置信息。</p>
                     */
                    AudioSegments m_audioSegments;
                    bool m_audioSegmentsHasBeenSet;

                    /**
                     * <p>图片命中坐标信息。</p>
                     */
                    ImageLocation m_imageLocation;
                    bool m_imageLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONCHECKDETAIL_H_
