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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTRECOGNITIONITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTRECOGNITIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能拆条片段。
                */
                class SegmentRecognitionItem : public AbstractModel
                {
                public:
                    SegmentRecognitionItem();
                    ~SegmentRecognitionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取置信度。
                     * @return Confidence 置信度。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置置信度。
                     * @param _confidence 置信度。
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
                     * 获取片段起始时间偏移。
                     * @return StartTimeOffset 片段起始时间偏移。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置片段起始时间偏移。
                     * @param _startTimeOffset 片段起始时间偏移。
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取片段结束时间偏移。
                     * @return EndTimeOffset 片段结束时间偏移。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置片段结束时间偏移。
                     * @param _endTimeOffset 片段结束时间偏移。
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取拆条片段URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentUrl 拆条片段URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSegmentUrl() const;

                    /**
                     * 设置拆条片段URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentUrl 拆条片段URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentUrl(const std::string& _segmentUrl);

                    /**
                     * 判断参数 SegmentUrl 是否已赋值
                     * @return SegmentUrl 是否已赋值
                     * 
                     */
                    bool SegmentUrlHasBeenSet() const;

                    /**
                     * 获取拆条片段封面。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CovImgUrl 拆条片段封面。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCovImgUrl() const;

                    /**
                     * 设置拆条片段封面。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _covImgUrl 拆条片段封面。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCovImgUrl(const std::string& _covImgUrl);

                    /**
                     * 判断参数 CovImgUrl 是否已赋值
                     * @return CovImgUrl 是否已赋值
                     * 
                     */
                    bool CovImgUrlHasBeenSet() const;

                    /**
                     * 获取分段标题。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 分段标题。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置分段标题。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 分段标题。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取分段概要。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Summary 分段概要。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置分段概要。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _summary 分段概要。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取分段关键词。
                     * @return Keywords 分段关键词。
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置分段关键词。
                     * @param _keywords 分段关键词。
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
                     * 获取直播切片对应直播起始时间点，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginTime 直播切片对应直播起始时间点，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置直播切片对应直播起始时间点，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _beginTime 直播切片对应直播起始时间点，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取直播切片对应直播结束时间点，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 直播切片对应直播结束时间点，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置直播切片对应直播结束时间点，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 直播切片对应直播结束时间点，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取直播拆条用，音频url。
                     * @return AudioUrl 直播拆条用，音频url。
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置直播拆条用，音频url。
                     * @param _audioUrl 直播拆条用，音频url。
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取直播拆条用，音频对应起始时间戳；
                     * @return AudioBeginTime 直播拆条用，音频对应起始时间戳；
                     * 
                     */
                    double GetAudioBeginTime() const;

                    /**
                     * 设置直播拆条用，音频对应起始时间戳；
                     * @param _audioBeginTime 直播拆条用，音频对应起始时间戳；
                     * 
                     */
                    void SetAudioBeginTime(const double& _audioBeginTime);

                    /**
                     * 判断参数 AudioBeginTime 是否已赋值
                     * @return AudioBeginTime 是否已赋值
                     * 
                     */
                    bool AudioBeginTimeHasBeenSet() const;

                    /**
                     * 获取直播拆条用，音频对应结束时间戳。
                     * @return AudioEndTime 直播拆条用，音频对应结束时间戳。
                     * 
                     */
                    double GetAudioEndTime() const;

                    /**
                     * 设置直播拆条用，音频对应结束时间戳。
                     * @param _audioEndTime 直播拆条用，音频对应结束时间戳。
                     * 
                     */
                    void SetAudioEndTime(const double& _audioEndTime);

                    /**
                     * 判断参数 AudioEndTime 是否已赋值
                     * @return AudioEndTime 是否已赋值
                     * 
                     */
                    bool AudioEndTimeHasBeenSet() const;

                    /**
                     * 获取直播拆条用，人物位置参考信息用于横转竖。
                     * @return PersonPositionUrl 直播拆条用，人物位置参考信息用于横转竖。
                     * 
                     */
                    std::string GetPersonPositionUrl() const;

                    /**
                     * 设置直播拆条用，人物位置参考信息用于横转竖。
                     * @param _personPositionUrl 直播拆条用，人物位置参考信息用于横转竖。
                     * 
                     */
                    void SetPersonPositionUrl(const std::string& _personPositionUrl);

                    /**
                     * 判断参数 PersonPositionUrl 是否已赋值
                     * @return PersonPositionUrl 是否已赋值
                     * 
                     */
                    bool PersonPositionUrlHasBeenSet() const;

                    /**
                     * 获取指定人物ID。
                     * @return PersonId 指定人物ID。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置指定人物ID。
                     * @param _personId 指定人物ID。
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                private:

                    /**
                     * 置信度。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 片段起始时间偏移。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 片段结束时间偏移。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 拆条片段URL。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_segmentUrl;
                    bool m_segmentUrlHasBeenSet;

                    /**
                     * 拆条片段封面。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_covImgUrl;
                    bool m_covImgUrlHasBeenSet;

                    /**
                     * 分段标题。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 分段概要。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 分段关键词。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 直播切片对应直播起始时间点，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 直播切片对应直播结束时间点，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 直播拆条用，音频url。
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * 直播拆条用，音频对应起始时间戳；
                     */
                    double m_audioBeginTime;
                    bool m_audioBeginTimeHasBeenSet;

                    /**
                     * 直播拆条用，音频对应结束时间戳。
                     */
                    double m_audioEndTime;
                    bool m_audioEndTimeHasBeenSet;

                    /**
                     * 直播拆条用，人物位置参考信息用于横转竖。
                     */
                    std::string m_personPositionUrl;
                    bool m_personPositionUrlHasBeenSet;

                    /**
                     * 指定人物ID。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTRECOGNITIONITEM_H_
