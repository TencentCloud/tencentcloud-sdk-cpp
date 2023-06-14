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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaContentReviewSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 鉴别涉及令人反感的信息的结果信息
                */
                class AiReviewPornTaskOutput : public AbstractModel
                {
                public:
                    AiReviewPornTaskOutput();
                    ~AiReviewPornTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频鉴别涉及令人反感的信息的评分，分值为0到100。
                     * @return Confidence 视频鉴别涉及令人反感的信息的评分，分值为0到100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置视频鉴别涉及令人反感的信息的评分，分值为0到100。
                     * @param _confidence 视频鉴别涉及令人反感的信息的评分，分值为0到100。
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
                     * 获取鉴别涉及令人反感的信息的结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * @return Suggestion 鉴别涉及令人反感的信息的结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置鉴别涉及令人反感的信息的结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     * @param _suggestion 鉴别涉及令人反感的信息的结果建议，取值范围：
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
                     * 获取视频鉴别涉及令人反感的信息的结果标签，取值范围：
<li>porn：色情。</li>
<li>sexy：性感。</li>
<li>vulgar：低俗。</li>
<li>intimacy：亲密行为。</li>
                     * @return Label 视频鉴别涉及令人反感的信息的结果标签，取值范围：
<li>porn：色情。</li>
<li>sexy：性感。</li>
<li>vulgar：低俗。</li>
<li>intimacy：亲密行为。</li>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置视频鉴别涉及令人反感的信息的结果标签，取值范围：
<li>porn：色情。</li>
<li>sexy：性感。</li>
<li>vulgar：低俗。</li>
<li>intimacy：亲密行为。</li>
                     * @param _label 视频鉴别涉及令人反感的信息的结果标签，取值范围：
<li>porn：色情。</li>
<li>sexy：性感。</li>
<li>vulgar：低俗。</li>
<li>intimacy：亲密行为。</li>
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
                     * 获取有涉及令人反感的信息的嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * @return SegmentSet 有涉及令人反感的信息的嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * 
                     */
                    std::vector<MediaContentReviewSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置有涉及令人反感的信息的嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * @param _segmentSet 有涉及令人反感的信息的嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     * 
                     */
                    void SetSegmentSet(const std::vector<MediaContentReviewSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取涉及令人反感的信息的嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @return SegmentSetFileUrl 涉及令人反感的信息的嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置涉及令人反感的信息的嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @param _segmentSetFileUrl 涉及令人反感的信息的嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
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
                     * 获取涉及令人反感的信息的嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return SegmentSetFileUrlExpireTime 涉及令人反感的信息的嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置涉及令人反感的信息的嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _segmentSetFileUrlExpireTime 涉及令人反感的信息的嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 视频鉴别涉及令人反感的信息的评分，分值为0到100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 鉴别涉及令人反感的信息的结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 视频鉴别涉及令人反感的信息的结果标签，取值范围：
<li>porn：色情。</li>
<li>sexy：性感。</li>
<li>vulgar：低俗。</li>
<li>intimacy：亲密行为。</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 有涉及令人反感的信息的嫌疑的视频片段列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 SegmentSetFileUrl 对应的文件中获取。
                     */
                    std::vector<MediaContentReviewSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * 涉及令人反感的信息的嫌疑的视频片段列表文件 URL。文件的内容为 JSON，数据结构与 SegmentSet 字段一致。 （文件不会永久存储，到达SegmentSetFileUrlExpireTime 时间点后文件将被删除）。
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * 涉及令人反感的信息的嫌疑的视频片段列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIREVIEWPORNTASKOUTPUT_H_
