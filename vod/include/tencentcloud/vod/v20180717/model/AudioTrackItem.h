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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTRACKITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTRACKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AudioTransform.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音频轨道上的音频片段信息。
                */
                class AudioTrackItem : public AbstractModel
                {
                public:
                    AudioTrackItem();
                    ~AudioTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频素材的媒体文件来源。可以是点播的文件 ID，也可以是其它文件的 URL。
                     * @return SourceMedia 音频素材的媒体文件来源。可以是点播的文件 ID，也可以是其它文件的 URL。
                     */
                    std::string GetSourceMedia() const;

                    /**
                     * 设置音频素材的媒体文件来源。可以是点播的文件 ID，也可以是其它文件的 URL。
                     * @param SourceMedia 音频素材的媒体文件来源。可以是点播的文件 ID，也可以是其它文件的 URL。
                     */
                    void SetSourceMedia(const std::string& _sourceMedia);

                    /**
                     * 判断参数 SourceMedia 是否已赋值
                     * @return SourceMedia 是否已赋值
                     */
                    bool SourceMediaHasBeenSet() const;

                    /**
                     * 获取音频片段取自素材文件的起始时间，单位为秒。0 表示从素材开始位置截取。默认为0。
                     * @return SourceMediaStartTime 音频片段取自素材文件的起始时间，单位为秒。0 表示从素材开始位置截取。默认为0。
                     */
                    double GetSourceMediaStartTime() const;

                    /**
                     * 设置音频片段取自素材文件的起始时间，单位为秒。0 表示从素材开始位置截取。默认为0。
                     * @param SourceMediaStartTime 音频片段取自素材文件的起始时间，单位为秒。0 表示从素材开始位置截取。默认为0。
                     */
                    void SetSourceMediaStartTime(const double& _sourceMediaStartTime);

                    /**
                     * 判断参数 SourceMediaStartTime 是否已赋值
                     * @return SourceMediaStartTime 是否已赋值
                     */
                    bool SourceMediaStartTimeHasBeenSet() const;

                    /**
                     * 获取音频片段的时长，单位为秒。默认和素材本身长度一致，表示截取全部素材。
                     * @return Duration 音频片段的时长，单位为秒。默认和素材本身长度一致，表示截取全部素材。
                     */
                    double GetDuration() const;

                    /**
                     * 设置音频片段的时长，单位为秒。默认和素材本身长度一致，表示截取全部素材。
                     * @param Duration 音频片段的时长，单位为秒。默认和素材本身长度一致，表示截取全部素材。
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取对音频片段进行的操作，如音量调节等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioOperations 对音频片段进行的操作，如音量调节等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AudioTransform> GetAudioOperations() const;

                    /**
                     * 设置对音频片段进行的操作，如音量调节等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AudioOperations 对音频片段进行的操作，如音量调节等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAudioOperations(const std::vector<AudioTransform>& _audioOperations);

                    /**
                     * 判断参数 AudioOperations 是否已赋值
                     * @return AudioOperations 是否已赋值
                     */
                    bool AudioOperationsHasBeenSet() const;

                private:

                    /**
                     * 音频素材的媒体文件来源。可以是点播的文件 ID，也可以是其它文件的 URL。
                     */
                    std::string m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * 音频片段取自素材文件的起始时间，单位为秒。0 表示从素材开始位置截取。默认为0。
                     */
                    double m_sourceMediaStartTime;
                    bool m_sourceMediaStartTimeHasBeenSet;

                    /**
                     * 音频片段的时长，单位为秒。默认和素材本身长度一致，表示截取全部素材。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 对音频片段进行的操作，如音量调节等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AudioTransform> m_audioOperations;
                    bool m_audioOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTRACKITEM_H_
