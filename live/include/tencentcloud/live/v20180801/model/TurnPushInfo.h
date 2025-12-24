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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TURNPUSHINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TURNPUSHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 拉流转推任务流数据信息。
                */
                class TurnPushInfo : public AbstractModel
                {
                public:
                    TurnPushInfo();
                    ~TurnPushInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频帧率，单位fps。
                     * @return VideoFps 视频帧率，单位fps。
                     * 
                     */
                    int64_t GetVideoFps() const;

                    /**
                     * 设置视频帧率，单位fps。
                     * @param _videoFps 视频帧率，单位fps。
                     * 
                     */
                    void SetVideoFps(const int64_t& _videoFps);

                    /**
                     * 判断参数 VideoFps 是否已赋值
                     * @return VideoFps 是否已赋值
                     * 
                     */
                    bool VideoFpsHasBeenSet() const;

                    /**
                     * 获取音频帧率，单位fps。
                     * @return AudioFps 音频帧率，单位fps。
                     * 
                     */
                    int64_t GetAudioFps() const;

                    /**
                     * 设置音频帧率，单位fps。
                     * @param _audioFps 音频帧率，单位fps。
                     * 
                     */
                    void SetAudioFps(const int64_t& _audioFps);

                    /**
                     * 判断参数 AudioFps 是否已赋值
                     * @return AudioFps 是否已赋值
                     * 
                     */
                    bool AudioFpsHasBeenSet() const;

                    /**
                     * 获取视频码率，单位bps。
                     * @return VideoRate 视频码率，单位bps。
                     * 
                     */
                    int64_t GetVideoRate() const;

                    /**
                     * 设置视频码率，单位bps。
                     * @param _videoRate 视频码率，单位bps。
                     * 
                     */
                    void SetVideoRate(const int64_t& _videoRate);

                    /**
                     * 判断参数 VideoRate 是否已赋值
                     * @return VideoRate 是否已赋值
                     * 
                     */
                    bool VideoRateHasBeenSet() const;

                    /**
                     * 获取音频码率，单位bps。
                     * @return AudioRate 音频码率，单位bps。
                     * 
                     */
                    int64_t GetAudioRate() const;

                    /**
                     * 设置音频码率，单位bps。
                     * @param _audioRate 音频码率，单位bps。
                     * 
                     */
                    void SetAudioRate(const int64_t& _audioRate);

                    /**
                     * 判断参数 AudioRate 是否已赋值
                     * @return AudioRate 是否已赋值
                     * 
                     */
                    bool AudioRateHasBeenSet() const;

                    /**
                     * 获取流标识。
                     * @return StreamFlag 流标识。
                     * 
                     */
                    std::string GetStreamFlag() const;

                    /**
                     * 设置流标识。
                     * @param _streamFlag 流标识。
                     * 
                     */
                    void SetStreamFlag(const std::string& _streamFlag);

                    /**
                     * 判断参数 StreamFlag 是否已赋值
                     * @return StreamFlag 是否已赋值
                     * 
                     */
                    bool StreamFlagHasBeenSet() const;

                    /**
                     * 获取时间，utc格式：yyyy-mm-ddTHH:MM:SSZ，参考https://cloud.tencent.com/document/product/266/11732#I。
                     * @return Time 时间，utc格式：yyyy-mm-ddTHH:MM:SSZ，参考https://cloud.tencent.com/document/product/266/11732#I。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间，utc格式：yyyy-mm-ddTHH:MM:SSZ，参考https://cloud.tencent.com/document/product/266/11732#I。
                     * @param _time 时间，utc格式：yyyy-mm-ddTHH:MM:SSZ，参考https://cloud.tencent.com/document/product/266/11732#I。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * 视频帧率，单位fps。
                     */
                    int64_t m_videoFps;
                    bool m_videoFpsHasBeenSet;

                    /**
                     * 音频帧率，单位fps。
                     */
                    int64_t m_audioFps;
                    bool m_audioFpsHasBeenSet;

                    /**
                     * 视频码率，单位bps。
                     */
                    int64_t m_videoRate;
                    bool m_videoRateHasBeenSet;

                    /**
                     * 音频码率，单位bps。
                     */
                    int64_t m_audioRate;
                    bool m_audioRateHasBeenSet;

                    /**
                     * 流标识。
                     */
                    std::string m_streamFlag;
                    bool m_streamFlagHasBeenSet;

                    /**
                     * 时间，utc格式：yyyy-mm-ddTHH:MM:SSZ，参考https://cloud.tencent.com/document/product/266/11732#I。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TURNPUSHINFO_H_
