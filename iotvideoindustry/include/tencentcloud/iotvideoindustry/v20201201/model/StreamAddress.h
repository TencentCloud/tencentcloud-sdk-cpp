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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_STREAMADDRESS_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_STREAMADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 拉流地址，只有在推流情况下才有
                */
                class StreamAddress : public AbstractModel
                {
                public:
                    StreamAddress();
                    ~StreamAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流ID
                     * @return StreamId 流ID
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置流ID
                     * @param _streamId 流ID
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取rtsp流地址
                     * @return RtspAddr rtsp流地址
                     * 
                     */
                    std::string GetRtspAddr() const;

                    /**
                     * 设置rtsp流地址
                     * @param _rtspAddr rtsp流地址
                     * 
                     */
                    void SetRtspAddr(const std::string& _rtspAddr);

                    /**
                     * 判断参数 RtspAddr 是否已赋值
                     * @return RtspAddr 是否已赋值
                     * 
                     */
                    bool RtspAddrHasBeenSet() const;

                    /**
                     * 获取rtmp流地址
                     * @return RtmpAddr rtmp流地址
                     * 
                     */
                    std::string GetRtmpAddr() const;

                    /**
                     * 设置rtmp流地址
                     * @param _rtmpAddr rtmp流地址
                     * 
                     */
                    void SetRtmpAddr(const std::string& _rtmpAddr);

                    /**
                     * 判断参数 RtmpAddr 是否已赋值
                     * @return RtmpAddr 是否已赋值
                     * 
                     */
                    bool RtmpAddrHasBeenSet() const;

                    /**
                     * 获取hls流地址
                     * @return HlsAddr hls流地址
                     * 
                     */
                    std::string GetHlsAddr() const;

                    /**
                     * 设置hls流地址
                     * @param _hlsAddr hls流地址
                     * 
                     */
                    void SetHlsAddr(const std::string& _hlsAddr);

                    /**
                     * 判断参数 HlsAddr 是否已赋值
                     * @return HlsAddr 是否已赋值
                     * 
                     */
                    bool HlsAddrHasBeenSet() const;

                    /**
                     * 获取flv流地址
                     * @return FlvAddr flv流地址
                     * 
                     */
                    std::string GetFlvAddr() const;

                    /**
                     * 设置flv流地址
                     * @param _flvAddr flv流地址
                     * 
                     */
                    void SetFlvAddr(const std::string& _flvAddr);

                    /**
                     * 判断参数 FlvAddr 是否已赋值
                     * @return FlvAddr 是否已赋值
                     * 
                     */
                    bool FlvAddrHasBeenSet() const;

                private:

                    /**
                     * 流ID
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * rtsp流地址
                     */
                    std::string m_rtspAddr;
                    bool m_rtspAddrHasBeenSet;

                    /**
                     * rtmp流地址
                     */
                    std::string m_rtmpAddr;
                    bool m_rtmpAddrHasBeenSet;

                    /**
                     * hls流地址
                     */
                    std::string m_hlsAddr;
                    bool m_hlsAddrHasBeenSet;

                    /**
                     * flv流地址
                     */
                    std::string m_flvAddr;
                    bool m_flvAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_STREAMADDRESS_H_
