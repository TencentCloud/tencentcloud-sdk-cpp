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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLESTYLE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLESTYLE_H_

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
                * 视频编辑/合成任务 字幕样式。
                */
                class ComposeSubtitleStyle : public AbstractModel
                {
                public:
                    ComposeSubtitleStyle();
                    ~ComposeSubtitleStyle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字幕高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认为 FontSize 大小。
                     * @return Height 字幕高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认为 FontSize 大小。
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置字幕高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认为 FontSize 大小。
                     * @param _height 字幕高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认为 FontSize 大小。
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取字幕距离下边框距离，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认：0px
                     * @return MarginBottom 字幕距离下边框距离，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认：0px
                     * 
                     */
                    std::string GetMarginBottom() const;

                    /**
                     * 设置字幕距离下边框距离，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认：0px
                     * @param _marginBottom 字幕距离下边框距离，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认：0px
                     * 
                     */
                    void SetMarginBottom(const std::string& _marginBottom);

                    /**
                     * 判断参数 MarginBottom 是否已赋值
                     * @return MarginBottom 是否已赋值
                     * 
                     */
                    bool MarginBottomHasBeenSet() const;

                    /**
                     * 获取字体类型，支持：
<li>SimHei：黑体（默认）。</li>
<li>SimSun：宋体。</li>
                     * @return FontType 字体类型，支持：
<li>SimHei：黑体（默认）。</li>
<li>SimSun：宋体。</li>
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置字体类型，支持：
<li>SimHei：黑体（默认）。</li>
<li>SimSun：宋体。</li>
                     * @param _fontType 字体类型，支持：
<li>SimHei：黑体（默认）。</li>
<li>SimSun：宋体。</li>
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
                     * 获取字体大小，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认：2%
                     * @return FontSize 字体大小，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认：2%
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置字体大小，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认：2%
                     * @param _fontSize 字体大小，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认：2%
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
                     * 获取是否使用粗体，和字体相关，可选值：
<li>0：否（默认）。</li>
<li>1：是。</li>
                     * @return FontBold 是否使用粗体，和字体相关，可选值：
<li>0：否（默认）。</li>
<li>1：是。</li>
                     * 
                     */
                    int64_t GetFontBold() const;

                    /**
                     * 设置是否使用粗体，和字体相关，可选值：
<li>0：否（默认）。</li>
<li>1：是。</li>
                     * @param _fontBold 是否使用粗体，和字体相关，可选值：
<li>0：否（默认）。</li>
<li>1：是。</li>
                     * 
                     */
                    void SetFontBold(const int64_t& _fontBold);

                    /**
                     * 判断参数 FontBold 是否已赋值
                     * @return FontBold 是否已赋值
                     * 
                     */
                    bool FontBoldHasBeenSet() const;

                    /**
                     * 获取是否使用斜体，和字体相关，可选值：
<li>0：否（默认）。</li>
<li>1：是。</li>
                     * @return FontItalic 是否使用斜体，和字体相关，可选值：
<li>0：否（默认）。</li>
<li>1：是。</li>
                     * 
                     */
                    int64_t GetFontItalic() const;

                    /**
                     * 设置是否使用斜体，和字体相关，可选值：
<li>0：否（默认）。</li>
<li>1：是。</li>
                     * @param _fontItalic 是否使用斜体，和字体相关，可选值：
<li>0：否（默认）。</li>
<li>1：是。</li>
                     * 
                     */
                    void SetFontItalic(const int64_t& _fontItalic);

                    /**
                     * 判断参数 FontItalic 是否已赋值
                     * @return FontItalic 是否已赋值
                     * 
                     */
                    bool FontItalicHasBeenSet() const;

                    /**
                     * 获取字体颜色，格式：#RRGGBBAA。  
默认值：0x000000FF（黑色）。  
注意：其中 AA 部分指的是透明度，为可选。

                     * @return FontColor 字体颜色，格式：#RRGGBBAA。  
默认值：0x000000FF（黑色）。  
注意：其中 AA 部分指的是透明度，为可选。

                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置字体颜色，格式：#RRGGBBAA。  
默认值：0x000000FF（黑色）。  
注意：其中 AA 部分指的是透明度，为可选。

                     * @param _fontColor 字体颜色，格式：#RRGGBBAA。  
默认值：0x000000FF（黑色）。  
注意：其中 AA 部分指的是透明度，为可选。

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
                     * 获取文字对齐方式：
<li>Center：居中（默认）。</li>
<li>Left：左对齐。</li>
<li>Right：右对齐。</li>
                     * @return FontAlign 文字对齐方式：
<li>Center：居中（默认）。</li>
<li>Left：左对齐。</li>
<li>Right：右对齐。</li>
                     * 
                     */
                    std::string GetFontAlign() const;

                    /**
                     * 设置文字对齐方式：
<li>Center：居中（默认）。</li>
<li>Left：左对齐。</li>
<li>Right：右对齐。</li>
                     * @param _fontAlign 文字对齐方式：
<li>Center：居中（默认）。</li>
<li>Left：左对齐。</li>
<li>Right：右对齐。</li>
                     * 
                     */
                    void SetFontAlign(const std::string& _fontAlign);

                    /**
                     * 判断参数 FontAlign 是否已赋值
                     * @return FontAlign 是否已赋值
                     * 
                     */
                    bool FontAlignHasBeenSet() const;

                    /**
                     * 获取用于字幕对齐留白：
<li>FontAlign=Left 时，表示距离左边距离。</li>
<li>FontAlign=Right时，表示距离右边距离。</li>
支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布宽度的百分比大小，如 10% 表示为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
                     * @return FontAlignMargin 用于字幕对齐留白：
<li>FontAlign=Left 时，表示距离左边距离。</li>
<li>FontAlign=Right时，表示距离右边距离。</li>
支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布宽度的百分比大小，如 10% 表示为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
                     * 
                     */
                    std::string GetFontAlignMargin() const;

                    /**
                     * 设置用于字幕对齐留白：
<li>FontAlign=Left 时，表示距离左边距离。</li>
<li>FontAlign=Right时，表示距离右边距离。</li>
支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布宽度的百分比大小，如 10% 表示为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
                     * @param _fontAlignMargin 用于字幕对齐留白：
<li>FontAlign=Left 时，表示距离左边距离。</li>
<li>FontAlign=Right时，表示距离右边距离。</li>
支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布宽度的百分比大小，如 10% 表示为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
                     * 
                     */
                    void SetFontAlignMargin(const std::string& _fontAlignMargin);

                    /**
                     * 判断参数 FontAlignMargin 是否已赋值
                     * @return FontAlignMargin 是否已赋值
                     * 
                     */
                    bool FontAlignMarginHasBeenSet() const;

                    /**
                     * 获取字体边框宽度，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认： 0，表示不需要边框。
                     * @return BorderWidth 字体边框宽度，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认： 0，表示不需要边框。
                     * 
                     */
                    std::string GetBorderWidth() const;

                    /**
                     * 设置字体边框宽度，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认： 0，表示不需要边框。
                     * @param _borderWidth 字体边框宽度，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认： 0，表示不需要边框。
                     * 
                     */
                    void SetBorderWidth(const std::string& _borderWidth);

                    /**
                     * 判断参数 BorderWidth 是否已赋值
                     * @return BorderWidth 是否已赋值
                     * 
                     */
                    bool BorderWidthHasBeenSet() const;

                    /**
                     * 获取边框颜色，当 BorderWidth 不为 0 时生效，其值格式和 FontColor 一致。
                     * @return BorderColor 边框颜色，当 BorderWidth 不为 0 时生效，其值格式和 FontColor 一致。
                     * 
                     */
                    std::string GetBorderColor() const;

                    /**
                     * 设置边框颜色，当 BorderWidth 不为 0 时生效，其值格式和 FontColor 一致。
                     * @param _borderColor 边框颜色，当 BorderWidth 不为 0 时生效，其值格式和 FontColor 一致。
                     * 
                     */
                    void SetBorderColor(const std::string& _borderColor);

                    /**
                     * 判断参数 BorderColor 是否已赋值
                     * @return BorderColor 是否已赋值
                     * 
                     */
                    bool BorderColorHasBeenSet() const;

                    /**
                     * 获取文字底色，其值格式和 FontColor 一致。  
默认为空， 表示不使用底色。
                     * @return BottomColor 文字底色，其值格式和 FontColor 一致。  
默认为空， 表示不使用底色。
                     * 
                     */
                    std::string GetBottomColor() const;

                    /**
                     * 设置文字底色，其值格式和 FontColor 一致。  
默认为空， 表示不使用底色。
                     * @param _bottomColor 文字底色，其值格式和 FontColor 一致。  
默认为空， 表示不使用底色。
                     * 
                     */
                    void SetBottomColor(const std::string& _bottomColor);

                    /**
                     * 判断参数 BottomColor 是否已赋值
                     * @return BottomColor 是否已赋值
                     * 
                     */
                    bool BottomColorHasBeenSet() const;

                private:

                    /**
                     * 字幕高度。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认为 FontSize 大小。
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 字幕距离下边框距离，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认：0px
                     */
                    std::string m_marginBottom;
                    bool m_marginBottomHasBeenSet;

                    /**
                     * 字体类型，支持：
<li>SimHei：黑体（默认）。</li>
<li>SimSun：宋体。</li>
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * 字体大小，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认：2%
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 是否使用粗体，和字体相关，可选值：
<li>0：否（默认）。</li>
<li>1：是。</li>
                     */
                    int64_t m_fontBold;
                    bool m_fontBoldHasBeenSet;

                    /**
                     * 是否使用斜体，和字体相关，可选值：
<li>0：否（默认）。</li>
<li>1：是。</li>
                     */
                    int64_t m_fontItalic;
                    bool m_fontItalicHasBeenSet;

                    /**
                     * 字体颜色，格式：#RRGGBBAA。  
默认值：0x000000FF（黑色）。  
注意：其中 AA 部分指的是透明度，为可选。

                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 文字对齐方式：
<li>Center：居中（默认）。</li>
<li>Left：左对齐。</li>
<li>Right：右对齐。</li>
                     */
                    std::string m_fontAlign;
                    bool m_fontAlignHasBeenSet;

                    /**
                     * 用于字幕对齐留白：
<li>FontAlign=Left 时，表示距离左边距离。</li>
<li>FontAlign=Right时，表示距离右边距离。</li>
支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布宽度的百分比大小，如 10% 表示为画布宽度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
                     */
                    std::string m_fontAlignMargin;
                    bool m_fontAlignMarginHasBeenSet;

                    /**
                     * 字体边框宽度，支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示为画布高度的百分比大小，如 10% 表示为画布高度的 10%。</li>
<li>当字符串以 px 结尾，表示单位为像素，如 100px 表示为100像素。</li>
默认： 0，表示不需要边框。
                     */
                    std::string m_borderWidth;
                    bool m_borderWidthHasBeenSet;

                    /**
                     * 边框颜色，当 BorderWidth 不为 0 时生效，其值格式和 FontColor 一致。
                     */
                    std::string m_borderColor;
                    bool m_borderColorHasBeenSet;

                    /**
                     * 文字底色，其值格式和 FontColor 一致。  
默认为空， 表示不使用底色。
                     */
                    std::string m_bottomColor;
                    bool m_bottomColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLESTYLE_H_
