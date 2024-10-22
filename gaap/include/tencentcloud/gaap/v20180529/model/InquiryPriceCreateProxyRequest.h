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
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置加速区域名称。
                     * @param _accessRegion 加速区域名称。
                     * 
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取通道带宽上限，单位：Mbps。
                     * @return Bandwidth 通道带宽上限，单位：Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置通道带宽上限，单位：Mbps。
                     * @param _bandwidth 通道带宽上限，单位：Mbps。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取（旧参数，请切换到RealServerRegion）源站区域名称。
                     * @return DestRegion （旧参数，请切换到RealServerRegion）源站区域名称。
                     * 
                     */
                    std::string GetDestRegion() const;

                    /**
                     * 设置（旧参数，请切换到RealServerRegion）源站区域名称。
                     * @param _destRegion （旧参数，请切换到RealServerRegion）源站区域名称。
                     * 
                     */
                    void SetDestRegion(const std::string& _destRegion);

                    /**
                     * 判断参数 DestRegion 是否已赋值
                     * @return DestRegion 是否已赋值
                     * 
                     */
                    bool DestRegionHasBeenSet() const;

                    /**
                     * 获取（此参数为旧参数，请填写新参数Concurrent，二者必须填写一个）通道并发量上限，表示同时在线的连接数，单位：万。
                     * @return Concurrency （此参数为旧参数，请填写新参数Concurrent，二者必须填写一个）通道并发量上限，表示同时在线的连接数，单位：万。
                     * 
                     */
                    int64_t GetConcurrency() const;

                    /**
                     * 设置（此参数为旧参数，请填写新参数Concurrent，二者必须填写一个）通道并发量上限，表示同时在线的连接数，单位：万。
                     * @param _concurrency （此参数为旧参数，请填写新参数Concurrent，二者必须填写一个）通道并发量上限，表示同时在线的连接数，单位：万。
                     * 
                     */
                    void SetConcurrency(const int64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取（新参数）源站区域名称。
                     * @return RealServerRegion （新参数）源站区域名称。
                     * 
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置（新参数）源站区域名称。
                     * @param _realServerRegion （新参数）源站区域名称。
                     * 
                     */
                    void SetRealServerRegion(const std::string& _realServerRegion);

                    /**
                     * 判断参数 RealServerRegion 是否已赋值
                     * @return RealServerRegion 是否已赋值
                     * 
                     */
                    bool RealServerRegionHasBeenSet() const;

                    /**
                     * 获取（新参数）通道并发量上限，表示同时在线的连接数，单位：万。
                     * @return Concurrent （新参数）通道并发量上限，表示同时在线的连接数，单位：万。
                     * 
                     */
                    int64_t GetConcurrent() const;

                    /**
                     * 设置（新参数）通道并发量上限，表示同时在线的连接数，单位：万。
                     * @param _concurrent （新参数）通道并发量上限，表示同时在线的连接数，单位：万。
                     * 
                     */
                    void SetConcurrent(const int64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     * 
                     */
                    bool ConcurrentHasBeenSet() const;

                    /**
                     * 获取计费方式，0表示按带宽计费，1表示按流量计费。默认按带宽计费
                     * @return BillingType 计费方式，0表示按带宽计费，1表示按流量计费。默认按带宽计费
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置计费方式，0表示按带宽计费，1表示按流量计费。默认按带宽计费
                     * @param _billingType 计费方式，0表示按带宽计费，1表示按流量计费。默认按带宽计费
                     * 
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                    /**
                     * 获取IP版本，可取值：IPv4、IPv6，默认值IPv4
                     * @return IPAddressVersion IP版本，可取值：IPv4、IPv6，默认值IPv4
                     * 
                     */
                    std::string GetIPAddressVersion() const;

                    /**
                     * 设置IP版本，可取值：IPv4、IPv6，默认值IPv4
                     * @param _iPAddressVersion IP版本，可取值：IPv4、IPv6，默认值IPv4
                     * 
                     */
                    void SetIPAddressVersion(const std::string& _iPAddressVersion);

                    /**
                     * 判断参数 IPAddressVersion 是否已赋值
                     * @return IPAddressVersion 是否已赋值
                     * 
                     */
                    bool IPAddressVersionHasBeenSet() const;

                    /**
                     * 获取网络类型，可取值：normal、cn2，默认值normal
                     * @return NetworkType 网络类型，可取值：normal、cn2，默认值normal
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型，可取值：normal、cn2，默认值normal
                     * @param _networkType 网络类型，可取值：normal、cn2，默认值normal
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取通道套餐类型，Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。
                     * @return PackageType 通道套餐类型，Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置通道套餐类型，Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。
                     * @param _packageType 通道套餐类型，Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道默认支持Http3.0；当为IPv6，默认不支持Http3.0。
                     * @return Http3Supported 该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道默认支持Http3.0；当为IPv6，默认不支持Http3.0。
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道默认支持Http3.0；当为IPv6，默认不支持Http3.0。
                     * @param _http3Supported 该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道默认支持Http3.0；当为IPv6，默认不支持Http3.0。
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

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
                     * （此参数为旧参数，请填写新参数Concurrent，二者必须填写一个）通道并发量上限，表示同时在线的连接数，单位：万。
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
                     * 计费方式，0表示按带宽计费，1表示按流量计费。默认按带宽计费
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * IP版本，可取值：IPv4、IPv6，默认值IPv4
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * 网络类型，可取值：normal、cn2，默认值normal
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 通道套餐类型，Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道默认支持Http3.0；当为IPv6，默认不支持Http3.0。
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_INQUIRYPRICECREATEPROXYREQUEST_H_
