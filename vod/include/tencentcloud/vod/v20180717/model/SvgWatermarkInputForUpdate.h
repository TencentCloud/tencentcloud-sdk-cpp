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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SVGWATERMARKINPUTFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SVGWATERMARKINPUTFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/WatermarkCycleConfigForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SVG水印模板输入参数
                */
                class SvgWatermarkInputForUpdate : public AbstractModel
                {
                public:
                    SvgWatermarkInputForUpdate();
                    ~SvgWatermarkInputForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印的宽度，支持 px，%，W%，H%，S%，L% 六种格式：
<li>当字符串以 px 结尾，表示水印 Width 单位为像素，如 100px 表示 Width 为 100 像素；当填 0px 且
 Height 不为 0px 时，表示水印的宽度按原始 SVG 图像等比缩放；当 Width、Height 都填 0px 时，表示水印的宽度取原始 SVG 图像的宽度；</li>
<li>当字符串以 W% 结尾，表示水印 Width 为视频宽度的百分比大小，如 10W% 表示 Width 为视频宽度的 10%；</li>
<li>当字符串以 H% 结尾，表示水印 Width 为视频高度的百分比大小，如 10H% 表示 Width 为视频高度的 10%；</li>
<li>当字符串以 S% 结尾，表示水印 Width 为视频短边的百分比大小，如 10S% 表示 Width 为视频短边的 10%；</li>
<li>当字符串以 L% 结尾，表示水印 Width 为视频长边的百分比大小，如 10L% 表示 Width 为视频长边的 10%；</li>
<li>当字符串以 % 结尾时，含义同 W%。</li>
默认值为 10W%。
                     * @return Width 水印的宽度，支持 px，%，W%，H%，S%，L% 六种格式：
<li>当字符串以 px 结尾，表示水印 Width 单位为像素，如 100px 表示 Width 为 100 像素；当填 0px 且
 Height 不为 0px 时，表示水印的宽度按原始 SVG 图像等比缩放；当 Width、Height 都填 0px 时，表示水印的宽度取原始 SVG 图像的宽度；</li>
<li>当字符串以 W% 结尾，表示水印 Width 为视频宽度的百分比大小，如 10W% 表示 Width 为视频宽度的 10%；</li>
<li>当字符串以 H% 结尾，表示水印 Width 为视频高度的百分比大小，如 10H% 表示 Width 为视频高度的 10%；</li>
<li>当字符串以 S% 结尾，表示水印 Width 为视频短边的百分比大小，如 10S% 表示 Width 为视频短边的 10%；</li>
<li>当字符串以 L% 结尾，表示水印 Width 为视频长边的百分比大小，如 10L% 表示 Width 为视频长边的 10%；</li>
<li>当字符串以 % 结尾时，含义同 W%。</li>
默认值为 10W%。
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置水印的宽度，支持 px，%，W%，H%，S%，L% 六种格式：
<li>当字符串以 px 结尾，表示水印 Width 单位为像素，如 100px 表示 Width 为 100 像素；当填 0px 且
 Height 不为 0px 时，表示水印的宽度按原始 SVG 图像等比缩放；当 Width、Height 都填 0px 时，表示水印的宽度取原始 SVG 图像的宽度；</li>
<li>当字符串以 W% 结尾，表示水印 Width 为视频宽度的百分比大小，如 10W% 表示 Width 为视频宽度的 10%；</li>
<li>当字符串以 H% 结尾，表示水印 Width 为视频高度的百分比大小，如 10H% 表示 Width 为视频高度的 10%；</li>
<li>当字符串以 S% 结尾，表示水印 Width 为视频短边的百分比大小，如 10S% 表示 Width 为视频短边的 10%；</li>
<li>当字符串以 L% 结尾，表示水印 Width 为视频长边的百分比大小，如 10L% 表示 Width 为视频长边的 10%；</li>
<li>当字符串以 % 结尾时，含义同 W%。</li>
默认值为 10W%。
                     * @param _width 水印的宽度，支持 px，%，W%，H%，S%，L% 六种格式：
<li>当字符串以 px 结尾，表示水印 Width 单位为像素，如 100px 表示 Width 为 100 像素；当填 0px 且
 Height 不为 0px 时，表示水印的宽度按原始 SVG 图像等比缩放；当 Width、Height 都填 0px 时，表示水印的宽度取原始 SVG 图像的宽度；</li>
<li>当字符串以 W% 结尾，表示水印 Width 为视频宽度的百分比大小，如 10W% 表示 Width 为视频宽度的 10%；</li>
<li>当字符串以 H% 结尾，表示水印 Width 为视频高度的百分比大小，如 10H% 表示 Width 为视频高度的 10%；</li>
<li>当字符串以 S% 结尾，表示水印 Width 为视频短边的百分比大小，如 10S% 表示 Width 为视频短边的 10%；</li>
<li>当字符串以 L% 结尾，表示水印 Width 为视频长边的百分比大小，如 10L% 表示 Width 为视频长边的 10%；</li>
<li>当字符串以 % 结尾时，含义同 W%。</li>
默认值为 10W%。
                     * 
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取水印的高度，支持 px，%，W%，H%，S%，L% 六种格式：
<li>当字符串以 px 结尾，表示水印 Height 单位为像素，如 100px 表示 Height 为 100 像素；当填 0px 且
 Width 不为 0px 时，表示水印的高度按原始 SVG 图像等比缩放；当 Width、Height 都填 0px 时，表示水印的高度取原始 SVG 图像的高度；</li>
<li>当字符串以 W% 结尾，表示水印 Height 为视频宽度的百分比大小，如 10W% 表示 Height 为视频宽度的 10%；</li>
<li>当字符串以 H% 结尾，表示水印 Height 为视频高度的百分比大小，如 10H% 表示 Height 为视频高度的 10%；</li>
<li>当字符串以 S% 结尾，表示水印 Height 为视频短边的百分比大小，如 10S% 表示 Height 为视频短边的 10%；</li>
<li>当字符串以 L% 结尾，表示水印 Height 为视频长边的百分比大小，如 10L% 表示 Height 为视频长边的 10%；</li>
<li>当字符串以 % 结尾时，含义同 H%。</li>
默认值为 0px。
                     * @return Height 水印的高度，支持 px，%，W%，H%，S%，L% 六种格式：
<li>当字符串以 px 结尾，表示水印 Height 单位为像素，如 100px 表示 Height 为 100 像素；当填 0px 且
 Width 不为 0px 时，表示水印的高度按原始 SVG 图像等比缩放；当 Width、Height 都填 0px 时，表示水印的高度取原始 SVG 图像的高度；</li>
<li>当字符串以 W% 结尾，表示水印 Height 为视频宽度的百分比大小，如 10W% 表示 Height 为视频宽度的 10%；</li>
<li>当字符串以 H% 结尾，表示水印 Height 为视频高度的百分比大小，如 10H% 表示 Height 为视频高度的 10%；</li>
<li>当字符串以 S% 结尾，表示水印 Height 为视频短边的百分比大小，如 10S% 表示 Height 为视频短边的 10%；</li>
<li>当字符串以 L% 结尾，表示水印 Height 为视频长边的百分比大小，如 10L% 表示 Height 为视频长边的 10%；</li>
<li>当字符串以 % 结尾时，含义同 H%。</li>
默认值为 0px。
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置水印的高度，支持 px，%，W%，H%，S%，L% 六种格式：
<li>当字符串以 px 结尾，表示水印 Height 单位为像素，如 100px 表示 Height 为 100 像素；当填 0px 且
 Width 不为 0px 时，表示水印的高度按原始 SVG 图像等比缩放；当 Width、Height 都填 0px 时，表示水印的高度取原始 SVG 图像的高度；</li>
<li>当字符串以 W% 结尾，表示水印 Height 为视频宽度的百分比大小，如 10W% 表示 Height 为视频宽度的 10%；</li>
<li>当字符串以 H% 结尾，表示水印 Height 为视频高度的百分比大小，如 10H% 表示 Height 为视频高度的 10%；</li>
<li>当字符串以 S% 结尾，表示水印 Height 为视频短边的百分比大小，如 10S% 表示 Height 为视频短边的 10%；</li>
<li>当字符串以 L% 结尾，表示水印 Height 为视频长边的百分比大小，如 10L% 表示 Height 为视频长边的 10%；</li>
<li>当字符串以 % 结尾时，含义同 H%。</li>
默认值为 0px。
                     * @param _height 水印的高度，支持 px，%，W%，H%，S%，L% 六种格式：
<li>当字符串以 px 结尾，表示水印 Height 单位为像素，如 100px 表示 Height 为 100 像素；当填 0px 且
 Width 不为 0px 时，表示水印的高度按原始 SVG 图像等比缩放；当 Width、Height 都填 0px 时，表示水印的高度取原始 SVG 图像的高度；</li>
<li>当字符串以 W% 结尾，表示水印 Height 为视频宽度的百分比大小，如 10W% 表示 Height 为视频宽度的 10%；</li>
<li>当字符串以 H% 结尾，表示水印 Height 为视频高度的百分比大小，如 10H% 表示 Height 为视频高度的 10%；</li>
<li>当字符串以 S% 结尾，表示水印 Height 为视频短边的百分比大小，如 10S% 表示 Height 为视频短边的 10%；</li>
<li>当字符串以 L% 结尾，表示水印 Height 为视频长边的百分比大小，如 10L% 表示 Height 为视频长边的 10%；</li>
<li>当字符串以 % 结尾时，含义同 H%。</li>
默认值为 0px。
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
                     * 获取水印周期配置，用于配置水印周期性地显示与隐藏。
主要使用场景是：为了视频防遮标，在视频多个地方设置水印，这些水印按固定顺序周期性地显示与隐藏。
例如，设置 A、B、C、D 4 个水印分别位于视频的左上角、右上角、右下角、左下角处，视频开始时，{ A 显示 5 秒 -> B 显示 5 秒 -> C 显示 5 秒 -> D 显示 5 秒 } -> A 显示 5 秒 -> B 显示 5 秒 -> ...，任何时刻只显示一处水印。
花括号 {} 表示由 A、B、C、D 4 个水印组成的大周期，可以看出每个大周期持续 20 秒。
可以看出，A、B、C、D 都是周期性地显示 5 秒、隐藏 15 秒，且四者有固定的显示顺序。
此配置项即用来描述单个水印的周期配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleConfig 水印周期配置，用于配置水印周期性地显示与隐藏。
主要使用场景是：为了视频防遮标，在视频多个地方设置水印，这些水印按固定顺序周期性地显示与隐藏。
例如，设置 A、B、C、D 4 个水印分别位于视频的左上角、右上角、右下角、左下角处，视频开始时，{ A 显示 5 秒 -> B 显示 5 秒 -> C 显示 5 秒 -> D 显示 5 秒 } -> A 显示 5 秒 -> B 显示 5 秒 -> ...，任何时刻只显示一处水印。
花括号 {} 表示由 A、B、C、D 4 个水印组成的大周期，可以看出每个大周期持续 20 秒。
可以看出，A、B、C、D 都是周期性地显示 5 秒、隐藏 15 秒，且四者有固定的显示顺序。
此配置项即用来描述单个水印的周期配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    WatermarkCycleConfigForUpdate GetCycleConfig() const;

                    /**
                     * 设置水印周期配置，用于配置水印周期性地显示与隐藏。
主要使用场景是：为了视频防遮标，在视频多个地方设置水印，这些水印按固定顺序周期性地显示与隐藏。
例如，设置 A、B、C、D 4 个水印分别位于视频的左上角、右上角、右下角、左下角处，视频开始时，{ A 显示 5 秒 -> B 显示 5 秒 -> C 显示 5 秒 -> D 显示 5 秒 } -> A 显示 5 秒 -> B 显示 5 秒 -> ...，任何时刻只显示一处水印。
花括号 {} 表示由 A、B、C、D 4 个水印组成的大周期，可以看出每个大周期持续 20 秒。
可以看出，A、B、C、D 都是周期性地显示 5 秒、隐藏 15 秒，且四者有固定的显示顺序。
此配置项即用来描述单个水印的周期配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleConfig 水印周期配置，用于配置水印周期性地显示与隐藏。
主要使用场景是：为了视频防遮标，在视频多个地方设置水印，这些水印按固定顺序周期性地显示与隐藏。
例如，设置 A、B、C、D 4 个水印分别位于视频的左上角、右上角、右下角、左下角处，视频开始时，{ A 显示 5 秒 -> B 显示 5 秒 -> C 显示 5 秒 -> D 显示 5 秒 } -> A 显示 5 秒 -> B 显示 5 秒 -> ...，任何时刻只显示一处水印。
花括号 {} 表示由 A、B、C、D 4 个水印组成的大周期，可以看出每个大周期持续 20 秒。
可以看出，A、B、C、D 都是周期性地显示 5 秒、隐藏 15 秒，且四者有固定的显示顺序。
此配置项即用来描述单个水印的周期配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetCycleConfig(const WatermarkCycleConfigForUpdate& _cycleConfig);

                    /**
                     * 判断参数 CycleConfig 是否已赋值
                     * @return CycleConfig 是否已赋值
                     * @deprecated
                     */
                    bool CycleConfigHasBeenSet() const;

                private:

                    /**
                     * 水印的宽度，支持 px，%，W%，H%，S%，L% 六种格式：
<li>当字符串以 px 结尾，表示水印 Width 单位为像素，如 100px 表示 Width 为 100 像素；当填 0px 且
 Height 不为 0px 时，表示水印的宽度按原始 SVG 图像等比缩放；当 Width、Height 都填 0px 时，表示水印的宽度取原始 SVG 图像的宽度；</li>
<li>当字符串以 W% 结尾，表示水印 Width 为视频宽度的百分比大小，如 10W% 表示 Width 为视频宽度的 10%；</li>
<li>当字符串以 H% 结尾，表示水印 Width 为视频高度的百分比大小，如 10H% 表示 Width 为视频高度的 10%；</li>
<li>当字符串以 S% 结尾，表示水印 Width 为视频短边的百分比大小，如 10S% 表示 Width 为视频短边的 10%；</li>
<li>当字符串以 L% 结尾，表示水印 Width 为视频长边的百分比大小，如 10L% 表示 Width 为视频长边的 10%；</li>
<li>当字符串以 % 结尾时，含义同 W%。</li>
默认值为 10W%。
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 水印的高度，支持 px，%，W%，H%，S%，L% 六种格式：
<li>当字符串以 px 结尾，表示水印 Height 单位为像素，如 100px 表示 Height 为 100 像素；当填 0px 且
 Width 不为 0px 时，表示水印的高度按原始 SVG 图像等比缩放；当 Width、Height 都填 0px 时，表示水印的高度取原始 SVG 图像的高度；</li>
<li>当字符串以 W% 结尾，表示水印 Height 为视频宽度的百分比大小，如 10W% 表示 Height 为视频宽度的 10%；</li>
<li>当字符串以 H% 结尾，表示水印 Height 为视频高度的百分比大小，如 10H% 表示 Height 为视频高度的 10%；</li>
<li>当字符串以 S% 结尾，表示水印 Height 为视频短边的百分比大小，如 10S% 表示 Height 为视频短边的 10%；</li>
<li>当字符串以 L% 结尾，表示水印 Height 为视频长边的百分比大小，如 10L% 表示 Height 为视频长边的 10%；</li>
<li>当字符串以 % 结尾时，含义同 H%。</li>
默认值为 0px。
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 水印周期配置，用于配置水印周期性地显示与隐藏。
主要使用场景是：为了视频防遮标，在视频多个地方设置水印，这些水印按固定顺序周期性地显示与隐藏。
例如，设置 A、B、C、D 4 个水印分别位于视频的左上角、右上角、右下角、左下角处，视频开始时，{ A 显示 5 秒 -> B 显示 5 秒 -> C 显示 5 秒 -> D 显示 5 秒 } -> A 显示 5 秒 -> B 显示 5 秒 -> ...，任何时刻只显示一处水印。
花括号 {} 表示由 A、B、C、D 4 个水印组成的大周期，可以看出每个大周期持续 20 秒。
可以看出，A、B、C、D 都是周期性地显示 5 秒、隐藏 15 秒，且四者有固定的显示顺序。
此配置项即用来描述单个水印的周期配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WatermarkCycleConfigForUpdate m_cycleConfig;
                    bool m_cycleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SVGWATERMARKINPUTFORUPDATE_H_
