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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSITIONITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSITIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TransitionOpertion.h>
#include <tencentcloud/vod/v20180717/model/TransitionOperation.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 转场信息
                */
                class MediaTransitionItem : public AbstractModel
                {
                public:
                    MediaTransitionItem();
                    ~MediaTransitionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转场持续时间，单位为秒。进行转场处理的两个媒体片段，第二个片段在轨道上的起始时间会自动进行调整，设置为前面一个片段的结束时间减去转场的持续时间。
                     * @return Duration 转场持续时间，单位为秒。进行转场处理的两个媒体片段，第二个片段在轨道上的起始时间会自动进行调整，设置为前面一个片段的结束时间减去转场的持续时间。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置转场持续时间，单位为秒。进行转场处理的两个媒体片段，第二个片段在轨道上的起始时间会自动进行调整，设置为前面一个片段的结束时间减去转场的持续时间。
                     * @param _duration 转场持续时间，单位为秒。进行转场处理的两个媒体片段，第二个片段在轨道上的起始时间会自动进行调整，设置为前面一个片段的结束时间减去转场的持续时间。
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
                     * 获取转场操作列表。图像转场操作和音频转场操作各自最多支持一个。
                     * @return Transitions 转场操作列表。图像转场操作和音频转场操作各自最多支持一个。
                     * @deprecated
                     */
                    std::vector<TransitionOpertion> GetTransitions() const;

                    /**
                     * 设置转场操作列表。图像转场操作和音频转场操作各自最多支持一个。
                     * @param _transitions 转场操作列表。图像转场操作和音频转场操作各自最多支持一个。
                     * @deprecated
                     */
                    void SetTransitions(const std::vector<TransitionOpertion>& _transitions);

                    /**
                     * 判断参数 Transitions 是否已赋值
                     * @return Transitions 是否已赋值
                     * @deprecated
                     */
                    bool TransitionsHasBeenSet() const;

                    /**
                     * 获取转场操作列表。图像转场操作和音频转场操作各自最多支持一个。
                     * @return MediaTransitions 转场操作列表。图像转场操作和音频转场操作各自最多支持一个。
                     * 
                     */
                    std::vector<TransitionOperation> GetMediaTransitions() const;

                    /**
                     * 设置转场操作列表。图像转场操作和音频转场操作各自最多支持一个。
                     * @param _mediaTransitions 转场操作列表。图像转场操作和音频转场操作各自最多支持一个。
                     * 
                     */
                    void SetMediaTransitions(const std::vector<TransitionOperation>& _mediaTransitions);

                    /**
                     * 判断参数 MediaTransitions 是否已赋值
                     * @return MediaTransitions 是否已赋值
                     * 
                     */
                    bool MediaTransitionsHasBeenSet() const;

                private:

                    /**
                     * 转场持续时间，单位为秒。进行转场处理的两个媒体片段，第二个片段在轨道上的起始时间会自动进行调整，设置为前面一个片段的结束时间减去转场的持续时间。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 转场操作列表。图像转场操作和音频转场操作各自最多支持一个。
                     */
                    std::vector<TransitionOpertion> m_transitions;
                    bool m_transitionsHasBeenSet;

                    /**
                     * 转场操作列表。图像转场操作和音频转场操作各自最多支持一个。
                     */
                    std::vector<TransitionOperation> m_mediaTransitions;
                    bool m_mediaTransitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIATRANSITIONITEM_H_
