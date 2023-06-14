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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVESTREAMTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVESTREAMTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/TEHDConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 自适应转码流参数模板
                */
                class AdaptiveStreamTemplate : public AbstractModel
                {
                public:
                    AdaptiveStreamTemplate();
                    ~AdaptiveStreamTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频参数信息。
                     * @return Video 视频参数信息。
                     * 
                     */
                    VideoTemplateInfo GetVideo() const;

                    /**
                     * 设置视频参数信息。
                     * @param _video 视频参数信息。
                     * 
                     */
                    void SetVideo(const VideoTemplateInfo& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取音频参数信息。
                     * @return Audio 音频参数信息。
                     * 
                     */
                    AudioTemplateInfo GetAudio() const;

                    /**
                     * 设置音频参数信息。
                     * @param _audio 音频参数信息。
                     * 
                     */
                    void SetAudio(const AudioTemplateInfo& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取是否移除音频流，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @return RemoveAudio 是否移除音频流，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * 
                     */
                    uint64_t GetRemoveAudio() const;

                    /**
                     * 设置是否移除音频流，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @param _removeAudio 是否移除音频流，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * 
                     */
                    void SetRemoveAudio(const uint64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取是否移除视频流，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @return RemoveVideo 是否移除视频流，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * 
                     */
                    uint64_t GetRemoveVideo() const;

                    /**
                     * 设置是否移除视频流，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * @param _removeVideo 是否移除视频流，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     * 
                     */
                    void SetRemoveVideo(const uint64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取极速高清转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TEHDConfig 极速高清转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置极速高清转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tEHDConfig 极速高清转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTEHDConfig(const TEHDConfig& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     * 
                     */
                    bool TEHDConfigHasBeenSet() const;

                private:

                    /**
                     * 视频参数信息。
                     */
                    VideoTemplateInfo m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * 音频参数信息。
                     */
                    AudioTemplateInfo m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * 是否移除音频流，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     */
                    uint64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * 是否移除视频流，取值范围：
<li>0：否，</li>
<li>1：是。</li>
                     */
                    uint64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 极速高清转码参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVESTREAMTEMPLATE_H_
