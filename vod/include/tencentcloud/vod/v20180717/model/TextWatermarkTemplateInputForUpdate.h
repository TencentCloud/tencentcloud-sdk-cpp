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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEXTWATERMARKTEMPLATEINPUTFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEXTWATERMARKTEMPLATEINPUTFORUPDATE_H_

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
                * 文字水印模板
                */
                class TextWatermarkTemplateInputForUpdate : public AbstractModel
                {
                public:
                    TextWatermarkTemplateInputForUpdate();
                    ~TextWatermarkTemplateInputForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字体类型，目前可以支持两种：
<li>simkai.ttf：可以支持中文和英文；</li>
<li>arial.ttf：仅支持英文。</li>
                     * @return FontType 字体类型，目前可以支持两种：
<li>simkai.ttf：可以支持中文和英文；</li>
<li>arial.ttf：仅支持英文。</li>
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置字体类型，目前可以支持两种：
<li>simkai.ttf：可以支持中文和英文；</li>
<li>arial.ttf：仅支持英文。</li>
                     * @param _fontType 字体类型，目前可以支持两种：
<li>simkai.ttf：可以支持中文和英文；</li>
<li>arial.ttf：仅支持英文。</li>
                     * 
                     */
                    void SetFontType(const std::string& _fontType);

                    /**
                     * 判断参数 FontType 是否已赋值
                     * @return FontType 是否已赋值
                     * 
                     */
                    bool FontTypeHasBeenSet() const;

                    /**
                     * 获取字体大小，格式：Npx，N 为数值。
                     * @return FontSize 字体大小，格式：Npx，N 为数值。
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置字体大小，格式：Npx，N 为数值。
                     * @param _fontSize 字体大小，格式：Npx，N 为数值。
                     * 
                     */
                    void SetFontSize(const std::string& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     * 
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。
                     * @return FontColor 字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。
                     * @param _fontColor 字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。
                     * 
                     */
                    void SetFontColor(const std::string& _fontColor);

                    /**
                     * 判断参数 FontColor 是否已赋值
                     * @return FontColor 是否已赋值
                     * 
                     */
                    bool FontColorHasBeenSet() const;

                    /**
                     * 获取文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
                     * @return FontAlpha 文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
                     * @param _fontAlpha 文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
                     * 
                     */
                    void SetFontAlpha(const double& _fontAlpha);

                    /**
                     * 判断参数 FontAlpha 是否已赋值
                     * @return FontAlpha 是否已赋值
                     * 
                     */
                    bool FontAlphaHasBeenSet() const;

                private:

                    /**
                     * 字体类型，目前可以支持两种：
<li>simkai.ttf：可以支持中文和英文；</li>
<li>arial.ttf：仅支持英文。</li>
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * 字体大小，格式：Npx，N 为数值。
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEXTWATERMARKTEMPLATEINPUTFORUPDATE_H_
