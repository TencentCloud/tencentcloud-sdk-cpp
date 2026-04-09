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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEINFOINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEINFOINPUT_H_

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
                * 字幕压制输入信息
                */
                class SubtitleInfoInput : public AbstractModel
                {
                public:
                    SubtitleInfoInput();
                    ~SubtitleInfoInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字幕 ID。</p>
                     * @return Id <p>字幕 ID。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>字幕 ID。</p>
                     * @param _id <p>字幕 ID。</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>字体类型。</p><p>枚举值：</p><ul><li>hei.ttf： 黑体</li><li>song.ttf： 宋体</li><li>kai.ttf（推荐）或 simkai.ttf： 楷体</li><li>msyh.ttf： 微软雅黑</li><li>msyhbd.ttf： 微软雅黑加粗</li><li>hkjgt.ttf： 华康金刚体</li><li>dhttx.ttf： 典黑体特细</li><li>xqgdzt.ttf： 喜鹊古字典体</li><li>qpcyt.ttf： 巧拼超圆体</li><li>arial.ttf： 仅支持英文</li><li>dinalternate.ttf： DIN Alternate Bold</li><li>helveticalt.ttf： Helvetica</li><li>helveticains.ttf： Helvetica Inserat</li><li>trajanpro.ttf： TrajanPro-Bold</li><li>korean.ttf： 韩语</li><li>japanese.ttf： 日语</li><li>thai.ttf： 泰语</li><li>roboto.ttf： Roboto</li><li>notosans.ttf： NotoSans</li><li>notosansthai.ttf： 泰语NotoSansThai</li><li>sarabun.ttf： 泰语Sarabun</li><li>kanit.ttf： 泰语Kanit</li><li>charmonman.ttf： 泰语Charmonman</li><li>notonaskharabic.ttf： 阿拉伯语NotoNaskhArabic</li><li>notosansdevanagari.ttf： 印度语NotoSansDevanagari</li><li>notosanstc.ttf： 粤语思源黑体NotoSansTC</li><li>notosanskr.ttf： 韩语NotoSansKR</li><li>gothica1.ttf： 韩语GothicA1</li><li>nanummyeongjo.ttf： 韩语NanumMyeongjo</li><li>notosansjp.ttf： 日语NotoSansJP</li><li>notoserifjp.ttf： 日语NotoSerifJP</li><li>shipporimincho.ttf： 日语ShipporiMincho</li></ul><p>默认值：hei.ttf 黑体</p>
                     * @return FontType <p>字体类型。</p><p>枚举值：</p><ul><li>hei.ttf： 黑体</li><li>song.ttf： 宋体</li><li>kai.ttf（推荐）或 simkai.ttf： 楷体</li><li>msyh.ttf： 微软雅黑</li><li>msyhbd.ttf： 微软雅黑加粗</li><li>hkjgt.ttf： 华康金刚体</li><li>dhttx.ttf： 典黑体特细</li><li>xqgdzt.ttf： 喜鹊古字典体</li><li>qpcyt.ttf： 巧拼超圆体</li><li>arial.ttf： 仅支持英文</li><li>dinalternate.ttf： DIN Alternate Bold</li><li>helveticalt.ttf： Helvetica</li><li>helveticains.ttf： Helvetica Inserat</li><li>trajanpro.ttf： TrajanPro-Bold</li><li>korean.ttf： 韩语</li><li>japanese.ttf： 日语</li><li>thai.ttf： 泰语</li><li>roboto.ttf： Roboto</li><li>notosans.ttf： NotoSans</li><li>notosansthai.ttf： 泰语NotoSansThai</li><li>sarabun.ttf： 泰语Sarabun</li><li>kanit.ttf： 泰语Kanit</li><li>charmonman.ttf： 泰语Charmonman</li><li>notonaskharabic.ttf： 阿拉伯语NotoNaskhArabic</li><li>notosansdevanagari.ttf： 印度语NotoSansDevanagari</li><li>notosanstc.ttf： 粤语思源黑体NotoSansTC</li><li>notosanskr.ttf： 韩语NotoSansKR</li><li>gothica1.ttf： 韩语GothicA1</li><li>nanummyeongjo.ttf： 韩语NanumMyeongjo</li><li>notosansjp.ttf： 日语NotoSansJP</li><li>notoserifjp.ttf： 日语NotoSerifJP</li><li>shipporimincho.ttf： 日语ShipporiMincho</li></ul><p>默认值：hei.ttf 黑体</p>
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置<p>字体类型。</p><p>枚举值：</p><ul><li>hei.ttf： 黑体</li><li>song.ttf： 宋体</li><li>kai.ttf（推荐）或 simkai.ttf： 楷体</li><li>msyh.ttf： 微软雅黑</li><li>msyhbd.ttf： 微软雅黑加粗</li><li>hkjgt.ttf： 华康金刚体</li><li>dhttx.ttf： 典黑体特细</li><li>xqgdzt.ttf： 喜鹊古字典体</li><li>qpcyt.ttf： 巧拼超圆体</li><li>arial.ttf： 仅支持英文</li><li>dinalternate.ttf： DIN Alternate Bold</li><li>helveticalt.ttf： Helvetica</li><li>helveticains.ttf： Helvetica Inserat</li><li>trajanpro.ttf： TrajanPro-Bold</li><li>korean.ttf： 韩语</li><li>japanese.ttf： 日语</li><li>thai.ttf： 泰语</li><li>roboto.ttf： Roboto</li><li>notosans.ttf： NotoSans</li><li>notosansthai.ttf： 泰语NotoSansThai</li><li>sarabun.ttf： 泰语Sarabun</li><li>kanit.ttf： 泰语Kanit</li><li>charmonman.ttf： 泰语Charmonman</li><li>notonaskharabic.ttf： 阿拉伯语NotoNaskhArabic</li><li>notosansdevanagari.ttf： 印度语NotoSansDevanagari</li><li>notosanstc.ttf： 粤语思源黑体NotoSansTC</li><li>notosanskr.ttf： 韩语NotoSansKR</li><li>gothica1.ttf： 韩语GothicA1</li><li>nanummyeongjo.ttf： 韩语NanumMyeongjo</li><li>notosansjp.ttf： 日语NotoSansJP</li><li>notoserifjp.ttf： 日语NotoSerifJP</li><li>shipporimincho.ttf： 日语ShipporiMincho</li></ul><p>默认值：hei.ttf 黑体</p>
                     * @param _fontType <p>字体类型。</p><p>枚举值：</p><ul><li>hei.ttf： 黑体</li><li>song.ttf： 宋体</li><li>kai.ttf（推荐）或 simkai.ttf： 楷体</li><li>msyh.ttf： 微软雅黑</li><li>msyhbd.ttf： 微软雅黑加粗</li><li>hkjgt.ttf： 华康金刚体</li><li>dhttx.ttf： 典黑体特细</li><li>xqgdzt.ttf： 喜鹊古字典体</li><li>qpcyt.ttf： 巧拼超圆体</li><li>arial.ttf： 仅支持英文</li><li>dinalternate.ttf： DIN Alternate Bold</li><li>helveticalt.ttf： Helvetica</li><li>helveticains.ttf： Helvetica Inserat</li><li>trajanpro.ttf： TrajanPro-Bold</li><li>korean.ttf： 韩语</li><li>japanese.ttf： 日语</li><li>thai.ttf： 泰语</li><li>roboto.ttf： Roboto</li><li>notosans.ttf： NotoSans</li><li>notosansthai.ttf： 泰语NotoSansThai</li><li>sarabun.ttf： 泰语Sarabun</li><li>kanit.ttf： 泰语Kanit</li><li>charmonman.ttf： 泰语Charmonman</li><li>notonaskharabic.ttf： 阿拉伯语NotoNaskhArabic</li><li>notosansdevanagari.ttf： 印度语NotoSansDevanagari</li><li>notosanstc.ttf： 粤语思源黑体NotoSansTC</li><li>notosanskr.ttf： 韩语NotoSansKR</li><li>gothica1.ttf： 韩语GothicA1</li><li>nanummyeongjo.ttf： 韩语NanumMyeongjo</li><li>notosansjp.ttf： 日语NotoSansJP</li><li>notoserifjp.ttf： 日语NotoSerifJP</li><li>shipporimincho.ttf： 日语ShipporiMincho</li></ul><p>默认值：hei.ttf 黑体</p>
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
                     * 获取<p>字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：(0,4096]。</li><li>百分比：N%，N范围：(0,100]；例如，10%表示字幕字体大小=10%*源视频高度。不填且字幕文件中无设置时，默认源视频高度的5%。</li></ul>
                     * @return FontSize <p>字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：(0,4096]。</li><li>百分比：N%，N范围：(0,100]；例如，10%表示字幕字体大小=10%*源视频高度。不填且字幕文件中无设置时，默认源视频高度的5%。</li></ul>
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置<p>字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：(0,4096]。</li><li>百分比：N%，N范围：(0,100]；例如，10%表示字幕字体大小=10%*源视频高度。不填且字幕文件中无设置时，默认源视频高度的5%。</li></ul>
                     * @param _fontSize <p>字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：(0,4096]。</li><li>百分比：N%，N范围：(0,100]；例如，10%表示字幕字体大小=10%*源视频高度。不填且字幕文件中无设置时，默认源视频高度的5%。</li></ul>
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
                     * 获取<p>字体颜色，格式：0xRRGGBB。</p><p>默认值：0xFFFFFF（白色）。</p>
                     * @return FontColor <p>字体颜色，格式：0xRRGGBB。</p><p>默认值：0xFFFFFF（白色）。</p>
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置<p>字体颜色，格式：0xRRGGBB。</p><p>默认值：0xFFFFFF（白色）。</p>
                     * @param _fontColor <p>字体颜色，格式：0xRRGGBB。</p><p>默认值：0xFFFFFF（白色）。</p>
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
                     * 获取<p>文字透明度。取值范围：(0, 1]。</p><ul><li>0：完全透明；</li><li>1：完全不透明</li></ul><p>默认值：1</p>
                     * @return FontAlpha <p>文字透明度。取值范围：(0, 1]。</p><ul><li>0：完全透明；</li><li>1：完全不透明</li></ul><p>默认值：1</p>
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置<p>文字透明度。取值范围：(0, 1]。</p><ul><li>0：完全透明；</li><li>1：完全不透明</li></ul><p>默认值：1</p>
                     * @param _fontAlpha <p>文字透明度。取值范围：(0, 1]。</p><ul><li>0：完全透明；</li><li>1：完全不透明</li></ul><p>默认值：1</p>
                     * 
                     */
                    void SetFontAlpha(const double& _fontAlpha);

                    /**
                     * 判断参数 FontAlpha 是否已赋值
                     * @return FontAlpha 是否已赋值
                     * 
                     */
                    bool FontAlphaHasBeenSet() const;

                    /**
                     * 获取<p>字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分比：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%<em>源视频高度。默认值：源视频高度</em>4%。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * @return YPos <p>字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分比：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%<em>源视频高度。默认值：源视频高度</em>4%。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置<p>字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分比：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%<em>源视频高度。默认值：源视频高度</em>4%。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * @param _yPos <p>字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分比：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%<em>源视频高度。默认值：源视频高度</em>4%。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取<p>字幕背景底板的y轴坐标位置；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分比：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。不传表示不开启字幕背景底板。<br>注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * @return BoardY <p>字幕背景底板的y轴坐标位置；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分比：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。不传表示不开启字幕背景底板。<br>注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * 
                     */
                    std::string GetBoardY() const;

                    /**
                     * 设置<p>字幕背景底板的y轴坐标位置；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分比：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。不传表示不开启字幕背景底板。<br>注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * @param _boardY <p>字幕背景底板的y轴坐标位置；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分比：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。不传表示不开启字幕背景底板。<br>注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * 
                     */
                    void SetBoardY(const std::string& _boardY);

                    /**
                     * 判断参数 BoardY 是否已赋值
                     * @return BoardY 是否已赋值
                     * 
                     */
                    bool BoardYHasBeenSet() const;

                    /**
                     * 获取<p>底板的宽度，正整数。</p><ul><li>像素：Npx，N 取值范围：[0,4096]。</li><li>百分比：N%，N 取值范围：[0, 100]。开启底板且不填此值时，默认源视频宽像素的90%。</li></ul>
                     * @return BoardWidth <p>底板的宽度，正整数。</p><ul><li>像素：Npx，N 取值范围：[0,4096]。</li><li>百分比：N%，N 取值范围：[0, 100]。开启底板且不填此值时，默认源视频宽像素的90%。</li></ul>
                     * 
                     */
                    std::string GetBoardWidth() const;

                    /**
                     * 设置<p>底板的宽度，正整数。</p><ul><li>像素：Npx，N 取值范围：[0,4096]。</li><li>百分比：N%，N 取值范围：[0, 100]。开启底板且不填此值时，默认源视频宽像素的90%。</li></ul>
                     * @param _boardWidth <p>底板的宽度，正整数。</p><ul><li>像素：Npx，N 取值范围：[0,4096]。</li><li>百分比：N%，N 取值范围：[0, 100]。开启底板且不填此值时，默认源视频宽像素的90%。</li></ul>
                     * 
                     */
                    void SetBoardWidth(const std::string& _boardWidth);

                    /**
                     * 判断参数 BoardWidth 是否已赋值
                     * @return BoardWidth 是否已赋值
                     * 
                     */
                    bool BoardWidthHasBeenSet() const;

                    /**
                     * 获取<p>底板的高度，正整数。</p><ul><li>像素：Npx，N 取值范围：[0,4096]。</li><li>百分比：N%，N 取值范围：[0, 100]。开启底板且不填此值时，默认为源视频高像素的15%。</li></ul>
                     * @return BoardHeight <p>底板的高度，正整数。</p><ul><li>像素：Npx，N 取值范围：[0,4096]。</li><li>百分比：N%，N 取值范围：[0, 100]。开启底板且不填此值时，默认为源视频高像素的15%。</li></ul>
                     * 
                     */
                    std::string GetBoardHeight() const;

                    /**
                     * 设置<p>底板的高度，正整数。</p><ul><li>像素：Npx，N 取值范围：[0,4096]。</li><li>百分比：N%，N 取值范围：[0, 100]。开启底板且不填此值时，默认为源视频高像素的15%。</li></ul>
                     * @param _boardHeight <p>底板的高度，正整数。</p><ul><li>像素：Npx，N 取值范围：[0,4096]。</li><li>百分比：N%，N 取值范围：[0, 100]。开启底板且不填此值时，默认为源视频高像素的15%。</li></ul>
                     * 
                     */
                    void SetBoardHeight(const std::string& _boardHeight);

                    /**
                     * 判断参数 BoardHeight 是否已赋值
                     * @return BoardHeight 是否已赋值
                     * 
                     */
                    bool BoardHeightHasBeenSet() const;

                    /**
                     * 获取<p>底板颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色）。</p>
                     * @return BoardColor <p>底板颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色）。</p>
                     * 
                     */
                    std::string GetBoardColor() const;

                    /**
                     * 设置<p>底板颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色）。</p>
                     * @param _boardColor <p>底板颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色）。</p>
                     * 
                     */
                    void SetBoardColor(const std::string& _boardColor);

                    /**
                     * 判断参数 BoardColor 是否已赋值
                     * @return BoardColor 是否已赋值
                     * 
                     */
                    bool BoardColorHasBeenSet() const;

                    /**
                     * 获取<p>字幕背景板透明度，取值范围：[0, 1]。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：0.8。</p>
                     * @return BoardAlpha <p>字幕背景板透明度，取值范围：[0, 1]。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：0.8。</p>
                     * 
                     */
                    double GetBoardAlpha() const;

                    /**
                     * 设置<p>字幕背景板透明度，取值范围：[0, 1]。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：0.8。</p>
                     * @param _boardAlpha <p>字幕背景板透明度，取值范围：[0, 1]。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：0.8。</p>
                     * 
                     */
                    void SetBoardAlpha(const double& _boardAlpha);

                    /**
                     * 判断参数 BoardAlpha 是否已赋值
                     * @return BoardAlpha 是否已赋值
                     * 
                     */
                    bool BoardAlphaHasBeenSet() const;

                    /**
                     * 获取<p>对齐方式。</p><p>枚举值：</p><ul><li>top： 顶部对齐，字幕顶部按位置固定，底部随行数变化。 </li><li>bottom： 底部对齐，字幕底部按位置固定，顶部随行数变化。 </li></ul><p>默认值：bottom</p>
                     * @return Alignment <p>对齐方式。</p><p>枚举值：</p><ul><li>top： 顶部对齐，字幕顶部按位置固定，底部随行数变化。 </li><li>bottom： 底部对齐，字幕底部按位置固定，顶部随行数变化。 </li></ul><p>默认值：bottom</p>
                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置<p>对齐方式。</p><p>枚举值：</p><ul><li>top： 顶部对齐，字幕顶部按位置固定，底部随行数变化。 </li><li>bottom： 底部对齐，字幕底部按位置固定，顶部随行数变化。 </li></ul><p>默认值：bottom</p>
                     * @param _alignment <p>对齐方式。</p><p>枚举值：</p><ul><li>top： 顶部对齐，字幕顶部按位置固定，底部随行数变化。 </li><li>bottom： 底部对齐，字幕底部按位置固定，顶部随行数变化。 </li></ul><p>默认值：bottom</p>
                     * 
                     */
                    void SetAlignment(const std::string& _alignment);

                    /**
                     * 判断参数 Alignment 是否已赋值
                     * @return Alignment 是否已赋值
                     * 
                     */
                    bool AlignmentHasBeenSet() const;

                    /**
                     * 获取<p>描边宽度。浮点数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。</li></ul><p>不填默认源视频高度的0.3%。</p>
                     * @return OutlineWidth <p>描边宽度。浮点数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。</li></ul><p>不填默认源视频高度的0.3%。</p>
                     * 
                     */
                    std::string GetOutlineWidth() const;

                    /**
                     * 设置<p>描边宽度。浮点数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。</li></ul><p>不填默认源视频高度的0.3%。</p>
                     * @param _outlineWidth <p>描边宽度。浮点数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。</li></ul><p>不填默认源视频高度的0.3%。</p>
                     * 
                     */
                    void SetOutlineWidth(const std::string& _outlineWidth);

                    /**
                     * 判断参数 OutlineWidth 是否已赋值
                     * @return OutlineWidth 是否已赋值
                     * 
                     */
                    bool OutlineWidthHasBeenSet() const;

                    /**
                     * 获取<p>描边颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色）。</p>
                     * @return OutlineColor <p>描边颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色）。</p>
                     * 
                     */
                    std::string GetOutlineColor() const;

                    /**
                     * 设置<p>描边颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色）。</p>
                     * @param _outlineColor <p>描边颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色）。</p>
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
                     * 获取<p>描边透明度。(0，1] 正浮点数。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：1</p>
                     * @return OutlineAlpha <p>描边透明度。(0，1] 正浮点数。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：1</p>
                     * 
                     */
                    double GetOutlineAlpha() const;

                    /**
                     * 设置<p>描边透明度。(0，1] 正浮点数。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：1</p>
                     * @param _outlineAlpha <p>描边透明度。(0，1] 正浮点数。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：1</p>
                     * 
                     */
                    void SetOutlineAlpha(const double& _outlineAlpha);

                    /**
                     * 判断参数 OutlineAlpha 是否已赋值
                     * @return OutlineAlpha 是否已赋值
                     * 
                     */
                    bool OutlineAlphaHasBeenSet() const;

                    /**
                     * 获取<p>阴影宽度。浮点数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。不填默认无阴影。</li></ul>
                     * @return ShadowWidth <p>阴影宽度。浮点数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。不填默认无阴影。</li></ul>
                     * 
                     */
                    std::string GetShadowWidth() const;

                    /**
                     * 设置<p>阴影宽度。浮点数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。不填默认无阴影。</li></ul>
                     * @param _shadowWidth <p>阴影宽度。浮点数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。不填默认无阴影。</li></ul>
                     * 
                     */
                    void SetShadowWidth(const std::string& _shadowWidth);

                    /**
                     * 判断参数 ShadowWidth 是否已赋值
                     * @return ShadowWidth 是否已赋值
                     * 
                     */
                    bool ShadowWidthHasBeenSet() const;

                    /**
                     * 获取<p>阴影颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色），有设置阴影的情况下。</p>
                     * @return ShadowColor <p>阴影颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色），有设置阴影的情况下。</p>
                     * 
                     */
                    std::string GetShadowColor() const;

                    /**
                     * 设置<p>阴影颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色），有设置阴影的情况下。</p>
                     * @param _shadowColor <p>阴影颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色），有设置阴影的情况下。</p>
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
                     * 获取<p>阴影透明度。(0，1] 正浮点数。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：1，完全不透明，有设置阴影的情况下。</p>
                     * @return ShadowAlpha <p>阴影透明度。(0，1] 正浮点数。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：1，完全不透明，有设置阴影的情况下。</p>
                     * 
                     */
                    double GetShadowAlpha() const;

                    /**
                     * 设置<p>阴影透明度。(0，1] 正浮点数。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：1，完全不透明，有设置阴影的情况下。</p>
                     * @param _shadowAlpha <p>阴影透明度。(0，1] 正浮点数。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：1，完全不透明，有设置阴影的情况下。</p>
                     * 
                     */
                    void SetShadowAlpha(const double& _shadowAlpha);

                    /**
                     * 判断参数 ShadowAlpha 是否已赋值
                     * @return ShadowAlpha 是否已赋值
                     * 
                     */
                    bool ShadowAlphaHasBeenSet() const;

                    /**
                     * 获取<p>行间距。正整数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。</li></ul><p>默认值：0</p>
                     * @return LineSpacing <p>行间距。正整数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。</li></ul><p>默认值：0</p>
                     * 
                     */
                    std::string GetLineSpacing() const;

                    /**
                     * 设置<p>行间距。正整数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。</li></ul><p>默认值：0</p>
                     * @param _lineSpacing <p>行间距。正整数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetLineSpacing(const std::string& _lineSpacing);

                    /**
                     * 判断参数 LineSpacing 是否已赋值
                     * @return LineSpacing 是否已赋值
                     * 
                     */
                    bool LineSpacingHasBeenSet() const;

                private:

                    /**
                     * <p>字幕 ID。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>字体类型。</p><p>枚举值：</p><ul><li>hei.ttf： 黑体</li><li>song.ttf： 宋体</li><li>kai.ttf（推荐）或 simkai.ttf： 楷体</li><li>msyh.ttf： 微软雅黑</li><li>msyhbd.ttf： 微软雅黑加粗</li><li>hkjgt.ttf： 华康金刚体</li><li>dhttx.ttf： 典黑体特细</li><li>xqgdzt.ttf： 喜鹊古字典体</li><li>qpcyt.ttf： 巧拼超圆体</li><li>arial.ttf： 仅支持英文</li><li>dinalternate.ttf： DIN Alternate Bold</li><li>helveticalt.ttf： Helvetica</li><li>helveticains.ttf： Helvetica Inserat</li><li>trajanpro.ttf： TrajanPro-Bold</li><li>korean.ttf： 韩语</li><li>japanese.ttf： 日语</li><li>thai.ttf： 泰语</li><li>roboto.ttf： Roboto</li><li>notosans.ttf： NotoSans</li><li>notosansthai.ttf： 泰语NotoSansThai</li><li>sarabun.ttf： 泰语Sarabun</li><li>kanit.ttf： 泰语Kanit</li><li>charmonman.ttf： 泰语Charmonman</li><li>notonaskharabic.ttf： 阿拉伯语NotoNaskhArabic</li><li>notosansdevanagari.ttf： 印度语NotoSansDevanagari</li><li>notosanstc.ttf： 粤语思源黑体NotoSansTC</li><li>notosanskr.ttf： 韩语NotoSansKR</li><li>gothica1.ttf： 韩语GothicA1</li><li>nanummyeongjo.ttf： 韩语NanumMyeongjo</li><li>notosansjp.ttf： 日语NotoSansJP</li><li>notoserifjp.ttf： 日语NotoSerifJP</li><li>shipporimincho.ttf： 日语ShipporiMincho</li></ul><p>默认值：hei.ttf 黑体</p>
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * <p>字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：(0,4096]。</li><li>百分比：N%，N范围：(0,100]；例如，10%表示字幕字体大小=10%*源视频高度。不填且字幕文件中无设置时，默认源视频高度的5%。</li></ul>
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * <p>字体颜色，格式：0xRRGGBB。</p><p>默认值：0xFFFFFF（白色）。</p>
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * <p>文字透明度。取值范围：(0, 1]。</p><ul><li>0：完全透明；</li><li>1：完全不透明</li></ul><p>默认值：1</p>
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                    /**
                     * <p>字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分比：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%<em>源视频高度。默认值：源视频高度</em>4%。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * <p>字幕背景底板的y轴坐标位置；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分比：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。不传表示不开启字幕背景底板。<br>注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     */
                    std::string m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * <p>底板的宽度，正整数。</p><ul><li>像素：Npx，N 取值范围：[0,4096]。</li><li>百分比：N%，N 取值范围：[0, 100]。开启底板且不填此值时，默认源视频宽像素的90%。</li></ul>
                     */
                    std::string m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * <p>底板的高度，正整数。</p><ul><li>像素：Npx，N 取值范围：[0,4096]。</li><li>百分比：N%，N 取值范围：[0, 100]。开启底板且不填此值时，默认为源视频高像素的15%。</li></ul>
                     */
                    std::string m_boardHeight;
                    bool m_boardHeightHasBeenSet;

                    /**
                     * <p>底板颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色）。</p>
                     */
                    std::string m_boardColor;
                    bool m_boardColorHasBeenSet;

                    /**
                     * <p>字幕背景板透明度，取值范围：[0, 1]。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：0.8。</p>
                     */
                    double m_boardAlpha;
                    bool m_boardAlphaHasBeenSet;

                    /**
                     * <p>对齐方式。</p><p>枚举值：</p><ul><li>top： 顶部对齐，字幕顶部按位置固定，底部随行数变化。 </li><li>bottom： 底部对齐，字幕底部按位置固定，顶部随行数变化。 </li></ul><p>默认值：bottom</p>
                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                    /**
                     * <p>描边宽度。浮点数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。</li></ul><p>不填默认源视频高度的0.3%。</p>
                     */
                    std::string m_outlineWidth;
                    bool m_outlineWidthHasBeenSet;

                    /**
                     * <p>描边颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色）。</p>
                     */
                    std::string m_outlineColor;
                    bool m_outlineColorHasBeenSet;

                    /**
                     * <p>描边透明度。(0，1] 正浮点数。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：1</p>
                     */
                    double m_outlineAlpha;
                    bool m_outlineAlphaHasBeenSet;

                    /**
                     * <p>阴影宽度。浮点数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。不填默认无阴影。</li></ul>
                     */
                    std::string m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * <p>阴影颜色。格式：0xRRGGBB。</p><p>默认值：0x000000（黑色），有设置阴影的情况下。</p>
                     */
                    std::string m_shadowColor;
                    bool m_shadowColorHasBeenSet;

                    /**
                     * <p>阴影透明度。(0，1] 正浮点数。</p><ul><li>0：完全透明；</li><li>1：完全不透明。</li></ul><p>默认值：1，完全不透明，有设置阴影的情况下。</p>
                     */
                    double m_shadowAlpha;
                    bool m_shadowAlphaHasBeenSet;

                    /**
                     * <p>行间距。正整数。</p><ul><li>像素：Npx，N 取值范围： [0, 1000]。</li><li>百分比：N%，N 取值范围：[0, 100]。</li></ul><p>默认值：0</p>
                     */
                    std::string m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEINFOINPUT_H_
