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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWMEDIAVIDEO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWMEDIAVIDEO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 传输流媒体的视频数据。
                */
                class FlowMediaVideo : public AbstractModel
                {
                public:
                    FlowMediaVideo();
                    ~FlowMediaVideo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取帧率。
                     * @return Fps 帧率。
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置帧率。
                     * @param _fps 帧率。
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取码率，单位是bps。
                     * @return Rate 码率，单位是bps。
                     * 
                     */
                    int64_t GetRate() const;

                    /**
                     * 设置码率，单位是bps。
                     * @param _rate 码率，单位是bps。
                     * 
                     */
                    void SetRate(const int64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取视频Pid。
                     * @return Pid 视频Pid。
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置视频Pid。
                     * @param _pid 视频Pid。
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取标志同一次推流。
                     * @return SessionId 标志同一次推流。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置标志同一次推流。
                     * @param _sessionId 标志同一次推流。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 帧率。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 码率，单位是bps。
                     */
                    int64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 视频Pid。
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 标志同一次推流。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWMEDIAVIDEO_H_
