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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_VIDEOPARAMS_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_VIDEOPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trro/v20220325/model/VideoList.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 转推视频参数
                */
                class VideoParams : public AbstractModel
                {
                public:
                    VideoParams();
                    ~VideoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出流宽，音视频输出时必填。取值范围[0,1920]，单位为像素值。
                     * @return Width 输出流宽，音视频输出时必填。取值范围[0,1920]，单位为像素值。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置输出流宽，音视频输出时必填。取值范围[0,1920]，单位为像素值。
                     * @param _width 输出流宽，音视频输出时必填。取值范围[0,1920]，单位为像素值。
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
                     * 获取输出流高，音视频输出时必填。取值范围[0,1080]，单位为像素值。
                     * @return Height 输出流高，音视频输出时必填。取值范围[0,1080]，单位为像素值。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置输出流高，音视频输出时必填。取值范围[0,1080]，单位为像素值。
                     * @param _height 输出流高，音视频输出时必填。取值范围[0,1080]，单位为像素值。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取输出流帧率，音视频输出时必填。取值范围[1,60]，表示混流的输出帧率可选范围为1到60fps。
                     * @return Fps 输出流帧率，音视频输出时必填。取值范围[1,60]，表示混流的输出帧率可选范围为1到60fps。
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置输出流帧率，音视频输出时必填。取值范围[1,60]，表示混流的输出帧率可选范围为1到60fps。
                     * @param _fps 输出流帧率，音视频输出时必填。取值范围[1,60]，表示混流的输出帧率可选范围为1到60fps。
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取输出流码率，音视频输出时必填。取值范围[1,10000]，单位为kbps。
                     * @return BitRate 输出流码率，音视频输出时必填。取值范围[1,10000]，单位为kbps。
                     * 
                     */
                    int64_t GetBitRate() const;

                    /**
                     * 设置输出流码率，音视频输出时必填。取值范围[1,10000]，单位为kbps。
                     * @param _bitRate 输出流码率，音视频输出时必填。取值范围[1,10000]，单位为kbps。
                     * 
                     */
                    void SetBitRate(const int64_t& _bitRate);

                    /**
                     * 判断参数 BitRate 是否已赋值
                     * @return BitRate 是否已赋值
                     * 
                     */
                    bool BitRateHasBeenSet() const;

                    /**
                     * 获取输出流gop，音视频输出时必填。取值范围[1,5]，单位为秒。
                     * @return Gop 输出流gop，音视频输出时必填。取值范围[1,5]，单位为秒。
                     * 
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置输出流gop，音视频输出时必填。取值范围[1,5]，单位为秒。
                     * @param _gop 输出流gop，音视频输出时必填。取值范围[1,5]，单位为秒。
                     * 
                     */
                    void SetGop(const int64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     * 
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取转推视频流列表
                     * @return VideoList 转推视频流列表
                     * 
                     */
                    std::vector<VideoList> GetVideoList() const;

                    /**
                     * 设置转推视频流列表
                     * @param _videoList 转推视频流列表
                     * 
                     */
                    void SetVideoList(const std::vector<VideoList>& _videoList);

                    /**
                     * 判断参数 VideoList 是否已赋值
                     * @return VideoList 是否已赋值
                     * 
                     */
                    bool VideoListHasBeenSet() const;

                private:

                    /**
                     * 输出流宽，音视频输出时必填。取值范围[0,1920]，单位为像素值。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 输出流高，音视频输出时必填。取值范围[0,1080]，单位为像素值。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 输出流帧率，音视频输出时必填。取值范围[1,60]，表示混流的输出帧率可选范围为1到60fps。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 输出流码率，音视频输出时必填。取值范围[1,10000]，单位为kbps。
                     */
                    int64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                    /**
                     * 输出流gop，音视频输出时必填。取值范围[1,5]，单位为秒。
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * 转推视频流列表
                     */
                    std::vector<VideoList> m_videoList;
                    bool m_videoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_VIDEOPARAMS_H_
