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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 字幕流配置参数。
                */
                class SubtitleTemplate : public AbstractModel
                {
                public:
                    SubtitleTemplate();
                    ~SubtitleTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取要压制到视频中的字幕文件地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 要压制到视频中的字幕文件地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置要压制到视频中的字幕文件地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 要压制到视频中的字幕文件地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取指定要压制到视频中的字幕轨道，Streamindex的取值从0开始，0表示使用源视频中的第一条字幕轨。如果指定了Path，则优先使用Path。Path 和 StreamIndex 至少指定一个。

- 注意：StreamIndex必须与源文件中的字幕轨索引一致。例如，源文件中的字幕轨为stream#0:3，则StreamIndex应为3，否则可能导致任务处理失败。


注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamIndex 指定要压制到视频中的字幕轨道，Streamindex的取值从0开始，0表示使用源视频中的第一条字幕轨。如果指定了Path，则优先使用Path。Path 和 StreamIndex 至少指定一个。

- 注意：StreamIndex必须与源文件中的字幕轨索引一致。例如，源文件中的字幕轨为stream#0:3，则StreamIndex应为3，否则可能导致任务处理失败。


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStreamIndex() const;

                    /**
                     * 设置指定要压制到视频中的字幕轨道，Streamindex的取值从0开始，0表示使用源视频中的第一条字幕轨。如果指定了Path，则优先使用Path。Path 和 StreamIndex 至少指定一个。

- 注意：StreamIndex必须与源文件中的字幕轨索引一致。例如，源文件中的字幕轨为stream#0:3，则StreamIndex应为3，否则可能导致任务处理失败。


注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streamIndex 指定要压制到视频中的字幕轨道，Streamindex的取值从0开始，0表示使用源视频中的第一条字幕轨。如果指定了Path，则优先使用Path。Path 和 StreamIndex 至少指定一个。

- 注意：StreamIndex必须与源文件中的字幕轨索引一致。例如，源文件中的字幕轨为stream#0:3，则StreamIndex应为3，否则可能导致任务处理失败。


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStreamIndex(const int64_t& _streamIndex);

                    /**
                     * 判断参数 StreamIndex 是否已赋值
                     * @return StreamIndex 是否已赋值
                     * 
                     */
                    bool StreamIndexHasBeenSet() const;

                    /**
                     * 获取要压制到视频中的字幕文件的输入信息，目前仅支持存储在COS的字幕文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubtitleFileInput 要压制到视频中的字幕文件的输入信息，目前仅支持存储在COS的字幕文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaInputInfo GetSubtitleFileInput() const;

                    /**
                     * 设置要压制到视频中的字幕文件的输入信息，目前仅支持存储在COS的字幕文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitleFileInput 要压制到视频中的字幕文件的输入信息，目前仅支持存储在COS的字幕文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubtitleFileInput(const MediaInputInfo& _subtitleFileInput);

                    /**
                     * 判断参数 SubtitleFileInput 是否已赋值
                     * @return SubtitleFileInput 是否已赋值
                     * 
                     */
                    bool SubtitleFileInputHasBeenSet() const;

                    /**
                     * 获取压制字幕字体文件的输入信息，目前仅支持url和cos。都填时url优先于cos。填了FontFileInput时FontFileInput优先于FontType

                     * @return FontFileInput 压制字幕字体文件的输入信息，目前仅支持url和cos。都填时url优先于cos。填了FontFileInput时FontFileInput优先于FontType

                     * 
                     */
                    MediaInputInfo GetFontFileInput() const;

                    /**
                     * 设置压制字幕字体文件的输入信息，目前仅支持url和cos。都填时url优先于cos。填了FontFileInput时FontFileInput优先于FontType

                     * @param _fontFileInput 压制字幕字体文件的输入信息，目前仅支持url和cos。都填时url优先于cos。填了FontFileInput时FontFileInput优先于FontType

                     * 
                     */
                    void SetFontFileInput(const MediaInputInfo& _fontFileInput);

                    /**
                     * 判断参数 FontFileInput 是否已赋值
                     * @return FontFileInput 是否已赋值
                     * 
                     */
                    bool FontFileInputHasBeenSet() const;

                    /**
                     * 获取字体类型，支持：
<li>hei.ttf：黑体</li>
<li>song.ttf：宋体</li>
<li>kai.ttf（推荐）或 simkai.ttf：楷体</li>
<li>msyh.ttf：微软雅黑</li>
<li>msyhbd.ttf：微软雅黑加粗</li>
<li>hkjgt.ttf：华康金刚体</li>
<li>dhttx.ttf：典黑体特细</li>
<li>xqgdzt.ttf：喜鹊古字典体</li>
<li>qpcyt.ttf：巧拼超圆体</li>
<li>arial.ttf：仅支持英文</li>
<li>dinalternate.ttf：DIN Alternate Bold</li>
<li>helveticalt.ttf：Helvetica</li>
<li>helveticains.ttf：Helvetica Inserat</li>
<li>trajanpro.ttf：TrajanPro-Bold</li>
<li>korean.ttf：韩语</li>
<li>japanese.ttf：日语</li>
<li>thai.ttf：泰语</li>
默认：hei.ttf 黑体。
<br>注意：
<li>楷体推荐使用kai.ttf</li>
<li>填了FontFileInput时FontFileInput优先</li>

注意：此字段可能返回 null，表示取不到有效值。
                     * @return FontType 字体类型，支持：
<li>hei.ttf：黑体</li>
<li>song.ttf：宋体</li>
<li>kai.ttf（推荐）或 simkai.ttf：楷体</li>
<li>msyh.ttf：微软雅黑</li>
<li>msyhbd.ttf：微软雅黑加粗</li>
<li>hkjgt.ttf：华康金刚体</li>
<li>dhttx.ttf：典黑体特细</li>
<li>xqgdzt.ttf：喜鹊古字典体</li>
<li>qpcyt.ttf：巧拼超圆体</li>
<li>arial.ttf：仅支持英文</li>
<li>dinalternate.ttf：DIN Alternate Bold</li>
<li>helveticalt.ttf：Helvetica</li>
<li>helveticains.ttf：Helvetica Inserat</li>
<li>trajanpro.ttf：TrajanPro-Bold</li>
<li>korean.ttf：韩语</li>
<li>japanese.ttf：日语</li>
<li>thai.ttf：泰语</li>
默认：hei.ttf 黑体。
<br>注意：
<li>楷体推荐使用kai.ttf</li>
<li>填了FontFileInput时FontFileInput优先</li>

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置字体类型，支持：
<li>hei.ttf：黑体</li>
<li>song.ttf：宋体</li>
<li>kai.ttf（推荐）或 simkai.ttf：楷体</li>
<li>msyh.ttf：微软雅黑</li>
<li>msyhbd.ttf：微软雅黑加粗</li>
<li>hkjgt.ttf：华康金刚体</li>
<li>dhttx.ttf：典黑体特细</li>
<li>xqgdzt.ttf：喜鹊古字典体</li>
<li>qpcyt.ttf：巧拼超圆体</li>
<li>arial.ttf：仅支持英文</li>
<li>dinalternate.ttf：DIN Alternate Bold</li>
<li>helveticalt.ttf：Helvetica</li>
<li>helveticains.ttf：Helvetica Inserat</li>
<li>trajanpro.ttf：TrajanPro-Bold</li>
<li>korean.ttf：韩语</li>
<li>japanese.ttf：日语</li>
<li>thai.ttf：泰语</li>
默认：hei.ttf 黑体。
<br>注意：
<li>楷体推荐使用kai.ttf</li>
<li>填了FontFileInput时FontFileInput优先</li>

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fontType 字体类型，支持：
<li>hei.ttf：黑体</li>
<li>song.ttf：宋体</li>
<li>kai.ttf（推荐）或 simkai.ttf：楷体</li>
<li>msyh.ttf：微软雅黑</li>
<li>msyhbd.ttf：微软雅黑加粗</li>
<li>hkjgt.ttf：华康金刚体</li>
<li>dhttx.ttf：典黑体特细</li>
<li>xqgdzt.ttf：喜鹊古字典体</li>
<li>qpcyt.ttf：巧拼超圆体</li>
<li>arial.ttf：仅支持英文</li>
<li>dinalternate.ttf：DIN Alternate Bold</li>
<li>helveticalt.ttf：Helvetica</li>
<li>helveticains.ttf：Helvetica Inserat</li>
<li>trajanpro.ttf：TrajanPro-Bold</li>
<li>korean.ttf：韩语</li>
<li>japanese.ttf：日语</li>
<li>thai.ttf：泰语</li>
默认：hei.ttf 黑体。
<br>注意：
<li>楷体推荐使用kai.ttf</li>
<li>填了FontFileInput时FontFileInput优先</li>

注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：

- 像素：Npx，N范围：(0,4096]。
- 百分百：N%，N范围：(0,100]；例如10%表示字幕字体大小=10%*源视频高度。

不填且字幕文件无设置时，默认源视频高度的5%。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return FontSize 字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：

- 像素：Npx，N范围：(0,4096]。
- 百分百：N%，N范围：(0,100]；例如10%表示字幕字体大小=10%*源视频高度。

不填且字幕文件无设置时，默认源视频高度的5%。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：

- 像素：Npx，N范围：(0,4096]。
- 百分百：N%，N范围：(0,100]；例如10%表示字幕字体大小=10%*源视频高度。

不填且字幕文件无设置时，默认源视频高度的5%。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fontSize 字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：

- 像素：Npx，N范围：(0,4096]。
- 百分百：N%，N范围：(0,100]；例如10%表示字幕字体大小=10%*源视频高度。

不填且字幕文件无设置时，默认源视频高度的5%。

注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FontColor 字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fontColor 字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。
注意：此字段可能返回 null，表示取不到有效值。
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
默认值：1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FontAlpha 文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fontAlpha 文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：1。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%*源视频高度。

默认值：源视频高度*4%。
注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

注意：此字段可能返回 null，表示取不到有效值。
                     * @return YPos 字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%*源视频高度。

默认值：源视频高度*4%。
注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%*源视频高度。

默认值：源视频高度*4%。
注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yPos 字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%*源视频高度。

默认值：源视频高度*4%。
注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字幕背景底板的y轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。

不传表示不开启字幕背景底板。
注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

注意：此字段可能返回 null，表示取不到有效值。
                     * @return BoardY 字幕背景底板的y轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。

不传表示不开启字幕背景底板。
注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBoardY() const;

                    /**
                     * 设置字幕背景底板的y轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。

不传表示不开启字幕背景底板。
注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _boardY 字幕背景底板的y轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。

不传表示不开启字幕背景底板。
注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取底板的宽度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认源视频宽像素的90%。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return BoardWidth 底板的宽度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认源视频宽像素的90%。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBoardWidth() const;

                    /**
                     * 设置底板的宽度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认源视频宽像素的90%。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _boardWidth 底板的宽度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认源视频宽像素的90%。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBoardWidth(const int64_t& _boardWidth);

                    /**
                     * 判断参数 BoardWidth 是否已赋值
                     * @return BoardWidth 是否已赋值
                     * 
                     */
                    bool BoardWidthHasBeenSet() const;

                    /**
                     * 获取底板的高度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认为源视频高像素的15%。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return BoardHeight 底板的高度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认为源视频高像素的15%。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBoardHeight() const;

                    /**
                     * 设置底板的高度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认为源视频高像素的15%。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _boardHeight 底板的高度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认为源视频高像素的15%。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBoardHeight(const int64_t& _boardHeight);

                    /**
                     * 判断参数 BoardHeight 是否已赋值
                     * @return BoardHeight 是否已赋值
                     * 
                     */
                    bool BoardHeightHasBeenSet() const;

                    /**
                     * 获取底板颜色。格式：0xRRGGBB，
默认值：0x000000（黑色）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BoardColor 底板颜色。格式：0xRRGGBB，
默认值：0x000000（黑色）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBoardColor() const;

                    /**
                     * 设置底板颜色。格式：0xRRGGBB，
默认值：0x000000（黑色）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _boardColor 底板颜色。格式：0xRRGGBB，
默认值：0x000000（黑色）。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字幕背景板透明度，取值范围：[0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：0.8。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BoardAlpha 字幕背景板透明度，取值范围：[0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：0.8。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetBoardAlpha() const;

                    /**
                     * 设置字幕背景板透明度，取值范围：[0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：0.8。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _boardAlpha 字幕背景板透明度，取值范围：[0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：0.8。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取描边宽度。浮点数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。
不填默认源视频高度的0.3%。

                     * @return OutlineWidth 描边宽度。浮点数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。
不填默认源视频高度的0.3%。

                     * 
                     */
                    double GetOutlineWidth() const;

                    /**
                     * 设置描边宽度。浮点数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。
不填默认源视频高度的0.3%。

                     * @param _outlineWidth 描边宽度。浮点数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。
不填默认源视频高度的0.3%。

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
                     * 获取描边颜色。6位16进制RGB。不填默认黑色。

                     * @return OutlineColor 描边颜色。6位16进制RGB。不填默认黑色。

                     * 
                     */
                    std::string GetOutlineColor() const;

                    /**
                     * 设置描边颜色。6位16进制RGB。不填默认黑色。

                     * @param _outlineColor 描边颜色。6位16进制RGB。不填默认黑色。

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
                     * 获取描边透明度。(0，1] 正浮点数。不填默认1，完全不透明

                     * @return OutlineAlpha 描边透明度。(0，1] 正浮点数。不填默认1，完全不透明

                     * 
                     */
                    double GetOutlineAlpha() const;

                    /**
                     * 设置描边透明度。(0，1] 正浮点数。不填默认1，完全不透明

                     * @param _outlineAlpha 描边透明度。(0，1] 正浮点数。不填默认1，完全不透明

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
                     * 获取阴影宽度。浮点数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。
不填默认无阴影。

                     * @return ShadowWidth 阴影宽度。浮点数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。
不填默认无阴影。

                     * 
                     */
                    double GetShadowWidth() const;

                    /**
                     * 设置阴影宽度。浮点数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。
不填默认无阴影。

                     * @param _shadowWidth 阴影宽度。浮点数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。
不填默认无阴影。

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

                    /**
                     * 获取行间距。正整数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。不填默认0。

                     * @return LineSpacing 行间距。正整数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。不填默认0。

                     * 
                     */
                    int64_t GetLineSpacing() const;

                    /**
                     * 设置行间距。正整数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。不填默认0。

                     * @param _lineSpacing 行间距。正整数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。不填默认0。

                     * 
                     */
                    void SetLineSpacing(const int64_t& _lineSpacing);

                    /**
                     * 判断参数 LineSpacing 是否已赋值
                     * @return LineSpacing 是否已赋值
                     * 
                     */
                    bool LineSpacingHasBeenSet() const;

                    /**
                     * 获取对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。

                     * @return Alignment 对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。

                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。

                     * @param _alignment 对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。

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
                     * 获取默认0。为1时BoardWidth代表百分之几，以视频宽为基准

                     * @return BoardWidthUnit 默认0。为1时BoardWidth代表百分之几，以视频宽为基准

                     * 
                     */
                    int64_t GetBoardWidthUnit() const;

                    /**
                     * 设置默认0。为1时BoardWidth代表百分之几，以视频宽为基准

                     * @param _boardWidthUnit 默认0。为1时BoardWidth代表百分之几，以视频宽为基准

                     * 
                     */
                    void SetBoardWidthUnit(const int64_t& _boardWidthUnit);

                    /**
                     * 判断参数 BoardWidthUnit 是否已赋值
                     * @return BoardWidthUnit 是否已赋值
                     * 
                     */
                    bool BoardWidthUnitHasBeenSet() const;

                    /**
                     * 获取默认0。为1时BoardHeight代表百分之几，以视频高为基准

                     * @return BoardHeightUnit 默认0。为1时BoardHeight代表百分之几，以视频高为基准

                     * 
                     */
                    int64_t GetBoardHeightUnit() const;

                    /**
                     * 设置默认0。为1时BoardHeight代表百分之几，以视频高为基准

                     * @param _boardHeightUnit 默认0。为1时BoardHeight代表百分之几，以视频高为基准

                     * 
                     */
                    void SetBoardHeightUnit(const int64_t& _boardHeightUnit);

                    /**
                     * 判断参数 BoardHeightUnit 是否已赋值
                     * @return BoardHeightUnit 是否已赋值
                     * 
                     */
                    bool BoardHeightUnitHasBeenSet() const;

                    /**
                     * 获取默认0。为1时OutlineWidth代表百分之几，以视频高为基准

                     * @return OutlineWidthUnit 默认0。为1时OutlineWidth代表百分之几，以视频高为基准

                     * 
                     */
                    int64_t GetOutlineWidthUnit() const;

                    /**
                     * 设置默认0。为1时OutlineWidth代表百分之几，以视频高为基准

                     * @param _outlineWidthUnit 默认0。为1时OutlineWidth代表百分之几，以视频高为基准

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
                     * 获取默认0。为1时ShadowWidth代表百分之几，以视频高为基准

                     * @return ShadowWidthUnit 默认0。为1时ShadowWidth代表百分之几，以视频高为基准

                     * 
                     */
                    int64_t GetShadowWidthUnit() const;

                    /**
                     * 设置默认0。为1时ShadowWidth代表百分之几，以视频高为基准

                     * @param _shadowWidthUnit 默认0。为1时ShadowWidth代表百分之几，以视频高为基准

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
                     * 获取默认0。为1时LineSpacing代表百分之几，以视频高为基准

                     * @return LineSpacingUnit 默认0。为1时LineSpacing代表百分之几，以视频高为基准

                     * 
                     */
                    int64_t GetLineSpacingUnit() const;

                    /**
                     * 设置默认0。为1时LineSpacing代表百分之几，以视频高为基准

                     * @param _lineSpacingUnit 默认0。为1时LineSpacing代表百分之几，以视频高为基准

                     * 
                     */
                    void SetLineSpacingUnit(const int64_t& _lineSpacingUnit);

                    /**
                     * 判断参数 LineSpacingUnit 是否已赋值
                     * @return LineSpacingUnit 是否已赋值
                     * 
                     */
                    bool LineSpacingUnitHasBeenSet() const;

                private:

                    /**
                     * 要压制到视频中的字幕文件地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 指定要压制到视频中的字幕轨道，Streamindex的取值从0开始，0表示使用源视频中的第一条字幕轨。如果指定了Path，则优先使用Path。Path 和 StreamIndex 至少指定一个。

- 注意：StreamIndex必须与源文件中的字幕轨索引一致。例如，源文件中的字幕轨为stream#0:3，则StreamIndex应为3，否则可能导致任务处理失败。


注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_streamIndex;
                    bool m_streamIndexHasBeenSet;

                    /**
                     * 要压制到视频中的字幕文件的输入信息，目前仅支持存储在COS的字幕文件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInputInfo m_subtitleFileInput;
                    bool m_subtitleFileInputHasBeenSet;

                    /**
                     * 压制字幕字体文件的输入信息，目前仅支持url和cos。都填时url优先于cos。填了FontFileInput时FontFileInput优先于FontType

                     */
                    MediaInputInfo m_fontFileInput;
                    bool m_fontFileInputHasBeenSet;

                    /**
                     * 字体类型，支持：
<li>hei.ttf：黑体</li>
<li>song.ttf：宋体</li>
<li>kai.ttf（推荐）或 simkai.ttf：楷体</li>
<li>msyh.ttf：微软雅黑</li>
<li>msyhbd.ttf：微软雅黑加粗</li>
<li>hkjgt.ttf：华康金刚体</li>
<li>dhttx.ttf：典黑体特细</li>
<li>xqgdzt.ttf：喜鹊古字典体</li>
<li>qpcyt.ttf：巧拼超圆体</li>
<li>arial.ttf：仅支持英文</li>
<li>dinalternate.ttf：DIN Alternate Bold</li>
<li>helveticalt.ttf：Helvetica</li>
<li>helveticains.ttf：Helvetica Inserat</li>
<li>trajanpro.ttf：TrajanPro-Bold</li>
<li>korean.ttf：韩语</li>
<li>japanese.ttf：日语</li>
<li>thai.ttf：泰语</li>
默认：hei.ttf 黑体。
<br>注意：
<li>楷体推荐使用kai.ttf</li>
<li>填了FontFileInput时FontFileInput优先</li>

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * 字体大小，不指定则以字幕文件中为准。支持像素和百分比格式：

- 像素：Npx，N范围：(0,4096]。
- 百分百：N%，N范围：(0,100]；例如10%表示字幕字体大小=10%*源视频高度。

不填且字幕文件无设置时，默认源视频高度的5%。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 字体颜色，格式：0xRRGGBB，默认值：0xFFFFFF（白色）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 文字透明度，取值范围：(0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：1。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                    /**
                     * 字幕y轴坐标位置，指定此参数会忽略字幕文件自带坐标；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕y坐标=10%*源视频高度。

默认值：源视频高度*4%。
注意：坐标轴原点在源视频中轴线底部，字幕基准点在字幕中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * 字幕背景底板的y轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。

不传表示不开启字幕背景底板。
注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * 底板的宽度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认源视频宽像素的90%。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * 底板的高度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认为源视频高像素的15%。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_boardHeight;
                    bool m_boardHeightHasBeenSet;

                    /**
                     * 底板颜色。格式：0xRRGGBB，
默认值：0x000000（黑色）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_boardColor;
                    bool m_boardColorHasBeenSet;

                    /**
                     * 字幕背景板透明度，取值范围：[0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：0.8。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_boardAlpha;
                    bool m_boardAlphaHasBeenSet;

                    /**
                     * 描边宽度。浮点数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。
不填默认源视频高度的0.3%。

                     */
                    double m_outlineWidth;
                    bool m_outlineWidthHasBeenSet;

                    /**
                     * 描边颜色。6位16进制RGB。不填默认黑色。

                     */
                    std::string m_outlineColor;
                    bool m_outlineColorHasBeenSet;

                    /**
                     * 描边透明度。(0，1] 正浮点数。不填默认1，完全不透明

                     */
                    double m_outlineAlpha;
                    bool m_outlineAlphaHasBeenSet;

                    /**
                     * 阴影宽度。浮点数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。
不填默认无阴影。

                     */
                    double m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

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

                    /**
                     * 行间距。正整数。
- 代表像素值时， [0, 1000]。
- 代表百分数时，[0, 100]。不填默认0。

                     */
                    int64_t m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                    /**
                     * 对齐方式，取值：top: 顶部对齐，字幕顶部按位置固定，底部随行数变化。bottom: 底部对齐，字幕底部按位置固定，顶部随行数变化。不填默认底部对齐。

                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                    /**
                     * 默认0。为1时BoardWidth代表百分之几，以视频宽为基准

                     */
                    int64_t m_boardWidthUnit;
                    bool m_boardWidthUnitHasBeenSet;

                    /**
                     * 默认0。为1时BoardHeight代表百分之几，以视频高为基准

                     */
                    int64_t m_boardHeightUnit;
                    bool m_boardHeightUnitHasBeenSet;

                    /**
                     * 默认0。为1时OutlineWidth代表百分之几，以视频高为基准

                     */
                    int64_t m_outlineWidthUnit;
                    bool m_outlineWidthUnitHasBeenSet;

                    /**
                     * 默认0。为1时ShadowWidth代表百分之几，以视频高为基准

                     */
                    int64_t m_shadowWidthUnit;
                    bool m_shadowWidthUnitHasBeenSet;

                    /**
                     * 默认0。为1时LineSpacing代表百分之几，以视频高为基准

                     */
                    int64_t m_lineSpacingUnit;
                    bool m_lineSpacingUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_
