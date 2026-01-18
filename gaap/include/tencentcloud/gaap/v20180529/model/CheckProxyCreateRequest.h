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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATEREQUEST_H_

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
                * CheckProxyCreate请求参数结构体
                */
                class CheckProxyCreateRequest : public AbstractModel
                {
                public:
                    CheckProxyCreateRequest();
                    ~CheckProxyCreateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>通道的接入(加速)区域。取值可通过接口DescribeAccessRegionsByDestRegion获取到</p>
                     * @return AccessRegion <p>通道的接入(加速)区域。取值可通过接口DescribeAccessRegionsByDestRegion获取到</p>
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置<p>通道的接入(加速)区域。取值可通过接口DescribeAccessRegionsByDestRegion获取到</p>
                     * @param _accessRegion <p>通道的接入(加速)区域。取值可通过接口DescribeAccessRegionsByDestRegion获取到</p>
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
                     * 获取<p>通道的源站区域。取值可通过接口DescribeDestRegions获取到</p>
                     * @return RealServerRegion <p>通道的源站区域。取值可通过接口DescribeDestRegions获取到</p>
                     * 
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置<p>通道的源站区域。取值可通过接口DescribeDestRegions获取到</p>
                     * @param _realServerRegion <p>通道的源站区域。取值可通过接口DescribeDestRegions获取到</p>
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
                     * 获取<p>通道带宽上限，单位：Mbps。</p>
                     * @return Bandwidth <p>通道带宽上限，单位：Mbps。</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>通道带宽上限，单位：Mbps。</p>
                     * @param _bandwidth <p>通道带宽上限，单位：Mbps。</p>
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取<p>通道并发量上限，表示同时在线的连接数，单位：万。</p>
                     * @return Concurrent <p>通道并发量上限，表示同时在线的连接数，单位：万。</p>
                     * 
                     */
                    uint64_t GetConcurrent() const;

                    /**
                     * 设置<p>通道并发量上限，表示同时在线的连接数，单位：万。</p>
                     * @param _concurrent <p>通道并发量上限，表示同时在线的连接数，单位：万。</p>
                     * 
                     */
                    void SetConcurrent(const uint64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     * 
                     */
                    bool ConcurrentHasBeenSet() const;

                    /**
                     * 获取<p>如果在通道组下创建通道，需要填写通道组的ID</p>
                     * @return GroupId <p>如果在通道组下创建通道，需要填写通道组的ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>如果在通道组下创建通道，需要填写通道组的ID</p>
                     * @param _groupId <p>如果在通道组下创建通道，需要填写通道组的ID</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>IP版本，可取值：IPv4、IPv6，默认值IPv4</p>
                     * @return IPAddressVersion <p>IP版本，可取值：IPv4、IPv6，默认值IPv4</p>
                     * 
                     */
                    std::string GetIPAddressVersion() const;

                    /**
                     * 设置<p>IP版本，可取值：IPv4、IPv6，默认值IPv4</p>
                     * @param _iPAddressVersion <p>IP版本，可取值：IPv4、IPv6，默认值IPv4</p>
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
                     * 获取<p>网络类型，可取值：normal、cn2，默认值normal</p>
                     * @return NetworkType <p>网络类型，可取值：normal、cn2，默认值normal</p>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>网络类型，可取值：normal、cn2，默认值normal</p>
                     * @param _networkType <p>网络类型，可取值：normal、cn2，默认值normal</p>
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
                     * 获取<p>通道套餐类型。Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。</p>
                     * @return PackageType <p>通道套餐类型。Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。</p>
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置<p>通道套餐类型。Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。</p>
                     * @param _packageType <p>通道套餐类型。Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。</p>
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
                     * 获取<p>该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道默认支持Http3.0；当为IPv6，默认不支持Http3.0。</p>
                     * @return Http3Supported <p>该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道默认支持Http3.0；当为IPv6，默认不支持Http3.0。</p>
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置<p>该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道默认支持Http3.0；当为IPv6，默认不支持Http3.0。</p>
                     * @param _http3Supported <p>该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道默认支持Http3.0；当为IPv6，默认不支持Http3.0。</p>
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
                     * <p>通道的接入(加速)区域。取值可通过接口DescribeAccessRegionsByDestRegion获取到</p>
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * <p>通道的源站区域。取值可通过接口DescribeDestRegions获取到</p>
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * <p>通道带宽上限，单位：Mbps。</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>通道并发量上限，表示同时在线的连接数，单位：万。</p>
                     */
                    uint64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * <p>如果在通道组下创建通道，需要填写通道组的ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>IP版本，可取值：IPv4、IPv6，默认值IPv4</p>
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * <p>网络类型，可取值：normal、cn2，默认值normal</p>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>通道套餐类型。Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。</p>
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道默认支持Http3.0；当为IPv6，默认不支持Http3.0。</p>
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATEREQUEST_H_
