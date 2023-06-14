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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWVIDEO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWVIDEO_H_

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
                * 流的视频数据。
                */
                class FlowVideo : public AbstractModel
                {
                public:
                    FlowVideo();
                    ~FlowVideo() = default;
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
                     * 获取音频Pid。
                     * @return Pid 音频Pid。
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置音频Pid。
                     * @param _pid 音频Pid。
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

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
                     * 音频Pid。
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWVIDEO_H_
