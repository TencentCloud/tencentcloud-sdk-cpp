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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RegionDetail.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>
#include <tencentcloud/gaap/v20180529/model/IPDetail.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 通道信息
                */
                class ProxyInfo : public AbstractModel
                {
                public:
                    ProxyInfo();
                    ~ProxyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取（旧参数，请使用ProxyId）通道实例ID。
                     * @return InstanceId （旧参数，请使用ProxyId）通道实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置（旧参数，请使用ProxyId）通道实例ID。
                     * @param _instanceId （旧参数，请使用ProxyId）通道实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * @return CreateTime 创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * @param _createTime 创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param _projectId 项目ID。
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
                     * 获取源站地域。
                     * @return RealServerRegion 源站地域。
                     * 
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置源站地域。
                     * @param _realServerRegion 源站地域。
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
                     * 获取带宽，单位：Mbps。
                     * @return Bandwidth 带宽，单位：Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置带宽，单位：Mbps。
                     * @param _bandwidth 带宽，单位：Mbps。
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
                     * 获取并发，单位：万个/秒。
                     * @return Concurrent 并发，单位：万个/秒。
                     * 
                     */
                    int64_t GetConcurrent() const;

                    /**
                     * 设置并发，单位：万个/秒。
                     * @param _concurrent 并发，单位：万个/秒。
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
                     * 获取通道状态。其中：
RUNNING表示运行中；
CREATING表示创建中；
DESTROYING表示销毁中；
OPENING表示开启中；
CLOSING表示关闭中；
CLOSED表示已关闭；
ADJUSTING表示配置变更中；
ISOLATING表示隔离中；
ISOLATED表示已隔离；
CLONING表示复制中；
RECOVERING表示通道维护中；
MOVING表示迁移中。
                     * @return Status 通道状态。其中：
RUNNING表示运行中；
CREATING表示创建中；
DESTROYING表示销毁中；
OPENING表示开启中；
CLOSING表示关闭中；
CLOSED表示已关闭；
ADJUSTING表示配置变更中；
ISOLATING表示隔离中；
ISOLATED表示已隔离；
CLONING表示复制中；
RECOVERING表示通道维护中；
MOVING表示迁移中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置通道状态。其中：
RUNNING表示运行中；
CREATING表示创建中；
DESTROYING表示销毁中；
OPENING表示开启中；
CLOSING表示关闭中；
CLOSED表示已关闭；
ADJUSTING表示配置变更中；
ISOLATING表示隔离中；
ISOLATED表示已隔离；
CLONING表示复制中；
RECOVERING表示通道维护中；
MOVING表示迁移中。
                     * @param _status 通道状态。其中：
RUNNING表示运行中；
CREATING表示创建中；
DESTROYING表示销毁中；
OPENING表示开启中；
CLOSING表示关闭中；
CLOSED表示已关闭；
ADJUSTING表示配置变更中；
ISOLATING表示隔离中；
ISOLATED表示已隔离；
CLONING表示复制中；
RECOVERING表示通道维护中；
MOVING表示迁移中。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取接入域名。
                     * @return Domain 接入域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置接入域名。
                     * @param _domain 接入域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取接入IP。
                     * @return IP 接入IP。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置接入IP。
                     * @param _iP 接入IP。
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取通道版本号：1.0，2.0，3.0。
                     * @return Version 通道版本号：1.0，2.0，3.0。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置通道版本号：1.0，2.0，3.0。
                     * @param _version 通道版本号：1.0，2.0，3.0。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取（新参数）通道实例ID。
                     * @return ProxyId （新参数）通道实例ID。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置（新参数）通道实例ID。
                     * @param _proxyId （新参数）通道实例ID。
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取1，该通道可缩扩容；0，该通道无法缩扩容。
                     * @return Scalarable 1，该通道可缩扩容；0，该通道无法缩扩容。
                     * 
                     */
                    int64_t GetScalarable() const;

                    /**
                     * 设置1，该通道可缩扩容；0，该通道无法缩扩容。
                     * @param _scalarable 1，该通道可缩扩容；0，该通道无法缩扩容。
                     * 
                     */
                    void SetScalarable(const int64_t& _scalarable);

                    /**
                     * 判断参数 Scalarable 是否已赋值
                     * @return Scalarable 是否已赋值
                     * 
                     */
                    bool ScalarableHasBeenSet() const;

                    /**
                     * 获取支持的协议类型。
                     * @return SupportProtocols 支持的协议类型。
                     * 
                     */
                    std::vector<std::string> GetSupportProtocols() const;

                    /**
                     * 设置支持的协议类型。
                     * @param _supportProtocols 支持的协议类型。
                     * 
                     */
                    void SetSupportProtocols(const std::vector<std::string>& _supportProtocols);

                    /**
                     * 判断参数 SupportProtocols 是否已赋值
                     * @return SupportProtocols 是否已赋值
                     * 
                     */
                    bool SupportProtocolsHasBeenSet() const;

                    /**
                     * 获取通道组ID，当通道归属于某一通道组时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 通道组ID，当通道归属于某一通道组时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组ID，当通道归属于某一通道组时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 通道组ID，当通道归属于某一通道组时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId 安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyId 安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取接入地域详细信息，包括地域ID和地域名。
                     * @return AccessRegionInfo 接入地域详细信息，包括地域ID和地域名。
                     * 
                     */
                    RegionDetail GetAccessRegionInfo() const;

                    /**
                     * 设置接入地域详细信息，包括地域ID和地域名。
                     * @param _accessRegionInfo 接入地域详细信息，包括地域ID和地域名。
                     * 
                     */
                    void SetAccessRegionInfo(const RegionDetail& _accessRegionInfo);

                    /**
                     * 判断参数 AccessRegionInfo 是否已赋值
                     * @return AccessRegionInfo 是否已赋值
                     * 
                     */
                    bool AccessRegionInfoHasBeenSet() const;

                    /**
                     * 获取源站地域详细信息，包括地域ID和地域名。
                     * @return RealServerRegionInfo 源站地域详细信息，包括地域ID和地域名。
                     * 
                     */
                    RegionDetail GetRealServerRegionInfo() const;

                    /**
                     * 设置源站地域详细信息，包括地域ID和地域名。
                     * @param _realServerRegionInfo 源站地域详细信息，包括地域ID和地域名。
                     * 
                     */
                    void SetRealServerRegionInfo(const RegionDetail& _realServerRegionInfo);

                    /**
                     * 判断参数 RealServerRegionInfo 是否已赋值
                     * @return RealServerRegionInfo 是否已赋值
                     * 
                     */
                    bool RealServerRegionInfoHasBeenSet() const;

                    /**
                     * 获取通道转发IP
                     * @return ForwardIP 通道转发IP
                     * 
                     */
                    std::string GetForwardIP() const;

                    /**
                     * 设置通道转发IP
                     * @param _forwardIP 通道转发IP
                     * 
                     */
                    void SetForwardIP(const std::string& _forwardIP);

                    /**
                     * 判断参数 ForwardIP 是否已赋值
                     * @return ForwardIP 是否已赋值
                     * 
                     */
                    bool ForwardIPHasBeenSet() const;

                    /**
                     * 获取标签列表，不存在标签时，该字段为空列表。
                     * @return TagSet 标签列表，不存在标签时，该字段为空列表。
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置标签列表，不存在标签时，该字段为空列表。
                     * @param _tagSet 标签列表，不存在标签时，该字段为空列表。
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
                     * 获取是否支持安全组配置
                     * @return SupportSecurity 是否支持安全组配置
                     * 
                     */
                    int64_t GetSupportSecurity() const;

                    /**
                     * 设置是否支持安全组配置
                     * @param _supportSecurity 是否支持安全组配置
                     * 
                     */
                    void SetSupportSecurity(const int64_t& _supportSecurity);

                    /**
                     * 判断参数 SupportSecurity 是否已赋值
                     * @return SupportSecurity 是否已赋值
                     * 
                     */
                    bool SupportSecurityHasBeenSet() const;

                    /**
                     * 获取计费类型: 0表示按带宽计费  1表示按流量计费。
                     * @return BillingType 计费类型: 0表示按带宽计费  1表示按流量计费。
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置计费类型: 0表示按带宽计费  1表示按流量计费。
                     * @param _billingType 计费类型: 0表示按带宽计费  1表示按流量计费。
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
                     * 获取关联了解析的域名列表
                     * @return RelatedGlobalDomains 关联了解析的域名列表
                     * 
                     */
                    std::vector<std::string> GetRelatedGlobalDomains() const;

                    /**
                     * 设置关联了解析的域名列表
                     * @param _relatedGlobalDomains 关联了解析的域名列表
                     * 
                     */
                    void SetRelatedGlobalDomains(const std::vector<std::string>& _relatedGlobalDomains);

                    /**
                     * 判断参数 RelatedGlobalDomains 是否已赋值
                     * @return RelatedGlobalDomains 是否已赋值
                     * 
                     */
                    bool RelatedGlobalDomainsHasBeenSet() const;

                    /**
                     * 获取配置变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyConfigTime 配置变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetModifyConfigTime() const;

                    /**
                     * 设置配置变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyConfigTime 配置变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyConfigTime(const uint64_t& _modifyConfigTime);

                    /**
                     * 判断参数 ModifyConfigTime 是否已赋值
                     * @return ModifyConfigTime 是否已赋值
                     * 
                     */
                    bool ModifyConfigTimeHasBeenSet() const;

                    /**
                     * 获取通道类型，100表示THUNDER通道，103表示微软合作通道
                     * @return ProxyType 通道类型，100表示THUNDER通道，103表示微软合作通道
                     * 
                     */
                    uint64_t GetProxyType() const;

                    /**
                     * 设置通道类型，100表示THUNDER通道，103表示微软合作通道
                     * @param _proxyType 通道类型，100表示THUNDER通道，103表示微软合作通道
                     * 
                     */
                    void SetProxyType(const uint64_t& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     * 
                     */
                    bool ProxyTypeHasBeenSet() const;

                    /**
                     * 获取通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
                     * @return ClientIPMethod 通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
                     * 
                     */
                    std::vector<int64_t> GetClientIPMethod() const;

                    /**
                     * 设置通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
                     * @param _clientIPMethod 通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
                     * 
                     */
                    void SetClientIPMethod(const std::vector<int64_t>& _clientIPMethod);

                    /**
                     * 判断参数 ClientIPMethod 是否已赋值
                     * @return ClientIPMethod 是否已赋值
                     * 
                     */
                    bool ClientIPMethodHasBeenSet() const;

                    /**
                     * 获取IP版本：IPv4、IPv6
                     * @return IPAddressVersion IP版本：IPv4、IPv6
                     * 
                     */
                    std::string GetIPAddressVersion() const;

                    /**
                     * 设置IP版本：IPv4、IPv6
                     * @param _iPAddressVersion IP版本：IPv4、IPv6
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
                     * 获取网络类型：normal表示常规BGP，cn2表示精品BGP，triple表示三网，secure_eip表示定制安全EIP
                     * @return NetworkType 网络类型：normal表示常规BGP，cn2表示精品BGP，triple表示三网，secure_eip表示定制安全EIP
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型：normal表示常规BGP，cn2表示精品BGP，triple表示三网，secure_eip表示定制安全EIP
                     * @param _networkType 网络类型：normal表示常规BGP，cn2表示精品BGP，triple表示三网，secure_eip表示定制安全EIP
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
                     * 获取通道套餐类型：Thunder表示标准通道，Accelerator表示银牌加速通道，
CrossBorder表示跨境通道。
                     * @return PackageType 通道套餐类型：Thunder表示标准通道，Accelerator表示银牌加速通道，
CrossBorder表示跨境通道。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置通道套餐类型：Thunder表示标准通道，Accelerator表示银牌加速通道，
CrossBorder表示跨境通道。
                     * @param _packageType 通道套餐类型：Thunder表示标准通道，Accelerator表示银牌加速通道，
CrossBorder表示跨境通道。
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
                     * 获取封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
                     * @return BanStatus 封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
                     * 
                     */
                    std::string GetBanStatus() const;

                    /**
                     * 设置封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
                     * @param _banStatus 封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
                     * 
                     */
                    void SetBanStatus(const std::string& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     * 
                     */
                    bool BanStatusHasBeenSet() const;

                    /**
                     * 获取IP列表
                     * @return IPList IP列表
                     * 
                     */
                    std::vector<IPDetail> GetIPList() const;

                    /**
                     * 设置IP列表
                     * @param _iPList IP列表
                     * 
                     */
                    void SetIPList(const std::vector<IPDetail>& _iPList);

                    /**
                     * 判断参数 IPList 是否已赋值
                     * @return IPList 是否已赋值
                     * 
                     */
                    bool IPListHasBeenSet() const;

                    /**
                     * 获取支持Http3协议的标识，其中：
0表示关闭；
1表示启用。
                     * @return Http3Supported 支持Http3协议的标识，其中：
0表示关闭；
1表示启用。
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置支持Http3协议的标识，其中：
0表示关闭；
1表示启用。
                     * @param _http3Supported 支持Http3协议的标识，其中：
0表示关闭；
1表示启用。
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

                    /**
                     * 获取是否在封禁黑名单中，其中：0表示不在黑名单中，1表示在黑名单中。
                     * @return InBanBlacklist 是否在封禁黑名单中，其中：0表示不在黑名单中，1表示在黑名单中。
                     * 
                     */
                    int64_t GetInBanBlacklist() const;

                    /**
                     * 设置是否在封禁黑名单中，其中：0表示不在黑名单中，1表示在黑名单中。
                     * @param _inBanBlacklist 是否在封禁黑名单中，其中：0表示不在黑名单中，1表示在黑名单中。
                     * 
                     */
                    void SetInBanBlacklist(const int64_t& _inBanBlacklist);

                    /**
                     * 判断参数 InBanBlacklist 是否已赋值
                     * @return InBanBlacklist 是否已赋值
                     * 
                     */
                    bool InBanBlacklistHasBeenSet() const;

                    /**
                     * 获取特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeatureBitmap 特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFeatureBitmap() const;

                    /**
                     * 设置特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _featureBitmap 特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeatureBitmap(const int64_t& _featureBitmap);

                    /**
                     * 判断参数 FeatureBitmap 是否已赋值
                     * @return FeatureBitmap 是否已赋值
                     * 
                     */
                    bool FeatureBitmapHasBeenSet() const;

                    /**
                     * 获取是否是开启了auto scale的通道，0表示否，1表示是。
                     * @return IsAutoScaleProxy 是否是开启了auto scale的通道，0表示否，1表示是。
                     * 
                     */
                    int64_t GetIsAutoScaleProxy() const;

                    /**
                     * 设置是否是开启了auto scale的通道，0表示否，1表示是。
                     * @param _isAutoScaleProxy 是否是开启了auto scale的通道，0表示否，1表示是。
                     * 
                     */
                    void SetIsAutoScaleProxy(const int64_t& _isAutoScaleProxy);

                    /**
                     * 判断参数 IsAutoScaleProxy 是否已赋值
                     * @return IsAutoScaleProxy 是否已赋值
                     * 
                     */
                    bool IsAutoScaleProxyHasBeenSet() const;

                    /**
                     * 获取是否允许设置TLS配置
0表示不支持；
1表示支持。
                     * @return IsSupportTLSChoice 是否允许设置TLS配置
0表示不支持；
1表示支持。
                     * 
                     */
                    int64_t GetIsSupportTLSChoice() const;

                    /**
                     * 设置是否允许设置TLS配置
0表示不支持；
1表示支持。
                     * @param _isSupportTLSChoice 是否允许设置TLS配置
0表示不支持；
1表示支持。
                     * 
                     */
                    void SetIsSupportTLSChoice(const int64_t& _isSupportTLSChoice);

                    /**
                     * 判断参数 IsSupportTLSChoice 是否已赋值
                     * @return IsSupportTLSChoice 是否已赋值
                     * 
                     */
                    bool IsSupportTLSChoiceHasBeenSet() const;

                private:

                    /**
                     * （旧参数，请使用ProxyId）通道实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目ID。
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
                     * 源站地域。
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * 带宽，单位：Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 并发，单位：万个/秒。
                     */
                    int64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * 通道状态。其中：
RUNNING表示运行中；
CREATING表示创建中；
DESTROYING表示销毁中；
OPENING表示开启中；
CLOSING表示关闭中；
CLOSED表示已关闭；
ADJUSTING表示配置变更中；
ISOLATING表示隔离中；
ISOLATED表示已隔离；
CLONING表示复制中；
RECOVERING表示通道维护中；
MOVING表示迁移中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 接入域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 接入IP。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 通道版本号：1.0，2.0，3.0。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * （新参数）通道实例ID。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 1，该通道可缩扩容；0，该通道无法缩扩容。
                     */
                    int64_t m_scalarable;
                    bool m_scalarableHasBeenSet;

                    /**
                     * 支持的协议类型。
                     */
                    std::vector<std::string> m_supportProtocols;
                    bool m_supportProtocolsHasBeenSet;

                    /**
                     * 通道组ID，当通道归属于某一通道组时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 接入地域详细信息，包括地域ID和地域名。
                     */
                    RegionDetail m_accessRegionInfo;
                    bool m_accessRegionInfoHasBeenSet;

                    /**
                     * 源站地域详细信息，包括地域ID和地域名。
                     */
                    RegionDetail m_realServerRegionInfo;
                    bool m_realServerRegionInfoHasBeenSet;

                    /**
                     * 通道转发IP
                     */
                    std::string m_forwardIP;
                    bool m_forwardIPHasBeenSet;

                    /**
                     * 标签列表，不存在标签时，该字段为空列表。
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 是否支持安全组配置
                     */
                    int64_t m_supportSecurity;
                    bool m_supportSecurityHasBeenSet;

                    /**
                     * 计费类型: 0表示按带宽计费  1表示按流量计费。
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * 关联了解析的域名列表
                     */
                    std::vector<std::string> m_relatedGlobalDomains;
                    bool m_relatedGlobalDomainsHasBeenSet;

                    /**
                     * 配置变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_modifyConfigTime;
                    bool m_modifyConfigTimeHasBeenSet;

                    /**
                     * 通道类型，100表示THUNDER通道，103表示微软合作通道
                     */
                    uint64_t m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * 通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
                     */
                    std::vector<int64_t> m_clientIPMethod;
                    bool m_clientIPMethodHasBeenSet;

                    /**
                     * IP版本：IPv4、IPv6
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * 网络类型：normal表示常规BGP，cn2表示精品BGP，triple表示三网，secure_eip表示定制安全EIP
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 通道套餐类型：Thunder表示标准通道，Accelerator表示银牌加速通道，
CrossBorder表示跨境通道。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 封禁解封状态：BANNED表示已封禁，RECOVER表示已解封或未封禁，BANNING表示封禁中，RECOVERING表示解封中，BAN_FAILED表示封禁失败，RECOVER_FAILED表示解封失败。
                     */
                    std::string m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * IP列表
                     */
                    std::vector<IPDetail> m_iPList;
                    bool m_iPListHasBeenSet;

                    /**
                     * 支持Http3协议的标识，其中：
0表示关闭；
1表示启用。
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                    /**
                     * 是否在封禁黑名单中，其中：0表示不在黑名单中，1表示在黑名单中。
                     */
                    int64_t m_inBanBlacklist;
                    bool m_inBanBlacklistHasBeenSet;

                    /**
                     * 特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_featureBitmap;
                    bool m_featureBitmapHasBeenSet;

                    /**
                     * 是否是开启了auto scale的通道，0表示否，1表示是。
                     */
                    int64_t m_isAutoScaleProxy;
                    bool m_isAutoScaleProxyHasBeenSet;

                    /**
                     * 是否允许设置TLS配置
0表示不支持；
1表示支持。
                     */
                    int64_t m_isSupportTLSChoice;
                    bool m_isSupportTLSChoiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYINFO_H_
