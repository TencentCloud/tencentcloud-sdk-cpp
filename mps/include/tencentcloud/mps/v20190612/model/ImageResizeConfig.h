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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGERESIZECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGERESIZECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片缩放配置
                */
                class ImageResizeConfig : public AbstractModel
                {
                public:
                    ImageResizeConfig();
                    ~ImageResizeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取能力配置开关，可选值：
<li>ON：开启</li>
<li>OFF：关闭</li>
默认值：ON。
                     * @return Switch 能力配置开关，可选值：
<li>ON：开启</li>
<li>OFF：关闭</li>
默认值：ON。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置能力配置开关，可选值：
<li>ON：开启</li>
<li>OFF：关闭</li>
默认值：ON。
                     * @param _switch 能力配置开关，可选值：
<li>ON：开启</li>
<li>OFF：关闭</li>
默认值：ON。
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
                     * 获取输出图片模式，可选模式：
<li>percent: 指定缩放倍率，可以为小数</li>
<li>mfit: 缩放至指定宽高的较大矩形</li>
<li>lfit: 缩放至指定宽高的较小矩形</li>
<li>fill: 缩放至指定宽高的较大矩形，并居中裁剪指定宽高</li>
<li>pad: 缩放至指定宽高的较小矩形，并填充到指定宽高</li>
<li>fixed: 缩放至固定宽高，强制缩放</li>
默认值：percent。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode 输出图片模式，可选模式：
<li>percent: 指定缩放倍率，可以为小数</li>
<li>mfit: 缩放至指定宽高的较大矩形</li>
<li>lfit: 缩放至指定宽高的较小矩形</li>
<li>fill: 缩放至指定宽高的较大矩形，并居中裁剪指定宽高</li>
<li>pad: 缩放至指定宽高的较小矩形，并填充到指定宽高</li>
<li>fixed: 缩放至固定宽高，强制缩放</li>
默认值：percent。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置输出图片模式，可选模式：
<li>percent: 指定缩放倍率，可以为小数</li>
<li>mfit: 缩放至指定宽高的较大矩形</li>
<li>lfit: 缩放至指定宽高的较小矩形</li>
<li>fill: 缩放至指定宽高的较大矩形，并居中裁剪指定宽高</li>
<li>pad: 缩放至指定宽高的较小矩形，并填充到指定宽高</li>
<li>fixed: 缩放至固定宽高，强制缩放</li>
默认值：percent。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mode 输出图片模式，可选模式：
<li>percent: 指定缩放倍率，可以为小数</li>
<li>mfit: 缩放至指定宽高的较大矩形</li>
<li>lfit: 缩放至指定宽高的较小矩形</li>
<li>fill: 缩放至指定宽高的较大矩形，并居中裁剪指定宽高</li>
<li>pad: 缩放至指定宽高的较小矩形，并填充到指定宽高</li>
<li>fixed: 缩放至固定宽高，强制缩放</li>
默认值：percent。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取缩放倍率，可以为小数，当Mode为percent时使用。

默认值：1.0。
取值范围：[0.1，10.0]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Percent 缩放倍率，可以为小数，当Mode为percent时使用。

默认值：1.0。
取值范围：[0.1，10.0]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置缩放倍率，可以为小数，当Mode为percent时使用。

默认值：1.0。
取值范围：[0.1，10.0]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _percent 缩放倍率，可以为小数，当Mode为percent时使用。

默认值：1.0。
取值范围：[0.1，10.0]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取目标图片宽度。

取值范围：[1，16384]。
注意：此字段在Mode非percent时优先使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 目标图片宽度。

取值范围：[1，16384]。
注意：此字段在Mode非percent时优先使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置目标图片宽度。

取值范围：[1，16384]。
注意：此字段在Mode非percent时优先使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 目标图片宽度。

取值范围：[1，16384]。
注意：此字段在Mode非percent时优先使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取目标图片高度。

取值范围：[1，16384]。
注意：此字段在Mode非percent时优先使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 目标图片高度。

取值范围：[1，16384]。
注意：此字段在Mode非percent时优先使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置目标图片高度。

取值范围：[1，16384]。
注意：此字段在Mode非percent时优先使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height 目标图片高度。

取值范围：[1，16384]。
注意：此字段在Mode非percent时优先使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取目标图片长边。

取值范围：[1，16384]。
注意：此字段在Mode非percent且未配置Width和Height时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LongSide 目标图片长边。

取值范围：[1，16384]。
注意：此字段在Mode非percent且未配置Width和Height时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLongSide() const;

                    /**
                     * 设置目标图片长边。

取值范围：[1，16384]。
注意：此字段在Mode非percent且未配置Width和Height时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _longSide 目标图片长边。

取值范围：[1，16384]。
注意：此字段在Mode非percent且未配置Width和Height时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLongSide(const uint64_t& _longSide);

                    /**
                     * 判断参数 LongSide 是否已赋值
                     * @return LongSide 是否已赋值
                     * 
                     */
                    bool LongSideHasBeenSet() const;

                    /**
                     * 获取目标图片短边。

取值范围：[1，16384]。
注意：此字段在Mode非percent且未配置Width和Height时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShortSide 目标图片短边。

取值范围：[1，16384]。
注意：此字段在Mode非percent且未配置Width和Height时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetShortSide() const;

                    /**
                     * 设置目标图片短边。

取值范围：[1，16384]。
注意：此字段在Mode非percent且未配置Width和Height时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shortSide 目标图片短边。

取值范围：[1，16384]。
注意：此字段在Mode非percent且未配置Width和Height时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShortSide(const uint64_t& _shortSide);

                    /**
                     * 判断参数 ShortSide 是否已赋值
                     * @return ShortSide 是否已赋值
                     * 
                     */
                    bool ShortSideHasBeenSet() const;

                private:

                    /**
                     * 能力配置开关，可选值：
<li>ON：开启</li>
<li>OFF：关闭</li>
默认值：ON。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 输出图片模式，可选模式：
<li>percent: 指定缩放倍率，可以为小数</li>
<li>mfit: 缩放至指定宽高的较大矩形</li>
<li>lfit: 缩放至指定宽高的较小矩形</li>
<li>fill: 缩放至指定宽高的较大矩形，并居中裁剪指定宽高</li>
<li>pad: 缩放至指定宽高的较小矩形，并填充到指定宽高</li>
<li>fixed: 缩放至固定宽高，强制缩放</li>
默认值：percent。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 缩放倍率，可以为小数，当Mode为percent时使用。

默认值：1.0。
取值范围：[0.1，10.0]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 目标图片宽度。

取值范围：[1，16384]。
注意：此字段在Mode非percent时优先使用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 目标图片高度。

取值范围：[1，16384]。
注意：此字段在Mode非percent时优先使用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 目标图片长边。

取值范围：[1，16384]。
注意：此字段在Mode非percent且未配置Width和Height时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_longSide;
                    bool m_longSideHasBeenSet;

                    /**
                     * 目标图片短边。

取值范围：[1，16384]。
注意：此字段在Mode非percent且未配置Width和Height时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_shortSide;
                    bool m_shortSideHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGERESIZECONFIG_H_
