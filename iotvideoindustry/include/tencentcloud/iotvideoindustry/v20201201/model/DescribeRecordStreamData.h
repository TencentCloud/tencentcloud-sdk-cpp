/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBERECORDSTREAMDATA_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBERECORDSTREAMDATA_H_

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
                * DescribeRecordStreamData 复杂类型
                */
                class DescribeRecordStreamData : public AbstractModel
                {
                public:
                    DescribeRecordStreamData();
                    ~DescribeRecordStreamData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rtsp地址
                     * @return RtspAddr Rtsp地址
                     * 
                     */
                    std::string GetRtspAddr() const;

                    /**
                     * 设置Rtsp地址
                     * @param _rtspAddr Rtsp地址
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
                     * 获取Rtmp地址
                     * @return RtmpAddr Rtmp地址
                     * 
                     */
                    std::string GetRtmpAddr() const;

                    /**
                     * 设置Rtmp地址
                     * @param _rtmpAddr Rtmp地址
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
                     * 获取Hls地址
                     * @return HlsAddr Hls地址
                     * 
                     */
                    std::string GetHlsAddr() const;

                    /**
                     * 设置Hls地址
                     * @param _hlsAddr Hls地址
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
                     * 获取Flv地址
                     * @return FlvAddr Flv地址
                     * 
                     */
                    std::string GetFlvAddr() const;

                    /**
                     * 设置Flv地址
                     * @param _flvAddr Flv地址
                     * 
                     */
                    void SetFlvAddr(const std::string& _flvAddr);

                    /**
                     * 判断参数 FlvAddr 是否已赋值
                     * @return FlvAddr 是否已赋值
                     * 
                     */
                    bool FlvAddrHasBeenSet() const;

                    /**
                     * 获取流Id
                     * @return StreamId 流Id
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置流Id
                     * @param _streamId 流Id
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                private:

                    /**
                     * Rtsp地址
                     */
                    std::string m_rtspAddr;
                    bool m_rtspAddrHasBeenSet;

                    /**
                     * Rtmp地址
                     */
                    std::string m_rtmpAddr;
                    bool m_rtmpAddrHasBeenSet;

                    /**
                     * Hls地址
                     */
                    std::string m_hlsAddr;
                    bool m_hlsAddrHasBeenSet;

                    /**
                     * Flv地址
                     */
                    std::string m_flvAddr;
                    bool m_flvAddrHasBeenSet;

                    /**
                     * 流Id
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBERECORDSTREAMDATA_H_
