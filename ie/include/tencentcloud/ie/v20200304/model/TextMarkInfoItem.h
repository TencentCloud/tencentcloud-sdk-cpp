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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_TEXTMARKINFOITEM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_TEXTMARKINFOITEM_H_

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
                * 画质重生子任务文字水印信息
                */
                class TextMarkInfoItem : public AbstractModel
                {
                public:
                    TextMarkInfoItem();
                    ~TextMarkInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文字内容。
                     * @return Text 文字内容。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文字内容。
                     * @param _text 文字内容。
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
                     * 获取文字水印X坐标。
                     * @return PosX 文字水印X坐标。
                     * 
                     */
                    int64_t GetPosX() const;

                    /**
                     * 设置文字水印X坐标。
                     * @param _posX 文字水印X坐标。
                     * 
                     */
                    void SetPosX(const int64_t& _posX);

                    /**
                     * 判断参数 PosX 是否已赋值
                     * @return PosX 是否已赋值
                     * 
                     */
                    bool PosXHasBeenSet() const;

                    /**
                     * 获取文字水印Y坐标。
                     * @return PosY 文字水印Y坐标。
                     * 
                     */
                    int64_t GetPosY() const;

                    /**
                     * 设置文字水印Y坐标。
                     * @param _posY 文字水印Y坐标。
                     * 
                     */
                    void SetPosY(const int64_t& _posY);

                    /**
                     * 判断参数 PosY 是否已赋值
                     * @return PosY 是否已赋值
                     * 
                     */
                    bool PosYHasBeenSet() const;

                    /**
                     * 获取文字大小
                     * @return FontSize 文字大小
                     * 
                     */
                    int64_t GetFontSize() const;

                    /**
                     * 设置文字大小
                     * @param _fontSize 文字大小
                     * 
                     */
                    void SetFontSize(const int64_t& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     * 
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取字体，可选项：hei,song，simkai,arial；默认hei(黑体）。
                     * @return FontFile 字体，可选项：hei,song，simkai,arial；默认hei(黑体）。
                     * 
                     */
                    std::string GetFontFile() const;

                    /**
                     * 设置字体，可选项：hei,song，simkai,arial；默认hei(黑体）。
                     * @param _fontFile 字体，可选项：hei,song，simkai,arial；默认hei(黑体）。
                     * 
                     */
                    void SetFontFile(const std::string& _fontFile);

                    /**
                     * 判断参数 FontFile 是否已赋值
                     * @return FontFile 是否已赋值
                     * 
                     */
                    bool FontFileHasBeenSet() const;

                    /**
                     * 获取字体颜色，颜色见附录，不填默认black。
                     * @return FontColor 字体颜色，颜色见附录，不填默认black。
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置字体颜色，颜色见附录，不填默认black。
                     * @param _fontColor 字体颜色，颜色见附录，不填默认black。
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
                     * 获取文字透明度，可选值0-1。0：不透明，1：全透明。默认为0
                     * @return FontAlpha 文字透明度，可选值0-1。0：不透明，1：全透明。默认为0
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置文字透明度，可选值0-1。0：不透明，1：全透明。默认为0
                     * @param _fontAlpha 文字透明度，可选值0-1。0：不透明，1：全透明。默认为0
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
                     * 文字内容。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 文字水印X坐标。
                     */
                    int64_t m_posX;
                    bool m_posXHasBeenSet;

                    /**
                     * 文字水印Y坐标。
                     */
                    int64_t m_posY;
                    bool m_posYHasBeenSet;

                    /**
                     * 文字大小
                     */
                    int64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 字体，可选项：hei,song，simkai,arial；默认hei(黑体）。
                     */
                    std::string m_fontFile;
                    bool m_fontFileHasBeenSet;

                    /**
                     * 字体颜色，颜色见附录，不填默认black。
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 文字透明度，可选值0-1。0：不透明，1：全透明。默认为0
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_TEXTMARKINFOITEM_H_
