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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PLAYBACKINFOREQ_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PLAYBACKINFOREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ClipRangeInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * program播放配置请求。
                */
                class PlaybackInfoReq : public AbstractModel
                {
                public:
                    PlaybackInfoReq();
                    ~PlaybackInfoReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取program启动方式，直播只支持Absolute，点播还支持Relative。PlaybackMode类型为Linear的VOD支持Absolute和Relative。PlaybackMode类型为Loop的VOD只支持Relative
                     * @return TransitionType program启动方式，直播只支持Absolute，点播还支持Relative。PlaybackMode类型为Linear的VOD支持Absolute和Relative。PlaybackMode类型为Loop的VOD只支持Relative
                     * 
                     */
                    std::string GetTransitionType() const;

                    /**
                     * 设置program启动方式，直播只支持Absolute，点播还支持Relative。PlaybackMode类型为Linear的VOD支持Absolute和Relative。PlaybackMode类型为Loop的VOD只支持Relative
                     * @param _transitionType program启动方式，直播只支持Absolute，点播还支持Relative。PlaybackMode类型为Linear的VOD支持Absolute和Relative。PlaybackMode类型为Loop的VOD只支持Relative
                     * 
                     */
                    void SetTransitionType(const std::string& _transitionType);

                    /**
                     * 判断参数 TransitionType 是否已赋值
                     * @return TransitionType 是否已赋值
                     * 
                     */
                    bool TransitionTypeHasBeenSet() const;

                    /**
                     * 获取unix时间戳，absolute场景下program的开始执行时间。最多大于当前90天（7776000）。
                     * @return StartTime unix时间戳，absolute场景下program的开始执行时间。最多大于当前90天（7776000）。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置unix时间戳，absolute场景下program的开始执行时间。最多大于当前90天（7776000）。
                     * @param _startTime unix时间戳，absolute场景下program的开始执行时间。最多大于当前90天（7776000）。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取program持续时间，单位毫秒，直播有效。支持600000-86400000。默认600000。
                     * @return Duration program持续时间，单位毫秒，直播有效。支持600000-86400000。默认600000。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置program持续时间，单位毫秒，直播有效。支持600000-86400000。默认600000。
                     * @param _duration program持续时间，单位毫秒，直播有效。支持600000-86400000。默认600000。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取和所选program的插入顺序关系，分After和Before。
                     * @return RelativePosition 和所选program的插入顺序关系，分After和Before。
                     * 
                     */
                    std::string GetRelativePosition() const;

                    /**
                     * 设置和所选program的插入顺序关系，分After和Before。
                     * @param _relativePosition 和所选program的插入顺序关系，分After和Before。
                     * 
                     */
                    void SetRelativePosition(const std::string& _relativePosition);

                    /**
                     * 判断参数 RelativePosition 是否已赋值
                     * @return RelativePosition 是否已赋值
                     * 
                     */
                    bool RelativePositionHasBeenSet() const;

                    /**
                     * 获取所选的插入参考program id。
                     * @return RelativeProgramId 所选的插入参考program id。
                     * 
                     */
                    std::string GetRelativeProgramId() const;

                    /**
                     * 设置所选的插入参考program id。
                     * @param _relativeProgramId 所选的插入参考program id。
                     * 
                     */
                    void SetRelativeProgramId(const std::string& _relativeProgramId);

                    /**
                     * 判断参数 RelativeProgramId 是否已赋值
                     * @return RelativeProgramId 是否已赋值
                     * 
                     */
                    bool RelativeProgramIdHasBeenSet() const;

                    /**
                     * 获取垫片配置。
                     * @return ClipRangeConf 垫片配置。
                     * 
                     */
                    ClipRangeInfo GetClipRangeConf() const;

                    /**
                     * 设置垫片配置。
                     * @param _clipRangeConf 垫片配置。
                     * 
                     */
                    void SetClipRangeConf(const ClipRangeInfo& _clipRangeConf);

                    /**
                     * 判断参数 ClipRangeConf 是否已赋值
                     * @return ClipRangeConf 是否已赋值
                     * 
                     */
                    bool ClipRangeConfHasBeenSet() const;

                private:

                    /**
                     * program启动方式，直播只支持Absolute，点播还支持Relative。PlaybackMode类型为Linear的VOD支持Absolute和Relative。PlaybackMode类型为Loop的VOD只支持Relative
                     */
                    std::string m_transitionType;
                    bool m_transitionTypeHasBeenSet;

                    /**
                     * unix时间戳，absolute场景下program的开始执行时间。最多大于当前90天（7776000）。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * program持续时间，单位毫秒，直播有效。支持600000-86400000。默认600000。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 和所选program的插入顺序关系，分After和Before。
                     */
                    std::string m_relativePosition;
                    bool m_relativePositionHasBeenSet;

                    /**
                     * 所选的插入参考program id。
                     */
                    std::string m_relativeProgramId;
                    bool m_relativeProgramIdHasBeenSet;

                    /**
                     * 垫片配置。
                     */
                    ClipRangeInfo m_clipRangeConf;
                    bool m_clipRangeConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PLAYBACKINFOREQ_H_
