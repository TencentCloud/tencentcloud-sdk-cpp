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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETARGETINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeVideoStream.h>
#include <tencentcloud/mps/v20190612/model/ComposeAudioStream.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 目标视频信息。
                */
                class ComposeTargetInfo : public AbstractModel
                {
                public:
                    ComposeTargetInfo();
                    ~ComposeTargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取封装容器格式，可选值：
<li>mp4：视频文件（默认）。</li>
<li>mp3：纯音频文件。</li>
                     * @return Container 封装容器格式，可选值：
<li>mp4：视频文件（默认）。</li>
<li>mp3：纯音频文件。</li>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装容器格式，可选值：
<li>mp4：视频文件（默认）。</li>
<li>mp3：纯音频文件。</li>
                     * @param _container 封装容器格式，可选值：
<li>mp4：视频文件（默认）。</li>
<li>mp3：纯音频文件。</li>
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取是否去除视频数据，可选值：
<li>0：保留（默认）。</li>
<li>1：去除。</li>
                     * @return RemoveVideo 是否去除视频数据，可选值：
<li>0：保留（默认）。</li>
<li>1：去除。</li>
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置是否去除视频数据，可选值：
<li>0：保留（默认）。</li>
<li>1：去除。</li>
                     * @param _removeVideo 是否去除视频数据，可选值：
<li>0：保留（默认）。</li>
<li>1：去除。</li>
                     * 
                     */
                    void SetRemoveVideo(const int64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取是否去除音频数据，可选值：
<li>0：保留（默认）。</li>
<li>1：去除。</li>
                     * @return RemoveAudio 是否去除音频数据，可选值：
<li>0：保留（默认）。</li>
<li>1：去除。</li>
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置是否去除音频数据，可选值：
<li>0：保留（默认）。</li>
<li>1：去除。</li>
                     * @param _removeAudio 是否去除音频数据，可选值：
<li>0：保留（默认）。</li>
<li>1：去除。</li>
                     * 
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取输出视频流信息。
                     * @return VideoStream 输出视频流信息。
                     * 
                     */
                    ComposeVideoStream GetVideoStream() const;

                    /**
                     * 设置输出视频流信息。
                     * @param _videoStream 输出视频流信息。
                     * 
                     */
                    void SetVideoStream(const ComposeVideoStream& _videoStream);

                    /**
                     * 判断参数 VideoStream 是否已赋值
                     * @return VideoStream 是否已赋值
                     * 
                     */
                    bool VideoStreamHasBeenSet() const;

                    /**
                     * 获取输出音频流信息。
                     * @return AudioStream 输出音频流信息。
                     * 
                     */
                    ComposeAudioStream GetAudioStream() const;

                    /**
                     * 设置输出音频流信息。
                     * @param _audioStream 输出音频流信息。
                     * 
                     */
                    void SetAudioStream(const ComposeAudioStream& _audioStream);

                    /**
                     * 判断参数 AudioStream 是否已赋值
                     * @return AudioStream 是否已赋值
                     * 
                     */
                    bool AudioStreamHasBeenSet() const;

                private:

                    /**
                     * 封装容器格式，可选值：
<li>mp4：视频文件（默认）。</li>
<li>mp3：纯音频文件。</li>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 是否去除视频数据，可选值：
<li>0：保留（默认）。</li>
<li>1：去除。</li>
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 是否去除音频数据，可选值：
<li>0：保留（默认）。</li>
<li>1：去除。</li>
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * 输出视频流信息。
                     */
                    ComposeVideoStream m_videoStream;
                    bool m_videoStreamHasBeenSet;

                    /**
                     * 输出音频流信息。
                     */
                    ComposeAudioStream m_audioStream;
                    bool m_audioStreamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETARGETINFO_H_
