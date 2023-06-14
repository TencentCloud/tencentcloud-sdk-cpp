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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VIDEOSTREAMINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VIDEOSTREAMINFO_H_

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
                * 视频流信息。
                */
                class VideoStreamInfo : public AbstractModel
                {
                public:
                    VideoStreamInfo();
                    ~VideoStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取码率，单位：bps。
                     * @return Bitrate 码率，单位：bps。
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置码率，单位：bps。
                     * @param _bitrate 码率，单位：bps。
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
                     * 获取高度，单位：px。
                     * @return Height 高度，单位：px。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置高度，单位：px。
                     * @param _height 高度，单位：px。
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
                     * 获取宽度，单位：px。
                     * @return Width 宽度，单位：px。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置宽度，单位：px。
                     * @param _width 宽度，单位：px。
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
                     * 获取编码格式。
                     * @return Codec 编码格式。
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置编码格式。
                     * @param _codec 编码格式。
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取帧率，单位：hz。
                     * @return Fps 帧率，单位：hz。
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置帧率，单位：hz。
                     * @param _fps 帧率，单位：hz。
                     * 
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * 码率，单位：bps。
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 高度，单位：px。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 宽度，单位：px。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 编码格式。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 帧率，单位：hz。
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VIDEOSTREAMINFO_H_
