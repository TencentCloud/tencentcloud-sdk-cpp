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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWTERRORISMTASKOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWTERRORISMTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaContentReviewSegmentItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 涉敏信息
                */
                class AiReviewTerrorismTaskOutput : public AbstractModel
                {
                public:
                    AiReviewTerrorismTaskOutput();
                    ~AiReviewTerrorismTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频涉敏评分，分值为0到100。
                     * @return Confidence 视频涉敏评分，分值为0到100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置视频涉敏评分，分值为0到100。
                     * @param _confidence 视频涉敏评分，分值为0到100。
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
                     * 获取涉敏结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * @return Suggestion 涉敏结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置涉敏结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * @param _suggestion 涉敏结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
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
                     * 获取视频涉敏结果标签，取值范围：
<li>guns：武器枪支。</li>
<li>crowd：人群聚集。</li>
<li>police：警察部队。</li>
<li>bloody：血腥画面。</li>
<li>banners：涉敏旗帜。</li>
<li>militant：武装分子。</li>
<li>explosion：爆炸火灾。</li>
<li>terrorists：涉敏人物。</li>
<li>scenario：涉敏画面。</li>
                     * @return Label 视频涉敏结果标签，取值范围：
<li>guns：武器枪支。</li>
<li>crowd：人群聚集。</li>
<li>police：警察部队。</li>
<li>bloody：血腥画面。</li>
<li>banners：涉敏旗帜。</li>
<li>militant：武装分子。</li>
<li>explosion：爆炸火灾。</li>
<li>terrorists：涉敏人物。</li>
<li>scenario：涉敏画面。</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置视频涉敏结果标签，取值范围：
<li>guns：武器枪支。</li>
<li>crowd：人群聚集。</li>
<li>police：警察部队。</li>
<li>bloody：血腥画面。</li>
<li>banners：涉敏旗帜。</li>
<li>militant：武装分子。</li>
<li>explosion：爆炸火灾。</li>
<li>terrorists：涉敏人物。</li>
<li>scenario：涉敏画面。</li>
                     * @param _label 视频涉敏结果标签，取值范围：
<li>guns：武器枪支。</li>
<li>crowd：人群聚集。</li>
<li>police：警察部队。</li>
<li>bloody：血腥画面。</li>
<li>banners：涉敏旗帜。</li>
<li>militant：武装分子。</li>
<li>explosion：爆炸火灾。</li>
<li>terrorists：涉敏人物。</li>
<li>scenario：涉敏画面。</li>
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
                     * 获取有涉敏嫌疑的视频片段列表。
                     * @return SegmentSet 有涉敏嫌疑的视频片段列表。
                     * 
                     */
                    std::vector<MediaContentReviewSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置有涉敏嫌疑的视频片段列表。
                     * @param _segmentSet 有涉敏嫌疑的视频片段列表。
                     * 
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * 视频涉敏评分，分值为0到100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 涉敏结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 视频涉敏结果标签，取值范围：
<li>guns：武器枪支。</li>
<li>crowd：人群聚集。</li>
<li>police：警察部队。</li>
<li>bloody：血腥画面。</li>
<li>banners：涉敏旗帜。</li>
<li>militant：武装分子。</li>
<li>explosion：爆炸火灾。</li>
<li>terrorists：涉敏人物。</li>
<li>scenario：涉敏画面。</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 有涉敏嫌疑的视频片段列表。
                     */
                    std::vector<MediaContentReviewSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWTERRORISMTASKOUTPUT_H_
