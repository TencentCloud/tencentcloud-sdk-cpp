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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECTIPSTATE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECTIPSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 网络探测目的IP的验证结果。
                */
                class NetDetectIpState : public AbstractModel
                {
                public:
                    NetDetectIpState();
                    ~NetDetectIpState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取探测目的IPv4地址。
                     * @return DetectDestinationIp 探测目的IPv4地址。
                     * 
                     */
                    std::string GetDetectDestinationIp() const;

                    /**
                     * 设置探测目的IPv4地址。
                     * @param _detectDestinationIp 探测目的IPv4地址。
                     * 
                     */
                    void SetDetectDestinationIp(const std::string& _detectDestinationIp);

                    /**
                     * 判断参数 DetectDestinationIp 是否已赋值
                     * @return DetectDestinationIp 是否已赋值
                     * 
                     */
                    bool DetectDestinationIpHasBeenSet() const;

                    /**
                     * 获取探测结果。
0：成功；
-1：查询不到路由丢包；
-2：外出ACL丢包；
-3：IN ACL丢包；
-4：其他错误；
                     * @return State 探测结果。
0：成功；
-1：查询不到路由丢包；
-2：外出ACL丢包；
-3：IN ACL丢包；
-4：其他错误；
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置探测结果。
0：成功；
-1：查询不到路由丢包；
-2：外出ACL丢包；
-3：IN ACL丢包；
-4：其他错误；
                     * @param _state 探测结果。
0：成功；
-1：查询不到路由丢包；
-2：外出ACL丢包；
-3：IN ACL丢包；
-4：其他错误；
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取时延，单位毫秒
                     * @return Delay 时延，单位毫秒
                     * 
                     */
                    uint64_t GetDelay() const;

                    /**
                     * 设置时延，单位毫秒
                     * @param _delay 时延，单位毫秒
                     * 
                     */
                    void SetDelay(const uint64_t& _delay);

                    /**
                     * 判断参数 Delay 是否已赋值
                     * @return Delay 是否已赋值
                     * 
                     */
                    bool DelayHasBeenSet() const;

                    /**
                     * 获取丢包率
                     * @return PacketLossRate 丢包率
                     * 
                     */
                    uint64_t GetPacketLossRate() const;

                    /**
                     * 设置丢包率
                     * @param _packetLossRate 丢包率
                     * 
                     */
                    void SetPacketLossRate(const uint64_t& _packetLossRate);

                    /**
                     * 判断参数 PacketLossRate 是否已赋值
                     * @return PacketLossRate 是否已赋值
                     * 
                     */
                    bool PacketLossRateHasBeenSet() const;

                private:

                    /**
                     * 探测目的IPv4地址。
                     */
                    std::string m_detectDestinationIp;
                    bool m_detectDestinationIpHasBeenSet;

                    /**
                     * 探测结果。
0：成功；
-1：查询不到路由丢包；
-2：外出ACL丢包；
-3：IN ACL丢包；
-4：其他错误；
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 时延，单位毫秒
                     */
                    uint64_t m_delay;
                    bool m_delayHasBeenSet;

                    /**
                     * 丢包率
                     */
                    uint64_t m_packetLossRate;
                    bool m_packetLossRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECTIPSTATE_H_
