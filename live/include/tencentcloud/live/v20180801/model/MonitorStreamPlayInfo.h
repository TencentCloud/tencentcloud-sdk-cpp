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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MONITORSTREAMPLAYINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MONITORSTREAMPLAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 监控播放数据
                */
                class MonitorStreamPlayInfo : public AbstractModel
                {
                public:
                    MonitorStreamPlayInfo();
                    ~MonitorStreamPlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取播放域名。
                     * @return PlayDomain 播放域名。
                     * 
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置播放域名。
                     * @param _playDomain 播放域名。
                     * 
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     * 
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取流id。
                     * @return StreamName 流id。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流id。
                     * @param _streamName 流id。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取播放码率，0表示原始码率。
                     * @return Rate 播放码率，0表示原始码率。
                     * 
                     */
                    uint64_t GetRate() const;

                    /**
                     * 设置播放码率，0表示原始码率。
                     * @param _rate 播放码率，0表示原始码率。
                     * 
                     */
                    void SetRate(const uint64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取播放协议，可选值包括 Unknown，Flv，Hls，Rtmp，Huyap2p。
                     * @return Protocol 播放协议，可选值包括 Unknown，Flv，Hls，Rtmp，Huyap2p。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置播放协议，可选值包括 Unknown，Flv，Hls，Rtmp，Huyap2p。
                     * @param _protocol 播放协议，可选值包括 Unknown，Flv，Hls，Rtmp，Huyap2p。
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
                     * 获取带宽，单位是Mbps。
                     * @return Bandwidth 带宽，单位是Mbps。
                     * 
                     */
                    double GetBandwidth() const;

                    /**
                     * 设置带宽，单位是Mbps。
                     * @param _bandwidth 带宽，单位是Mbps。
                     * 
                     */
                    void SetBandwidth(const double& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取在线人数，1分钟采样一个点，统计采样点的tcp链接数目。
                     * @return Online 在线人数，1分钟采样一个点，统计采样点的tcp链接数目。
                     * 
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 设置在线人数，1分钟采样一个点，统计采样点的tcp链接数目。
                     * @param _online 在线人数，1分钟采样一个点，统计采样点的tcp链接数目。
                     * 
                     */
                    void SetOnline(const uint64_t& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                    /**
                     * 获取请求数。
                     * @return Request 请求数。
                     * 
                     */
                    uint64_t GetRequest() const;

                    /**
                     * 设置请求数。
                     * @param _request 请求数。
                     * 
                     */
                    void SetRequest(const uint64_t& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                private:

                    /**
                     * 播放域名。
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * 流id。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 播放码率，0表示原始码率。
                     */
                    uint64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 播放协议，可选值包括 Unknown，Flv，Hls，Rtmp，Huyap2p。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 带宽，单位是Mbps。
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 在线人数，1分钟采样一个点，统计采样点的tcp链接数目。
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * 请求数。
                     */
                    uint64_t m_request;
                    bool m_requestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MONITORSTREAMPLAYINFO_H_
