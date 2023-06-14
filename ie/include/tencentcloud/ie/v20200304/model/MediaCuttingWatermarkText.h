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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGWATERMARKTEXT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGWATERMARKTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 媒体剪切文字水印参数。
                */
                class MediaCuttingWatermarkText : public AbstractModel
                {
                public:
                    MediaCuttingWatermarkText();
                    ~MediaCuttingWatermarkText() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印文字。
                     * @return Text 水印文字。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置水印文字。
                     * @param _text 水印文字。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取文字大小
                     * @return FontSize 文字大小
                     * 
                     */
                    uint64_t GetFontSize() const;

                    /**
                     * 设置文字大小
                     * @param _fontSize 文字大小
                     * 
                     */
                    void SetFontSize(const uint64_t& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     * 
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取水印水平坐标，单位像素，默认：0。
                     * @return PosX 水印水平坐标，单位像素，默认：0。
                     * 
                     */
                    uint64_t GetPosX() const;

                    /**
                     * 设置水印水平坐标，单位像素，默认：0。
                     * @param _posX 水印水平坐标，单位像素，默认：0。
                     * 
                     */
                    void SetPosX(const uint64_t& _posX);

                    /**
                     * 判断参数 PosX 是否已赋值
                     * @return PosX 是否已赋值
                     * 
                     */
                    bool PosXHasBeenSet() const;

                    /**
                     * 获取水印垂直坐标，单位像素，默认：0。
                     * @return PosY 水印垂直坐标，单位像素，默认：0。
                     * 
                     */
                    uint64_t GetPosY() const;

                    /**
                     * 设置水印垂直坐标，单位像素，默认：0。
                     * @param _posY 水印垂直坐标，单位像素，默认：0。
                     * 
                     */
                    void SetPosY(const uint64_t& _posY);

                    /**
                     * 判断参数 PosY 是否已赋值
                     * @return PosY 是否已赋值
                     * 
                     */
                    bool PosYHasBeenSet() const;

                    /**
                     * 获取文字颜色，格式为：#RRGGBBAA，默认值：#000000。
                     * @return FontColor 文字颜色，格式为：#RRGGBBAA，默认值：#000000。
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置文字颜色，格式为：#RRGGBBAA，默认值：#000000。
                     * @param _fontColor 文字颜色，格式为：#RRGGBBAA，默认值：#000000。
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
                     * 获取文字透明度，范围：0~100，默认值：100。
                     * @return FontAlpha 文字透明度，范围：0~100，默认值：100。
                     * 
                     */
                    uint64_t GetFontAlpha() const;

                    /**
                     * 设置文字透明度，范围：0~100，默认值：100。
                     * @param _fontAlpha 文字透明度，范围：0~100，默认值：100。
                     * 
                     */
                    void SetFontAlpha(const uint64_t& _fontAlpha);

                    /**
                     * 判断参数 FontAlpha 是否已赋值
                     * @return FontAlpha 是否已赋值
                     * 
                     */
                    bool FontAlphaHasBeenSet() const;

                    /**
                     * 获取指定坐标原点，可选值：
<li>LeftTop：PosXY 表示水印左上点到图片左上点的相对位置</li>
<li>RightTop：PosXY 表示水印右上点到图片右上点的相对位置</li>
<li>LeftBottom：PosXY 表示水印左下点到图片左下点的相对位置</li>
<li>RightBottom：PosXY 表示水印右下点到图片右下点的相对位置</li>
<li>Center：PosXY 表示水印中心点到图片中心点的相对位置</li>
默认：LeftTop。
                     * @return PosOriginType 指定坐标原点，可选值：
<li>LeftTop：PosXY 表示水印左上点到图片左上点的相对位置</li>
<li>RightTop：PosXY 表示水印右上点到图片右上点的相对位置</li>
<li>LeftBottom：PosXY 表示水印左下点到图片左下点的相对位置</li>
<li>RightBottom：PosXY 表示水印右下点到图片右下点的相对位置</li>
<li>Center：PosXY 表示水印中心点到图片中心点的相对位置</li>
默认：LeftTop。
                     * 
                     */
                    std::string GetPosOriginType() const;

                    /**
                     * 设置指定坐标原点，可选值：
<li>LeftTop：PosXY 表示水印左上点到图片左上点的相对位置</li>
<li>RightTop：PosXY 表示水印右上点到图片右上点的相对位置</li>
<li>LeftBottom：PosXY 表示水印左下点到图片左下点的相对位置</li>
<li>RightBottom：PosXY 表示水印右下点到图片右下点的相对位置</li>
<li>Center：PosXY 表示水印中心点到图片中心点的相对位置</li>
默认：LeftTop。
                     * @param _posOriginType 指定坐标原点，可选值：
<li>LeftTop：PosXY 表示水印左上点到图片左上点的相对位置</li>
<li>RightTop：PosXY 表示水印右上点到图片右上点的相对位置</li>
<li>LeftBottom：PosXY 表示水印左下点到图片左下点的相对位置</li>
<li>RightBottom：PosXY 表示水印右下点到图片右下点的相对位置</li>
<li>Center：PosXY 表示水印中心点到图片中心点的相对位置</li>
默认：LeftTop。
                     * 
                     */
                    void SetPosOriginType(const std::string& _posOriginType);

                    /**
                     * 判断参数 PosOriginType 是否已赋值
                     * @return PosOriginType 是否已赋值
                     * 
                     */
                    bool PosOriginTypeHasBeenSet() const;

                    /**
                     * 获取字体，可选值：
<li>SimHei</li>
<li>SimKai</li>
<li>Arial</li>
默认 SimHei。
                     * @return Font 字体，可选值：
<li>SimHei</li>
<li>SimKai</li>
<li>Arial</li>
默认 SimHei。
                     * 
                     */
                    std::string GetFont() const;

                    /**
                     * 设置字体，可选值：
<li>SimHei</li>
<li>SimKai</li>
<li>Arial</li>
默认 SimHei。
                     * @param _font 字体，可选值：
<li>SimHei</li>
<li>SimKai</li>
<li>Arial</li>
默认 SimHei。
                     * 
                     */
                    void SetFont(const std::string& _font);

                    /**
                     * 判断参数 Font 是否已赋值
                     * @return Font 是否已赋值
                     * 
                     */
                    bool FontHasBeenSet() const;

                private:

                    /**
                     * 水印文字。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 文字大小
                     */
                    uint64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 水印水平坐标，单位像素，默认：0。
                     */
                    uint64_t m_posX;
                    bool m_posXHasBeenSet;

                    /**
                     * 水印垂直坐标，单位像素，默认：0。
                     */
                    uint64_t m_posY;
                    bool m_posYHasBeenSet;

                    /**
                     * 文字颜色，格式为：#RRGGBBAA，默认值：#000000。
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 文字透明度，范围：0~100，默认值：100。
                     */
                    uint64_t m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                    /**
                     * 指定坐标原点，可选值：
<li>LeftTop：PosXY 表示水印左上点到图片左上点的相对位置</li>
<li>RightTop：PosXY 表示水印右上点到图片右上点的相对位置</li>
<li>LeftBottom：PosXY 表示水印左下点到图片左下点的相对位置</li>
<li>RightBottom：PosXY 表示水印右下点到图片右下点的相对位置</li>
<li>Center：PosXY 表示水印中心点到图片中心点的相对位置</li>
默认：LeftTop。
                     */
                    std::string m_posOriginType;
                    bool m_posOriginTypeHasBeenSet;

                    /**
                     * 字体，可选值：
<li>SimHei</li>
<li>SimKai</li>
<li>Arial</li>
默认 SimHei。
                     */
                    std::string m_font;
                    bool m_fontHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIACUTTINGWATERMARKTEXT_H_
