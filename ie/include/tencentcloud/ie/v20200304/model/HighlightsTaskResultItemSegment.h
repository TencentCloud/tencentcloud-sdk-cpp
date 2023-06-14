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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_HIGHLIGHTSTASKRESULTITEMSEGMENT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_HIGHLIGHTSTASKRESULTITEMSEGMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 智能集锦结果片段
                */
                class HighlightsTaskResultItemSegment : public AbstractModel
                {
                public:
                    HighlightsTaskResultItemSegment();
                    ~HighlightsTaskResultItemSegment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取置信度，取值范围是 0 到 100。
                     * @return Confidence 置信度，取值范围是 0 到 100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置置信度，取值范围是 0 到 100。
                     * @param _confidence 置信度，取值范围是 0 到 100。
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
                     * 获取集锦片段起始的偏移时间，单位：秒。
                     * @return StartTimeOffset 集锦片段起始的偏移时间，单位：秒。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置集锦片段起始的偏移时间，单位：秒。
                     * @param _startTimeOffset 集锦片段起始的偏移时间，单位：秒。
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
                     * 获取集锦片段终止的偏移时间，单位：秒。
                     * @return EndTimeOffset 集锦片段终止的偏移时间，单位：秒。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置集锦片段终止的偏移时间，单位：秒。
                     * @param _endTimeOffset 集锦片段终止的偏移时间，单位：秒。
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
                     * 置信度，取值范围是 0 到 100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 集锦片段起始的偏移时间，单位：秒。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 集锦片段终止的偏移时间，单位：秒。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_HIGHLIGHTSTASKRESULTITEMSEGMENT_H_
