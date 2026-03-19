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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLESHADOWCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLESHADOWCONFIG_H_

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
                * 字幕压制模块文字阴影配置
                */
                class SubtitleShadowConfig : public AbstractModel
                {
                public:
                    SubtitleShadowConfig();
                    ~SubtitleShadowConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文字阴影配置开关，0关闭，1开启，默认0
                     * @return SubtitleShadowConfigSwitch 文字阴影配置开关，0关闭，1开启，默认0
                     * 
                     */
                    int64_t GetSubtitleShadowConfigSwitch() const;

                    /**
                     * 设置文字阴影配置开关，0关闭，1开启，默认0
                     * @param _subtitleShadowConfigSwitch 文字阴影配置开关，0关闭，1开启，默认0
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
                     * 获取阴影宽度，默认单位像素，底层默认值为0，无阴影

                     * @return ShadowWidth 阴影宽度，默认单位像素，底层默认值为0，无阴影

                     * 
                     */
                    double GetShadowWidth() const;

                    /**
                     * 设置阴影宽度，默认单位像素，底层默认值为0，无阴影

                     * @param _shadowWidth 阴影宽度，默认单位像素，底层默认值为0，无阴影

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
                     * 获取阴影宽度单位， 0 像素，1百分比，默认为0，像素

                     * @return ShadowWidthUnit 阴影宽度单位， 0 像素，1百分比，默认为0，像素

                     * 
                     */
                    int64_t GetShadowWidthUnit() const;

                    /**
                     * 设置阴影宽度单位， 0 像素，1百分比，默认为0，像素

                     * @param _shadowWidthUnit 阴影宽度单位， 0 像素，1百分比，默认为0，像素

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
                     * 获取阴影颜色。6位16进制RGB。不填默认黑色（有设置阴影的情况下）

                     * @return ShadowColor 阴影颜色。6位16进制RGB。不填默认黑色（有设置阴影的情况下）

                     * 
                     */
                    std::string GetShadowColor() const;

                    /**
                     * 设置阴影颜色。6位16进制RGB。不填默认黑色（有设置阴影的情况下）

                     * @param _shadowColor 阴影颜色。6位16进制RGB。不填默认黑色（有设置阴影的情况下）

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
                     * 获取阴影透明度。(0，1] 正浮点数。不填默认1，完全不透明（有设置阴影的情况下）

                     * @return ShadowAlpha 阴影透明度。(0，1] 正浮点数。不填默认1，完全不透明（有设置阴影的情况下）

                     * 
                     */
                    double GetShadowAlpha() const;

                    /**
                     * 设置阴影透明度。(0，1] 正浮点数。不填默认1，完全不透明（有设置阴影的情况下）

                     * @param _shadowAlpha 阴影透明度。(0，1] 正浮点数。不填默认1，完全不透明（有设置阴影的情况下）

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
                     * 文字阴影配置开关，0关闭，1开启，默认0
                     */
                    int64_t m_subtitleShadowConfigSwitch;
                    bool m_subtitleShadowConfigSwitchHasBeenSet;

                    /**
                     * 阴影宽度，默认单位像素，底层默认值为0，无阴影

                     */
                    double m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * 阴影宽度单位， 0 像素，1百分比，默认为0，像素

                     */
                    int64_t m_shadowWidthUnit;
                    bool m_shadowWidthUnitHasBeenSet;

                    /**
                     * 阴影颜色。6位16进制RGB。不填默认黑色（有设置阴影的情况下）

                     */
                    std::string m_shadowColor;
                    bool m_shadowColorHasBeenSet;

                    /**
                     * 阴影透明度。(0，1] 正浮点数。不填默认1，完全不透明（有设置阴影的情况下）

                     */
                    double m_shadowAlpha;
                    bool m_shadowAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLESHADOWCONFIG_H_
