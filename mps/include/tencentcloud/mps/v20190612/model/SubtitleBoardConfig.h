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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEBOARDCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEBOARDCONFIG_H_

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
                * 字幕压制模块背景配置
                */
                class SubtitleBoardConfig : public AbstractModel
                {
                public:
                    SubtitleBoardConfig();
                    ~SubtitleBoardConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字幕压制模块背景配置开关，0关闭，1开启，默认0
                     * @return SubtitleBoardConfigSwitch 字幕压制模块背景配置开关，0关闭，1开启，默认0
                     * 
                     */
                    int64_t GetSubtitleBoardConfigSwitch() const;

                    /**
                     * 设置字幕压制模块背景配置开关，0关闭，1开启，默认0
                     * @param _subtitleBoardConfigSwitch 字幕压制模块背景配置开关，0关闭，1开启，默认0
                     * 
                     */
                    void SetSubtitleBoardConfigSwitch(const int64_t& _subtitleBoardConfigSwitch);

                    /**
                     * 判断参数 SubtitleBoardConfigSwitch 是否已赋值
                     * @return SubtitleBoardConfigSwitch 是否已赋值
                     * 
                     */
                    bool SubtitleBoardConfigSwitchHasBeenSet() const;

                    /**
                     * 获取字幕背景底板的x轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[-4096,4096]。
- 百分百：N%，N范围：[-100,100]；例如10%表示字幕背景底板x坐标=10%*源视频宽度。

默认值：0px。
注意：坐标轴原点位于源视频的中轴线底部，字幕底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * @return BoardX 字幕背景底板的x轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[-4096,4096]。
- 百分百：N%，N范围：[-100,100]；例如10%表示字幕背景底板x坐标=10%*源视频宽度。

默认值：0px。
注意：坐标轴原点位于源视频的中轴线底部，字幕底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * 
                     */
                    int64_t GetBoardX() const;

                    /**
                     * 设置字幕背景底板的x轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[-4096,4096]。
- 百分百：N%，N范围：[-100,100]；例如10%表示字幕背景底板x坐标=10%*源视频宽度。

默认值：0px。
注意：坐标轴原点位于源视频的中轴线底部，字幕底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * @param _boardX 字幕背景底板的x轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[-4096,4096]。
- 百分百：N%，N范围：[-100,100]；例如10%表示字幕背景底板x坐标=10%*源视频宽度。

默认值：0px。
注意：坐标轴原点位于源视频的中轴线底部，字幕底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * 
                     */
                    void SetBoardX(const int64_t& _boardX);

                    /**
                     * 判断参数 BoardX 是否已赋值
                     * @return BoardX 是否已赋值
                     * 
                     */
                    bool BoardXHasBeenSet() const;

                    /**
                     * 获取BoardX单位, 0 像素，1百分比，默认为0，像素
                     * @return BoardXUnit BoardX单位, 0 像素，1百分比，默认为0，像素
                     * 
                     */
                    int64_t GetBoardXUnit() const;

                    /**
                     * 设置BoardX单位, 0 像素，1百分比，默认为0，像素
                     * @param _boardXUnit BoardX单位, 0 像素，1百分比，默认为0，像素
                     * 
                     */
                    void SetBoardXUnit(const int64_t& _boardXUnit);

                    /**
                     * 判断参数 BoardXUnit 是否已赋值
                     * @return BoardXUnit 是否已赋值
                     * 
                     */
                    bool BoardXUnitHasBeenSet() const;

                    /**
                     * 获取字幕背景底板的y轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。

不传表示不开启字幕背景底板。
注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * @return BoardY 字幕背景底板的y轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。

不传表示不开启字幕背景底板。
注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * 
                     */
                    int64_t GetBoardY() const;

                    /**
                     * 设置字幕背景底板的y轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。

不传表示不开启字幕背景底板。
注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * @param _boardY 字幕背景底板的y轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。

不传表示不开启字幕背景底板。
注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     * 
                     */
                    void SetBoardY(const int64_t& _boardY);

                    /**
                     * 判断参数 BoardY 是否已赋值
                     * @return BoardY 是否已赋值
                     * 
                     */
                    bool BoardYHasBeenSet() const;

                    /**
                     * 获取BoardY单位, 0 像素，1百分比，默认为0，像素
                     * @return BoardYUnit BoardY单位, 0 像素，1百分比，默认为0，像素
                     * 
                     */
                    int64_t GetBoardYUnit() const;

                    /**
                     * 设置BoardY单位, 0 像素，1百分比，默认为0，像素
                     * @param _boardYUnit BoardY单位, 0 像素，1百分比，默认为0，像素
                     * 
                     */
                    void SetBoardYUnit(const int64_t& _boardYUnit);

                    /**
                     * 判断参数 BoardYUnit 是否已赋值
                     * @return BoardYUnit 是否已赋值
                     * 
                     */
                    bool BoardYUnitHasBeenSet() const;

                    /**
                     * 获取底板的宽度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认源视频宽像素的90%。

                     * @return BoardWidth 底板的宽度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认源视频宽像素的90%。

                     * 
                     */
                    int64_t GetBoardWidth() const;

                    /**
                     * 设置底板的宽度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认源视频宽像素的90%。

                     * @param _boardWidth 底板的宽度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认源视频宽像素的90%。

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
                     * 获取底板的宽度单位，0 像素，1百分比，默认为0，像素

                     * @return BoardWidthUnit 底板的宽度单位，0 像素，1百分比，默认为0，像素

                     * 
                     */
                    int64_t GetBoardWidthUnit() const;

                    /**
                     * 设置底板的宽度单位，0 像素，1百分比，默认为0，像素

                     * @param _boardWidthUnit 底板的宽度单位，0 像素，1百分比，默认为0，像素

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
                     * 获取底板的高度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认为源视频高像素的15%。

                     * @return BoardHeight 底板的高度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认为源视频高像素的15%。

                     * 
                     */
                    int64_t GetBoardHeight() const;

                    /**
                     * 设置底板的高度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认为源视频高像素的15%。

                     * @param _boardHeight 底板的高度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认为源视频高像素的15%。

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
                     * 获取底板的高度单位，0 像素，1百分比，默认为0，像素

                     * @return BoardHeightUnit 底板的高度单位，0 像素，1百分比，默认为0，像素

                     * 
                     */
                    int64_t GetBoardHeightUnit() const;

                    /**
                     * 设置底板的高度单位，0 像素，1百分比，默认为0，像素

                     * @param _boardHeightUnit 底板的高度单位，0 像素，1百分比，默认为0，像素

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
                     * 获取底板颜色。格式：0xRRGGBB，
默认值：0x000000（黑色）。
                     * @return BoardColor 底板颜色。格式：0xRRGGBB，
默认值：0x000000（黑色）。
                     * 
                     */
                    std::string GetBoardColor() const;

                    /**
                     * 设置底板颜色。格式：0xRRGGBB，
默认值：0x000000（黑色）。
                     * @param _boardColor 底板颜色。格式：0xRRGGBB，
默认值：0x000000（黑色）。
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
                     * @return BoardAlpha 字幕背景板透明度，取值范围：[0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：0.8。
                     * 
                     */
                    double GetBoardAlpha() const;

                    /**
                     * 设置字幕背景板透明度，取值范围：[0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：0.8。
                     * @param _boardAlpha 字幕背景板透明度，取值范围：[0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：0.8。
                     * 
                     */
                    void SetBoardAlpha(const double& _boardAlpha);

                    /**
                     * 判断参数 BoardAlpha 是否已赋值
                     * @return BoardAlpha 是否已赋值
                     * 
                     */
                    bool BoardAlphaHasBeenSet() const;

                private:

                    /**
                     * 字幕压制模块背景配置开关，0关闭，1开启，默认0
                     */
                    int64_t m_subtitleBoardConfigSwitch;
                    bool m_subtitleBoardConfigSwitchHasBeenSet;

                    /**
                     * 字幕背景底板的x轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[-4096,4096]。
- 百分百：N%，N范围：[-100,100]；例如10%表示字幕背景底板x坐标=10%*源视频宽度。

默认值：0px。
注意：坐标轴原点位于源视频的中轴线底部，字幕底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     */
                    int64_t m_boardX;
                    bool m_boardXHasBeenSet;

                    /**
                     * BoardX单位, 0 像素，1百分比，默认为0，像素
                     */
                    int64_t m_boardXUnit;
                    bool m_boardXUnitHasBeenSet;

                    /**
                     * 字幕背景底板的y轴坐标位置；支持像素和百分比格式：

- 像素：Npx，N范围：[0,4096]。
- 百分百：N%，N范围：[0,100]；例如10%表示字幕背景底板y坐标=10%*源视频高度。

不传表示不开启字幕背景底板。
注意：坐标轴原点位于源视频的中轴线底部，字幕背景底板的基准点在其中轴线底部，参考下图：
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

                     */
                    int64_t m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * BoardY单位, 0 像素，1百分比，默认为0，像素
                     */
                    int64_t m_boardYUnit;
                    bool m_boardYUnitHasBeenSet;

                    /**
                     * 底板的宽度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认源视频宽像素的90%。

                     */
                    int64_t m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * 底板的宽度单位，0 像素，1百分比，默认为0，像素

                     */
                    int64_t m_boardWidthUnit;
                    bool m_boardWidthUnitHasBeenSet;

                    /**
                     * 底板的高度，正整数。
- 代表像素时，取值范围：[0,4096]。
- 代表百分数时，[0, 100]。
开启底板且不填此值时，默认为源视频高像素的15%。

                     */
                    int64_t m_boardHeight;
                    bool m_boardHeightHasBeenSet;

                    /**
                     * 底板的高度单位，0 像素，1百分比，默认为0，像素

                     */
                    int64_t m_boardHeightUnit;
                    bool m_boardHeightUnitHasBeenSet;

                    /**
                     * 底板颜色。格式：0xRRGGBB，
默认值：0x000000（黑色）。
                     */
                    std::string m_boardColor;
                    bool m_boardColorHasBeenSet;

                    /**
                     * 字幕背景板透明度，取值范围：[0, 1]
<li>0：完全透明</li>
<li>1：完全不透明</li>
默认值：0.8。
                     */
                    double m_boardAlpha;
                    bool m_boardAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEBOARDCONFIG_H_
