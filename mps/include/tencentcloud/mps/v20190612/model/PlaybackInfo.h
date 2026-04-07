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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PLAYBACKINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PLAYBACKINFO_H_

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
                * program播放配置。
                */
                class PlaybackInfo : public AbstractModel
                {
                public:
                    PlaybackInfo();
                    ~PlaybackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>program持续时间，单位毫秒，直播有效。</p>
                     * @return Duration <p>program持续时间，单位毫秒，直播有效。</p>
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置<p>program持续时间，单位毫秒，直播有效。</p>
                     * @param _duration <p>program持续时间，单位毫秒，直播有效。</p>
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
                     * 获取<p>program启动方式，直播只支持Absolute，点播还支持Relative。</p>
                     * @return TransitionType <p>program启动方式，直播只支持Absolute，点播还支持Relative。</p>
                     * 
                     */
                    std::string GetTransitionType() const;

                    /**
                     * 设置<p>program启动方式，直播只支持Absolute，点播还支持Relative。</p>
                     * @param _transitionType <p>program启动方式，直播只支持Absolute，点播还支持Relative。</p>
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
                     * 获取<p>unix时间戳，Absolute场景下program的开始执行时间。</p>
                     * @return StartTime <p>unix时间戳，Absolute场景下program的开始执行时间。</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>unix时间戳，Absolute场景下program的开始执行时间。</p>
                     * @param _startTime <p>unix时间戳，Absolute场景下program的开始执行时间。</p>
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
                     * 获取<p>和所选program的插入顺序关系，分After和Before。</p>
                     * @return RelativePosition <p>和所选program的插入顺序关系，分After和Before。</p>
                     * 
                     */
                    std::string GetRelativePosition() const;

                    /**
                     * 设置<p>和所选program的插入顺序关系，分After和Before。</p>
                     * @param _relativePosition <p>和所选program的插入顺序关系，分After和Before。</p>
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
                     * 获取<p>所选的插入参考program id。</p>
                     * @return RelativeProgramId <p>所选的插入参考program id。</p>
                     * 
                     */
                    std::string GetRelativeProgramId() const;

                    /**
                     * 设置<p>所选的插入参考program id。</p>
                     * @param _relativeProgramId <p>所选的插入参考program id。</p>
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
                     * 获取<p>垫片配置。</p>
                     * @return ClipRangeConf <p>垫片配置。</p>
                     * 
                     */
                    ClipRangeInfo GetClipRangeConf() const;

                    /**
                     * 设置<p>垫片配置。</p>
                     * @param _clipRangeConf <p>垫片配置。</p>
                     * 
                     */
                    void SetClipRangeConf(const ClipRangeInfo& _clipRangeConf);

                    /**
                     * 判断参数 ClipRangeConf 是否已赋值
                     * @return ClipRangeConf 是否已赋值
                     * 
                     */
                    bool ClipRangeConfHasBeenSet() const;

                    /**
                     * 获取<p>RelativeProgramName。</p>
                     * @return RelativeProgramName <p>RelativeProgramName。</p>
                     * 
                     */
                    std::string GetRelativeProgramName() const;

                    /**
                     * 设置<p>RelativeProgramName。</p>
                     * @param _relativeProgramName <p>RelativeProgramName。</p>
                     * 
                     */
                    void SetRelativeProgramName(const std::string& _relativeProgramName);

                    /**
                     * 判断参数 RelativeProgramName 是否已赋值
                     * @return RelativeProgramName 是否已赋值
                     * 
                     */
                    bool RelativeProgramNameHasBeenSet() const;

                private:

                    /**
                     * <p>program持续时间，单位毫秒，直播有效。</p>
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>program启动方式，直播只支持Absolute，点播还支持Relative。</p>
                     */
                    std::string m_transitionType;
                    bool m_transitionTypeHasBeenSet;

                    /**
                     * <p>unix时间戳，Absolute场景下program的开始执行时间。</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>和所选program的插入顺序关系，分After和Before。</p>
                     */
                    std::string m_relativePosition;
                    bool m_relativePositionHasBeenSet;

                    /**
                     * <p>所选的插入参考program id。</p>
                     */
                    std::string m_relativeProgramId;
                    bool m_relativeProgramIdHasBeenSet;

                    /**
                     * <p>垫片配置。</p>
                     */
                    ClipRangeInfo m_clipRangeConf;
                    bool m_clipRangeConfHasBeenSet;

                    /**
                     * <p>RelativeProgramName。</p>
                     */
                    std::string m_relativeProgramName;
                    bool m_relativeProgramNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PLAYBACKINFO_H_
