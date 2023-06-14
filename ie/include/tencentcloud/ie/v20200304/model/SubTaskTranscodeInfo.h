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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_SUBTASKTRANSCODEINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_SUBTASKTRANSCODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/TargetInfo.h>
#include <tencentcloud/ie/v20200304/model/EditInfo.h>
#include <tencentcloud/ie/v20200304/model/VideoInfo.h>
#include <tencentcloud/ie/v20200304/model/AudioInfo.h>
#include <tencentcloud/ie/v20200304/model/MuxInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 画质重生子任务参数信息
                */
                class SubTaskTranscodeInfo : public AbstractModel
                {
                public:
                    SubTaskTranscodeInfo();
                    ~SubTaskTranscodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子任务名称。
                     * @return TaskName 子任务名称。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置子任务名称。
                     * @param _taskName 子任务名称。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取目标文件信息。
                     * @return TargetInfo 目标文件信息。
                     * 
                     */
                    TargetInfo GetTargetInfo() const;

                    /**
                     * 设置目标文件信息。
                     * @param _targetInfo 目标文件信息。
                     * 
                     */
                    void SetTargetInfo(const TargetInfo& _targetInfo);

                    /**
                     * 判断参数 TargetInfo 是否已赋值
                     * @return TargetInfo 是否已赋值
                     * 
                     */
                    bool TargetInfoHasBeenSet() const;

                    /**
                     * 获取视频剪辑信息。注意：如果填写了EditInfo，则VideoInfo和AudioInfo必填
                     * @return EditInfo 视频剪辑信息。注意：如果填写了EditInfo，则VideoInfo和AudioInfo必填
                     * 
                     */
                    EditInfo GetEditInfo() const;

                    /**
                     * 设置视频剪辑信息。注意：如果填写了EditInfo，则VideoInfo和AudioInfo必填
                     * @param _editInfo 视频剪辑信息。注意：如果填写了EditInfo，则VideoInfo和AudioInfo必填
                     * 
                     */
                    void SetEditInfo(const EditInfo& _editInfo);

                    /**
                     * 判断参数 EditInfo 是否已赋值
                     * @return EditInfo 是否已赋值
                     * 
                     */
                    bool EditInfoHasBeenSet() const;

                    /**
                     * 获取视频转码信息，不填保持和源文件一致。
                     * @return VideoInfo 视频转码信息，不填保持和源文件一致。
                     * 
                     */
                    VideoInfo GetVideoInfo() const;

                    /**
                     * 设置视频转码信息，不填保持和源文件一致。
                     * @param _videoInfo 视频转码信息，不填保持和源文件一致。
                     * 
                     */
                    void SetVideoInfo(const VideoInfo& _videoInfo);

                    /**
                     * 判断参数 VideoInfo 是否已赋值
                     * @return VideoInfo 是否已赋值
                     * 
                     */
                    bool VideoInfoHasBeenSet() const;

                    /**
                     * 获取音频转码信息，不填保持和源文件一致。
                     * @return AudioInfo 音频转码信息，不填保持和源文件一致。
                     * 
                     */
                    AudioInfo GetAudioInfo() const;

                    /**
                     * 设置音频转码信息，不填保持和源文件一致。
                     * @param _audioInfo 音频转码信息，不填保持和源文件一致。
                     * 
                     */
                    void SetAudioInfo(const AudioInfo& _audioInfo);

                    /**
                     * 判断参数 AudioInfo 是否已赋值
                     * @return AudioInfo 是否已赋值
                     * 
                     */
                    bool AudioInfoHasBeenSet() const;

                    /**
                     * 获取指定封装信息。
                     * @return MuxInfo 指定封装信息。
                     * 
                     */
                    MuxInfo GetMuxInfo() const;

                    /**
                     * 设置指定封装信息。
                     * @param _muxInfo 指定封装信息。
                     * 
                     */
                    void SetMuxInfo(const MuxInfo& _muxInfo);

                    /**
                     * 判断参数 MuxInfo 是否已赋值
                     * @return MuxInfo 是否已赋值
                     * 
                     */
                    bool MuxInfoHasBeenSet() const;

                private:

                    /**
                     * 子任务名称。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 目标文件信息。
                     */
                    TargetInfo m_targetInfo;
                    bool m_targetInfoHasBeenSet;

                    /**
                     * 视频剪辑信息。注意：如果填写了EditInfo，则VideoInfo和AudioInfo必填
                     */
                    EditInfo m_editInfo;
                    bool m_editInfoHasBeenSet;

                    /**
                     * 视频转码信息，不填保持和源文件一致。
                     */
                    VideoInfo m_videoInfo;
                    bool m_videoInfoHasBeenSet;

                    /**
                     * 音频转码信息，不填保持和源文件一致。
                     */
                    AudioInfo m_audioInfo;
                    bool m_audioInfoHasBeenSet;

                    /**
                     * 指定封装信息。
                     */
                    MuxInfo m_muxInfo;
                    bool m_muxInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_SUBTASKTRANSCODEINFO_H_
