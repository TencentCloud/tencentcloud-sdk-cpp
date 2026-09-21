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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEERASELOGOCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEERASELOGOCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageAreaBoxInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图标擦除配置
                */
                class ImageEraseLogoConfig : public AbstractModel
                {
                public:
                    ImageEraseLogoConfig();
                    ~ImageEraseLogoConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>能力配置开关，可选值：</p><li>ON：开启；</li><li>OFF：关闭。</li>默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch <p>能力配置开关，可选值：</p><li>ON：开启；</li><li>OFF：关闭。</li>默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>能力配置开关，可选值：</p><li>ON：开启；</li><li>OFF：关闭。</li>默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch <p>能力配置开关，可选值：</p><li>ON：开启；</li><li>OFF：关闭。</li>默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>需要擦除的多个框选区域，最多开启16个区域。<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageAreaBoxes <p>需要擦除的多个框选区域，最多开启16个区域。<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImageAreaBoxInfo> GetImageAreaBoxes() const;

                    /**
                     * 设置<p>需要擦除的多个框选区域，最多开启16个区域。<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageAreaBoxes <p>需要擦除的多个框选区域，最多开启16个区域。<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageAreaBoxes(const std::vector<ImageAreaBoxInfo>& _imageAreaBoxes);

                    /**
                     * 判断参数 ImageAreaBoxes 是否已赋值
                     * @return ImageAreaBoxes 是否已赋值
                     * 
                     */
                    bool ImageAreaBoxesHasBeenSet() const;

                    /**
                     * 获取<p>图片框选区域类型，可选值：</p><li>logo：图标；</li><li>text：文字；</li><li>watermark：水印；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectTypes <p>图片框选区域类型，可选值：</p><li>logo：图标；</li><li>text：文字；</li><li>watermark：水印；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDetectTypes() const;

                    /**
                     * 设置<p>图片框选区域类型，可选值：</p><li>logo：图标；</li><li>text：文字；</li><li>watermark：水印；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectTypes <p>图片框选区域类型，可选值：</p><li>logo：图标；</li><li>text：文字；</li><li>watermark：水印；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectTypes(const std::vector<std::string>& _detectTypes);

                    /**
                     * 判断参数 DetectTypes 是否已赋值
                     * @return DetectTypes 是否已赋值
                     * 
                     */
                    bool DetectTypesHasBeenSet() const;

                    /**
                     * 获取<p>水印擦除能力档位，可选值：</p><p>枚举值：</p><ul><li>low： 快速擦除档位</li><li>mid： 擦除效果和速度均衡档位</li><li>high： 进阶擦除效果档位</li></ul><p>注意：根据擦除场景复杂度选择对应擦除档位。</p>
                     * @return EraseStrength <p>水印擦除能力档位，可选值：</p><p>枚举值：</p><ul><li>low： 快速擦除档位</li><li>mid： 擦除效果和速度均衡档位</li><li>high： 进阶擦除效果档位</li></ul><p>注意：根据擦除场景复杂度选择对应擦除档位。</p>
                     * 
                     */
                    std::string GetEraseStrength() const;

                    /**
                     * 设置<p>水印擦除能力档位，可选值：</p><p>枚举值：</p><ul><li>low： 快速擦除档位</li><li>mid： 擦除效果和速度均衡档位</li><li>high： 进阶擦除效果档位</li></ul><p>注意：根据擦除场景复杂度选择对应擦除档位。</p>
                     * @param _eraseStrength <p>水印擦除能力档位，可选值：</p><p>枚举值：</p><ul><li>low： 快速擦除档位</li><li>mid： 擦除效果和速度均衡档位</li><li>high： 进阶擦除效果档位</li></ul><p>注意：根据擦除场景复杂度选择对应擦除档位。</p>
                     * 
                     */
                    void SetEraseStrength(const std::string& _eraseStrength);

                    /**
                     * 判断参数 EraseStrength 是否已赋值
                     * @return EraseStrength 是否已赋值
                     * 
                     */
                    bool EraseStrengthHasBeenSet() const;

                    /**
                     * 获取<p>擦除图像水印时，选择特定水印类型，可选值：</p><p>枚举值：</p><ul><li>corner_watermark： 擦除常规定点水印</li><li>tiled_watermark： 擦除全图平铺水印</li><li>auto_detect_type： 自动识别水印类型擦除</li><li>selected_watermark： 跳过自动擦除，按指定位置进行水印擦除</li></ul>
                     * @return WatermarkType <p>擦除图像水印时，选择特定水印类型，可选值：</p><p>枚举值：</p><ul><li>corner_watermark： 擦除常规定点水印</li><li>tiled_watermark： 擦除全图平铺水印</li><li>auto_detect_type： 自动识别水印类型擦除</li><li>selected_watermark： 跳过自动擦除，按指定位置进行水印擦除</li></ul>
                     * 
                     */
                    std::string GetWatermarkType() const;

                    /**
                     * 设置<p>擦除图像水印时，选择特定水印类型，可选值：</p><p>枚举值：</p><ul><li>corner_watermark： 擦除常规定点水印</li><li>tiled_watermark： 擦除全图平铺水印</li><li>auto_detect_type： 自动识别水印类型擦除</li><li>selected_watermark： 跳过自动擦除，按指定位置进行水印擦除</li></ul>
                     * @param _watermarkType <p>擦除图像水印时，选择特定水印类型，可选值：</p><p>枚举值：</p><ul><li>corner_watermark： 擦除常规定点水印</li><li>tiled_watermark： 擦除全图平铺水印</li><li>auto_detect_type： 自动识别水印类型擦除</li><li>selected_watermark： 跳过自动擦除，按指定位置进行水印擦除</li></ul>
                     * 
                     */
                    void SetWatermarkType(const std::string& _watermarkType);

                    /**
                     * 判断参数 WatermarkType 是否已赋值
                     * @return WatermarkType 是否已赋值
                     * 
                     */
                    bool WatermarkTypeHasBeenSet() const;

                private:

                    /**
                     * <p>能力配置开关，可选值：</p><li>ON：开启；</li><li>OFF：关闭。</li>默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>需要擦除的多个框选区域，最多开启16个区域。<br>注意：此字段可能返回 null，表示取不到有效值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImageAreaBoxInfo> m_imageAreaBoxes;
                    bool m_imageAreaBoxesHasBeenSet;

                    /**
                     * <p>图片框选区域类型，可选值：</p><li>logo：图标；</li><li>text：文字；</li><li>watermark：水印；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_detectTypes;
                    bool m_detectTypesHasBeenSet;

                    /**
                     * <p>水印擦除能力档位，可选值：</p><p>枚举值：</p><ul><li>low： 快速擦除档位</li><li>mid： 擦除效果和速度均衡档位</li><li>high： 进阶擦除效果档位</li></ul><p>注意：根据擦除场景复杂度选择对应擦除档位。</p>
                     */
                    std::string m_eraseStrength;
                    bool m_eraseStrengthHasBeenSet;

                    /**
                     * <p>擦除图像水印时，选择特定水印类型，可选值：</p><p>枚举值：</p><ul><li>corner_watermark： 擦除常规定点水印</li><li>tiled_watermark： 擦除全图平铺水印</li><li>auto_detect_type： 自动识别水印类型擦除</li><li>selected_watermark： 跳过自动擦除，按指定位置进行水印擦除</li></ul>
                     */
                    std::string m_watermarkType;
                    bool m_watermarkTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEERASELOGOCONFIG_H_
