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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_PLAYBACKPOLICY_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_PLAYBACKPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * 播放控制参数
                */
                class PlaybackPolicy : public AbstractModel
                {
                public:
                    PlaybackPolicy();
                    ~PlaybackPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取播放许可证的有效期
                     * @return LicenseDurationSeconds 播放许可证的有效期
                     * 
                     */
                    uint64_t GetLicenseDurationSeconds() const;

                    /**
                     * 设置播放许可证的有效期
                     * @param _licenseDurationSeconds 播放许可证的有效期
                     * 
                     */
                    void SetLicenseDurationSeconds(const uint64_t& _licenseDurationSeconds);

                    /**
                     * 判断参数 LicenseDurationSeconds 是否已赋值
                     * @return LicenseDurationSeconds 是否已赋值
                     * 
                     */
                    bool LicenseDurationSecondsHasBeenSet() const;

                    /**
                     * 获取开始播放后，允许最长播放时间
                     * @return PlaybackDurationSeconds 开始播放后，允许最长播放时间
                     * 
                     */
                    uint64_t GetPlaybackDurationSeconds() const;

                    /**
                     * 设置开始播放后，允许最长播放时间
                     * @param _playbackDurationSeconds 开始播放后，允许最长播放时间
                     * 
                     */
                    void SetPlaybackDurationSeconds(const uint64_t& _playbackDurationSeconds);

                    /**
                     * 判断参数 PlaybackDurationSeconds 是否已赋值
                     * @return PlaybackDurationSeconds 是否已赋值
                     * 
                     */
                    bool PlaybackDurationSecondsHasBeenSet() const;

                private:

                    /**
                     * 播放许可证的有效期
                     */
                    uint64_t m_licenseDurationSeconds;
                    bool m_licenseDurationSecondsHasBeenSet;

                    /**
                     * 开始播放后，允许最长播放时间
                     */
                    uint64_t m_playbackDurationSeconds;
                    bool m_playbackDurationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_PLAYBACKPOLICY_H_
