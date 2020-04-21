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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateProxy请求参数结构体
                */
                class InquiryPriceCreateProxyRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateProxyRequest();
                    ~InquiryPriceCreateProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加速区域名称。
                     * @return AccessRegion 加速区域名称。
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置加速区域名称。
                     * @param AccessRegion 加速区域名称。
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取通道带宽上限，单位：Mbps。
                     * @return Bandwidth 通道带宽上限，单位：Mbps。
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置通道带宽上限，单位：Mbps。
                     * @param Bandwidth 通道带宽上限，单位：Mbps。
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取（旧参数，请切换到RealServerRegion）源站区域名称。
                     * @return DestRegion （旧参数，请切换到RealServerRegion）源站区域名称。
                     */
                    std::string GetDestRegion() const;

                    /**
                     * 设置（旧参数，请切换到RealServerRegion）源站区域名称。
                     * @param DestRegion （旧参数，请切换到RealServerRegion）源站区域名称。
                     */
                    void SetDestRegion(const std::string& _destRegion);

                    /**
                     * 判断参数 DestRegion 是否已赋值
                     * @return DestRegion 是否已赋值
                     */
                    bool DestRegionHasBeenSet() const;

                    /**
                     * 获取（旧参数，请切换到Concurrent）通道并发量上限，表示同时在线的连接数，单位：万。
                     * @return Concurrency （旧参数，请切换到Concurrent）通道并发量上限，表示同时在线的连接数，单位：万。
                     */
                    int64_t GetConcurrency() const;

                    /**
                     * 设置（旧参数，请切换到Concurrent）通道并发量上限，表示同时在线的连接数，单位：万。
                     * @param Concurrency （旧参数，请切换到Concurrent）通道并发量上限，表示同时在线的连接数，单位：万。
                     */
                    void SetConcurrency(const int64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取（新参数）源站区域名称。
                     * @return RealServerRegion （新参数）源站区域名称。
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置（新参数）源站区域名称。
                     * @param RealServerRegion （新参数）源站区域名称。
                     */
                    void SetRealServerRegion(const std::string& _realServerRegion);

                    /**
                     * 判断参数 RealServerRegion 是否已赋值
                     * @return RealServerRegion 是否已赋值
                     */
                    bool RealServerRegionHasBeenSet() const;

                    /**
                     * 获取（新参数）通道并发量上限，表示同时在线的连接数，单位：万。
                     * @return Concurrent （新参数）通道并发量上限，表示同时在线的连接数，单位：万。
                     */
                    int64_t GetConcurrent() const;

                    /**
                     * 设置（新参数）通道并发量上限，表示同时在线的连接数，单位：万。
                     * @param Concurrent （新参数）通道并发量上限，表示同时在线的连接数，单位：万。
                     */
                    void SetConcurrent(const int64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     */
                    bool ConcurrentHasBeenSet() const;

                    /**
                     * 获取计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）
                     * @return BillingType 计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）
                     * @param BillingType 计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     */
                    bool BillingTypeHasBeenSet() const;

                private:

                    /**
                     * 加速区域名称。
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * 通道带宽上限，单位：Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * （旧参数，请切换到RealServerRegion）源站区域名称。
                     */
                    std::string m_destRegion;
                    bool m_destRegionHasBeenSet;

                    /**
                     * （旧参数，请切换到Concurrent）通道并发量上限，表示同时在线的连接数，单位：万。
                     */
                    int64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * （新参数）源站区域名称。
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * （新参数）通道并发量上限，表示同时在线的连接数，单位：万。
                     */
                    int64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * 计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYREQUEST_H_
