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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MULTINET_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MULTINET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 多网的网卡状态信息
                */
                class MultiNet : public AbstractModel
                {
                public:
                    MultiNet();
                    ~MultiNet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网卡序号
                     * @return NetId 网卡序号
                     * 
                     */
                    int64_t GetNetId() const;

                    /**
                     * 设置网卡序号
                     * @param _netId 网卡序号
                     * 
                     */
                    void SetNetId(const int64_t& _netId);

                    /**
                     * 判断参数 NetId 是否已赋值
                     * @return NetId 是否已赋值
                     * 
                     */
                    bool NetIdHasBeenSet() const;

                    /**
                     * 获取网卡IP
                     * @return NetIp 网卡IP
                     * 
                     */
                    std::string GetNetIp() const;

                    /**
                     * 设置网卡IP
                     * @param _netIp 网卡IP
                     * 
                     */
                    void SetNetIp(const std::string& _netIp);

                    /**
                     * 判断参数 NetIp 是否已赋值
                     * @return NetIp 是否已赋值
                     * 
                     */
                    bool NetIpHasBeenSet() const;

                    /**
                     * 获取时延，单位ms
                     * @return Rtt 时延，单位ms
                     * 
                     */
                    std::vector<int64_t> GetRtt() const;

                    /**
                     * 设置时延，单位ms
                     * @param _rtt 时延，单位ms
                     * 
                     */
                    void SetRtt(const std::vector<int64_t>& _rtt);

                    /**
                     * 判断参数 Rtt 是否已赋值
                     * @return Rtt 是否已赋值
                     * 
                     */
                    bool RttHasBeenSet() const;

                    /**
                     * 获取丢包率，单位%
                     * @return Lost 丢包率，单位%
                     * 
                     */
                    std::vector<int64_t> GetLost() const;

                    /**
                     * 设置丢包率，单位%
                     * @param _lost 丢包率，单位%
                     * 
                     */
                    void SetLost(const std::vector<int64_t>& _lost);

                    /**
                     * 判断参数 Lost 是否已赋值
                     * @return Lost 是否已赋值
                     * 
                     */
                    bool LostHasBeenSet() const;

                    /**
                     * 获取发送bps，单位kbps
                     * @return SendBps 发送bps，单位kbps
                     * 
                     */
                    std::vector<int64_t> GetSendBps() const;

                    /**
                     * 设置发送bps，单位kbps
                     * @param _sendBps 发送bps，单位kbps
                     * 
                     */
                    void SetSendBps(const std::vector<int64_t>& _sendBps);

                    /**
                     * 判断参数 SendBps 是否已赋值
                     * @return SendBps 是否已赋值
                     * 
                     */
                    bool SendBpsHasBeenSet() const;

                    /**
                     * 获取接收bps，单位kbps
                     * @return RecvBps 接收bps，单位kbps
                     * 
                     */
                    std::vector<int64_t> GetRecvBps() const;

                    /**
                     * 设置接收bps，单位kbps
                     * @param _recvBps 接收bps，单位kbps
                     * 
                     */
                    void SetRecvBps(const std::vector<int64_t>& _recvBps);

                    /**
                     * 判断参数 RecvBps 是否已赋值
                     * @return RecvBps 是否已赋值
                     * 
                     */
                    bool RecvBpsHasBeenSet() const;

                private:

                    /**
                     * 网卡序号
                     */
                    int64_t m_netId;
                    bool m_netIdHasBeenSet;

                    /**
                     * 网卡IP
                     */
                    std::string m_netIp;
                    bool m_netIpHasBeenSet;

                    /**
                     * 时延，单位ms
                     */
                    std::vector<int64_t> m_rtt;
                    bool m_rttHasBeenSet;

                    /**
                     * 丢包率，单位%
                     */
                    std::vector<int64_t> m_lost;
                    bool m_lostHasBeenSet;

                    /**
                     * 发送bps，单位kbps
                     */
                    std::vector<int64_t> m_sendBps;
                    bool m_sendBpsHasBeenSet;

                    /**
                     * 接收bps，单位kbps
                     */
                    std::vector<int64_t> m_recvBps;
                    bool m_recvBpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MULTINET_H_
