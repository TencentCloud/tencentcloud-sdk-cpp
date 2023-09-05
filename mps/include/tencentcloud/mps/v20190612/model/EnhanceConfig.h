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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ENHANCECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ENHANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VideoEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/AudioEnhanceConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 音视频增强配置
                */
                class EnhanceConfig : public AbstractModel
                {
                public:
                    EnhanceConfig();
                    ~EnhanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoEnhance 视频增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoEnhanceConfig GetVideoEnhance() const;

                    /**
                     * 设置视频增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoEnhance 视频增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoEnhance(const VideoEnhanceConfig& _videoEnhance);

                    /**
                     * 判断参数 VideoEnhance 是否已赋值
                     * @return VideoEnhance 是否已赋值
                     * 
                     */
                    bool VideoEnhanceHasBeenSet() const;

                    /**
                     * 获取音频增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioEnhance 音频增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioEnhanceConfig GetAudioEnhance() const;

                    /**
                     * 设置音频增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioEnhance 音频增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioEnhance(const AudioEnhanceConfig& _audioEnhance);

                    /**
                     * 判断参数 AudioEnhance 是否已赋值
                     * @return AudioEnhance 是否已赋值
                     * 
                     */
                    bool AudioEnhanceHasBeenSet() const;

                private:

                    /**
                     * 视频增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoEnhanceConfig m_videoEnhance;
                    bool m_videoEnhanceHasBeenSet;

                    /**
                     * 音频增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioEnhanceConfig m_audioEnhance;
                    bool m_audioEnhanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ENHANCECONFIG_H_
