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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_HIGHLIGHTSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_HIGHLIGHTSEGMENTITEM_H_

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
                * 智能精彩集锦片段列表。
                */
                class HighlightSegmentItem : public AbstractModel
                {
                public:
                    HighlightSegmentItem();
                    ~HighlightSegmentItem() = default;
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
                     * 获取片段标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentTags 片段标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSegmentTags() const;

                    /**
                     * 设置片段标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentTags 片段标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentTags(const std::vector<std::string>& _segmentTags);

                    /**
                     * 判断参数 SegmentTags 是否已赋值
                     * @return SegmentTags 是否已赋值
                     * 
                     */
                    bool SegmentTagsHasBeenSet() const;

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
                     * 片段标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_segmentTags;
                    bool m_segmentTagsHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_HIGHLIGHTSEGMENTITEM_H_
