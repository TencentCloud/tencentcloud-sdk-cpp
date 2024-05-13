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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKTEXT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 文字水印参数。
                */
                class McuWaterMarkText : public AbstractModel
                {
                public:
                    McuWaterMarkText();
                    ~McuWaterMarkText() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文字水印内容。
                     * @return Text 文字水印内容。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文字水印内容。
                     * @param _text 文字水印内容。
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
                     * 获取水印在输出时的宽。单位为像素值。
                     * @return WaterMarkWidth 水印在输出时的宽。单位为像素值。
                     * 
                     */
                    uint64_t GetWaterMarkWidth() const;

                    /**
                     * 设置水印在输出时的宽。单位为像素值。
                     * @param _waterMarkWidth 水印在输出时的宽。单位为像素值。
                     * 
                     */
                    void SetWaterMarkWidth(const uint64_t& _waterMarkWidth);

                    /**
                     * 判断参数 WaterMarkWidth 是否已赋值
                     * @return WaterMarkWidth 是否已赋值
                     * 
                     */
                    bool WaterMarkWidthHasBeenSet() const;

                    /**
                     * 获取水印在输出时的高。单位为像素值。
                     * @return WaterMarkHeight 水印在输出时的高。单位为像素值。
                     * 
                     */
                    uint64_t GetWaterMarkHeight() const;

                    /**
                     * 设置水印在输出时的高。单位为像素值。
                     * @param _waterMarkHeight 水印在输出时的高。单位为像素值。
                     * 
                     */
                    void SetWaterMarkHeight(const uint64_t& _waterMarkHeight);

                    /**
                     * 判断参数 WaterMarkHeight 是否已赋值
                     * @return WaterMarkHeight 是否已赋值
                     * 
                     */
                    bool WaterMarkHeightHasBeenSet() const;

                    /**
                     * 获取水印在输出时的X偏移。单位为像素值。
                     * @return LocationX 水印在输出时的X偏移。单位为像素值。
                     * 
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置水印在输出时的X偏移。单位为像素值。
                     * @param _locationX 水印在输出时的X偏移。单位为像素值。
                     * 
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     * 
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取水印在输出时的Y偏移。单位为像素值。
                     * @return LocationY 水印在输出时的Y偏移。单位为像素值。
                     * 
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置水印在输出时的Y偏移。单位为像素值。
                     * @param _locationY 水印在输出时的Y偏移。单位为像素值。
                     * 
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     * 
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取字体大小
                     * @return FontSize 字体大小
                     * 
                     */
                    uint64_t GetFontSize() const;

                    /**
                     * 设置字体大小
                     * @param _fontSize 字体大小
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
                     * 获取字体颜色，默认为白色。常用的颜色有： 红色：0xcc0033。 黄色：0xcc9900。 绿色：0xcccc33。 蓝色：0x99CCFF。 黑色：0x000000。 白色：0xFFFFFF。 灰色：0x999999。	
                     * @return FontColor 字体颜色，默认为白色。常用的颜色有： 红色：0xcc0033。 黄色：0xcc9900。 绿色：0xcccc33。 蓝色：0x99CCFF。 黑色：0x000000。 白色：0xFFFFFF。 灰色：0x999999。	
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置字体颜色，默认为白色。常用的颜色有： 红色：0xcc0033。 黄色：0xcc9900。 绿色：0xcccc33。 蓝色：0x99CCFF。 黑色：0x000000。 白色：0xFFFFFF。 灰色：0x999999。	
                     * @param _fontColor 字体颜色，默认为白色。常用的颜色有： 红色：0xcc0033。 黄色：0xcc9900。 绿色：0xcccc33。 蓝色：0x99CCFF。 黑色：0x000000。 白色：0xFFFFFF。 灰色：0x999999。	
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
                     * 获取字体背景色，不配置默认为透明。常用的颜色有： 红色：0xcc0033。 黄色：0xcc9900。 绿色：0xcccc33。 蓝色：0x99CCFF。 黑色：0x000000。 白色：0xFFFFFF。 灰色：0x999999。	
                     * @return BackGroundColor 字体背景色，不配置默认为透明。常用的颜色有： 红色：0xcc0033。 黄色：0xcc9900。 绿色：0xcccc33。 蓝色：0x99CCFF。 黑色：0x000000。 白色：0xFFFFFF。 灰色：0x999999。	
                     * 
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置字体背景色，不配置默认为透明。常用的颜色有： 红色：0xcc0033。 黄色：0xcc9900。 绿色：0xcccc33。 蓝色：0x99CCFF。 黑色：0x000000。 白色：0xFFFFFF。 灰色：0x999999。	
                     * @param _backGroundColor 字体背景色，不配置默认为透明。常用的颜色有： 红色：0xcc0033。 黄色：0xcc9900。 绿色：0xcccc33。 蓝色：0x99CCFF。 黑色：0x000000。 白色：0xFFFFFF。 灰色：0x999999。	
                     * 
                     */
                    void SetBackGroundColor(const std::string& _backGroundColor);

                    /**
                     * 判断参数 BackGroundColor 是否已赋值
                     * @return BackGroundColor 是否已赋值
                     * 
                     */
                    bool BackGroundColorHasBeenSet() const;

                    /**
                     * 获取动态水印类型，默认为0。0:关闭；1:随机位置，每秒变动一次；2:边界扫描反弹，每帧变动一次。
                     * @return DynamicPosType 动态水印类型，默认为0。0:关闭；1:随机位置，每秒变动一次；2:边界扫描反弹，每帧变动一次。
                     * 
                     */
                    uint64_t GetDynamicPosType() const;

                    /**
                     * 设置动态水印类型，默认为0。0:关闭；1:随机位置，每秒变动一次；2:边界扫描反弹，每帧变动一次。
                     * @param _dynamicPosType 动态水印类型，默认为0。0:关闭；1:随机位置，每秒变动一次；2:边界扫描反弹，每帧变动一次。
                     * 
                     */
                    void SetDynamicPosType(const uint64_t& _dynamicPosType);

                    /**
                     * 判断参数 DynamicPosType 是否已赋值
                     * @return DynamicPosType 是否已赋值
                     * 
                     */
                    bool DynamicPosTypeHasBeenSet() const;

                    /**
                     * 获取水印在输出时的层级，不填默认为0。
                     * @return ZOrder 水印在输出时的层级，不填默认为0。
                     * 
                     */
                    uint64_t GetZOrder() const;

                    /**
                     * 设置水印在输出时的层级，不填默认为0。
                     * @param _zOrder 水印在输出时的层级，不填默认为0。
                     * 
                     */
                    void SetZOrder(const uint64_t& _zOrder);

                    /**
                     * 判断参数 ZOrder 是否已赋值
                     * @return ZOrder 是否已赋值
                     * 
                     */
                    bool ZOrderHasBeenSet() const;

                    /**
                     * 获取水印字体，不填默认为Tencent。支持设置以下值： Tencent （默认） SourceHanSans
                     * @return Font 水印字体，不填默认为Tencent。支持设置以下值： Tencent （默认） SourceHanSans
                     * 
                     */
                    std::string GetFont() const;

                    /**
                     * 设置水印字体，不填默认为Tencent。支持设置以下值： Tencent （默认） SourceHanSans
                     * @param _font 水印字体，不填默认为Tencent。支持设置以下值： Tencent （默认） SourceHanSans
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
                     * 文字水印内容。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 水印在输出时的宽。单位为像素值。
                     */
                    uint64_t m_waterMarkWidth;
                    bool m_waterMarkWidthHasBeenSet;

                    /**
                     * 水印在输出时的高。单位为像素值。
                     */
                    uint64_t m_waterMarkHeight;
                    bool m_waterMarkHeightHasBeenSet;

                    /**
                     * 水印在输出时的X偏移。单位为像素值。
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * 水印在输出时的Y偏移。单位为像素值。
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * 字体大小
                     */
                    uint64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 字体颜色，默认为白色。常用的颜色有： 红色：0xcc0033。 黄色：0xcc9900。 绿色：0xcccc33。 蓝色：0x99CCFF。 黑色：0x000000。 白色：0xFFFFFF。 灰色：0x999999。	
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 字体背景色，不配置默认为透明。常用的颜色有： 红色：0xcc0033。 黄色：0xcc9900。 绿色：0xcccc33。 蓝色：0x99CCFF。 黑色：0x000000。 白色：0xFFFFFF。 灰色：0x999999。	
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                    /**
                     * 动态水印类型，默认为0。0:关闭；1:随机位置，每秒变动一次；2:边界扫描反弹，每帧变动一次。
                     */
                    uint64_t m_dynamicPosType;
                    bool m_dynamicPosTypeHasBeenSet;

                    /**
                     * 水印在输出时的层级，不填默认为0。
                     */
                    uint64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                    /**
                     * 水印字体，不填默认为Tencent。支持设置以下值： Tencent （默认） SourceHanSans
                     */
                    std::string m_font;
                    bool m_fontHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKTEXT_H_
