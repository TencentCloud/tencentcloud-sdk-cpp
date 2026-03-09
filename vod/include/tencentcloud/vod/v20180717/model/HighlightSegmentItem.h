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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HIGHLIGHTSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HIGHLIGHTSEGMENTITEM_H_

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
                     * 获取<p>置信度。</p>
                     * @return Confidence <p>置信度。</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>置信度。</p>
                     * @param _confidence <p>置信度。</p>
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
                     * 获取<p>片段起始时间偏移。</p><p>单位：秒</p>
                     * @return StartTimeOffset <p>片段起始时间偏移。</p><p>单位：秒</p>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>片段起始时间偏移。</p><p>单位：秒</p>
                     * @param _startTimeOffset <p>片段起始时间偏移。</p><p>单位：秒</p>
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
                     * 获取<p>片段结束时间偏移。</p><p>单位：秒</p>
                     * @return EndTimeOffset <p>片段结束时间偏移。</p><p>单位：秒</p>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>片段结束时间偏移。</p><p>单位：秒</p>
                     * @param _endTimeOffset <p>片段结束时间偏移。</p><p>单位：秒</p>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * <p>置信度。</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>片段起始时间偏移。</p><p>单位：秒</p>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>片段结束时间偏移。</p><p>单位：秒</p>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HIGHLIGHTSEGMENTITEM_H_
