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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWNORTHSOUTHDETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWNORTHSOUTHDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 概览南北向带宽详情
                */
                class OverviewNorthSouthDetail : public AbstractModel
                {
                public:
                    OverviewNorthSouthDetail();
                    ~OverviewNorthSouthDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>南北向互联网总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return InternetBandwidthTotalMbps <p>南北向互联网总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    double GetInternetBandwidthTotalMbps() const;

                    /**
                     * 设置<p>南北向互联网总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _internetBandwidthTotalMbps <p>南北向互联网总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetInternetBandwidthTotalMbps(const double& _internetBandwidthTotalMbps);

                    /**
                     * 判断参数 InternetBandwidthTotalMbps 是否已赋值
                     * @return InternetBandwidthTotalMbps 是否已赋值
                     * 
                     */
                    bool InternetBandwidthTotalMbpsHasBeenSet() const;

                    /**
                     * 获取<p>南北向网络峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @return NetMaxFlowBps <p>南北向网络峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    double GetNetMaxFlowBps() const;

                    /**
                     * 设置<p>南北向网络峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _netMaxFlowBps <p>南北向网络峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetNetMaxFlowBps(const double& _netMaxFlowBps);

                    /**
                     * 判断参数 NetMaxFlowBps 是否已赋值
                     * @return NetMaxFlowBps 是否已赋值
                     * 
                     */
                    bool NetMaxFlowBpsHasBeenSet() const;

                    /**
                     * 获取<p>串行接入总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return SerialBandwidthTotalMbps <p>串行接入总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetSerialBandwidthTotalMbps() const;

                    /**
                     * 设置<p>串行接入总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _serialBandwidthTotalMbps <p>串行接入总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetSerialBandwidthTotalMbps(const int64_t& _serialBandwidthTotalMbps);

                    /**
                     * 判断参数 SerialBandwidthTotalMbps 是否已赋值
                     * @return SerialBandwidthTotalMbps 是否已赋值
                     * 
                     */
                    bool SerialBandwidthTotalMbpsHasBeenSet() const;

                    /**
                     * 获取<p>NAT 防火墙总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return NatBandwidthTotalMbps <p>NAT 防火墙总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetNatBandwidthTotalMbps() const;

                    /**
                     * 设置<p>NAT 防火墙总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _natBandwidthTotalMbps <p>NAT 防火墙总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetNatBandwidthTotalMbps(const int64_t& _natBandwidthTotalMbps);

                    /**
                     * 判断参数 NatBandwidthTotalMbps 是否已赋值
                     * @return NatBandwidthTotalMbps 是否已赋值
                     * 
                     */
                    bool NatBandwidthTotalMbpsHasBeenSet() const;

                    /**
                     * 获取<p>仅旁路接入带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return BypassOnlyBandwidthMbps <p>仅旁路接入带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetBypassOnlyBandwidthMbps() const;

                    /**
                     * 设置<p>仅旁路接入带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _bypassOnlyBandwidthMbps <p>仅旁路接入带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetBypassOnlyBandwidthMbps(const int64_t& _bypassOnlyBandwidthMbps);

                    /**
                     * 判断参数 BypassOnlyBandwidthMbps 是否已赋值
                     * @return BypassOnlyBandwidthMbps 是否已赋值
                     * 
                     */
                    bool BypassOnlyBandwidthMbpsHasBeenSet() const;

                    /**
                     * 获取<p>未使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return UnusedBandwidthMbps <p>未使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetUnusedBandwidthMbps() const;

                    /**
                     * 设置<p>未使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _unusedBandwidthMbps <p>未使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetUnusedBandwidthMbps(const int64_t& _unusedBandwidthMbps);

                    /**
                     * 判断参数 UnusedBandwidthMbps 是否已赋值
                     * @return UnusedBandwidthMbps 是否已赋值
                     * 
                     */
                    bool UnusedBandwidthMbpsHasBeenSet() const;

                    /**
                     * 获取<p>当前仍可使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return CanUsedBandwidthMbps <p>当前仍可使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetCanUsedBandwidthMbps() const;

                    /**
                     * 设置<p>当前仍可使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _canUsedBandwidthMbps <p>当前仍可使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetCanUsedBandwidthMbps(const int64_t& _canUsedBandwidthMbps);

                    /**
                     * 判断参数 CanUsedBandwidthMbps 是否已赋值
                     * @return CanUsedBandwidthMbps 是否已赋值
                     * 
                     */
                    bool CanUsedBandwidthMbpsHasBeenSet() const;

                    /**
                     * 获取<p>串行链路峰值流量最高的地域名称。</p>
                     * @return MaxSerialRegion <p>串行链路峰值流量最高的地域名称。</p>
                     * 
                     */
                    std::string GetMaxSerialRegion() const;

                    /**
                     * 设置<p>串行链路峰值流量最高的地域名称。</p>
                     * @param _maxSerialRegion <p>串行链路峰值流量最高的地域名称。</p>
                     * 
                     */
                    void SetMaxSerialRegion(const std::string& _maxSerialRegion);

                    /**
                     * 判断参数 MaxSerialRegion 是否已赋值
                     * @return MaxSerialRegion 是否已赋值
                     * 
                     */
                    bool MaxSerialRegionHasBeenSet() const;

                    /**
                     * 获取<p>峰值最高地域的入站流量峰值，单位为 bps。</p><p>单位：bps</p>
                     * @return SerialRegionInFlowMax <p>峰值最高地域的入站流量峰值，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetSerialRegionInFlowMax() const;

                    /**
                     * 设置<p>峰值最高地域的入站流量峰值，单位为 bps。</p><p>单位：bps</p>
                     * @param _serialRegionInFlowMax <p>峰值最高地域的入站流量峰值，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetSerialRegionInFlowMax(const int64_t& _serialRegionInFlowMax);

                    /**
                     * 判断参数 SerialRegionInFlowMax 是否已赋值
                     * @return SerialRegionInFlowMax 是否已赋值
                     * 
                     */
                    bool SerialRegionInFlowMaxHasBeenSet() const;

                    /**
                     * 获取<p>峰值最高地域的出方向最大流量，单位为 bps。</p><p>单位：bps</p>
                     * @return SerialRegionOutFlowMax <p>峰值最高地域的出方向最大流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetSerialRegionOutFlowMax() const;

                    /**
                     * 设置<p>峰值最高地域的出方向最大流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _serialRegionOutFlowMax <p>峰值最高地域的出方向最大流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetSerialRegionOutFlowMax(const int64_t& _serialRegionOutFlowMax);

                    /**
                     * 判断参数 SerialRegionOutFlowMax 是否已赋值
                     * @return SerialRegionOutFlowMax 是否已赋值
                     * 
                     */
                    bool SerialRegionOutFlowMaxHasBeenSet() const;

                private:

                    /**
                     * <p>南北向互联网总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    double m_internetBandwidthTotalMbps;
                    bool m_internetBandwidthTotalMbpsHasBeenSet;

                    /**
                     * <p>南北向网络峰值流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    double m_netMaxFlowBps;
                    bool m_netMaxFlowBpsHasBeenSet;

                    /**
                     * <p>串行接入总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_serialBandwidthTotalMbps;
                    bool m_serialBandwidthTotalMbpsHasBeenSet;

                    /**
                     * <p>NAT 防火墙总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_natBandwidthTotalMbps;
                    bool m_natBandwidthTotalMbpsHasBeenSet;

                    /**
                     * <p>仅旁路接入带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_bypassOnlyBandwidthMbps;
                    bool m_bypassOnlyBandwidthMbpsHasBeenSet;

                    /**
                     * <p>未使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_unusedBandwidthMbps;
                    bool m_unusedBandwidthMbpsHasBeenSet;

                    /**
                     * <p>当前仍可使用带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_canUsedBandwidthMbps;
                    bool m_canUsedBandwidthMbpsHasBeenSet;

                    /**
                     * <p>串行链路峰值流量最高的地域名称。</p>
                     */
                    std::string m_maxSerialRegion;
                    bool m_maxSerialRegionHasBeenSet;

                    /**
                     * <p>峰值最高地域的入站流量峰值，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_serialRegionInFlowMax;
                    bool m_serialRegionInFlowMaxHasBeenSet;

                    /**
                     * <p>峰值最高地域的出方向最大流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_serialRegionOutFlowMax;
                    bool m_serialRegionOutFlowMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWNORTHSOUTHDETAIL_H_
