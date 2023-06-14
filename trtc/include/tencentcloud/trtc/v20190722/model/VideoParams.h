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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOPARAMS_H_

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
                * 录制视频转码参数。
                */
                class VideoParams : public AbstractModel
                {
                public:
                    VideoParams();
                    ~VideoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频的宽度值，单位为像素，默认值360。不能超过1920，与height的乘积不能超过1920*1080。
                     * @return Width 视频的宽度值，单位为像素，默认值360。不能超过1920，与height的乘积不能超过1920*1080。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置视频的宽度值，单位为像素，默认值360。不能超过1920，与height的乘积不能超过1920*1080。
                     * @param _width 视频的宽度值，单位为像素，默认值360。不能超过1920，与height的乘积不能超过1920*1080。
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
                     * 获取视频的高度值，单位为像素，默认值640。不能超过1920，与width的乘积不能超过1920*1080。
                     * @return Height 视频的高度值，单位为像素，默认值640。不能超过1920，与width的乘积不能超过1920*1080。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置视频的高度值，单位为像素，默认值640。不能超过1920，与width的乘积不能超过1920*1080。
                     * @param _height 视频的高度值，单位为像素，默认值640。不能超过1920，与width的乘积不能超过1920*1080。
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
                     * 获取视频的帧率，范围[1, 60]，默认15。
                     * @return Fps 视频的帧率，范围[1, 60]，默认15。
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置视频的帧率，范围[1, 60]，默认15。
                     * @param _fps 视频的帧率，范围[1, 60]，默认15。
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
                     * 获取视频的码率,单位是bps，范围[64000, 8192000]，默认550000bps。
                     * @return BitRate 视频的码率,单位是bps，范围[64000, 8192000]，默认550000bps。
                     * 
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置视频的码率,单位是bps，范围[64000, 8192000]，默认550000bps。
                     * @param _bitRate 视频的码率,单位是bps，范围[64000, 8192000]，默认550000bps。
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
                     * 获取视频关键帧时间间隔，单位秒，默认值10秒。
                     * @return Gop 视频关键帧时间间隔，单位秒，默认值10秒。
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置视频关键帧时间间隔，单位秒，默认值10秒。
                     * @param _gop 视频关键帧时间间隔，单位秒，默认值10秒。
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
                     * 视频的宽度值，单位为像素，默认值360。不能超过1920，与height的乘积不能超过1920*1080。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频的高度值，单位为像素，默认值640。不能超过1920，与width的乘积不能超过1920*1080。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频的帧率，范围[1, 60]，默认15。
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 视频的码率,单位是bps，范围[64000, 8192000]，默认550000bps。
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                    /**
                     * 视频关键帧时间间隔，单位秒，默认值10秒。
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VIDEOPARAMS_H_
