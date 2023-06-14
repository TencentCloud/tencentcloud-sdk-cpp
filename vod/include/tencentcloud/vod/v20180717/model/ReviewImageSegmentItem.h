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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGESEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGESEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片审核片段。
                */
                class ReviewImageSegmentItem : public AbstractModel
                {
                public:
                    ReviewImageSegmentItem();
                    ~ReviewImageSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取嫌疑片段涉及令人反感的信息的分数。
                     * @return Confidence 嫌疑片段涉及令人反感的信息的分数。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置嫌疑片段涉及令人反感的信息的分数。
                     * @param _confidence 嫌疑片段涉及令人反感的信息的分数。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取嫌疑片段鉴别涉及违规信息的结果建议，取值范围：
<li>review：疑似违规，建议复审；</li>
<li>block：确认违规，建议封禁。</li>
                     * @return Suggestion 嫌疑片段鉴别涉及违规信息的结果建议，取值范围：
<li>review：疑似违规，建议复审；</li>
<li>block：确认违规，建议封禁。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置嫌疑片段鉴别涉及违规信息的结果建议，取值范围：
<li>review：疑似违规，建议复审；</li>
<li>block：确认违规，建议封禁。</li>
                     * @param _suggestion 嫌疑片段鉴别涉及违规信息的结果建议，取值范围：
<li>review：疑似违规，建议复审；</li>
<li>block：确认违规，建议封禁。</li>
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
                     * 获取嫌疑片段最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂。</li>
                     * @return Label 嫌疑片段最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂。</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置嫌疑片段最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂。</li>
                     * @param _label 嫌疑片段最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂。</li>
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
                     * 获取违规子标签。
                     * @return SubLabel 违规子标签。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置违规子标签。
                     * @param _subLabel 违规子标签。
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
                     * 获取嫌疑片段违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字。</li>
                     * @return Form 嫌疑片段违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字。</li>
                     * 
                     */
                    std::string GetForm() const;

                    /**
                     * 设置嫌疑片段违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字。</li>
                     * @param _form 嫌疑片段违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字。</li>
                     * 
                     */
                    void SetForm(const std::string& _form);

                    /**
                     * 判断参数 Form 是否已赋值
                     * @return Form 是否已赋值
                     * 
                     */
                    bool FormHasBeenSet() const;

                    /**
                     * 获取嫌疑人物、图标或文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * @return AreaCoordSet 嫌疑人物、图标或文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置嫌疑人物、图标或文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * @param _areaCoordSet 嫌疑人物、图标或文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                    /**
                     * 获取当 Form 为 OCR 时有效，表示识别出来的 OCR 文本内容。
                     * @return Text 当 Form 为 OCR 时有效，表示识别出来的 OCR 文本内容。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置当 Form 为 OCR 时有效，表示识别出来的 OCR 文本内容。
                     * @param _text 当 Form 为 OCR 时有效，表示识别出来的 OCR 文本内容。
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
                     * 获取当 Form 为 OCR 时有效，表示嫌疑片段命中的违规关键词列表。
                     * @return KeywordSet 当 Form 为 OCR 时有效，表示嫌疑片段命中的违规关键词列表。
                     * 
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置当 Form 为 OCR 时有效，表示嫌疑片段命中的违规关键词列表。
                     * @param _keywordSet 当 Form 为 OCR 时有效，表示嫌疑片段命中的违规关键词列表。
                     * 
                     */
                    void SetKeywordSet(const std::vector<std::string>& _keywordSet);

                    /**
                     * 判断参数 KeywordSet 是否已赋值
                     * @return KeywordSet 是否已赋值
                     * 
                     */
                    bool KeywordSetHasBeenSet() const;

                private:

                    /**
                     * 嫌疑片段涉及令人反感的信息的分数。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 嫌疑片段鉴别涉及违规信息的结果建议，取值范围：
<li>review：疑似违规，建议复审；</li>
<li>block：确认违规，建议封禁。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 嫌疑片段最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Ad：广告；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂。</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 违规子标签。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 嫌疑片段违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字。</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * 嫌疑人物、图标或文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * 当 Form 为 OCR 时有效，表示识别出来的 OCR 文本内容。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 当 Form 为 OCR 时有效，表示嫌疑片段命中的违规关键词列表。
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWIMAGESEGMENTITEM_H_
