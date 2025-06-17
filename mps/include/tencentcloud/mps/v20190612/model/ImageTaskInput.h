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
                     * 获取图片编码配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncodeConfig 图片编码配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageEncodeConfig GetEncodeConfig() const;

                    /**
                     * 设置图片编码配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encodeConfig 图片编码配置。
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
                     * 获取图片增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnhanceConfig 图片增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageEnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置图片增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enhanceConfig 图片增强配置。
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
                     * 获取图片擦除配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EraseConfig 图片擦除配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageEraseConfig GetEraseConfig() const;

                    /**
                     * 设置图片擦除配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eraseConfig 图片擦除配置。
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
                     * 获取盲水印配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlindWatermarkConfig 盲水印配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlindWatermarkConfig GetBlindWatermarkConfig() const;

                    /**
                     * 设置盲水印配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blindWatermarkConfig 盲水印配置。
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

                private:

                    /**
                     * 图片编码配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageEncodeConfig m_encodeConfig;
                    bool m_encodeConfigHasBeenSet;

                    /**
                     * 图片增强配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageEnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * 图片擦除配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageEraseConfig m_eraseConfig;
                    bool m_eraseConfigHasBeenSet;

                    /**
                     * 盲水印配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlindWatermarkConfig m_blindWatermarkConfig;
                    bool m_blindWatermarkConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_
