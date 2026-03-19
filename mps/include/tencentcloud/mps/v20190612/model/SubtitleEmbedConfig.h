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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEEMBEDCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEEMBEDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CosInputInfo.h>
#include <tencentcloud/mps/v20190612/model/SubtitleBoardConfig.h>
#include <tencentcloud/mps/v20190612/model/SubtitleLayoutConfig.h>
#include <tencentcloud/mps/v20190612/model/SubtitleOutlineConfig.h>
#include <tencentcloud/mps/v20190612/model/SubtitleShadowConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 字幕压制模块配置
                */
                class SubtitleEmbedConfig : public AbstractModel
                {
                public:
                    SubtitleEmbedConfig();
                    ~SubtitleEmbedConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字体类型，支持：</p><li>hei.ttf：黑体</li><li>song.ttf：宋体</li><li>kai.ttf（推荐）或 simkai.ttf：楷体</li><li>msyh.ttf：微软雅黑</li><li>msyhbd.ttf：微软雅黑加粗</li><li>hkjgt.ttf：华康金刚体</li><li>dhttx.ttf：典黑体特细</li><li>xqgdzt.ttf：喜鹊古字典体</li><li>qpcyt.ttf：巧拼超圆体</li><li>arial.ttf：仅支持英文</li><li>dinalternate.ttf：DIN Alternate Bold</li><li>helveticalt.ttf：Helvetica</li><li>helveticains.ttf：Helvetica Inserat</li><li>trajanpro.ttf：TrajanPro-Bold</li><li>korean.ttf：韩语</li><li>japanese.ttf：日语</li><li>thai.ttf：泰语</li><li>roboto.ttf：Roboto</li><li>notosans.ttf：NotoSans</li><li>notosansthai.ttf：泰语NotoSansThai</li><li>sarabun.ttf：泰语Sarabun</li><li>kanit.ttf：泰语Kanit</li><li>charmonman.ttf：泰语Charmonman</li><li>notonaskharabic.ttf：阿拉伯语NotoNaskhArabic</li><li>notosansdevanagari.ttf：印度语NotoSansDevanagari</li><li>notosanstc.ttf：粤语思源黑体NotoSansTC</li><li>notosanskr.ttf：韩语NotoSansKR</li><li>gothica1.ttf：韩语GothicA1</li><li>nanummyeongjo.ttf：韩语NanumMyeongjo</li><li>notosansjp.ttf：日语NotoSansJP</li><li>notoserifjp.ttf：日语NotoSerifJP</li><li>shipporimincho.ttf：日语ShipporiMincho</li>默认：hei.ttf 黑体。<br>注意：<li>楷体推荐使用kai.ttf</li><li>填了FontPath时FontPath优先</li>
                     * @return FontType <p>字体类型，支持：</p><li>hei.ttf：黑体</li><li>song.ttf：宋体</li><li>kai.ttf（推荐）或 simkai.ttf：楷体</li><li>msyh.ttf：微软雅黑</li><li>msyhbd.ttf：微软雅黑加粗</li><li>hkjgt.ttf：华康金刚体</li><li>dhttx.ttf：典黑体特细</li><li>xqgdzt.ttf：喜鹊古字典体</li><li>qpcyt.ttf：巧拼超圆体</li><li>arial.ttf：仅支持英文</li><li>dinalternate.ttf：DIN Alternate Bold</li><li>helveticalt.ttf：Helvetica</li><li>helveticains.ttf：Helvetica Inserat</li><li>trajanpro.ttf：TrajanPro-Bold</li><li>korean.ttf：韩语</li><li>japanese.ttf：日语</li><li>thai.ttf：泰语</li><li>roboto.ttf：Roboto</li><li>notosans.ttf：NotoSans</li><li>notosansthai.ttf：泰语NotoSansThai</li><li>sarabun.ttf：泰语Sarabun</li><li>kanit.ttf：泰语Kanit</li><li>charmonman.ttf：泰语Charmonman</li><li>notonaskharabic.ttf：阿拉伯语NotoNaskhArabic</li><li>notosansdevanagari.ttf：印度语NotoSansDevanagari</li><li>notosanstc.ttf：粤语思源黑体NotoSansTC</li><li>notosanskr.ttf：韩语NotoSansKR</li><li>gothica1.ttf：韩语GothicA1</li><li>nanummyeongjo.ttf：韩语NanumMyeongjo</li><li>notosansjp.ttf：日语NotoSansJP</li><li>notoserifjp.ttf：日语NotoSerifJP</li><li>shipporimincho.ttf：日语ShipporiMincho</li>默认：hei.ttf 黑体。<br>注意：<li>楷体推荐使用kai.ttf</li><li>填了FontPath时FontPath优先</li>
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置<p>字体类型，支持：</p><li>hei.ttf：黑体</li><li>song.ttf：宋体</li><li>kai.ttf（推荐）或 simkai.ttf：楷体</li><li>msyh.ttf：微软雅黑</li><li>msyhbd.ttf：微软雅黑加粗</li><li>hkjgt.ttf：华康金刚体</li><li>dhttx.ttf：典黑体特细</li><li>xqgdzt.ttf：喜鹊古字典体</li><li>qpcyt.ttf：巧拼超圆体</li><li>arial.ttf：仅支持英文</li><li>dinalternate.ttf：DIN Alternate Bold</li><li>helveticalt.ttf：Helvetica</li><li>helveticains.ttf：Helvetica Inserat</li><li>trajanpro.ttf：TrajanPro-Bold</li><li>korean.ttf：韩语</li><li>japanese.ttf：日语</li><li>thai.ttf：泰语</li><li>roboto.ttf：Roboto</li><li>notosans.ttf：NotoSans</li><li>notosansthai.ttf：泰语NotoSansThai</li><li>sarabun.ttf：泰语Sarabun</li><li>kanit.ttf：泰语Kanit</li><li>charmonman.ttf：泰语Charmonman</li><li>notonaskharabic.ttf：阿拉伯语NotoNaskhArabic</li><li>notosansdevanagari.ttf：印度语NotoSansDevanagari</li><li>notosanstc.ttf：粤语思源黑体NotoSansTC</li><li>notosanskr.ttf：韩语NotoSansKR</li><li>gothica1.ttf：韩语GothicA1</li><li>nanummyeongjo.ttf：韩语NanumMyeongjo</li><li>notosansjp.ttf：日语NotoSansJP</li><li>notoserifjp.ttf：日语NotoSerifJP</li><li>shipporimincho.ttf：日语ShipporiMincho</li>默认：hei.ttf 黑体。<br>注意：<li>楷体推荐使用kai.ttf</li><li>填了FontPath时FontPath优先</li>
                     * @param _fontType <p>字体类型，支持：</p><li>hei.ttf：黑体</li><li>song.ttf：宋体</li><li>kai.ttf（推荐）或 simkai.ttf：楷体</li><li>msyh.ttf：微软雅黑</li><li>msyhbd.ttf：微软雅黑加粗</li><li>hkjgt.ttf：华康金刚体</li><li>dhttx.ttf：典黑体特细</li><li>xqgdzt.ttf：喜鹊古字典体</li><li>qpcyt.ttf：巧拼超圆体</li><li>arial.ttf：仅支持英文</li><li>dinalternate.ttf：DIN Alternate Bold</li><li>helveticalt.ttf：Helvetica</li><li>helveticains.ttf：Helvetica Inserat</li><li>trajanpro.ttf：TrajanPro-Bold</li><li>korean.ttf：韩语</li><li>japanese.ttf：日语</li><li>thai.ttf：泰语</li><li>roboto.ttf：Roboto</li><li>notosans.ttf：NotoSans</li><li>notosansthai.ttf：泰语NotoSansThai</li><li>sarabun.ttf：泰语Sarabun</li><li>kanit.ttf：泰语Kanit</li><li>charmonman.ttf：泰语Charmonman</li><li>notonaskharabic.ttf：阿拉伯语NotoNaskhArabic</li><li>notosansdevanagari.ttf：印度语NotoSansDevanagari</li><li>notosanstc.ttf：粤语思源黑体NotoSansTC</li><li>notosanskr.ttf：韩语NotoSansKR</li><li>gothica1.ttf：韩语GothicA1</li><li>nanummyeongjo.ttf：韩语NanumMyeongjo</li><li>notosansjp.ttf：日语NotoSansJP</li><li>notoserifjp.ttf：日语NotoSerifJP</li><li>shipporimincho.ttf：日语ShipporiMincho</li>默认：hei.ttf 黑体。<br>注意：<li>楷体推荐使用kai.ttf</li><li>填了FontPath时FontPath优先</li>
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
                     * 获取<p>自定义字体文件url地址，和CosInputInfo二选一</p>
                     * @return FontPath <p>自定义字体文件url地址，和CosInputInfo二选一</p>
                     * 
                     */
                    std::string GetFontPath() const;

                    /**
                     * 设置<p>自定义字体文件url地址，和CosInputInfo二选一</p>
                     * @param _fontPath <p>自定义字体文件url地址，和CosInputInfo二选一</p>
                     * 
                     */
                    void SetFontPath(const std::string& _fontPath);

                    /**
                     * 判断参数 FontPath 是否已赋值
                     * @return FontPath 是否已赋值
                     * 
                     */
                    bool FontPathHasBeenSet() const;

                    /**
                     * 获取<p>自定义字体文件cos地址</p>
                     * @return CosInputInfo <p>自定义字体文件cos地址</p>
                     * 
                     */
                    CosInputInfo GetCosInputInfo() const;

                    /**
                     * 设置<p>自定义字体文件cos地址</p>
                     * @param _cosInputInfo <p>自定义字体文件cos地址</p>
                     * 
                     */
                    void SetCosInputInfo(const CosInputInfo& _cosInputInfo);

                    /**
                     * 判断参数 CosInputInfo 是否已赋值
                     * @return CosInputInfo 是否已赋值
                     * 
                     */
                    bool CosInputInfoHasBeenSet() const;

                    /**
                     * 获取<p>字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：(0,4096]。</li><li>百分百：N%，N范围：(0,100]；例如10%表示字幕字体大小=10%*源视频高度。</li></ul><p>不填且字幕文件无设置时，默认源视频高度的5%。</p>
                     * @return FontSize <p>字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：(0,4096]。</li><li>百分百：N%，N范围：(0,100]；例如10%表示字幕字体大小=10%*源视频高度。</li></ul><p>不填且字幕文件无设置时，默认源视频高度的5%。</p>
                     * 
                     */
                    int64_t GetFontSize() const;

                    /**
                     * 设置<p>字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：(0,4096]。</li><li>百分百：N%，N范围：(0,100]；例如10%表示字幕字体大小=10%*源视频高度。</li></ul><p>不填且字幕文件无设置时，默认源视频高度的5%。</p>
                     * @param _fontSize <p>字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：(0,4096]。</li><li>百分百：N%，N范围：(0,100]；例如10%表示字幕字体大小=10%*源视频高度。</li></ul><p>不填且字幕文件无设置时，默认源视频高度的5%。</p>
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
                     * 获取<p>FontSize单位, 0 像素，1百分比，默认为0，像素</p>
                     * @return FontSizeUnit <p>FontSize单位, 0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    int64_t GetFontSizeUnit() const;

                    /**
                     * 设置<p>FontSize单位, 0 像素，1百分比，默认为0，像素</p>
                     * @param _fontSizeUnit <p>FontSize单位, 0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    void SetFontSizeUnit(const int64_t& _fontSizeUnit);

                    /**
                     * 判断参数 FontSizeUnit 是否已赋值
                     * @return FontSizeUnit 是否已赋值
                     * 
                     */
                    bool FontSizeUnitHasBeenSet() const;

                    /**
                     * 获取<p>字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。</p>
                     * @return FontColor <p>字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。</p>
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置<p>字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。</p>
                     * @param _fontColor <p>字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。</p>
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
                     * 获取<p>文字透明度，取值范围：(0, 1]</p><li>0：完全透明</li><li>1：完全不透明</li>默认值：1。
                     * @return FontAlpha <p>文字透明度，取值范围：(0, 1]</p><li>0：完全透明</li><li>1：完全不透明</li>默认值：1。
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置<p>文字透明度，取值范围：(0, 1]</p><li>0：完全透明</li><li>1：完全不透明</li>默认值：1。
                     * @param _fontAlpha <p>文字透明度，取值范围：(0, 1]</p><li>0：完全透明</li><li>1：完全不透明</li>默认值：1。
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
                     * 获取<p>字幕x轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[-4096,4096]。</li><li>百分百：N%，N范围：[-100,100]；例如10%表示字幕x坐标=10%*源视频宽度。</li></ul><p>默认值：0px。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @return PosX <p>字幕x轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[-4096,4096]。</li><li>百分百：N%，N范围：[-100,100]；例如10%表示字幕x坐标=10%*源视频宽度。</li></ul><p>默认值：0px。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * 
                     */
                    int64_t GetPosX() const;

                    /**
                     * 设置<p>字幕x轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[-4096,4096]。</li><li>百分百：N%，N范围：[-100,100]；例如10%表示字幕x坐标=10%*源视频宽度。</li></ul><p>默认值：0px。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @param _posX <p>字幕x轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[-4096,4096]。</li><li>百分百：N%，N范围：[-100,100]；例如10%表示字幕x坐标=10%*源视频宽度。</li></ul><p>默认值：0px。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
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
                     * 获取<p>PosX单位, 0 像素，1百分比，默认为0，像素</p>
                     * @return PosXUnit <p>PosX单位, 0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    int64_t GetPosXUnit() const;

                    /**
                     * 设置<p>PosX单位, 0 像素，1百分比，默认为0，像素</p>
                     * @param _posXUnit <p>PosX单位, 0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    void SetPosXUnit(const int64_t& _posXUnit);

                    /**
                     * 判断参数 PosXUnit 是否已赋值
                     * @return PosXUnit 是否已赋值
                     * 
                     */
                    bool PosXUnitHasBeenSet() const;

                    /**
                     * 获取<p>字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分百：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%*源视频高度。</li></ul><p>默认值：源视频高度*4%。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @return PosY <p>字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分百：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%*源视频高度。</li></ul><p>默认值：源视频高度*4%。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * 
                     */
                    int64_t GetPosY() const;

                    /**
                     * 设置<p>字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分百：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%*源视频高度。</li></ul><p>默认值：源视频高度*4%。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @param _posY <p>字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分百：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%*源视频高度。</li></ul><p>默认值：源视频高度*4%。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
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
                     * 获取<p>PosY单位, 0 像素，1百分比，默认为0，像素</p>
                     * @return PosYUnit <p>PosY单位, 0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    int64_t GetPosYUnit() const;

                    /**
                     * 设置<p>PosY单位, 0 像素，1百分比，默认为0，像素</p>
                     * @param _posYUnit <p>PosY单位, 0 像素，1百分比，默认为0，像素</p>
                     * 
                     */
                    void SetPosYUnit(const int64_t& _posYUnit);

                    /**
                     * 判断参数 PosYUnit 是否已赋值
                     * @return PosYUnit 是否已赋值
                     * 
                     */
                    bool PosYUnitHasBeenSet() const;

                    /**
                     * 获取<p>背景配置</p>
                     * @return SubtitleBoardConfig <p>背景配置</p>
                     * 
                     */
                    SubtitleBoardConfig GetSubtitleBoardConfig() const;

                    /**
                     * 设置<p>背景配置</p>
                     * @param _subtitleBoardConfig <p>背景配置</p>
                     * 
                     */
                    void SetSubtitleBoardConfig(const SubtitleBoardConfig& _subtitleBoardConfig);

                    /**
                     * 判断参数 SubtitleBoardConfig 是否已赋值
                     * @return SubtitleBoardConfig 是否已赋值
                     * 
                     */
                    bool SubtitleBoardConfigHasBeenSet() const;

                    /**
                     * 获取<p>排列配置</p>
                     * @return SubtitleLayoutConfig <p>排列配置</p>
                     * 
                     */
                    SubtitleLayoutConfig GetSubtitleLayoutConfig() const;

                    /**
                     * 设置<p>排列配置</p>
                     * @param _subtitleLayoutConfig <p>排列配置</p>
                     * 
                     */
                    void SetSubtitleLayoutConfig(const SubtitleLayoutConfig& _subtitleLayoutConfig);

                    /**
                     * 判断参数 SubtitleLayoutConfig 是否已赋值
                     * @return SubtitleLayoutConfig 是否已赋值
                     * 
                     */
                    bool SubtitleLayoutConfigHasBeenSet() const;

                    /**
                     * 获取<p>文字描边配置</p>
                     * @return SubtitleOutlineConfig <p>文字描边配置</p>
                     * 
                     */
                    SubtitleOutlineConfig GetSubtitleOutlineConfig() const;

                    /**
                     * 设置<p>文字描边配置</p>
                     * @param _subtitleOutlineConfig <p>文字描边配置</p>
                     * 
                     */
                    void SetSubtitleOutlineConfig(const SubtitleOutlineConfig& _subtitleOutlineConfig);

                    /**
                     * 判断参数 SubtitleOutlineConfig 是否已赋值
                     * @return SubtitleOutlineConfig 是否已赋值
                     * 
                     */
                    bool SubtitleOutlineConfigHasBeenSet() const;

                    /**
                     * 获取<p>文字阴影配置</p>
                     * @return SubtitleShadowConfig <p>文字阴影配置</p>
                     * 
                     */
                    SubtitleShadowConfig GetSubtitleShadowConfig() const;

                    /**
                     * 设置<p>文字阴影配置</p>
                     * @param _subtitleShadowConfig <p>文字阴影配置</p>
                     * 
                     */
                    void SetSubtitleShadowConfig(const SubtitleShadowConfig& _subtitleShadowConfig);

                    /**
                     * 判断参数 SubtitleShadowConfig 是否已赋值
                     * @return SubtitleShadowConfig 是否已赋值
                     * 
                     */
                    bool SubtitleShadowConfigHasBeenSet() const;

                    /**
                     * 获取<p>源视频尺寸的宽，单位像素值</p>
                     * @return SampleWidth <p>源视频尺寸的宽，单位像素值</p>
                     * 
                     */
                    int64_t GetSampleWidth() const;

                    /**
                     * 设置<p>源视频尺寸的宽，单位像素值</p>
                     * @param _sampleWidth <p>源视频尺寸的宽，单位像素值</p>
                     * 
                     */
                    void SetSampleWidth(const int64_t& _sampleWidth);

                    /**
                     * 判断参数 SampleWidth 是否已赋值
                     * @return SampleWidth 是否已赋值
                     * 
                     */
                    bool SampleWidthHasBeenSet() const;

                    /**
                     * 获取<p>源视频尺寸的高，单位像素值</p>
                     * @return SampleHeight <p>源视频尺寸的高，单位像素值</p>
                     * 
                     */
                    int64_t GetSampleHeight() const;

                    /**
                     * 设置<p>源视频尺寸的高，单位像素值</p>
                     * @param _sampleHeight <p>源视频尺寸的高，单位像素值</p>
                     * 
                     */
                    void SetSampleHeight(const int64_t& _sampleHeight);

                    /**
                     * 判断参数 SampleHeight 是否已赋值
                     * @return SampleHeight 是否已赋值
                     * 
                     */
                    bool SampleHeightHasBeenSet() const;

                private:

                    /**
                     * <p>字体类型，支持：</p><li>hei.ttf：黑体</li><li>song.ttf：宋体</li><li>kai.ttf（推荐）或 simkai.ttf：楷体</li><li>msyh.ttf：微软雅黑</li><li>msyhbd.ttf：微软雅黑加粗</li><li>hkjgt.ttf：华康金刚体</li><li>dhttx.ttf：典黑体特细</li><li>xqgdzt.ttf：喜鹊古字典体</li><li>qpcyt.ttf：巧拼超圆体</li><li>arial.ttf：仅支持英文</li><li>dinalternate.ttf：DIN Alternate Bold</li><li>helveticalt.ttf：Helvetica</li><li>helveticains.ttf：Helvetica Inserat</li><li>trajanpro.ttf：TrajanPro-Bold</li><li>korean.ttf：韩语</li><li>japanese.ttf：日语</li><li>thai.ttf：泰语</li><li>roboto.ttf：Roboto</li><li>notosans.ttf：NotoSans</li><li>notosansthai.ttf：泰语NotoSansThai</li><li>sarabun.ttf：泰语Sarabun</li><li>kanit.ttf：泰语Kanit</li><li>charmonman.ttf：泰语Charmonman</li><li>notonaskharabic.ttf：阿拉伯语NotoNaskhArabic</li><li>notosansdevanagari.ttf：印度语NotoSansDevanagari</li><li>notosanstc.ttf：粤语思源黑体NotoSansTC</li><li>notosanskr.ttf：韩语NotoSansKR</li><li>gothica1.ttf：韩语GothicA1</li><li>nanummyeongjo.ttf：韩语NanumMyeongjo</li><li>notosansjp.ttf：日语NotoSansJP</li><li>notoserifjp.ttf：日语NotoSerifJP</li><li>shipporimincho.ttf：日语ShipporiMincho</li>默认：hei.ttf 黑体。<br>注意：<li>楷体推荐使用kai.ttf</li><li>填了FontPath时FontPath优先</li>
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * <p>自定义字体文件url地址，和CosInputInfo二选一</p>
                     */
                    std::string m_fontPath;
                    bool m_fontPathHasBeenSet;

                    /**
                     * <p>自定义字体文件cos地址</p>
                     */
                    CosInputInfo m_cosInputInfo;
                    bool m_cosInputInfoHasBeenSet;

                    /**
                     * <p>字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：(0,4096]。</li><li>百分百：N%，N范围：(0,100]；例如10%表示字幕字体大小=10%*源视频高度。</li></ul><p>不填且字幕文件无设置时，默认源视频高度的5%。</p>
                     */
                    int64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * <p>FontSize单位, 0 像素，1百分比，默认为0，像素</p>
                     */
                    int64_t m_fontSizeUnit;
                    bool m_fontSizeUnitHasBeenSet;

                    /**
                     * <p>字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。</p>
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * <p>文字透明度，取值范围：(0, 1]</p><li>0：完全透明</li><li>1：完全不透明</li>默认值：1。
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                    /**
                     * <p>字幕x轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[-4096,4096]。</li><li>百分百：N%，N范围：[-100,100]；例如10%表示字幕x坐标=10%*源视频宽度。</li></ul><p>默认值：0px。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     */
                    int64_t m_posX;
                    bool m_posXHasBeenSet;

                    /**
                     * <p>PosX单位, 0 像素，1百分比，默认为0，像素</p>
                     */
                    int64_t m_posXUnit;
                    bool m_posXUnitHasBeenSet;

                    /**
                     * <p>字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：</p><ul><li>像素：Npx，N范围：[0,4096]。</li><li>百分百：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%*源视频高度。</li></ul><p>默认值：源视频高度*4%。<br>注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     */
                    int64_t m_posY;
                    bool m_posYHasBeenSet;

                    /**
                     * <p>PosY单位, 0 像素，1百分比，默认为0，像素</p>
                     */
                    int64_t m_posYUnit;
                    bool m_posYUnitHasBeenSet;

                    /**
                     * <p>背景配置</p>
                     */
                    SubtitleBoardConfig m_subtitleBoardConfig;
                    bool m_subtitleBoardConfigHasBeenSet;

                    /**
                     * <p>排列配置</p>
                     */
                    SubtitleLayoutConfig m_subtitleLayoutConfig;
                    bool m_subtitleLayoutConfigHasBeenSet;

                    /**
                     * <p>文字描边配置</p>
                     */
                    SubtitleOutlineConfig m_subtitleOutlineConfig;
                    bool m_subtitleOutlineConfigHasBeenSet;

                    /**
                     * <p>文字阴影配置</p>
                     */
                    SubtitleShadowConfig m_subtitleShadowConfig;
                    bool m_subtitleShadowConfigHasBeenSet;

                    /**
                     * <p>源视频尺寸的宽，单位像素值</p>
                     */
                    int64_t m_sampleWidth;
                    bool m_sampleWidthHasBeenSet;

                    /**
                     * <p>源视频尺寸的高，单位像素值</p>
                     */
                    int64_t m_sampleHeight;
                    bool m_sampleHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEEMBEDCONFIG_H_
