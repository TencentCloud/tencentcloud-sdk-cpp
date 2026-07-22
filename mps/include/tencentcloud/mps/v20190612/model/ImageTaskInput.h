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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageEncodeConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageEraseConfig.h>
#include <tencentcloud/mps/v20190612/model/BlindWatermarkConfig.h>
#include <tencentcloud/mps/v20190612/model/BeautyConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageTransformConfig.h>
#include <tencentcloud/mps/v20190612/model/AiTryOnConfig.h>
#include <tencentcloud/mps/v20190612/model/AiPosterSuiteConfig.h>
#include <tencentcloud/mps/v20190612/model/CreateImageConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片任务输入参数
                */
                class ImageTaskInput : public AbstractModel
                {
                public:
                    ImageTaskInput();
                    ~ImageTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图片编码配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncodeConfig <p>图片编码配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageEncodeConfig GetEncodeConfig() const;

                    /**
                     * 设置<p>图片编码配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encodeConfig <p>图片编码配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncodeConfig(const ImageEncodeConfig& _encodeConfig);

                    /**
                     * 判断参数 EncodeConfig 是否已赋值
                     * @return EncodeConfig 是否已赋值
                     * 
                     */
                    bool EncodeConfigHasBeenSet() const;

                    /**
                     * 获取<p>图片增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnhanceConfig <p>图片增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageEnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置<p>图片增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enhanceConfig <p>图片增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnhanceConfig(const ImageEnhanceConfig& _enhanceConfig);

                    /**
                     * 判断参数 EnhanceConfig 是否已赋值
                     * @return EnhanceConfig 是否已赋值
                     * 
                     */
                    bool EnhanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>图片擦除配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EraseConfig <p>图片擦除配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageEraseConfig GetEraseConfig() const;

                    /**
                     * 设置<p>图片擦除配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eraseConfig <p>图片擦除配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEraseConfig(const ImageEraseConfig& _eraseConfig);

                    /**
                     * 判断参数 EraseConfig 是否已赋值
                     * @return EraseConfig 是否已赋值
                     * 
                     */
                    bool EraseConfigHasBeenSet() const;

                    /**
                     * 获取<p>盲水印配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlindWatermarkConfig <p>盲水印配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlindWatermarkConfig GetBlindWatermarkConfig() const;

                    /**
                     * 设置<p>盲水印配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blindWatermarkConfig <p>盲水印配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlindWatermarkConfig(const BlindWatermarkConfig& _blindWatermarkConfig);

                    /**
                     * 判断参数 BlindWatermarkConfig 是否已赋值
                     * @return BlindWatermarkConfig 是否已赋值
                     * 
                     */
                    bool BlindWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取<p>美颜配置。</p>
                     * @return BeautyConfig <p>美颜配置。</p>
                     * 
                     */
                    BeautyConfig GetBeautyConfig() const;

                    /**
                     * 设置<p>美颜配置。</p>
                     * @param _beautyConfig <p>美颜配置。</p>
                     * 
                     */
                    void SetBeautyConfig(const BeautyConfig& _beautyConfig);

                    /**
                     * 判断参数 BeautyConfig 是否已赋值
                     * @return BeautyConfig 是否已赋值
                     * 
                     */
                    bool BeautyConfigHasBeenSet() const;

                    /**
                     * 获取<p>图片基础转换能力。</p>
                     * @return TransformConfig <p>图片基础转换能力。</p>
                     * 
                     */
                    ImageTransformConfig GetTransformConfig() const;

                    /**
                     * 设置<p>图片基础转换能力。</p>
                     * @param _transformConfig <p>图片基础转换能力。</p>
                     * 
                     */
                    void SetTransformConfig(const ImageTransformConfig& _transformConfig);

                    /**
                     * 判断参数 TransformConfig 是否已赋值
                     * @return TransformConfig 是否已赋值
                     * 
                     */
                    bool TransformConfigHasBeenSet() const;

                    /**
                     * 获取<p>Ai 换装配置。</p>
                     * @return AiTryOnConfig <p>Ai 换装配置。</p>
                     * 
                     */
                    AiTryOnConfig GetAiTryOnConfig() const;

                    /**
                     * 设置<p>Ai 换装配置。</p>
                     * @param _aiTryOnConfig <p>Ai 换装配置。</p>
                     * 
                     */
                    void SetAiTryOnConfig(const AiTryOnConfig& _aiTryOnConfig);

                    /**
                     * 判断参数 AiTryOnConfig 是否已赋值
                     * @return AiTryOnConfig 是否已赋值
                     * 
                     */
                    bool AiTryOnConfigHasBeenSet() const;

                    /**
                     * 获取<p>Ai套图配置。</p>
                     * @return AiPosterSuiteConfig <p>Ai套图配置。</p>
                     * 
                     */
                    AiPosterSuiteConfig GetAiPosterSuiteConfig() const;

                    /**
                     * 设置<p>Ai套图配置。</p>
                     * @param _aiPosterSuiteConfig <p>Ai套图配置。</p>
                     * 
                     */
                    void SetAiPosterSuiteConfig(const AiPosterSuiteConfig& _aiPosterSuiteConfig);

                    /**
                     * 判断参数 AiPosterSuiteConfig 是否已赋值
                     * @return AiPosterSuiteConfig 是否已赋值
                     * 
                     */
                    bool AiPosterSuiteConfigHasBeenSet() const;

                    /**
                     * 获取<p>生图任务配置</p>
                     * @return CreateImageConfig <p>生图任务配置</p>
                     * 
                     */
                    CreateImageConfig GetCreateImageConfig() const;

                    /**
                     * 设置<p>生图任务配置</p>
                     * @param _createImageConfig <p>生图任务配置</p>
                     * 
                     */
                    void SetCreateImageConfig(const CreateImageConfig& _createImageConfig);

                    /**
                     * 判断参数 CreateImageConfig 是否已赋值
                     * @return CreateImageConfig 是否已赋值
                     * 
                     */
                    bool CreateImageConfigHasBeenSet() const;

                private:

                    /**
                     * <p>图片编码配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageEncodeConfig m_encodeConfig;
                    bool m_encodeConfigHasBeenSet;

                    /**
                     * <p>图片增强配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageEnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * <p>图片擦除配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageEraseConfig m_eraseConfig;
                    bool m_eraseConfigHasBeenSet;

                    /**
                     * <p>盲水印配置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlindWatermarkConfig m_blindWatermarkConfig;
                    bool m_blindWatermarkConfigHasBeenSet;

                    /**
                     * <p>美颜配置。</p>
                     */
                    BeautyConfig m_beautyConfig;
                    bool m_beautyConfigHasBeenSet;

                    /**
                     * <p>图片基础转换能力。</p>
                     */
                    ImageTransformConfig m_transformConfig;
                    bool m_transformConfigHasBeenSet;

                    /**
                     * <p>Ai 换装配置。</p>
                     */
                    AiTryOnConfig m_aiTryOnConfig;
                    bool m_aiTryOnConfigHasBeenSet;

                    /**
                     * <p>Ai套图配置。</p>
                     */
                    AiPosterSuiteConfig m_aiPosterSuiteConfig;
                    bool m_aiPosterSuiteConfigHasBeenSet;

                    /**
                     * <p>生图任务配置</p>
                     */
                    CreateImageConfig m_createImageConfig;
                    bool m_createImageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_
