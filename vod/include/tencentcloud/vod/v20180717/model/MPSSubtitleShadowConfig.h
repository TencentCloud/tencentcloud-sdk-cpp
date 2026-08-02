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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLESHADOWCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLESHADOWCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS字幕压制模块文字阴影配置
                */
                class MPSSubtitleShadowConfig : public AbstractModel
                {
                public:
                    MPSSubtitleShadowConfig();
                    ~MPSSubtitleShadowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文字阴影配置开关，0关闭，1开启，默认0</p>
                     * @return SubtitleShadowConfigSwitch <p>文字阴影配置开关，0关闭，1开启，默认0</p>
                     * 
                     */
                    int64_t GetSubtitleShadowConfigSwitch() const;

                    /**
                     * 设置<p>文字阴影配置开关，0关闭，1开启，默认0</p>
                     * @param _subtitleShadowConfigSwitch <p>文字阴影配置开关，0关闭，1开启，默认0</p>
                     * 
                     */
                    void SetSubtitleShadowConfigSwitch(const int64_t& _subtitleShadowConfigSwitch);

                    /**
                     * 判断参数 SubtitleShadowConfigSwitch 是否已赋值
                     * @return SubtitleShadowConfigSwitch 是否已赋值
                     * 
                     */
                    bool SubtitleShadowConfigSwitchHasBeenSet() const;

                    /**
                     * 获取<p>阴影宽度，默认单位像素，底层默认值为0，无阴影</p>
                     * @return ShadowWidth <p>阴影宽度，默认单位像素，底层默认值为0，无阴影</p>
                     * 
                     */
                    double GetShadowWidth() const;

                    /**
                     * 设置<p>阴影宽度，默认单位像素，底层默认值为0，无阴影</p>
                     * @param _shadowWidth <p>阴影宽度，默认单位像素，底层默认值为0，无阴影</p>
                     * 
                     */
                    void SetShadowWidth(const double& _shadowWidth);

                    /**
                     * 判断参数 ShadowWidth 是否已赋值
                     * @return ShadowWidth 是否已赋值
                     * 
                     */
                    bool ShadowWidthHasBeenSet() const;

                    /**
                     * 获取<p>阴影宽度单位， 0 像素，1百分比，默认为0，像素</p>
                     * @return ShadowWidthUnit <p>阴影宽度单位， 0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    int64_t GetShadowWidthUnit() const;

                    /**
                     * 设置<p>阴影宽度单位， 0 像素，1百分比，默认为0，像素</p>
                     * @param _shadowWidthUnit <p>阴影宽度单位， 0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    void SetShadowWidthUnit(const int64_t& _shadowWidthUnit);

                    /**
                     * 判断参数 ShadowWidthUnit 是否已赋值
                     * @return ShadowWidthUnit 是否已赋值
                     * 
                     */
                    bool ShadowWidthUnitHasBeenSet() const;

                    /**
                     * 获取<p>阴影颜色。6位16进制RGB。不填默认黑色（有设置阴影的情况下）</p>
                     * @return ShadowColor <p>阴影颜色。6位16进制RGB。不填默认黑色（有设置阴影的情况下）</p>
                     * 
                     */
                    std::string GetShadowColor() const;

                    /**
                     * 设置<p>阴影颜色。6位16进制RGB。不填默认黑色（有设置阴影的情况下）</p>
                     * @param _shadowColor <p>阴影颜色。6位16进制RGB。不填默认黑色（有设置阴影的情况下）</p>
                     * 
                     */
                    void SetShadowColor(const std::string& _shadowColor);

                    /**
                     * 判断参数 ShadowColor 是否已赋值
                     * @return ShadowColor 是否已赋值
                     * 
                     */
                    bool ShadowColorHasBeenSet() const;

                    /**
                     * 获取<p>阴影透明度。(0，1] 正浮点数。不填默认1，完全不透明（有设置阴影的情况下）</p>
                     * @return ShadowAlpha <p>阴影透明度。(0，1] 正浮点数。不填默认1，完全不透明（有设置阴影的情况下）</p>
                     * 
                     */
                    double GetShadowAlpha() const;

                    /**
                     * 设置<p>阴影透明度。(0，1] 正浮点数。不填默认1，完全不透明（有设置阴影的情况下）</p>
                     * @param _shadowAlpha <p>阴影透明度。(0，1] 正浮点数。不填默认1，完全不透明（有设置阴影的情况下）</p>
                     * 
                     */
                    void SetShadowAlpha(const double& _shadowAlpha);

                    /**
                     * 判断参数 ShadowAlpha 是否已赋值
                     * @return ShadowAlpha 是否已赋值
                     * 
                     */
                    bool ShadowAlphaHasBeenSet() const;

                private:

                    /**
                     * <p>文字阴影配置开关，0关闭，1开启，默认0</p>
                     */
                    int64_t m_subtitleShadowConfigSwitch;
                    bool m_subtitleShadowConfigSwitchHasBeenSet;

                    /**
                     * <p>阴影宽度，默认单位像素，底层默认值为0，无阴影</p>
                     */
                    double m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * <p>阴影宽度单位， 0 像素，1百分比，默认为0，像素</p>
                     */
                    int64_t m_shadowWidthUnit;
                    bool m_shadowWidthUnitHasBeenSet;

                    /**
                     * <p>阴影颜色。6位16进制RGB。不填默认黑色（有设置阴影的情况下）</p>
                     */
                    std::string m_shadowColor;
                    bool m_shadowColorHasBeenSet;

                    /**
                     * <p>阴影透明度。(0，1] 正浮点数。不填默认1，完全不透明（有设置阴影的情况下）</p>
                     */
                    double m_shadowAlpha;
                    bool m_shadowAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLESHADOWCONFIG_H_
