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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICESTREAMSDATA_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICESTREAMSDATA_H_

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
                * DescribeDeviceStreams的出参复杂类型
                */
                class DescribeDeviceStreamsData : public AbstractModel
                {
                public:
                    DescribeDeviceStreamsData();
                    ~DescribeDeviceStreamsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取rtsp地址
                     * @return RtspAddr rtsp地址
                     * 
                     */
                    std::string GetRtspAddr() const;

                    /**
                     * 设置rtsp地址
                     * @param _rtspAddr rtsp地址
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
                     * 获取rtmp地址
                     * @return RtmpAddr rtmp地址
                     * 
                     */
                    std::string GetRtmpAddr() const;

                    /**
                     * 设置rtmp地址
                     * @param _rtmpAddr rtmp地址
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
                     * 获取hls地址
                     * @return HlsAddr hls地址
                     * 
                     */
                    std::string GetHlsAddr() const;

                    /**
                     * 设置hls地址
                     * @param _hlsAddr hls地址
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
                     * 获取flv地址
                     * @return FlvAddr flv地址
                     * 
                     */
                    std::string GetFlvAddr() const;

                    /**
                     * 设置flv地址
                     * @param _flvAddr flv地址
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
                     * rtsp地址
                     */
                    std::string m_rtspAddr;
                    bool m_rtspAddrHasBeenSet;

                    /**
                     * rtmp地址
                     */
                    std::string m_rtmpAddr;
                    bool m_rtmpAddrHasBeenSet;

                    /**
                     * hls地址
                     */
                    std::string m_hlsAddr;
                    bool m_hlsAddrHasBeenSet;

                    /**
                     * flv地址
                     */
                    std::string m_flvAddr;
                    bool m_flvAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICESTREAMSDATA_H_
