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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ActivityResItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 编排任务输出
                */
                class ActivityResult : public AbstractModel
                {
                public:
                    ActivityResult();
                    ~ActivityResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原子任务类型。
<li>Transcode：转码。</li>
<li>SampleSnapshot：采样截图。</li>
<li>AnimatedGraphics：转动图。</li>
<li>SnapshotByTimeOffset：时间点截图。</li>
<li>ImageSprites：雪碧图。</li>
<li>AdaptiveDynamicStreaming：自适应码流。</li>
<li>AiContentReview：内容审核。</li>
<li>AIRecognition：智能识别。</li>
<li>AIAnalysis：智能分析。</li>
<li>AiQualityControl：媒体质检。</li>
<li>SmartSubtitles：智能字幕。</li>
                     * @return ActivityType 原子任务类型。
<li>Transcode：转码。</li>
<li>SampleSnapshot：采样截图。</li>
<li>AnimatedGraphics：转动图。</li>
<li>SnapshotByTimeOffset：时间点截图。</li>
<li>ImageSprites：雪碧图。</li>
<li>AdaptiveDynamicStreaming：自适应码流。</li>
<li>AiContentReview：内容审核。</li>
<li>AIRecognition：智能识别。</li>
<li>AIAnalysis：智能分析。</li>
<li>AiQualityControl：媒体质检。</li>
<li>SmartSubtitles：智能字幕。</li>
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置原子任务类型。
<li>Transcode：转码。</li>
<li>SampleSnapshot：采样截图。</li>
<li>AnimatedGraphics：转动图。</li>
<li>SnapshotByTimeOffset：时间点截图。</li>
<li>ImageSprites：雪碧图。</li>
<li>AdaptiveDynamicStreaming：自适应码流。</li>
<li>AiContentReview：内容审核。</li>
<li>AIRecognition：智能识别。</li>
<li>AIAnalysis：智能分析。</li>
<li>AiQualityControl：媒体质检。</li>
<li>SmartSubtitles：智能字幕。</li>
                     * @param _activityType 原子任务类型。
<li>Transcode：转码。</li>
<li>SampleSnapshot：采样截图。</li>
<li>AnimatedGraphics：转动图。</li>
<li>SnapshotByTimeOffset：时间点截图。</li>
<li>ImageSprites：雪碧图。</li>
<li>AdaptiveDynamicStreaming：自适应码流。</li>
<li>AiContentReview：内容审核。</li>
<li>AIRecognition：智能识别。</li>
<li>AIAnalysis：智能分析。</li>
<li>AiQualityControl：媒体质检。</li>
<li>SmartSubtitles：智能字幕。</li>
                     * 
                     */
                    void SetActivityType(const std::string& _activityType);

                    /**
                     * 判断参数 ActivityType 是否已赋值
                     * @return ActivityType 是否已赋值
                     * 
                     */
                    bool ActivityTypeHasBeenSet() const;

                    /**
                     * 获取原子任务输出。
                     * @return ActivityResItem 原子任务输出。
                     * 
                     */
                    ActivityResItem GetActivityResItem() const;

                    /**
                     * 设置原子任务输出。
                     * @param _activityResItem 原子任务输出。
                     * 
                     */
                    void SetActivityResItem(const ActivityResItem& _activityResItem);

                    /**
                     * 判断参数 ActivityResItem 是否已赋值
                     * @return ActivityResItem 是否已赋值
                     * 
                     */
                    bool ActivityResItemHasBeenSet() const;

                private:

                    /**
                     * 原子任务类型。
<li>Transcode：转码。</li>
<li>SampleSnapshot：采样截图。</li>
<li>AnimatedGraphics：转动图。</li>
<li>SnapshotByTimeOffset：时间点截图。</li>
<li>ImageSprites：雪碧图。</li>
<li>AdaptiveDynamicStreaming：自适应码流。</li>
<li>AiContentReview：内容审核。</li>
<li>AIRecognition：智能识别。</li>
<li>AIAnalysis：智能分析。</li>
<li>AiQualityControl：媒体质检。</li>
<li>SmartSubtitles：智能字幕。</li>
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * 原子任务输出。
                     */
                    ActivityResItem m_activityResItem;
                    bool m_activityResItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESULT_H_
