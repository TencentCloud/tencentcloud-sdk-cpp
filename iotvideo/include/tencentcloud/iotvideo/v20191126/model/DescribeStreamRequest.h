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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBESTREAMREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBESTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeStream请求参数结构体
                */
                class DescribeStreamRequest : public AbstractModel
                {
                public:
                    DescribeStreamRequest();
                    ~DescribeStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取终端用户ID
                     * @return AccessId 终端用户ID
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置终端用户ID
                     * @param _accessId 终端用户ID
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取直播协议, 可选值：RTSP、RTMP、HLS、HLS-fmp4
                     * @return Protocol 直播协议, 可选值：RTSP、RTMP、HLS、HLS-fmp4
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置直播协议, 可选值：RTSP、RTMP、HLS、HLS-fmp4
                     * @param _protocol 直播协议, 可选值：RTSP、RTMP、HLS、HLS-fmp4
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取音视频流地址
                     * @return Address 音视频流地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置音视频流地址
                     * @param _address 音视频流地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取设备访问token，访问用户未绑定的设备时，需提供该参数
                     * @return AccessToken 设备访问token，访问用户未绑定的设备时，需提供该参数
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 设置设备访问token，访问用户未绑定的设备时，需提供该参数
                     * @param _accessToken 设备访问token，访问用户未绑定的设备时，需提供该参数
                     * 
                     */
                    void SetAccessToken(const std::string& _accessToken);

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                private:

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 终端用户ID
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 直播协议, 可选值：RTSP、RTMP、HLS、HLS-fmp4
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 音视频流地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 设备访问token，访问用户未绑定的设备时，需提供该参数
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBESTREAMREQUEST_H_
