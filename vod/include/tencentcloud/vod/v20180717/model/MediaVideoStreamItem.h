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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAVIDEOSTREAMITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAVIDEOSTREAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DynamicRangeInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 点播文件视频流信息
                */
                class MediaVideoStreamItem : public AbstractModel
                {
                public:
                    MediaVideoStreamItem();
                    ~MediaVideoStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频流的码率，单位：bps。
                     * @return Bitrate 视频流的码率，单位：bps。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置视频流的码率，单位：bps。
                     * @param _bitrate 视频流的码率，单位：bps。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取视频流的高度，单位：px。
                     * @return Height 视频流的高度，单位：px。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置视频流的高度，单位：px。
                     * @param _height 视频流的高度，单位：px。
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
                     * 获取视频流的宽度，单位：px。
                     * @return Width 视频流的宽度，单位：px。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置视频流的宽度，单位：px。
                     * @param _width 视频流的宽度，单位：px。
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
                     * 获取视频流的编码格式，例如 h264。
                     * @return Codec 视频流的编码格式，例如 h264。
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置视频流的编码格式，例如 h264。
                     * @param _codec 视频流的编码格式，例如 h264。
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
                    int64_t GetFps() const;

                    /**
                     * 设置帧率，单位：hz。
                     * @param _fps 帧率，单位：hz。
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
                     * 获取编码标签，仅当 Codec 为 hevc 时有效。
                     * @return CodecTag 编码标签，仅当 Codec 为 hevc 时有效。
                     * 
                     */
                    std::string GetCodecTag() const;

                    /**
                     * 设置编码标签，仅当 Codec 为 hevc 时有效。
                     * @param _codecTag 编码标签，仅当 Codec 为 hevc 时有效。
                     * 
                     */
                    void SetCodecTag(const std::string& _codecTag);

                    /**
                     * 判断参数 CodecTag 是否已赋值
                     * @return CodecTag 是否已赋值
                     * 
                     */
                    bool CodecTagHasBeenSet() const;

                    /**
                     * 获取画面动态范围信息。
<li><font color=red>注意</font>：在 2023-01-10T00:00:00Z 后处理的转码文件，此字段有效。</li>
                     * @return DynamicRangeInfo 画面动态范围信息。
<li><font color=red>注意</font>：在 2023-01-10T00:00:00Z 后处理的转码文件，此字段有效。</li>
                     * 
                     */
                    DynamicRangeInfo GetDynamicRangeInfo() const;

                    /**
                     * 设置画面动态范围信息。
<li><font color=red>注意</font>：在 2023-01-10T00:00:00Z 后处理的转码文件，此字段有效。</li>
                     * @param _dynamicRangeInfo 画面动态范围信息。
<li><font color=red>注意</font>：在 2023-01-10T00:00:00Z 后处理的转码文件，此字段有效。</li>
                     * 
                     */
                    void SetDynamicRangeInfo(const DynamicRangeInfo& _dynamicRangeInfo);

                    /**
                     * 判断参数 DynamicRangeInfo 是否已赋值
                     * @return DynamicRangeInfo 是否已赋值
                     * 
                     */
                    bool DynamicRangeInfoHasBeenSet() const;

                private:

                    /**
                     * 视频流的码率，单位：bps。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 视频流的高度，单位：px。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 视频流的宽度，单位：px。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 视频流的编码格式，例如 h264。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 帧率，单位：hz。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 编码标签，仅当 Codec 为 hevc 时有效。
                     */
                    std::string m_codecTag;
                    bool m_codecTagHasBeenSet;

                    /**
                     * 画面动态范围信息。
<li><font color=red>注意</font>：在 2023-01-10T00:00:00Z 后处理的转码文件，此字段有效。</li>
                     */
                    DynamicRangeInfo m_dynamicRangeInfo;
                    bool m_dynamicRangeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAVIDEOSTREAMITEM_H_
