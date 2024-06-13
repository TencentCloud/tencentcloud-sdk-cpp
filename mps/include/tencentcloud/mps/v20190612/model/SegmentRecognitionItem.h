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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTRECOGNITIONITEM_H_
