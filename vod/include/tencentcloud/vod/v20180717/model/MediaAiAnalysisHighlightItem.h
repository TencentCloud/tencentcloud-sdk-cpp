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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISHIGHLIGHTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISHIGHLIGHTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/HighlightSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能精彩片段信息
                */
                class MediaAiAnalysisHighlightItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisHighlightItem();
                    ~MediaAiAnalysisHighlightItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能精彩集锦地址。
                     * @return HighlightUrl 智能精彩集锦地址。
                     * 
                     */
                    std::string GetHighlightUrl() const;

                    /**
                     * 设置智能精彩集锦地址。
                     * @param _highlightUrl 智能精彩集锦地址。
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
                     * 获取智能精彩集锦封面地址。
                     * @return CovImgUrl 智能精彩集锦封面地址。
                     * 
                     */
                    std::string GetCovImgUrl() const;

                    /**
                     * 设置智能精彩集锦封面地址。
                     * @param _covImgUrl 智能精彩集锦封面地址。
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
                     * 获取智能精彩集锦的可信度，取值范围是 0 到 100。
                     * @return Confidence 智能精彩集锦的可信度，取值范围是 0 到 100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置智能精彩集锦的可信度，取值范围是 0 到 100。
                     * @param _confidence 智能精彩集锦的可信度，取值范围是 0 到 100。
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
                     * 获取智能精彩集锦持续时间。
                     * @return Duration 智能精彩集锦持续时间。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置智能精彩集锦持续时间。
                     * @param _duration 智能精彩集锦持续时间。
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
                     * 获取智能精彩集锦子片段列表，精彩集锦片段由这些子片段拼接生成。
                     * @return SegmentSet 智能精彩集锦子片段列表，精彩集锦片段由这些子片段拼接生成。
                     * 
                     */
                    std::vector<HighlightSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置智能精彩集锦子片段列表，精彩集锦片段由这些子片段拼接生成。
                     * @param _segmentSet 智能精彩集锦子片段列表，精彩集锦片段由这些子片段拼接生成。
                     * 
                     */
                    void SetSegmentSet(const std::vector<HighlightSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * 智能精彩集锦地址。
                     */
                    std::string m_highlightUrl;
                    bool m_highlightUrlHasBeenSet;

                    /**
                     * 智能精彩集锦封面地址。
                     */
                    std::string m_covImgUrl;
                    bool m_covImgUrlHasBeenSet;

                    /**
                     * 智能精彩集锦的可信度，取值范围是 0 到 100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 智能精彩集锦持续时间。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 智能精彩集锦子片段列表，精彩集锦片段由这些子片段拼接生成。
                     */
                    std::vector<HighlightSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISHIGHLIGHTITEM_H_
