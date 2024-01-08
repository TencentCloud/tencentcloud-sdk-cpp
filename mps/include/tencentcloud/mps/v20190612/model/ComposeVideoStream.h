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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEVIDEOSTREAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEVIDEOSTREAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 视频流信息。
                */
                class ComposeVideoStream : public AbstractModel
                {
                public:
                    ComposeVideoStream();
                    ~ComposeVideoStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频流的编码方式，可选值：
<li>H.264：H.264 编码（默认）。</li>
                     * @return Codec 视频流的编码方式，可选值：
<li>H.264：H.264 编码（默认）。</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置视频流的编码方式，可选值：
<li>H.264：H.264 编码（默认）。</li>
                     * @param _codec 视频流的编码方式，可选值：
<li>H.264：H.264 编码（默认）。</li>
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
                     * 获取视频帧率，取值范围：[0, 60]，单位：Hz。  
默认值：0，表示和第一个视频帧率一致。
                     * @return Fps 视频帧率，取值范围：[0, 60]，单位：Hz。  
默认值：0，表示和第一个视频帧率一致。
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置视频帧率，取值范围：[0, 60]，单位：Hz。  
默认值：0，表示和第一个视频帧率一致。
                     * @param _fps 视频帧率，取值范围：[0, 60]，单位：Hz。  
默认值：0，表示和第一个视频帧率一致。
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
                     * 获取参考码率，单位 kbps，范围：50~35000。
如果设置，编码时会尽量按该码率进行编码。
如果不设置，服务将通过画面复杂度自动采用合适的码率。
                     * @return Bitrate 参考码率，单位 kbps，范围：50~35000。
如果设置，编码时会尽量按该码率进行编码。
如果不设置，服务将通过画面复杂度自动采用合适的码率。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置参考码率，单位 kbps，范围：50~35000。
如果设置，编码时会尽量按该码率进行编码。
如果不设置，服务将通过画面复杂度自动采用合适的码率。
                     * @param _bitrate 参考码率，单位 kbps，范围：50~35000。
如果设置，编码时会尽量按该码率进行编码。
如果不设置，服务将通过画面复杂度自动采用合适的码率。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                private:

                    /**
                     * 视频流的编码方式，可选值：
<li>H.264：H.264 编码（默认）。</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 视频帧率，取值范围：[0, 60]，单位：Hz。  
默认值：0，表示和第一个视频帧率一致。
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 参考码率，单位 kbps，范围：50~35000。
如果设置，编码时会尽量按该码率进行编码。
如果不设置，服务将通过画面复杂度自动采用合适的码率。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEVIDEOSTREAM_H_
