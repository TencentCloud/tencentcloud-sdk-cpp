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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TRACKSELECTOR_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TRACKSELECTOR_H_

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
                * 音视频轨道选择
                */
                class TrackSelector : public AbstractModel
                {
                public:
                    TrackSelector();
                    ~TrackSelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频轨道序号，从1开始.
                     * @return VideoIndex 视频轨道序号，从1开始.
                     * 
                     */
                    std::vector<int64_t> GetVideoIndex() const;

                    /**
                     * 设置视频轨道序号，从1开始.
                     * @param _videoIndex 视频轨道序号，从1开始.
                     * 
                     */
                    void SetVideoIndex(const std::vector<int64_t>& _videoIndex);

                    /**
                     * 判断参数 VideoIndex 是否已赋值
                     * @return VideoIndex 是否已赋值
                     * 
                     */
                    bool VideoIndexHasBeenSet() const;

                    /**
                     * 获取音频轨道序号，从1开始.
                     * @return AudioIndex 音频轨道序号，从1开始.
                     * 
                     */
                    std::vector<int64_t> GetAudioIndex() const;

                    /**
                     * 设置音频轨道序号，从1开始.
                     * @param _audioIndex 音频轨道序号，从1开始.
                     * 
                     */
                    void SetAudioIndex(const std::vector<int64_t>& _audioIndex);

                    /**
                     * 判断参数 AudioIndex 是否已赋值
                     * @return AudioIndex 是否已赋值
                     * 
                     */
                    bool AudioIndexHasBeenSet() const;

                private:

                    /**
                     * 视频轨道序号，从1开始.
                     */
                    std::vector<int64_t> m_videoIndex;
                    bool m_videoIndexHasBeenSet;

                    /**
                     * 音频轨道序号，从1开始.
                     */
                    std::vector<int64_t> m_audioIndex;
                    bool m_audioIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TRACKSELECTOR_H_
