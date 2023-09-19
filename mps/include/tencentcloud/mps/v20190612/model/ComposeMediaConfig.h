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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIACONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeTargetInfo.h>
#include <tencentcloud/mps/v20190612/model/ComposeCanvas.h>
#include <tencentcloud/mps/v20190612/model/ComposeStyles.h>
#include <tencentcloud/mps/v20190612/model/ComposeMediaTrack.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 信息。

关于 轨道、元素、时间轴 关系示意图：

![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/EditMedia-Compose-Track-Item.png)
                */
                class ComposeMediaConfig : public AbstractModel
                {
                public:
                    ComposeMediaConfig();
                    ~ComposeMediaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合成目标视频信息。
                     * @return TargetInfo 合成目标视频信息。
                     * 
                     */
                    ComposeTargetInfo GetTargetInfo() const;

                    /**
                     * 设置合成目标视频信息。
                     * @param _targetInfo 合成目标视频信息。
                     * 
                     */
                    void SetTargetInfo(const ComposeTargetInfo& _targetInfo);

                    /**
                     * 判断参数 TargetInfo 是否已赋值
                     * @return TargetInfo 是否已赋值
                     * 
                     */
                    bool TargetInfoHasBeenSet() const;

                    /**
                     * 获取合成目标视频的画布信息。
                     * @return Canvas 合成目标视频的画布信息。
                     * 
                     */
                    ComposeCanvas GetCanvas() const;

                    /**
                     * 设置合成目标视频的画布信息。
                     * @param _canvas 合成目标视频的画布信息。
                     * 
                     */
                    void SetCanvas(const ComposeCanvas& _canvas);

                    /**
                     * 判断参数 Canvas 是否已赋值
                     * @return Canvas 是否已赋值
                     * 
                     */
                    bool CanvasHasBeenSet() const;

                    /**
                     * 获取全局样式，和轨道 Tracks 配合使用，用于定于样式，如字幕样式。
                     * @return Styles 全局样式，和轨道 Tracks 配合使用，用于定于样式，如字幕样式。
                     * 
                     */
                    std::vector<ComposeStyles> GetStyles() const;

                    /**
                     * 设置全局样式，和轨道 Tracks 配合使用，用于定于样式，如字幕样式。
                     * @param _styles 全局样式，和轨道 Tracks 配合使用，用于定于样式，如字幕样式。
                     * 
                     */
                    void SetStyles(const std::vector<ComposeStyles>& _styles);

                    /**
                     * 判断参数 Styles 是否已赋值
                     * @return Styles 是否已赋值
                     * 
                     */
                    bool StylesHasBeenSet() const;

                    /**
                     * 获取用于描述合成视频的轨道列表，包括：视频、音频、图片、文字等元素组成的多个轨道信息。关于轨道和时间：
<ul><li>轨道时间轴即为目标视频时间轴。</li><li>时间轴上相同时间点的不同轨道上的元素会重叠：</li><ul><li>视频、图片、文字：按轨道顺序进行图像的叠加，轨道顺序靠前的在上面。</li><li>音频 ：进行混音。</li></ul></ul>注意：同一轨道中各个元素（除字幕元素外）的轨道时间不能重叠。
                     * @return Tracks 用于描述合成视频的轨道列表，包括：视频、音频、图片、文字等元素组成的多个轨道信息。关于轨道和时间：
<ul><li>轨道时间轴即为目标视频时间轴。</li><li>时间轴上相同时间点的不同轨道上的元素会重叠：</li><ul><li>视频、图片、文字：按轨道顺序进行图像的叠加，轨道顺序靠前的在上面。</li><li>音频 ：进行混音。</li></ul></ul>注意：同一轨道中各个元素（除字幕元素外）的轨道时间不能重叠。
                     * 
                     */
                    std::vector<ComposeMediaTrack> GetTracks() const;

                    /**
                     * 设置用于描述合成视频的轨道列表，包括：视频、音频、图片、文字等元素组成的多个轨道信息。关于轨道和时间：
<ul><li>轨道时间轴即为目标视频时间轴。</li><li>时间轴上相同时间点的不同轨道上的元素会重叠：</li><ul><li>视频、图片、文字：按轨道顺序进行图像的叠加，轨道顺序靠前的在上面。</li><li>音频 ：进行混音。</li></ul></ul>注意：同一轨道中各个元素（除字幕元素外）的轨道时间不能重叠。
                     * @param _tracks 用于描述合成视频的轨道列表，包括：视频、音频、图片、文字等元素组成的多个轨道信息。关于轨道和时间：
<ul><li>轨道时间轴即为目标视频时间轴。</li><li>时间轴上相同时间点的不同轨道上的元素会重叠：</li><ul><li>视频、图片、文字：按轨道顺序进行图像的叠加，轨道顺序靠前的在上面。</li><li>音频 ：进行混音。</li></ul></ul>注意：同一轨道中各个元素（除字幕元素外）的轨道时间不能重叠。
                     * 
                     */
                    void SetTracks(const std::vector<ComposeMediaTrack>& _tracks);

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     * 
                     */
                    bool TracksHasBeenSet() const;

                private:

                    /**
                     * 合成目标视频信息。
                     */
                    ComposeTargetInfo m_targetInfo;
                    bool m_targetInfoHasBeenSet;

                    /**
                     * 合成目标视频的画布信息。
                     */
                    ComposeCanvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * 全局样式，和轨道 Tracks 配合使用，用于定于样式，如字幕样式。
                     */
                    std::vector<ComposeStyles> m_styles;
                    bool m_stylesHasBeenSet;

                    /**
                     * 用于描述合成视频的轨道列表，包括：视频、音频、图片、文字等元素组成的多个轨道信息。关于轨道和时间：
<ul><li>轨道时间轴即为目标视频时间轴。</li><li>时间轴上相同时间点的不同轨道上的元素会重叠：</li><ul><li>视频、图片、文字：按轨道顺序进行图像的叠加，轨道顺序靠前的在上面。</li><li>音频 ：进行混音。</li></ul></ul>注意：同一轨道中各个元素（除字幕元素外）的轨道时间不能重叠。
                     */
                    std::vector<ComposeMediaTrack> m_tracks;
                    bool m_tracksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIACONFIG_H_
