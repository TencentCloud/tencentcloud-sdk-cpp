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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPOLITICALASRTASKOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPOLITICALASRTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaContentReviewAsrTextSegmentItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Asr 文字敏感信息
                */
                class AiReviewPoliticalAsrTaskOutput : public AbstractModel
                {
                public:
                    AiReviewPoliticalAsrTaskOutput();
                    ~AiReviewPoliticalAsrTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asr 文字敏感评分，分值为0到100。
                     * @return Confidence Asr 文字敏感评分，分值为0到100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Asr 文字敏感评分，分值为0到100。
                     * @param _confidence Asr 文字敏感评分，分值为0到100。
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
                     * 获取Asr 文字敏感结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * @return Suggestion Asr 文字敏感结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Asr 文字敏感结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * @param _suggestion Asr 文字敏感结果建议，取值范围：
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
                     * 获取Asr 文字敏感嫌疑的视频片段列表。
                     * @return SegmentSet Asr 文字敏感嫌疑的视频片段列表。
                     * 
                     */
                    std::vector<MediaContentReviewAsrTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Asr 文字敏感嫌疑的视频片段列表。
                     * @param _segmentSet Asr 文字敏感嫌疑的视频片段列表。
                     * 
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewAsrTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * Asr 文字敏感评分，分值为0到100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Asr 文字敏感结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Asr 文字敏感嫌疑的视频片段列表。
                     */
                    std::vector<MediaContentReviewAsrTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPOLITICALASRTASKOUTPUT_H_
