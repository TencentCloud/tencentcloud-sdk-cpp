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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEM_H_

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
                * 质检结果项
                */
                class QualityControlItem : public AbstractModel
                {
                public:
                    QualityControlItem();
                    ~QualityControlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取置信度，取值范围是 0 到 100。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Confidence 置信度，取值范围是 0 到 100。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置置信度，取值范围是 0 到 100。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _confidence 置信度，取值范围是 0 到 100。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取出现的起始时间戳，秒。
                     * @return StartTimeOffset 出现的起始时间戳，秒。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置出现的起始时间戳，秒。
                     * @param _startTimeOffset 出现的起始时间戳，秒。
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
                     * 获取出现的结束时间戳，秒。
                     * @return EndTimeOffset 出现的结束时间戳，秒。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置出现的结束时间戳，秒。
                     * @param _endTimeOffset 出现的结束时间戳，秒。
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
                     * 获取区域坐标(px)，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaCoordSet 区域坐标(px)，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置区域坐标(px)，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaCoordSet 区域坐标(px)，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                private:

                    /**
                     * 置信度，取值范围是 0 到 100。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 出现的起始时间戳，秒。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 出现的结束时间戳，秒。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 区域坐标(px)，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEM_H_
