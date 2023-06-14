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
                     * 获取通道的接入(加速)区域。取值可通过接口DescribeAccessRegionsByDestRegion获取到
                     * @return AccessRegion 通道的接入(加速)区域。取值可通过接口DescribeAccessRegionsByDestRegion获取到
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置通道的接入(加速)区域。取值可通过接口DescribeAccessRegionsByDestRegion获取到
                     * @param _accessRegion 通道的接入(加速)区域。取值可通过接口DescribeAccessRegionsByDestRegion获取到
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
                     * 获取通道的源站区域。取值可通过接口DescribeDestRegions获取到
                     * @return RealServerRegion 通道的源站区域。取值可通过接口DescribeDestRegions获取到
                     * 
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置通道的源站区域。取值可通过接口DescribeDestRegions获取到
                     * @param _realServerRegion 通道的源站区域。取值可通过接口DescribeDestRegions获取到
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
                     * 获取通道带宽上限，单位：Mbps。
                     * @return Bandwidth 通道带宽上限，单位：Mbps。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置通道带宽上限，单位：Mbps。
                     * @param _bandwidth 通道带宽上限，单位：Mbps。
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
                     * 获取通道并发量上限，表示同时在线的连接数，单位：万。
                     * @return Concurrent 通道并发量上限，表示同时在线的连接数，单位：万。
                     * 
                     */
                    uint64_t GetConcurrent() const;

                    /**
                     * 设置通道并发量上限，表示同时在线的连接数，单位：万。
                     * @param _concurrent 通道并发量上限，表示同时在线的连接数，单位：万。
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
                     * 获取如果在通道组下创建通道，需要填写通道组的ID
                     * @return GroupId 如果在通道组下创建通道，需要填写通道组的ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置如果在通道组下创建通道，需要填写通道组的ID
                     * @param _groupId 如果在通道组下创建通道，需要填写通道组的ID
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
                     * 获取通道套餐类型。Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。
                     * @return PackageType 通道套餐类型。Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置通道套餐类型。Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。
                     * @param _packageType 通道套餐类型。Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。
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
                     * 通道的接入(加速)区域。取值可通过接口DescribeAccessRegionsByDestRegion获取到
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * 通道的源站区域。取值可通过接口DescribeDestRegions获取到
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * 通道带宽上限，单位：Mbps。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 通道并发量上限，表示同时在线的连接数，单位：万。
                     */
                    uint64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * 如果在通道组下创建通道，需要填写通道组的ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

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
                     * 通道套餐类型。Thunder表示标准通道组，Accelerator表示游戏加速器通道，CrossBorder表示跨境通道。
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

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATEREQUEST_H_
