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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSRTMP_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSRTMP_H_

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
                * 流状态实时查询接口的RTMP信息。
                */
                class FlowRealtimeStatusRTMP : public AbstractModel
                {
                public:
                    FlowRealtimeStatusRTMP();
                    ~FlowRealtimeStatusRTMP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频帧率。
                     * @return VideoFPS 视频帧率。
                     * 
                     */
                    int64_t GetVideoFPS() const;

                    /**
                     * 设置视频帧率。
                     * @param _videoFPS 视频帧率。
                     * 
                     */
                    void SetVideoFPS(const int64_t& _videoFPS);

                    /**
                     * 判断参数 VideoFPS 是否已赋值
                     * @return VideoFPS 是否已赋值
                     * 
                     */
                    bool VideoFPSHasBeenSet() const;

                    /**
                     * 获取音频帧率。
                     * @return AudioFPS 音频帧率。
                     * 
                     */
                    int64_t GetAudioFPS() const;

                    /**
                     * 设置音频帧率。
                     * @param _audioFPS 音频帧率。
                     * 
                     */
                    void SetAudioFPS(const int64_t& _audioFPS);

                    /**
                     * 判断参数 AudioFPS 是否已赋值
                     * @return AudioFPS 是否已赋值
                     * 
                     */
                    bool AudioFPSHasBeenSet() const;

                private:

                    /**
                     * 视频帧率。
                     */
                    int64_t m_videoFPS;
                    bool m_videoFPSHasBeenSet;

                    /**
                     * 音频帧率。
                     */
                    int64_t m_audioFPS;
                    bool m_audioFPSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWREALTIMESTATUSRTMP_H_
