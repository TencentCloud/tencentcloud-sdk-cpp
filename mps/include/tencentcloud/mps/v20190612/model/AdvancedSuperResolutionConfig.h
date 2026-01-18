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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADVANCEDSUPERRESOLUTIONCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADVANCEDSUPERRESOLUTIONCONFIG_H_

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
                * 超分配置
                */
                class AdvancedSuperResolutionConfig : public AbstractModel
                {
                public:
                    AdvancedSuperResolutionConfig();
                    ~AdvancedSuperResolutionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     * @return Switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     * @param _switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
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
                     * 获取类型，可选值：
<li>standard：通用超分</li>
<li>super：高级超分super版。</li>
<li>ultra：高级超分ultra版。</li>
默认值：standard。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型，可选值：
<li>standard：通用超分</li>
<li>super：高级超分super版。</li>
<li>ultra：高级超分ultra版。</li>
默认值：standard。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，可选值：
<li>standard：通用超分</li>
<li>super：高级超分super版。</li>
<li>ultra：高级超分ultra版。</li>
默认值：standard。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型，可选值：
<li>standard：通用超分</li>
<li>super：高级超分super版。</li>
<li>ultra：高级超分ultra版。</li>
默认值：standard。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取输出图片模式，默认percent。
<li> aspect: 超分至指定宽高的较大矩形。</li>
<li> fixed: 超分至固定宽高，强制缩放。</li>
<li> percent: 超分倍率，可以为小数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode 输出图片模式，默认percent。
<li> aspect: 超分至指定宽高的较大矩形。</li>
<li> fixed: 超分至固定宽高，强制缩放。</li>
<li> percent: 超分倍率，可以为小数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置输出图片模式，默认percent。
<li> aspect: 超分至指定宽高的较大矩形。</li>
<li> fixed: 超分至固定宽高，强制缩放。</li>
<li> percent: 超分倍率，可以为小数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mode 输出图片模式，默认percent。
<li> aspect: 超分至指定宽高的较大矩形。</li>
<li> fixed: 超分至固定宽高，强制缩放。</li>
<li> percent: 超分倍率，可以为小数。</li>
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
                     * 获取超分倍率，可以为小数。
注意：当Mode等于percent时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Percent 超分倍率，可以为小数。
注意：当Mode等于percent时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置超分倍率，可以为小数。
注意：当Mode等于percent时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _percent 超分倍率，可以为小数。
注意：当Mode等于percent时使用。
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
                     * 获取目标图片宽度，不能超过4096。
注意：当Mode等于aspect或fixed时，优先使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 目标图片宽度，不能超过4096。
注意：当Mode等于aspect或fixed时，优先使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置目标图片宽度，不能超过4096。
注意：当Mode等于aspect或fixed时，优先使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _width 目标图片宽度，不能超过4096。
注意：当Mode等于aspect或fixed时，优先使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取目标图片高度，不能超过4096。
注意：当Mode等于aspect或fixed时，优先使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 目标图片高度，不能超过4096。
注意：当Mode等于aspect或fixed时，优先使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置目标图片高度，不能超过4096。
注意：当Mode等于aspect或fixed时，优先使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _height 目标图片高度，不能超过4096。
注意：当Mode等于aspect或fixed时，优先使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取目标图片长边长度，不能超过4096。
注意：当Mode等于aspect或fixed，且未配置Width和Height字段时使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LongSide 目标图片长边长度，不能超过4096。
注意：当Mode等于aspect或fixed，且未配置Width和Height字段时使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLongSide() const;

                    /**
                     * 设置目标图片长边长度，不能超过4096。
注意：当Mode等于aspect或fixed，且未配置Width和Height字段时使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _longSide 目标图片长边长度，不能超过4096。
注意：当Mode等于aspect或fixed，且未配置Width和Height字段时使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLongSide(const int64_t& _longSide);

                    /**
                     * 判断参数 LongSide 是否已赋值
                     * @return LongSide 是否已赋值
                     * 
                     */
                    bool LongSideHasBeenSet() const;

                    /**
                     * 获取目标图片短边长度，不能超过4096。
注意：当Mode等于aspect或fixed，且未配置Width和Height字段时使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShortSide 目标图片短边长度，不能超过4096。
注意：当Mode等于aspect或fixed，且未配置Width和Height字段时使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetShortSide() const;

                    /**
                     * 设置目标图片短边长度，不能超过4096。
注意：当Mode等于aspect或fixed，且未配置Width和Height字段时使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shortSide 目标图片短边长度，不能超过4096。
注意：当Mode等于aspect或fixed，且未配置Width和Height字段时使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShortSide(const int64_t& _shortSide);

                    /**
                     * 判断参数 ShortSide 是否已赋值
                     * @return ShortSide 是否已赋值
                     * 
                     */
                    bool ShortSideHasBeenSet() const;

                private:

                    /**
                     * 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 类型，可选值：
<li>standard：通用超分</li>
<li>super：高级超分super版。</li>
<li>ultra：高级超分ultra版。</li>
默认值：standard。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 输出图片模式，默认percent。
<li> aspect: 超分至指定宽高的较大矩形。</li>
<li> fixed: 超分至固定宽高，强制缩放。</li>
<li> percent: 超分倍率，可以为小数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 超分倍率，可以为小数。
注意：当Mode等于percent时使用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 目标图片宽度，不能超过4096。
注意：当Mode等于aspect或fixed时，优先使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 目标图片高度，不能超过4096。
注意：当Mode等于aspect或fixed时，优先使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 目标图片长边长度，不能超过4096。
注意：当Mode等于aspect或fixed，且未配置Width和Height字段时使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_longSide;
                    bool m_longSideHasBeenSet;

                    /**
                     * 目标图片短边长度，不能超过4096。
注意：当Mode等于aspect或fixed，且未配置Width和Height字段时使用此配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_shortSide;
                    bool m_shortSideHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADVANCEDSUPERRESOLUTIONCONFIG_H_
