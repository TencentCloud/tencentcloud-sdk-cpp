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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VIDEOENCODINGPRESETVIDEOSETTINGFORUPDATE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VIDEOENCODINGPRESETVIDEOSETTINGFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 视频编码配置的视频设置更新信息
                */
                class VideoEncodingPresetVideoSettingForUpdate : public AbstractModel
                {
                public:
                    VideoEncodingPresetVideoSettingForUpdate();
                    ~VideoEncodingPresetVideoSettingForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频短边尺寸，取值范围： [128, 4096]，单位：px。
视频最后的分辨率，根据短边尺寸和宽高比进行计算。
例：如果项目的宽高比是 16：9 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1920 * 1080。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 1280 * 720。</li>
如果项目的宽高比是 9：16 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1080 * 1920。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 720 * 1280。</li>
不填则不修改。
                     * @return ShortEdge 视频短边尺寸，取值范围： [128, 4096]，单位：px。
视频最后的分辨率，根据短边尺寸和宽高比进行计算。
例：如果项目的宽高比是 16：9 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1920 * 1080。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 1280 * 720。</li>
如果项目的宽高比是 9：16 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1080 * 1920。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 720 * 1280。</li>
不填则不修改。
                     * 
                     */
                    uint64_t GetShortEdge() const;

                    /**
                     * 设置视频短边尺寸，取值范围： [128, 4096]，单位：px。
视频最后的分辨率，根据短边尺寸和宽高比进行计算。
例：如果项目的宽高比是 16：9 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1920 * 1080。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 1280 * 720。</li>
如果项目的宽高比是 9：16 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1080 * 1920。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 720 * 1280。</li>
不填则不修改。
                     * @param _shortEdge 视频短边尺寸，取值范围： [128, 4096]，单位：px。
视频最后的分辨率，根据短边尺寸和宽高比进行计算。
例：如果项目的宽高比是 16：9 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1920 * 1080。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 1280 * 720。</li>
如果项目的宽高比是 9：16 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1080 * 1920。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 720 * 1280。</li>
不填则不修改。
                     * 
                     */
                    void SetShortEdge(const uint64_t& _shortEdge);

                    /**
                     * 判断参数 ShortEdge 是否已赋值
                     * @return ShortEdge 是否已赋值
                     * 
                     */
                    bool ShortEdgeHasBeenSet() const;

                    /**
                     * 获取指定码率，单位 bps。当该参数为'0' 时则不强制限定码率。
不填则不修改。
                     * @return Bitrate 指定码率，单位 bps。当该参数为'0' 时则不强制限定码率。
不填则不修改。
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置指定码率，单位 bps。当该参数为'0' 时则不强制限定码率。
不填则不修改。
                     * @param _bitrate 指定码率，单位 bps。当该参数为'0' 时则不强制限定码率。
不填则不修改。
                     * 
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取指定帧率。单位 Hz。
不填则不修改。
                     * @return FrameRate 指定帧率。单位 Hz。
不填则不修改。
                     * 
                     */
                    double GetFrameRate() const;

                    /**
                     * 设置指定帧率。单位 Hz。
不填则不修改。
                     * @param _frameRate 指定帧率。单位 Hz。
不填则不修改。
                     * 
                     */
                    void SetFrameRate(const double& _frameRate);

                    /**
                     * 判断参数 FrameRate 是否已赋值
                     * @return FrameRate 是否已赋值
                     * 
                     */
                    bool FrameRateHasBeenSet() const;

                private:

                    /**
                     * 视频短边尺寸，取值范围： [128, 4096]，单位：px。
视频最后的分辨率，根据短边尺寸和宽高比进行计算。
例：如果项目的宽高比是 16：9 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1920 * 1080。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 1280 * 720。</li>
如果项目的宽高比是 9：16 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1080 * 1920。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 720 * 1280。</li>
不填则不修改。
                     */
                    uint64_t m_shortEdge;
                    bool m_shortEdgeHasBeenSet;

                    /**
                     * 指定码率，单位 bps。当该参数为'0' 时则不强制限定码率。
不填则不修改。
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 指定帧率。单位 Hz。
不填则不修改。
                     */
                    double m_frameRate;
                    bool m_frameRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VIDEOENCODINGPRESETVIDEOSETTINGFORUPDATE_H_
