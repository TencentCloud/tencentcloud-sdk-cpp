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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId （旧参数，请使用ProxyId）通道实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置（旧参数，请使用ProxyId）通道实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId （旧参数，请使用ProxyId）通道实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * @return CreateTime 创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     * @param CreateTime 创建时间，采用Unix时间戳的方式，表示从1970年1月1日（UTC/GMT的午夜）开始所经过的秒数。
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param ProjectId 项目ID。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取通道名称。
                     * @return ProxyName 通道名称。
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置通道名称。
                     * @param ProxyName 通道名称。
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取接入地域。
                     * @return AccessRegion 接入地域。
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置接入地域。
                     * @param AccessRegion 接入地域。
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取源站地域。
                     * @return RealServerRegion 源站地域。
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置源站地域。
                     * @param RealServerRegion 源站地域。
                     */
                    void SetRealServerRegion(const std::string& _realServerRegion);

                    /**
                     * 判断参数 RealServerRegion 是否已赋值
                     * @return RealServerRegion 是否已赋值
                     */
                    bool RealServerRegionHasBeenSet() const;

                    /**
                     * 获取带宽，单位：Mbps。
                     * @return Bandwidth 带宽，单位：Mbps。
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置带宽，单位：Mbps。
                     * @param Bandwidth 带宽，单位：Mbps。
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取并发，单位：个/秒。
                     * @return Concurrent 并发，单位：个/秒。
                     */
                    int64_t GetConcurrent() const;

                    /**
                     * 设置并发，单位：个/秒。
                     * @param Concurrent 并发，单位：个/秒。
                     */
                    void SetConcurrent(const int64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
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
UNKNOWN表示未知状态。
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
UNKNOWN表示未知状态。
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
UNKNOWN表示未知状态。
                     * @param Status 通道状态。其中：
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
UNKNOWN表示未知状态。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取接入域名。
                     * @return Domain 接入域名。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置接入域名。
                     * @param Domain 接入域名。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取接入IP。
                     * @return IP 接入IP。
                     */
                    std::string GetIP() const;

                    /**
                     * 设置接入IP。
                     * @param IP 接入IP。
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取通道版本号：1.0，2.0，3.0。
                     * @return Version 通道版本号：1.0，2.0，3.0。
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置通道版本号：1.0，2.0，3.0。
                     * @param Version 通道版本号：1.0，2.0，3.0。
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取（新参数）通道实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyId （新参数）通道实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置（新参数）通道实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProxyId （新参数）通道实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取1，该通道可缩扩容；0，该通道无法缩扩容。
                     * @return Scalarable 1，该通道可缩扩容；0，该通道无法缩扩容。
                     */
                    int64_t GetScalarable() const;

                    /**
                     * 设置1，该通道可缩扩容；0，该通道无法缩扩容。
                     * @param Scalarable 1，该通道可缩扩容；0，该通道无法缩扩容。
                     */
                    void SetScalarable(const int64_t& _scalarable);

                    /**
                     * 判断参数 Scalarable 是否已赋值
                     * @return Scalarable 是否已赋值
                     */
                    bool ScalarableHasBeenSet() const;

                    /**
                     * 获取支持的协议类型。
                     * @return SupportProtocols 支持的协议类型。
                     */
                    std::vector<std::string> GetSupportProtocols() const;

                    /**
                     * 设置支持的协议类型。
                     * @param SupportProtocols 支持的协议类型。
                     */
                    void SetSupportProtocols(const std::vector<std::string>& _supportProtocols);

                    /**
                     * 判断参数 SupportProtocols 是否已赋值
                     * @return SupportProtocols 是否已赋值
                     */
                    bool SupportProtocolsHasBeenSet() const;

                    /**
                     * 获取通道组ID，当通道归属于某一通道组时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 通道组ID，当通道归属于某一通道组时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组ID，当通道归属于某一通道组时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupId 通道组ID，当通道归属于某一通道组时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyId 安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolicyId 安全策略ID，当设置了安全策略时，存在该字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取接入地域详细信息，包括地域ID和地域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessRegionInfo 接入地域详细信息，包括地域ID和地域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RegionDetail GetAccessRegionInfo() const;

                    /**
                     * 设置接入地域详细信息，包括地域ID和地域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccessRegionInfo 接入地域详细信息，包括地域ID和地域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccessRegionInfo(const RegionDetail& _accessRegionInfo);

                    /**
                     * 判断参数 AccessRegionInfo 是否已赋值
                     * @return AccessRegionInfo 是否已赋值
                     */
                    bool AccessRegionInfoHasBeenSet() const;

                    /**
                     * 获取源站地域详细信息，包括地域ID和地域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealServerRegionInfo 源站地域详细信息，包括地域ID和地域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RegionDetail GetRealServerRegionInfo() const;

                    /**
                     * 设置源站地域详细信息，包括地域ID和地域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealServerRegionInfo 源站地域详细信息，包括地域ID和地域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealServerRegionInfo(const RegionDetail& _realServerRegionInfo);

                    /**
                     * 判断参数 RealServerRegionInfo 是否已赋值
                     * @return RealServerRegionInfo 是否已赋值
                     */
                    bool RealServerRegionInfoHasBeenSet() const;

                    /**
                     * 获取通道转发IP
                     * @return ForwardIP 通道转发IP
                     */
                    std::string GetForwardIP() const;

                    /**
                     * 设置通道转发IP
                     * @param ForwardIP 通道转发IP
                     */
                    void SetForwardIP(const std::string& _forwardIP);

                    /**
                     * 判断参数 ForwardIP 是否已赋值
                     * @return ForwardIP 是否已赋值
                     */
                    bool ForwardIPHasBeenSet() const;

                    /**
                     * 获取标签列表，不存在标签时，该字段为空列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 标签列表，不存在标签时，该字段为空列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置标签列表，不存在标签时，该字段为空列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagSet 标签列表，不存在标签时，该字段为空列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取是否支持安全组配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportSecurity 是否支持安全组配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSupportSecurity() const;

                    /**
                     * 设置是否支持安全组配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SupportSecurity 是否支持安全组配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSupportSecurity(const int64_t& _supportSecurity);

                    /**
                     * 判断参数 SupportSecurity 是否已赋值
                     * @return SupportSecurity 是否已赋值
                     */
                    bool SupportSecurityHasBeenSet() const;

                    /**
                     * 获取计费类型: 0表示按带宽计费  1表示按流量计费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingType 计费类型: 0表示按带宽计费  1表示按流量计费。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置计费类型: 0表示按带宽计费  1表示按流量计费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BillingType 计费类型: 0表示按带宽计费  1表示按流量计费。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     */
                    bool BillingTypeHasBeenSet() const;

                    /**
                     * 获取关联了解析的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedGlobalDomains 关联了解析的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetRelatedGlobalDomains() const;

                    /**
                     * 设置关联了解析的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RelatedGlobalDomains 关联了解析的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelatedGlobalDomains(const std::vector<std::string>& _relatedGlobalDomains);

                    /**
                     * 判断参数 RelatedGlobalDomains 是否已赋值
                     * @return RelatedGlobalDomains 是否已赋值
                     */
                    bool RelatedGlobalDomainsHasBeenSet() const;

                    /**
                     * 获取配置变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyConfigTime 配置变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetModifyConfigTime() const;

                    /**
                     * 设置配置变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ModifyConfigTime 配置变更时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetModifyConfigTime(const uint64_t& _modifyConfigTime);

                    /**
                     * 判断参数 ModifyConfigTime 是否已赋值
                     * @return ModifyConfigTime 是否已赋值
                     */
                    bool ModifyConfigTimeHasBeenSet() const;

                    /**
                     * 获取通道类型，104表示新的银牌质量通道类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyType 通道类型，104表示新的银牌质量通道类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetProxyType() const;

                    /**
                     * 设置通道类型，104表示新的银牌质量通道类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProxyType 通道类型，104表示新的银牌质量通道类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProxyType(const uint64_t& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     */
                    bool ProxyTypeHasBeenSet() const;

                    /**
                     * 获取通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIPMethod 通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetClientIPMethod() const;

                    /**
                     * 设置通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientIPMethod 通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientIPMethod(const std::vector<int64_t>& _clientIPMethod);

                    /**
                     * 判断参数 ClientIPMethod 是否已赋值
                     * @return ClientIPMethod 是否已赋值
                     */
                    bool ClientIPMethodHasBeenSet() const;

                    /**
                     * 获取IP版本：IPv4、IPv6
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPAddressVersion IP版本：IPv4、IPv6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIPAddressVersion() const;

                    /**
                     * 设置IP版本：IPv4、IPv6
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IPAddressVersion IP版本：IPv4、IPv6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIPAddressVersion(const std::string& _iPAddressVersion);

                    /**
                     * 判断参数 IPAddressVersion 是否已赋值
                     * @return IPAddressVersion 是否已赋值
                     */
                    bool IPAddressVersionHasBeenSet() const;

                private:

                    /**
                     * （旧参数，请使用ProxyId）通道实例ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 并发，单位：个/秒。
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
UNKNOWN表示未知状态。
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
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RegionDetail m_accessRegionInfo;
                    bool m_accessRegionInfoHasBeenSet;

                    /**
                     * 源站地域详细信息，包括地域ID和地域名。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 是否支持安全组配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_supportSecurity;
                    bool m_supportSecurityHasBeenSet;

                    /**
                     * 计费类型: 0表示按带宽计费  1表示按流量计费。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * 关联了解析的域名列表
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 通道类型，104表示新的银牌质量通道类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * 通道获取客户端IP的方式，0表示TOA，1表示Proxy Protocol
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_clientIPMethod;
                    bool m_clientIPMethodHasBeenSet;

                    /**
                     * IP版本：IPv4、IPv6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYINFO_H_
