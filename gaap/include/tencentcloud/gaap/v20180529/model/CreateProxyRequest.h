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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateProxy请求参数结构体
                */
                class CreateProxyRequest : public AbstractModel
                {
                public:
                    CreateProxyRequest();
                    ~CreateProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道的项目ID。
                     * @return ProjectId 通道的项目ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置通道的项目ID。
                     * @param _projectId 通道的项目ID。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取通道名称。
                     * @return ProxyName 通道名称。
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置通道名称。
                     * @param _proxyName 通道名称。
                     * 
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     * 
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取接入地域。
                     * @return AccessRegion 接入地域。
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置接入地域。
                     * @param _accessRegion 接入地域。
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
                     * 获取源站地域。当GroupId存在时，源站地域为通道组的源站地域,此时可不填该字段。当GroupId不存在时，需要填写该字段
                     * @return RealServerRegion 源站地域。当GroupId存在时，源站地域为通道组的源站地域,此时可不填该字段。当GroupId不存在时，需要填写该字段
                     * 
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置源站地域。当GroupId存在时，源站地域为通道组的源站地域,此时可不填该字段。当GroupId不存在时，需要填写该字段
                     * @param _realServerRegion 源站地域。当GroupId存在时，源站地域为通道组的源站地域,此时可不填该字段。当GroupId不存在时，需要填写该字段
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
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
更多详细信息请参阅：如何保证幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
更多详细信息请参阅：如何保证幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
更多详细信息请参阅：如何保证幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
更多详细信息请参阅：如何保证幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取通道所在的通道组ID，当在通道组中创建通道时必带，否则忽略该字段。
                     * @return GroupId 通道所在的通道组ID，当在通道组中创建通道时必带，否则忽略该字段。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道所在的通道组ID，当在通道组中创建通道时必带，否则忽略该字段。
                     * @param _groupId 通道所在的通道组ID，当在通道组中创建通道时必带，否则忽略该字段。
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
                     * 获取通道需要添加的标签列表。
                     * @return TagSet 通道需要添加的标签列表。
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置通道需要添加的标签列表。
                     * @param _tagSet 通道需要添加的标签列表。
                     * 
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取被复制的通道ID。只有处于运行中状态的通道可以被复制。
当设置该参数时，表示复制该通道。
                     * @return ClonedProxyId 被复制的通道ID。只有处于运行中状态的通道可以被复制。
当设置该参数时，表示复制该通道。
                     * 
                     */
                    std::string GetClonedProxyId() const;

                    /**
                     * 设置被复制的通道ID。只有处于运行中状态的通道可以被复制。
当设置该参数时，表示复制该通道。
                     * @param _clonedProxyId 被复制的通道ID。只有处于运行中状态的通道可以被复制。
当设置该参数时，表示复制该通道。
                     * 
                     */
                    void SetClonedProxyId(const std::string& _clonedProxyId);

                    /**
                     * 判断参数 ClonedProxyId 是否已赋值
                     * @return ClonedProxyId 是否已赋值
                     * 
                     */
                    bool ClonedProxyIdHasBeenSet() const;

                    /**
                     * 获取计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）
                     * @return BillingType 计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）
                     * @param _billingType 计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）
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
                     * 获取网络类型，normal表示常规BGP，cn2表示精品BGP，triple表示三网
                     * @return NetworkType 网络类型，normal表示常规BGP，cn2表示精品BGP，triple表示三网
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型，normal表示常规BGP，cn2表示精品BGP，triple表示三网
                     * @param _networkType 网络类型，normal表示常规BGP，cn2表示精品BGP，triple表示三网
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
                     * 通道的项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 通道名称。
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * 接入地域。
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

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
                     * 源站地域。当GroupId存在时，源站地域为通道组的源站地域,此时可不填该字段。当GroupId不存在时，需要填写该字段
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
更多详细信息请参阅：如何保证幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 通道所在的通道组ID，当在通道组中创建通道时必带，否则忽略该字段。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 通道需要添加的标签列表。
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 被复制的通道ID。只有处于运行中状态的通道可以被复制。
当设置该参数时，表示复制该通道。
                     */
                    std::string m_clonedProxyId;
                    bool m_clonedProxyIdHasBeenSet;

                    /**
                     * 计费方式 (0:按带宽计费，1:按流量计费 默认按带宽计费）
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * IP版本，可取值：IPv4、IPv6，默认值IPv4
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * 网络类型，normal表示常规BGP，cn2表示精品BGP，triple表示三网
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

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYREQUEST_H_
