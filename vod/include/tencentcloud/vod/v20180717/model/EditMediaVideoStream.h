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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAVIDEOSTREAM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAVIDEOSTREAM_H_

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
                * 视频流配置信息
                */
                class EditMediaVideoStream : public AbstractModel
                {
                public:
                    EditMediaVideoStream();
                    ~EditMediaVideoStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
默认值：open。
                     * @return ResolutionAdaptive 分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
默认值：open。
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
默认值：open。
                     * @param ResolutionAdaptive 分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
默认值：open。
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取视频流宽度（或长边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率取基准分辨率；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按基准分辨率比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按基准分辨率比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
默认值：0。
                     * @return Width 视频流宽度（或长边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率取基准分辨率；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按基准分辨率比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按基准分辨率比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
默认值：0。
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置视频流宽度（或长边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率取基准分辨率；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按基准分辨率比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按基准分辨率比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
默认值：0。
                     * @param Width 视频流宽度（或长边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率取基准分辨率；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按基准分辨率比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按基准分辨率比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
默认值：0。
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取视频流高度（或短边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率取基准分辨率；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按基准分辨率比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按基准分辨率比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
默认值：0。
                     * @return Height 视频流高度（或短边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率取基准分辨率；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按基准分辨率比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按基准分辨率比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
默认值：0。
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置视频流高度（或短边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率取基准分辨率；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按基准分辨率比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按基准分辨率比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
默认值：0。
                     * @param Height 视频流高度（或短边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率取基准分辨率；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按基准分辨率比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按基准分辨率比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
默认值：0。
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为0，将自动为视频设置帧率。
默认值为 0。
                     * @return Fps 视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为0，将自动为视频设置帧率。
默认值为 0。
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为0，将自动为视频设置帧率。
默认值为 0。
                     * @param Fps 视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为0，将自动为视频设置帧率。
默认值为 0。
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * 分辨率自适应，可选值：
<li>open：开启，此时，Width 代表视频的长边，Height 表示视频的短边；</li>
<li>close：关闭，此时，Width 代表视频的宽度，Height 表示视频的高度。</li>
默认值：open。
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * 视频流宽度（或长边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率取基准分辨率；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按基准分辨率比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按基准分辨率比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
默认值：0。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频流高度（或短边）的最大值，取值范围：0 和 [128, 4096]，单位：px。
<li>当 Width、Height 均为 0，则分辨率取基准分辨率；</li>
<li>当 Width 为 0，Height 非 0，则 Width 按基准分辨率比例缩放；</li>
<li>当 Width 非 0，Height 为 0，则 Height 按基准分辨率比例缩放；</li>
<li>当 Width、Height 均非 0，则分辨率按用户指定。</li>
默认值：0。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频帧率，取值范围：[0, 100]，单位：Hz。
当取值为0，将自动为视频设置帧率。
默认值为 0。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAVIDEOSTREAM_H_
