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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENHANCECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENHANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SuperResolutionConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageDenoiseConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageQualityEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/ColorEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/SharpEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/FaceEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/LowLightEnhanceConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片增强参数
                */
                class ImageEnhanceConfig : public AbstractModel
                {
                public:
                    ImageEnhanceConfig();
                    ~ImageEnhanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取超分配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuperResolution 超分配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SuperResolutionConfig GetSuperResolution() const;

                    /**
                     * 设置超分配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _superResolution 超分配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuperResolution(const SuperResolutionConfig& _superResolution);

                    /**
                     * 判断参数 SuperResolution 是否已赋值
                     * @return SuperResolution 是否已赋值
                     * 
                     */
                    bool SuperResolutionHasBeenSet() const;

                    /**
                     * 获取降噪配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Denoise 降噪配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageDenoiseConfig GetDenoise() const;

                    /**
                     * 设置降噪配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _denoise 降噪配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDenoise(const ImageDenoiseConfig& _denoise);

                    /**
                     * 判断参数 Denoise 是否已赋值
                     * @return Denoise 是否已赋值
                     * 
                     */
                    bool DenoiseHasBeenSet() const;

                    /**
                     * 获取综合增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageQualityEnhance 综合增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageQualityEnhanceConfig GetImageQualityEnhance() const;

                    /**
                     * 设置综合增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageQualityEnhance 综合增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageQualityEnhance(const ImageQualityEnhanceConfig& _imageQualityEnhance);

                    /**
                     * 判断参数 ImageQualityEnhance 是否已赋值
                     * @return ImageQualityEnhance 是否已赋值
                     * 
                     */
                    bool ImageQualityEnhanceHasBeenSet() const;

                    /**
                     * 获取色彩增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColorEnhance 色彩增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ColorEnhanceConfig GetColorEnhance() const;

                    /**
                     * 设置色彩增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _colorEnhance 色彩增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColorEnhance(const ColorEnhanceConfig& _colorEnhance);

                    /**
                     * 判断参数 ColorEnhance 是否已赋值
                     * @return ColorEnhance 是否已赋值
                     * 
                     */
                    bool ColorEnhanceHasBeenSet() const;

                    /**
                     * 获取细节增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SharpEnhance 细节增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SharpEnhanceConfig GetSharpEnhance() const;

                    /**
                     * 设置细节增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sharpEnhance 细节增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSharpEnhance(const SharpEnhanceConfig& _sharpEnhance);

                    /**
                     * 判断参数 SharpEnhance 是否已赋值
                     * @return SharpEnhance 是否已赋值
                     * 
                     */
                    bool SharpEnhanceHasBeenSet() const;

                    /**
                     * 获取人脸增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaceEnhance 人脸增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FaceEnhanceConfig GetFaceEnhance() const;

                    /**
                     * 设置人脸增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _faceEnhance 人脸增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFaceEnhance(const FaceEnhanceConfig& _faceEnhance);

                    /**
                     * 判断参数 FaceEnhance 是否已赋值
                     * @return FaceEnhance 是否已赋值
                     * 
                     */
                    bool FaceEnhanceHasBeenSet() const;

                    /**
                     * 获取低光照增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LowLightEnhance 低光照增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LowLightEnhanceConfig GetLowLightEnhance() const;

                    /**
                     * 设置低光照增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lowLightEnhance 低光照增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLowLightEnhance(const LowLightEnhanceConfig& _lowLightEnhance);

                    /**
                     * 判断参数 LowLightEnhance 是否已赋值
                     * @return LowLightEnhance 是否已赋值
                     * 
                     */
                    bool LowLightEnhanceHasBeenSet() const;

                private:

                    /**
                     * 超分配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SuperResolutionConfig m_superResolution;
                    bool m_superResolutionHasBeenSet;

                    /**
                     * 降噪配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageDenoiseConfig m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * 综合增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageQualityEnhanceConfig m_imageQualityEnhance;
                    bool m_imageQualityEnhanceHasBeenSet;

                    /**
                     * 色彩增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ColorEnhanceConfig m_colorEnhance;
                    bool m_colorEnhanceHasBeenSet;

                    /**
                     * 细节增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SharpEnhanceConfig m_sharpEnhance;
                    bool m_sharpEnhanceHasBeenSet;

                    /**
                     * 人脸增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FaceEnhanceConfig m_faceEnhance;
                    bool m_faceEnhanceHasBeenSet;

                    /**
                     * 低光照增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LowLightEnhanceConfig m_lowLightEnhance;
                    bool m_lowLightEnhanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEENHANCECONFIG_H_
