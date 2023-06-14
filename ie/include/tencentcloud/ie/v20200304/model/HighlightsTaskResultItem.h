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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_HIGHLIGHTSTASKRESULTITEM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_HIGHLIGHTSTASKRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/HighlightsTaskResultItemSegment.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 智能集锦结果项
                */
                class HighlightsTaskResultItem : public AbstractModel
                {
                public:
                    HighlightsTaskResultItem();
                    ~HighlightsTaskResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能集锦地址。
                     * @return HighlightUrl 智能集锦地址。
                     * 
                     */
                    std::string GetHighlightUrl() const;

                    /**
                     * 设置智能集锦地址。
                     * @param _highlightUrl 智能集锦地址。
                     * 
                     */
                    void SetHighlightUrl(const std::string& _highlightUrl);

                    /**
                     * 判断参数 HighlightUrl 是否已赋值
                     * @return HighlightUrl 是否已赋值
                     * 
                     */
                    bool HighlightUrlHasBeenSet() const;

                    /**
                     * 获取智能集锦封面地址。
                     * @return CovImgUrl 智能集锦封面地址。
                     * 
                     */
                    std::string GetCovImgUrl() const;

                    /**
                     * 设置智能集锦封面地址。
                     * @param _covImgUrl 智能集锦封面地址。
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
                     * 获取智能集锦持续时间，单位：秒。
                     * @return Duration 智能集锦持续时间，单位：秒。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置智能集锦持续时间，单位：秒。
                     * @param _duration 智能集锦持续时间，单位：秒。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取智能集锦子片段结果集，集锦片段由这些子片段拼接生成。
                     * @return SegmentSet 智能集锦子片段结果集，集锦片段由这些子片段拼接生成。
                     * 
                     */
                    std::vector<HighlightsTaskResultItemSegment> GetSegmentSet() const;

                    /**
                     * 设置智能集锦子片段结果集，集锦片段由这些子片段拼接生成。
                     * @param _segmentSet 智能集锦子片段结果集，集锦片段由这些子片段拼接生成。
                     * 
                     */
                    void SetSegmentSet(const std::vector<HighlightsTaskResultItemSegment>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * 智能集锦地址。
                     */
                    std::string m_highlightUrl;
                    bool m_highlightUrlHasBeenSet;

                    /**
                     * 智能集锦封面地址。
                     */
                    std::string m_covImgUrl;
                    bool m_covImgUrlHasBeenSet;

                    /**
                     * 置信度，取值范围是 0 到 100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 智能集锦持续时间，单位：秒。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 智能集锦子片段结果集，集锦片段由这些子片段拼接生成。
                     */
                    std::vector<HighlightsTaskResultItemSegment> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_HIGHLIGHTSTASKRESULTITEM_H_
