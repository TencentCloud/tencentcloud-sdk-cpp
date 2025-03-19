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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_VIDEORECORDSTREAMRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_VIDEORECORDSTREAMRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/RawInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 视频流查询结果
                */
                class VideoRecordStreamRes : public AbstractModel
                {
                public:
                    VideoRecordStreamRes();
                    ~VideoRecordStreamRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取FLV协议格式视频流
                     * @return FLV FLV协议格式视频流
                     * 
                     */
                    std::string GetFLV() const;

                    /**
                     * 设置FLV协议格式视频流
                     * @param _fLV FLV协议格式视频流
                     * 
                     */
                    void SetFLV(const std::string& _fLV);

                    /**
                     * 判断参数 FLV 是否已赋值
                     * @return FLV 是否已赋值
                     * 
                     */
                    bool FLVHasBeenSet() const;

                    /**
                     * 获取RTMP协议格式视频流
                     * @return RTMP RTMP协议格式视频流
                     * 
                     */
                    std::string GetRTMP() const;

                    /**
                     * 设置RTMP协议格式视频流
                     * @param _rTMP RTMP协议格式视频流
                     * 
                     */
                    void SetRTMP(const std::string& _rTMP);

                    /**
                     * 判断参数 RTMP 是否已赋值
                     * @return RTMP 是否已赋值
                     * 
                     */
                    bool RTMPHasBeenSet() const;

                    /**
                     * 获取HLS协议格式视频流
                     * @return HLS HLS协议格式视频流
                     * 
                     */
                    std::string GetHLS() const;

                    /**
                     * 设置HLS协议格式视频流
                     * @param _hLS HLS协议格式视频流
                     * 
                     */
                    void SetHLS(const std::string& _hLS);

                    /**
                     * 判断参数 HLS 是否已赋值
                     * @return HLS 是否已赋值
                     * 
                     */
                    bool HLSHasBeenSet() const;

                    /**
                     * 获取WebRtc协议格式视频流
                     * @return WebRTC WebRtc协议格式视频流
                     * 
                     */
                    std::string GetWebRTC() const;

                    /**
                     * 设置WebRtc协议格式视频流
                     * @param _webRTC WebRtc协议格式视频流
                     * 
                     */
                    void SetWebRTC(const std::string& _webRTC);

                    /**
                     * 判断参数 WebRTC 是否已赋值
                     * @return WebRTC 是否已赋值
                     * 
                     */
                    bool WebRTCHasBeenSet() const;

                    /**
                     * 获取RAW协议格式视频流
                     * @return RAW RAW协议格式视频流
                     * 
                     */
                    RawInfo GetRAW() const;

                    /**
                     * 设置RAW协议格式视频流
                     * @param _rAW RAW协议格式视频流
                     * 
                     */
                    void SetRAW(const RawInfo& _rAW);

                    /**
                     * 判断参数 RAW 是否已赋值
                     * @return RAW 是否已赋值
                     * 
                     */
                    bool RAWHasBeenSet() const;

                    /**
                     * 获取视频流的唯一标识
                     * @return Stream 视频流的唯一标识
                     * 
                     */
                    std::string GetStream() const;

                    /**
                     * 设置视频流的唯一标识
                     * @param _stream 视频流的唯一标识
                     * 
                     */
                    void SetStream(const std::string& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                private:

                    /**
                     * FLV协议格式视频流
                     */
                    std::string m_fLV;
                    bool m_fLVHasBeenSet;

                    /**
                     * RTMP协议格式视频流
                     */
                    std::string m_rTMP;
                    bool m_rTMPHasBeenSet;

                    /**
                     * HLS协议格式视频流
                     */
                    std::string m_hLS;
                    bool m_hLSHasBeenSet;

                    /**
                     * WebRtc协议格式视频流
                     */
                    std::string m_webRTC;
                    bool m_webRTCHasBeenSet;

                    /**
                     * RAW协议格式视频流
                     */
                    RawInfo m_rAW;
                    bool m_rAWHasBeenSet;

                    /**
                     * 视频流的唯一标识
                     */
                    std::string m_stream;
                    bool m_streamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_VIDEORECORDSTREAMRES_H_
