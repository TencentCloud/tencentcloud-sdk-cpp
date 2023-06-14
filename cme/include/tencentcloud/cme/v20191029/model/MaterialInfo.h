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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MATERIALINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MATERIALINFO_H_

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
#include <tencentcloud/cme/v20191029/model/LinkMaterial.h>
#include <tencentcloud/cme/v20191029/model/VideoEditTemplateMaterial.h>
#include <tencentcloud/cme/v20191029/model/OtherMaterial.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒体详情信息
                */
                class MaterialInfo : public AbstractModel
                {
                public:
                    MaterialInfo();
                    ~MaterialInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体基本信息。
                     * @return BasicInfo 媒体基本信息。
                     * 
                     */
                    MaterialBasicInfo GetBasicInfo() const;

                    /**
                     * 设置媒体基本信息。
                     * @param _basicInfo 媒体基本信息。
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
                     * 获取视频媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoMaterial 视频媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoMaterial GetVideoMaterial() const;

                    /**
                     * 设置视频媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoMaterial 视频媒体信息。
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
                     * 获取音频媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioMaterial 音频媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioMaterial GetAudioMaterial() const;

                    /**
                     * 设置音频媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioMaterial 音频媒体信息。
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
                     * 获取图片媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageMaterial 图片媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageMaterial GetImageMaterial() const;

                    /**
                     * 设置图片媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageMaterial 图片媒体信息。
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

                    /**
                     * 获取链接媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkMaterial 链接媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LinkMaterial GetLinkMaterial() const;

                    /**
                     * 设置链接媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkMaterial 链接媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkMaterial(const LinkMaterial& _linkMaterial);

                    /**
                     * 判断参数 LinkMaterial 是否已赋值
                     * @return LinkMaterial 是否已赋值
                     * 
                     */
                    bool LinkMaterialHasBeenSet() const;

                    /**
                     * 获取模板媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoEditTemplateMaterial 模板媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoEditTemplateMaterial GetVideoEditTemplateMaterial() const;

                    /**
                     * 设置模板媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoEditTemplateMaterial 模板媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoEditTemplateMaterial(const VideoEditTemplateMaterial& _videoEditTemplateMaterial);

                    /**
                     * 判断参数 VideoEditTemplateMaterial 是否已赋值
                     * @return VideoEditTemplateMaterial 是否已赋值
                     * 
                     */
                    bool VideoEditTemplateMaterialHasBeenSet() const;

                    /**
                     * 获取其他类型媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherMaterial 其他类型媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OtherMaterial GetOtherMaterial() const;

                    /**
                     * 设置其他类型媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherMaterial 其他类型媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherMaterial(const OtherMaterial& _otherMaterial);

                    /**
                     * 判断参数 OtherMaterial 是否已赋值
                     * @return OtherMaterial 是否已赋值
                     * 
                     */
                    bool OtherMaterialHasBeenSet() const;

                private:

                    /**
                     * 媒体基本信息。
                     */
                    MaterialBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 视频媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoMaterial m_videoMaterial;
                    bool m_videoMaterialHasBeenSet;

                    /**
                     * 音频媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioMaterial m_audioMaterial;
                    bool m_audioMaterialHasBeenSet;

                    /**
                     * 图片媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageMaterial m_imageMaterial;
                    bool m_imageMaterialHasBeenSet;

                    /**
                     * 链接媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LinkMaterial m_linkMaterial;
                    bool m_linkMaterialHasBeenSet;

                    /**
                     * 模板媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoEditTemplateMaterial m_videoEditTemplateMaterial;
                    bool m_videoEditTemplateMaterialHasBeenSet;

                    /**
                     * 其他类型媒体信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OtherMaterial m_otherMaterial;
                    bool m_otherMaterialHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MATERIALINFO_H_
