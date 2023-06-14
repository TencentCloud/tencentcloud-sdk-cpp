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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYDROPOPTION_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYDROPOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DDoS高级策略的禁用协议选项
                */
                class DDoSPolicyDropOption : public AbstractModel
                {
                public:
                    DDoSPolicyDropOption();
                    ~DDoSPolicyDropOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取禁用TCP协议，取值范围[0,1]
                     * @return DropTcp 禁用TCP协议，取值范围[0,1]
                     * 
                     */
                    uint64_t GetDropTcp() const;

                    /**
                     * 设置禁用TCP协议，取值范围[0,1]
                     * @param _dropTcp 禁用TCP协议，取值范围[0,1]
                     * 
                     */
                    void SetDropTcp(const uint64_t& _dropTcp);

                    /**
                     * 判断参数 DropTcp 是否已赋值
                     * @return DropTcp 是否已赋值
                     * 
                     */
                    bool DropTcpHasBeenSet() const;

                    /**
                     * 获取禁用UDP协议，取值范围[0,1]
                     * @return DropUdp 禁用UDP协议，取值范围[0,1]
                     * 
                     */
                    uint64_t GetDropUdp() const;

                    /**
                     * 设置禁用UDP协议，取值范围[0,1]
                     * @param _dropUdp 禁用UDP协议，取值范围[0,1]
                     * 
                     */
                    void SetDropUdp(const uint64_t& _dropUdp);

                    /**
                     * 判断参数 DropUdp 是否已赋值
                     * @return DropUdp 是否已赋值
                     * 
                     */
                    bool DropUdpHasBeenSet() const;

                    /**
                     * 获取禁用ICMP协议，取值范围[0,1]
                     * @return DropIcmp 禁用ICMP协议，取值范围[0,1]
                     * 
                     */
                    uint64_t GetDropIcmp() const;

                    /**
                     * 设置禁用ICMP协议，取值范围[0,1]
                     * @param _dropIcmp 禁用ICMP协议，取值范围[0,1]
                     * 
                     */
                    void SetDropIcmp(const uint64_t& _dropIcmp);

                    /**
                     * 判断参数 DropIcmp 是否已赋值
                     * @return DropIcmp 是否已赋值
                     * 
                     */
                    bool DropIcmpHasBeenSet() const;

                    /**
                     * 获取禁用其他协议，取值范围[0,1]
                     * @return DropOther 禁用其他协议，取值范围[0,1]
                     * 
                     */
                    uint64_t GetDropOther() const;

                    /**
                     * 设置禁用其他协议，取值范围[0,1]
                     * @param _dropOther 禁用其他协议，取值范围[0,1]
                     * 
                     */
                    void SetDropOther(const uint64_t& _dropOther);

                    /**
                     * 判断参数 DropOther 是否已赋值
                     * @return DropOther 是否已赋值
                     * 
                     */
                    bool DropOtherHasBeenSet() const;

                    /**
                     * 获取拒绝海外流量，取值范围[0,1]
                     * @return DropAbroad 拒绝海外流量，取值范围[0,1]
                     * 
                     */
                    uint64_t GetDropAbroad() const;

                    /**
                     * 设置拒绝海外流量，取值范围[0,1]
                     * @param _dropAbroad 拒绝海外流量，取值范围[0,1]
                     * 
                     */
                    void SetDropAbroad(const uint64_t& _dropAbroad);

                    /**
                     * 判断参数 DropAbroad 是否已赋值
                     * @return DropAbroad 是否已赋值
                     * 
                     */
                    bool DropAbroadHasBeenSet() const;

                    /**
                     * 获取空连接防护，取值范围[0,1]
                     * @return CheckSyncConn 空连接防护，取值范围[0,1]
                     * 
                     */
                    uint64_t GetCheckSyncConn() const;

                    /**
                     * 设置空连接防护，取值范围[0,1]
                     * @param _checkSyncConn 空连接防护，取值范围[0,1]
                     * 
                     */
                    void SetCheckSyncConn(const uint64_t& _checkSyncConn);

                    /**
                     * 判断参数 CheckSyncConn 是否已赋值
                     * @return CheckSyncConn 是否已赋值
                     * 
                     */
                    bool CheckSyncConnHasBeenSet() const;

                    /**
                     * 获取基于来源IP及目的IP的新建连接抑制，取值范围[0,4294967295]
                     * @return SdNewLimit 基于来源IP及目的IP的新建连接抑制，取值范围[0,4294967295]
                     * 
                     */
                    uint64_t GetSdNewLimit() const;

                    /**
                     * 设置基于来源IP及目的IP的新建连接抑制，取值范围[0,4294967295]
                     * @param _sdNewLimit 基于来源IP及目的IP的新建连接抑制，取值范围[0,4294967295]
                     * 
                     */
                    void SetSdNewLimit(const uint64_t& _sdNewLimit);

                    /**
                     * 判断参数 SdNewLimit 是否已赋值
                     * @return SdNewLimit 是否已赋值
                     * 
                     */
                    bool SdNewLimitHasBeenSet() const;

                    /**
                     * 获取基于目的IP的新建连接抑制，取值范围[0,4294967295]
                     * @return DstNewLimit 基于目的IP的新建连接抑制，取值范围[0,4294967295]
                     * 
                     */
                    uint64_t GetDstNewLimit() const;

                    /**
                     * 设置基于目的IP的新建连接抑制，取值范围[0,4294967295]
                     * @param _dstNewLimit 基于目的IP的新建连接抑制，取值范围[0,4294967295]
                     * 
                     */
                    void SetDstNewLimit(const uint64_t& _dstNewLimit);

                    /**
                     * 判断参数 DstNewLimit 是否已赋值
                     * @return DstNewLimit 是否已赋值
                     * 
                     */
                    bool DstNewLimitHasBeenSet() const;

                    /**
                     * 获取基于来源IP及目的IP的并发连接抑制，取值范围[0,4294967295]
                     * @return SdConnLimit 基于来源IP及目的IP的并发连接抑制，取值范围[0,4294967295]
                     * 
                     */
                    uint64_t GetSdConnLimit() const;

                    /**
                     * 设置基于来源IP及目的IP的并发连接抑制，取值范围[0,4294967295]
                     * @param _sdConnLimit 基于来源IP及目的IP的并发连接抑制，取值范围[0,4294967295]
                     * 
                     */
                    void SetSdConnLimit(const uint64_t& _sdConnLimit);

                    /**
                     * 判断参数 SdConnLimit 是否已赋值
                     * @return SdConnLimit 是否已赋值
                     * 
                     */
                    bool SdConnLimitHasBeenSet() const;

                    /**
                     * 获取基于目的IP的并发连接抑制，取值范围[0,4294967295]
                     * @return DstConnLimit 基于目的IP的并发连接抑制，取值范围[0,4294967295]
                     * 
                     */
                    uint64_t GetDstConnLimit() const;

                    /**
                     * 设置基于目的IP的并发连接抑制，取值范围[0,4294967295]
                     * @param _dstConnLimit 基于目的IP的并发连接抑制，取值范围[0,4294967295]
                     * 
                     */
                    void SetDstConnLimit(const uint64_t& _dstConnLimit);

                    /**
                     * 判断参数 DstConnLimit 是否已赋值
                     * @return DstConnLimit 是否已赋值
                     * 
                     */
                    bool DstConnLimitHasBeenSet() const;

                    /**
                     * 获取基于连接抑制触发阈值，取值范围[0,4294967295]
                     * @return BadConnThreshold 基于连接抑制触发阈值，取值范围[0,4294967295]
                     * 
                     */
                    uint64_t GetBadConnThreshold() const;

                    /**
                     * 设置基于连接抑制触发阈值，取值范围[0,4294967295]
                     * @param _badConnThreshold 基于连接抑制触发阈值，取值范围[0,4294967295]
                     * 
                     */
                    void SetBadConnThreshold(const uint64_t& _badConnThreshold);

                    /**
                     * 判断参数 BadConnThreshold 是否已赋值
                     * @return BadConnThreshold 是否已赋值
                     * 
                     */
                    bool BadConnThresholdHasBeenSet() const;

                    /**
                     * 获取异常连接检测条件，空连接防护开关，，取值范围[0,1]
                     * @return NullConnEnable 异常连接检测条件，空连接防护开关，，取值范围[0,1]
                     * 
                     */
                    uint64_t GetNullConnEnable() const;

                    /**
                     * 设置异常连接检测条件，空连接防护开关，，取值范围[0,1]
                     * @param _nullConnEnable 异常连接检测条件，空连接防护开关，，取值范围[0,1]
                     * 
                     */
                    void SetNullConnEnable(const uint64_t& _nullConnEnable);

                    /**
                     * 判断参数 NullConnEnable 是否已赋值
                     * @return NullConnEnable 是否已赋值
                     * 
                     */
                    bool NullConnEnableHasBeenSet() const;

                    /**
                     * 获取异常连接检测条件，连接超时，，取值范围[0,65535]
                     * @return ConnTimeout 异常连接检测条件，连接超时，，取值范围[0,65535]
                     * 
                     */
                    uint64_t GetConnTimeout() const;

                    /**
                     * 设置异常连接检测条件，连接超时，，取值范围[0,65535]
                     * @param _connTimeout 异常连接检测条件，连接超时，，取值范围[0,65535]
                     * 
                     */
                    void SetConnTimeout(const uint64_t& _connTimeout);

                    /**
                     * 判断参数 ConnTimeout 是否已赋值
                     * @return ConnTimeout 是否已赋值
                     * 
                     */
                    bool ConnTimeoutHasBeenSet() const;

                    /**
                     * 获取异常连接检测条件，syn占比ack百分比，，取值范围[0,100]
                     * @return SynRate 异常连接检测条件，syn占比ack百分比，，取值范围[0,100]
                     * 
                     */
                    uint64_t GetSynRate() const;

                    /**
                     * 设置异常连接检测条件，syn占比ack百分比，，取值范围[0,100]
                     * @param _synRate 异常连接检测条件，syn占比ack百分比，，取值范围[0,100]
                     * 
                     */
                    void SetSynRate(const uint64_t& _synRate);

                    /**
                     * 判断参数 SynRate 是否已赋值
                     * @return SynRate 是否已赋值
                     * 
                     */
                    bool SynRateHasBeenSet() const;

                    /**
                     * 获取异常连接检测条件，syn阈值，取值范围[0,100]
                     * @return SynLimit 异常连接检测条件，syn阈值，取值范围[0,100]
                     * 
                     */
                    uint64_t GetSynLimit() const;

                    /**
                     * 设置异常连接检测条件，syn阈值，取值范围[0,100]
                     * @param _synLimit 异常连接检测条件，syn阈值，取值范围[0,100]
                     * 
                     */
                    void SetSynLimit(const uint64_t& _synLimit);

                    /**
                     * 判断参数 SynLimit 是否已赋值
                     * @return SynLimit 是否已赋值
                     * 
                     */
                    bool SynLimitHasBeenSet() const;

                    /**
                     * 获取tcp限速，取值范围[0,4294967295]
                     * @return DTcpMbpsLimit tcp限速，取值范围[0,4294967295]
                     * 
                     */
                    uint64_t GetDTcpMbpsLimit() const;

                    /**
                     * 设置tcp限速，取值范围[0,4294967295]
                     * @param _dTcpMbpsLimit tcp限速，取值范围[0,4294967295]
                     * 
                     */
                    void SetDTcpMbpsLimit(const uint64_t& _dTcpMbpsLimit);

                    /**
                     * 判断参数 DTcpMbpsLimit 是否已赋值
                     * @return DTcpMbpsLimit 是否已赋值
                     * 
                     */
                    bool DTcpMbpsLimitHasBeenSet() const;

                    /**
                     * 获取udp限速，取值范围[0,4294967295]
                     * @return DUdpMbpsLimit udp限速，取值范围[0,4294967295]
                     * 
                     */
                    uint64_t GetDUdpMbpsLimit() const;

                    /**
                     * 设置udp限速，取值范围[0,4294967295]
                     * @param _dUdpMbpsLimit udp限速，取值范围[0,4294967295]
                     * 
                     */
                    void SetDUdpMbpsLimit(const uint64_t& _dUdpMbpsLimit);

                    /**
                     * 判断参数 DUdpMbpsLimit 是否已赋值
                     * @return DUdpMbpsLimit 是否已赋值
                     * 
                     */
                    bool DUdpMbpsLimitHasBeenSet() const;

                    /**
                     * 获取icmp限速，取值范围[0,4294967295]
                     * @return DIcmpMbpsLimit icmp限速，取值范围[0,4294967295]
                     * 
                     */
                    uint64_t GetDIcmpMbpsLimit() const;

                    /**
                     * 设置icmp限速，取值范围[0,4294967295]
                     * @param _dIcmpMbpsLimit icmp限速，取值范围[0,4294967295]
                     * 
                     */
                    void SetDIcmpMbpsLimit(const uint64_t& _dIcmpMbpsLimit);

                    /**
                     * 判断参数 DIcmpMbpsLimit 是否已赋值
                     * @return DIcmpMbpsLimit 是否已赋值
                     * 
                     */
                    bool DIcmpMbpsLimitHasBeenSet() const;

                    /**
                     * 获取other协议限速，取值范围[0,4294967295]
                     * @return DOtherMbpsLimit other协议限速，取值范围[0,4294967295]
                     * 
                     */
                    uint64_t GetDOtherMbpsLimit() const;

                    /**
                     * 设置other协议限速，取值范围[0,4294967295]
                     * @param _dOtherMbpsLimit other协议限速，取值范围[0,4294967295]
                     * 
                     */
                    void SetDOtherMbpsLimit(const uint64_t& _dOtherMbpsLimit);

                    /**
                     * 判断参数 DOtherMbpsLimit 是否已赋值
                     * @return DOtherMbpsLimit 是否已赋值
                     * 
                     */
                    bool DOtherMbpsLimitHasBeenSet() const;

                private:

                    /**
                     * 禁用TCP协议，取值范围[0,1]
                     */
                    uint64_t m_dropTcp;
                    bool m_dropTcpHasBeenSet;

                    /**
                     * 禁用UDP协议，取值范围[0,1]
                     */
                    uint64_t m_dropUdp;
                    bool m_dropUdpHasBeenSet;

                    /**
                     * 禁用ICMP协议，取值范围[0,1]
                     */
                    uint64_t m_dropIcmp;
                    bool m_dropIcmpHasBeenSet;

                    /**
                     * 禁用其他协议，取值范围[0,1]
                     */
                    uint64_t m_dropOther;
                    bool m_dropOtherHasBeenSet;

                    /**
                     * 拒绝海外流量，取值范围[0,1]
                     */
                    uint64_t m_dropAbroad;
                    bool m_dropAbroadHasBeenSet;

                    /**
                     * 空连接防护，取值范围[0,1]
                     */
                    uint64_t m_checkSyncConn;
                    bool m_checkSyncConnHasBeenSet;

                    /**
                     * 基于来源IP及目的IP的新建连接抑制，取值范围[0,4294967295]
                     */
                    uint64_t m_sdNewLimit;
                    bool m_sdNewLimitHasBeenSet;

                    /**
                     * 基于目的IP的新建连接抑制，取值范围[0,4294967295]
                     */
                    uint64_t m_dstNewLimit;
                    bool m_dstNewLimitHasBeenSet;

                    /**
                     * 基于来源IP及目的IP的并发连接抑制，取值范围[0,4294967295]
                     */
                    uint64_t m_sdConnLimit;
                    bool m_sdConnLimitHasBeenSet;

                    /**
                     * 基于目的IP的并发连接抑制，取值范围[0,4294967295]
                     */
                    uint64_t m_dstConnLimit;
                    bool m_dstConnLimitHasBeenSet;

                    /**
                     * 基于连接抑制触发阈值，取值范围[0,4294967295]
                     */
                    uint64_t m_badConnThreshold;
                    bool m_badConnThresholdHasBeenSet;

                    /**
                     * 异常连接检测条件，空连接防护开关，，取值范围[0,1]
                     */
                    uint64_t m_nullConnEnable;
                    bool m_nullConnEnableHasBeenSet;

                    /**
                     * 异常连接检测条件，连接超时，，取值范围[0,65535]
                     */
                    uint64_t m_connTimeout;
                    bool m_connTimeoutHasBeenSet;

                    /**
                     * 异常连接检测条件，syn占比ack百分比，，取值范围[0,100]
                     */
                    uint64_t m_synRate;
                    bool m_synRateHasBeenSet;

                    /**
                     * 异常连接检测条件，syn阈值，取值范围[0,100]
                     */
                    uint64_t m_synLimit;
                    bool m_synLimitHasBeenSet;

                    /**
                     * tcp限速，取值范围[0,4294967295]
                     */
                    uint64_t m_dTcpMbpsLimit;
                    bool m_dTcpMbpsLimitHasBeenSet;

                    /**
                     * udp限速，取值范围[0,4294967295]
                     */
                    uint64_t m_dUdpMbpsLimit;
                    bool m_dUdpMbpsLimitHasBeenSet;

                    /**
                     * icmp限速，取值范围[0,4294967295]
                     */
                    uint64_t m_dIcmpMbpsLimit;
                    bool m_dIcmpMbpsLimitHasBeenSet;

                    /**
                     * other协议限速，取值范围[0,4294967295]
                     */
                    uint64_t m_dOtherMbpsLimit;
                    bool m_dOtherMbpsLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYDROPOPTION_H_
