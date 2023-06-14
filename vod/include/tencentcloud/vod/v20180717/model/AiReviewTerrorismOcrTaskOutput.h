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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWTERRORISMOCRTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWTERRORISMOCRTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaContentReviewOcrTextSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Ocr 文字涉及令人不安全的信息
                */
                class AiReviewTerrorismOcrTaskOutput : public AbstractModel
                {
                public:
                    AiReviewTerrorismOcrTaskOutput();
                    ~AiReviewTerrorismOcrTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ocr 文字有涉及令人不安全信息的评分，分值为0到100。
                     * @return Confidence Ocr 文字有涉及令人不安全信息的评分，分值为0到100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Ocr 文字有涉及令人不安全信息的评分，分值为0到100。
                     * @param _confidence Ocr 文字有涉及令人不安全信息的评分，分值为0到100。
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
                     * 获取Ocr 文字有涉及令人不安全信息的结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * @return Suggestion Ocr 文字有涉及令人不安全信息的结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Ocr 文字有涉及令人不安全信息的结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * @param _suggestion Ocr 文字有涉及令人不安全信息的结果建议，取值范围：
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
                     * 获取Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * @return SegmentSet Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * 
                     */
                    std::vector<MediaContentReviewOcrTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * @param _segmentSet Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * 
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewOcrTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达 SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @return SegmentSetFileUrl Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达 SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达 SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @param _segmentSetFileUrl Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达 SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    void SetSegmentSetFileUrl(const std::string& _segmentSetFileUrl);

                    /**
                     * 判断参数 SegmentSetFileUrl 是否已赋值
                     * @return SegmentSetFileUrl 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlHasBeenSet() const;

                    /**
                     * 获取Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return SegmentSetFileUrlExpireTime Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _segmentSetFileUrlExpireTime Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Ocr 文字有涉及令人不安全信息的评分，分值为0到100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Ocr 文字有涉及令人不安全信息的结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     */
                    std::vector<MediaContentReviewOcrTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达 SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * Ocr 文字有涉及令人不安全信息嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWTERRORISMOCRTASKOUTPUT_H_
