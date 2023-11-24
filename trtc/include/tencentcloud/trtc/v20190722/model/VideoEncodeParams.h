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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOENCODEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOENCODEPARAMS_H_

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
                * 视频转码参数
                */
                class VideoEncodeParams : public AbstractModel
                {
                public:
                    VideoEncodeParams();
                    ~VideoEncodeParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取宽。取值范围[0,1920]，单位为像素值。
                     * @return Width 宽。取值范围[0,1920]，单位为像素值。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置宽。取值范围[0,1920]，单位为像素值。
                     * @param _width 宽。取值范围[0,1920]，单位为像素值。
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取高。取值范围[0,1080]，单位为像素值。
                     * @return Height 高。取值范围[0,1080]，单位为像素值。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置高。取值范围[0,1080]，单位为像素值。
                     * @param _height 高。取值范围[0,1080]，单位为像素值。
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取帧率。取值范围[1,60]，表示帧率可选范围为1到60fps。
                     * @return Fps 帧率。取值范围[1,60]，表示帧率可选范围为1到60fps。
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置帧率。取值范围[1,60]，表示帧率可选范围为1到60fps。
                     * @param _fps 帧率。取值范围[1,60]，表示帧率可选范围为1到60fps。
                     * 
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取码率。取值范围[1,10000]，单位为kbps。
                     * @return BitRate 码率。取值范围[1,10000]，单位为kbps。
                     * 
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置码率。取值范围[1,10000]，单位为kbps。
                     * @param _bitRate 码率。取值范围[1,10000]，单位为kbps。
                     * 
                     */
                    void SetBitRate(const uint64_t& _bitRate);

                    /**
                     * 判断参数 BitRate 是否已赋值
                     * @return BitRate 是否已赋值
                     * 
                     */
                    bool BitRateHasBeenSet() const;

                    /**
                     * 获取gop。取值范围[1,2]，单位为秒。
                     * @return Gop gop。取值范围[1,2]，单位为秒。
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置gop。取值范围[1,2]，单位为秒。
                     * @param _gop gop。取值范围[1,2]，单位为秒。
                     * 
                     */
                    void SetGop(const uint64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     * 
                     */
                    bool GopHasBeenSet() const;

                private:

                    /**
                     * 宽。取值范围[0,1920]，单位为像素值。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高。取值范围[0,1080]，单位为像素值。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 帧率。取值范围[1,60]，表示帧率可选范围为1到60fps。
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 码率。取值范围[1,10000]，单位为kbps。
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                    /**
                     * gop。取值范围[1,2]，单位为秒。
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOENCODEPARAMS_H_
