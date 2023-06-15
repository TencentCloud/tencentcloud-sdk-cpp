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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CANVAS_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CANVAS_H_

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
                * 画布信息。制作视频时，如果源素材（视频或者图片）不能填满输出的视频窗口，将用设置的画布进行背景绘制。
                */
                class Canvas : public AbstractModel
                {
                public:
                    Canvas();
                    ~Canvas() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取背景颜色，取值有：
<li>Black：黑色背景</li>
<li>White：白色背景</li>
默认值：Black。
                     * @return Color 背景颜色，取值有：
<li>Black：黑色背景</li>
<li>White：白色背景</li>
默认值：Black。
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置背景颜色，取值有：
<li>Black：黑色背景</li>
<li>White：白色背景</li>
默认值：Black。
                     * @param _color 背景颜色，取值有：
<li>Black：黑色背景</li>
<li>White：白色背景</li>
默认值：Black。
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取画布宽度，即输出视频的宽度，取值范围：0~ 3840，单位：px。
默认值：0，表示和第一个视频轨的第一个视频片段的视频宽度一致。
                     * @return Width 画布宽度，即输出视频的宽度，取值范围：0~ 3840，单位：px。
默认值：0，表示和第一个视频轨的第一个视频片段的视频宽度一致。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置画布宽度，即输出视频的宽度，取值范围：0~ 3840，单位：px。
默认值：0，表示和第一个视频轨的第一个视频片段的视频宽度一致。
                     * @param _width 画布宽度，即输出视频的宽度，取值范围：0~ 3840，单位：px。
默认值：0，表示和第一个视频轨的第一个视频片段的视频宽度一致。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取画布高度，即输出视频的高度（或长边），取值范围：0~ 3840，单位：px。
默认值：0，表示和第一个视频轨的第一个视频片段的视频高度一致。
                     * @return Height 画布高度，即输出视频的高度（或长边），取值范围：0~ 3840，单位：px。
默认值：0，表示和第一个视频轨的第一个视频片段的视频高度一致。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置画布高度，即输出视频的高度（或长边），取值范围：0~ 3840，单位：px。
默认值：0，表示和第一个视频轨的第一个视频片段的视频高度一致。
                     * @param _height 画布高度，即输出视频的高度（或长边），取值范围：0~ 3840，单位：px。
默认值：0，表示和第一个视频轨的第一个视频片段的视频高度一致。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * 背景颜色，取值有：
<li>Black：黑色背景</li>
<li>White：白色背景</li>
默认值：Black。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 画布宽度，即输出视频的宽度，取值范围：0~ 3840，单位：px。
默认值：0，表示和第一个视频轨的第一个视频片段的视频宽度一致。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 画布高度，即输出视频的高度（或长边），取值范围：0~ 3840，单位：px。
默认值：0，表示和第一个视频轨的第一个视频片段的视频高度一致。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CANVAS_H_
