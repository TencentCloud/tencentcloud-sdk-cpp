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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEOUTLINECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEOUTLINECONFIG_H_

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
                * 字幕压制模块文字描边配置
                */
                class SubtitleOutlineConfig : public AbstractModel
                {
                public:
                    SubtitleOutlineConfig();
                    ~SubtitleOutlineConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文字描边配置开关，0关闭，1开启，默认0</p>
                     * @return SubtitleOutlineConfigSwitch <p>文字描边配置开关，0关闭，1开启，默认0</p>
                     * 
                     */
                    int64_t GetSubtitleOutlineConfigSwitch() const;

                    /**
                     * 设置<p>文字描边配置开关，0关闭，1开启，默认0</p>
                     * @param _subtitleOutlineConfigSwitch <p>文字描边配置开关，0关闭，1开启，默认0</p>
                     * 
                     */
                    void SetSubtitleOutlineConfigSwitch(const int64_t& _subtitleOutlineConfigSwitch);

                    /**
                     * 判断参数 SubtitleOutlineConfigSwitch 是否已赋值
                     * @return SubtitleOutlineConfigSwitch 是否已赋值
                     * 
                     */
                    bool SubtitleOutlineConfigSwitchHasBeenSet() const;

                    /**
                     * 获取<p>描边宽度，默认单位像素，底层默认值为源视频高度的0.3%</p>
                     * @return OutlineWidth <p>描边宽度，默认单位像素，底层默认值为源视频高度的0.3%</p>
                     * 
                     */
                    double GetOutlineWidth() const;

                    /**
                     * 设置<p>描边宽度，默认单位像素，底层默认值为源视频高度的0.3%</p>
                     * @param _outlineWidth <p>描边宽度，默认单位像素，底层默认值为源视频高度的0.3%</p>
                     * 
                     */
                    void SetOutlineWidth(const double& _outlineWidth);

                    /**
                     * 判断参数 OutlineWidth 是否已赋值
                     * @return OutlineWidth 是否已赋值
                     * 
                     */
                    bool OutlineWidthHasBeenSet() const;

                    /**
                     * 获取<p>描边宽度单位，0 像素，1百分比，默认为0，像素</p>
                     * @return OutlineWidthUnit <p>描边宽度单位，0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    int64_t GetOutlineWidthUnit() const;

                    /**
                     * 设置<p>描边宽度单位，0 像素，1百分比，默认为0，像素</p>
                     * @param _outlineWidthUnit <p>描边宽度单位，0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    void SetOutlineWidthUnit(const int64_t& _outlineWidthUnit);

                    /**
                     * 判断参数 OutlineWidthUnit 是否已赋值
                     * @return OutlineWidthUnit 是否已赋值
                     * 
                     */
                    bool OutlineWidthUnitHasBeenSet() const;

                    /**
                     * 获取<p>描边颜色。6位16进制RGB。不填默认黑色。</p>
                     * @return OutlineColor <p>描边颜色。6位16进制RGB。不填默认黑色。</p>
                     * 
                     */
                    std::string GetOutlineColor() const;

                    /**
                     * 设置<p>描边颜色。6位16进制RGB。不填默认黑色。</p>
                     * @param _outlineColor <p>描边颜色。6位16进制RGB。不填默认黑色。</p>
                     * 
                     */
                    void SetOutlineColor(const std::string& _outlineColor);

                    /**
                     * 判断参数 OutlineColor 是否已赋值
                     * @return OutlineColor 是否已赋值
                     * 
                     */
                    bool OutlineColorHasBeenSet() const;

                    /**
                     * 获取<p>描边透明度。(0，1] 正浮点数。不填默认1，完全不透明</p>
                     * @return OutlineAlpha <p>描边透明度。(0，1] 正浮点数。不填默认1，完全不透明</p>
                     * 
                     */
                    double GetOutlineAlpha() const;

                    /**
                     * 设置<p>描边透明度。(0，1] 正浮点数。不填默认1，完全不透明</p>
                     * @param _outlineAlpha <p>描边透明度。(0，1] 正浮点数。不填默认1，完全不透明</p>
                     * 
                     */
                    void SetOutlineAlpha(const double& _outlineAlpha);

                    /**
                     * 判断参数 OutlineAlpha 是否已赋值
                     * @return OutlineAlpha 是否已赋值
                     * 
                     */
                    bool OutlineAlphaHasBeenSet() const;

                private:

                    /**
                     * <p>文字描边配置开关，0关闭，1开启，默认0</p>
                     */
                    int64_t m_subtitleOutlineConfigSwitch;
                    bool m_subtitleOutlineConfigSwitchHasBeenSet;

                    /**
                     * <p>描边宽度，默认单位像素，底层默认值为源视频高度的0.3%</p>
                     */
                    double m_outlineWidth;
                    bool m_outlineWidthHasBeenSet;

                    /**
                     * <p>描边宽度单位，0 像素，1百分比，默认为0，像素</p>
                     */
                    int64_t m_outlineWidthUnit;
                    bool m_outlineWidthUnitHasBeenSet;

                    /**
                     * <p>描边颜色。6位16进制RGB。不填默认黑色。</p>
                     */
                    std::string m_outlineColor;
                    bool m_outlineColorHasBeenSet;

                    /**
                     * <p>描边透明度。(0，1] 正浮点数。不填默认1，完全不透明</p>
                     */
                    double m_outlineAlpha;
                    bool m_outlineAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEOUTLINECONFIG_H_
