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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_LINKMATERIALINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_LINKMATERIALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MaterialBasicInfo.h>
#include <tencentcloud/cme/v20191029/model/VideoMaterial.h>
#include <tencentcloud/cme/v20191029/model/AudioMaterial.h>
#include <tencentcloud/cme/v20191029/model/ImageMaterial.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 链接素材信息
                */
                class LinkMaterialInfo : public AbstractModel
                {
                public:
                    LinkMaterialInfo();
                    ~LinkMaterialInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取素材基本信息。
                     * @return BasicInfo 素材基本信息。
                     * 
                     */
                    MaterialBasicInfo GetBasicInfo() const;

                    /**
                     * 设置素材基本信息。
                     * @param _basicInfo 素材基本信息。
                     * 
                     */
                    void SetBasicInfo(const MaterialBasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     * 
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取视频素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoMaterial 视频素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoMaterial GetVideoMaterial() const;

                    /**
                     * 设置视频素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoMaterial 视频素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoMaterial(const VideoMaterial& _videoMaterial);

                    /**
                     * 判断参数 VideoMaterial 是否已赋值
                     * @return VideoMaterial 是否已赋值
                     * 
                     */
                    bool VideoMaterialHasBeenSet() const;

                    /**
                     * 获取音频素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioMaterial 音频素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioMaterial GetAudioMaterial() const;

                    /**
                     * 设置音频素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioMaterial 音频素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioMaterial(const AudioMaterial& _audioMaterial);

                    /**
                     * 判断参数 AudioMaterial 是否已赋值
                     * @return AudioMaterial 是否已赋值
                     * 
                     */
                    bool AudioMaterialHasBeenSet() const;

                    /**
                     * 获取图片素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageMaterial 图片素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageMaterial GetImageMaterial() const;

                    /**
                     * 设置图片素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageMaterial 图片素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageMaterial(const ImageMaterial& _imageMaterial);

                    /**
                     * 判断参数 ImageMaterial 是否已赋值
                     * @return ImageMaterial 是否已赋值
                     * 
                     */
                    bool ImageMaterialHasBeenSet() const;

                private:

                    /**
                     * 素材基本信息。
                     */
                    MaterialBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 视频素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoMaterial m_videoMaterial;
                    bool m_videoMaterialHasBeenSet;

                    /**
                     * 音频素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioMaterial m_audioMaterial;
                    bool m_audioMaterialHasBeenSet;

                    /**
                     * 图片素材信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageMaterial m_imageMaterial;
                    bool m_imageMaterialHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_LINKMATERIALINFO_H_
