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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>
#include <tencentcloud/clb/v20180317/model/TargetRegionInfo.h>
#include <tencentcloud/clb/v20180317/model/ZoneInfo.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>
#include <tencentcloud/clb/v20180317/model/LBChargePrepaid.h>
#include <tencentcloud/clb/v20180317/model/ExtraInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 负载均衡实例的信息
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡实例 ID。
                     * @return LoadBalancerId 负载均衡实例 ID。
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param LoadBalancerId 负载均衡实例 ID。
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的名称。
                     * @return LoadBalancerName 负载均衡实例的名称。
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例的名称。
                     * @param LoadBalancerName 负载均衡实例的名称。
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     * @return LoadBalancerType 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     * @param LoadBalancerType 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡类型标识，1：负载均衡，0：传统型负载均衡。
                     * @return Forward 负载均衡类型标识，1：负载均衡，0：传统型负载均衡。
                     */
                    uint64_t GetForward() const;

                    /**
                     * 设置负载均衡类型标识，1：负载均衡，0：传统型负载均衡。
                     * @param Forward 负载均衡类型标识，1：负载均衡，0：传统型负载均衡。
                     */
                    void SetForward(const uint64_t& _forward);

                    /**
                     * 判断参数 Forward 是否已赋值
                     * @return Forward 是否已赋值
                     */
                    bool ForwardHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的域名，仅公网传统型负载均衡实例才提供该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 负载均衡实例的域名，仅公网传统型负载均衡实例才提供该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置负载均衡实例的域名，仅公网传统型负载均衡实例才提供该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Domain 负载均衡实例的域名，仅公网传统型负载均衡实例才提供该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的 VIP 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerVips 负载均衡实例的 VIP 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置负载均衡实例的 VIP 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoadBalancerVips 负载均衡实例的 VIP 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的状态，包括
0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 负载均衡实例的状态，包括
0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置负载均衡实例的状态，包括
0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 负载均衡实例的状态，包括
0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的上次状态转换时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusTime 负载均衡实例的上次状态转换时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatusTime() const;

                    /**
                     * 设置负载均衡实例的上次状态转换时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StatusTime 负载均衡实例的上次状态转换时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatusTime(const std::string& _statusTime);

                    /**
                     * 判断参数 StatusTime 是否已赋值
                     * @return StatusTime 是否已赋值
                     */
                    bool StatusTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所属的项目 ID， 0 表示默认项目。
                     * @return ProjectId 负载均衡实例所属的项目 ID， 0 表示默认项目。
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置负载均衡实例所属的项目 ID， 0 表示默认项目。
                     * @param ProjectId 负载均衡实例所属的项目 ID， 0 表示默认项目。
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取私有网络的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私有网络的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 私有网络的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取高防 LB 的标识，1：高防负载均衡 0：非高防负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenBgp 高防 LB 的标识，1：高防负载均衡 0：非高防负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetOpenBgp() const;

                    /**
                     * 设置高防 LB 的标识，1：高防负载均衡 0：非高防负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OpenBgp 高防 LB 的标识，1：高防负载均衡 0：非高防负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOpenBgp(const uint64_t& _openBgp);

                    /**
                     * 判断参数 OpenBgp 是否已赋值
                     * @return OpenBgp 是否已赋值
                     */
                    bool OpenBgpHasBeenSet() const;

                    /**
                     * 获取在 2016 年 12 月份之前的传统型内网负载均衡都是开启了 snat 的。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Snat 在 2016 年 12 月份之前的传统型内网负载均衡都是开启了 snat 的。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetSnat() const;

                    /**
                     * 设置在 2016 年 12 月份之前的传统型内网负载均衡都是开启了 snat 的。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Snat 在 2016 年 12 月份之前的传统型内网负载均衡都是开启了 snat 的。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSnat(const bool& _snat);

                    /**
                     * 判断参数 Snat 是否已赋值
                     * @return Snat 是否已赋值
                     */
                    bool SnatHasBeenSet() const;

                    /**
                     * 获取0：表示未被隔离，1：表示被隔离。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Isolation 0：表示未被隔离，1：表示被隔离。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsolation() const;

                    /**
                     * 设置0：表示未被隔离，1：表示被隔离。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Isolation 0：表示未被隔离，1：表示被隔离。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsolation(const uint64_t& _isolation);

                    /**
                     * 判断参数 Isolation 是否已赋值
                     * @return Isolation 是否已赋值
                     */
                    bool IsolationHasBeenSet() const;

                    /**
                     * 获取用户开启日志的信息，日志只有公网属性创建了 HTTP 、HTTPS 监听器的负载均衡才会有日志。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Log 用户开启日志的信息，日志只有公网属性创建了 HTTP 、HTTPS 监听器的负载均衡才会有日志。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLog() const;

                    /**
                     * 设置用户开启日志的信息，日志只有公网属性创建了 HTTP 、HTTPS 监听器的负载均衡才会有日志。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Log 用户开启日志的信息，日志只有公网属性创建了 HTTP 、HTTPS 监听器的负载均衡才会有日志。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所在的子网（仅对内网VPC型LB有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 负载均衡实例所在的子网（仅对内网VPC型LB有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置负载均衡实例所在的子网（仅对内网VPC型LB有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 负载均衡实例所在的子网（仅对内网VPC型LB有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 负载均衡实例的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置负载均衡实例的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 负载均衡实例的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的安全组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecureGroups 负载均衡实例的安全组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSecureGroups() const;

                    /**
                     * 设置负载均衡实例的安全组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecureGroups 负载均衡实例的安全组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecureGroups(const std::vector<std::string>& _secureGroups);

                    /**
                     * 判断参数 SecureGroups 是否已赋值
                     * @return SecureGroups 是否已赋值
                     */
                    bool SecureGroupsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例绑定的后端设备的基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetRegionInfo 负载均衡实例绑定的后端设备的基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TargetRegionInfo GetTargetRegionInfo() const;

                    /**
                     * 设置负载均衡实例绑定的后端设备的基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetRegionInfo 负载均衡实例绑定的后端设备的基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetRegionInfo(const TargetRegionInfo& _targetRegionInfo);

                    /**
                     * 判断参数 TargetRegionInfo 是否已赋值
                     * @return TargetRegionInfo 是否已赋值
                     */
                    bool TargetRegionInfoHasBeenSet() const;

                    /**
                     * 获取anycast负载均衡的发布域，对于非anycast的负载均衡，此字段返回为空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnycastZone anycast负载均衡的发布域，对于非anycast的负载均衡，此字段返回为空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAnycastZone() const;

                    /**
                     * 设置anycast负载均衡的发布域，对于非anycast的负载均衡，此字段返回为空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AnycastZone anycast负载均衡的发布域，对于非anycast的负载均衡，此字段返回为空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAnycastZone(const std::string& _anycastZone);

                    /**
                     * 判断参数 AnycastZone 是否已赋值
                     * @return AnycastZone 是否已赋值
                     */
                    bool AnycastZoneHasBeenSet() const;

                    /**
                     * 获取IP版本，ipv4 | ipv6
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressIPVersion IP版本，ipv4 | ipv6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置IP版本，ipv4 | ipv6
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddressIPVersion IP版本，ipv4 | ipv6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取数值形式的私有网络 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumericalVpcId 数值形式的私有网络 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetNumericalVpcId() const;

                    /**
                     * 设置数值形式的私有网络 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NumericalVpcId 数值形式的私有网络 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNumericalVpcId(const uint64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                    /**
                     * 获取负载均衡IP地址所属的ISP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipIsp 负载均衡IP地址所属的ISP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置负载均衡IP地址所属的ISP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VipIsp 负载均衡IP地址所属的ISP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterZone 主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ZoneInfo GetMasterZone() const;

                    /**
                     * 设置主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MasterZone 主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMasterZone(const ZoneInfo& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupZoneSet 备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ZoneInfo> GetBackupZoneSet() const;

                    /**
                     * 设置备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BackupZoneSet 备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBackupZoneSet(const std::vector<ZoneInfo>& _backupZoneSet);

                    /**
                     * 判断参数 BackupZoneSet 是否已赋值
                     * @return BackupZoneSet 是否已赋值
                     */
                    bool BackupZoneSetHasBeenSet() const;

                    /**
                     * 获取负载均衡实例被隔离的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTime 负载均衡实例被隔离的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置负载均衡实例被隔离的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsolatedTime 负载均衡实例被隔离的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的过期时间，仅对预付费负载均衡生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 负载均衡实例的过期时间，仅对预付费负载均衡生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置负载均衡实例的过期时间，仅对预付费负载均衡生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpireTime 负载均衡实例的过期时间，仅对预付费负载均衡生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 负载均衡实例的计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置负载均衡实例的计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChargeType 负载均衡实例的计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkAttributes 负载均衡实例的网络属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InternetAccessible GetNetworkAttributes() const;

                    /**
                     * 设置负载均衡实例的网络属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NetworkAttributes 负载均衡实例的网络属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNetworkAttributes(const InternetAccessible& _networkAttributes);

                    /**
                     * 判断参数 NetworkAttributes 是否已赋值
                     * @return NetworkAttributes 是否已赋值
                     */
                    bool NetworkAttributesHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的预付费相关属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrepaidAttributes 负载均衡实例的预付费相关属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LBChargePrepaid GetPrepaidAttributes() const;

                    /**
                     * 设置负载均衡实例的预付费相关属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PrepaidAttributes 负载均衡实例的预付费相关属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrepaidAttributes(const LBChargePrepaid& _prepaidAttributes);

                    /**
                     * 判断参数 PrepaidAttributes 是否已赋值
                     * @return PrepaidAttributes 是否已赋值
                     */
                    bool PrepaidAttributesHasBeenSet() const;

                    /**
                     * 获取负载均衡日志服务(CLS)的日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogSetId 负载均衡日志服务(CLS)的日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置负载均衡日志服务(CLS)的日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogSetId 负载均衡日志服务(CLS)的日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取负载均衡日志服务(CLS)的日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTopicId 负载均衡日志服务(CLS)的日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置负载均衡日志服务(CLS)的日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogTopicId 负载均衡日志服务(CLS)的日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的IPv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressIPv6 负载均衡实例的IPv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddressIPv6() const;

                    /**
                     * 设置负载均衡实例的IPv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddressIPv6 负载均衡实例的IPv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddressIPv6(const std::string& _addressIPv6);

                    /**
                     * 判断参数 AddressIPv6 是否已赋值
                     * @return AddressIPv6 是否已赋值
                     */
                    bool AddressIPv6HasBeenSet() const;

                    /**
                     * 获取暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 设置暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExtraInfo 暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExtraInfo(const ExtraInfo& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     */
                    bool ExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡实例的名称。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 负载均衡类型标识，1：负载均衡，0：传统型负载均衡。
                     */
                    uint64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * 负载均衡实例的域名，仅公网传统型负载均衡实例才提供该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 负载均衡实例的 VIP 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * 负载均衡实例的状态，包括
0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 负载均衡实例的上次状态转换时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusTime;
                    bool m_statusTimeHasBeenSet;

                    /**
                     * 负载均衡实例所属的项目 ID， 0 表示默认项目。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 私有网络的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 高防 LB 的标识，1：高防负载均衡 0：非高防负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_openBgp;
                    bool m_openBgpHasBeenSet;

                    /**
                     * 在 2016 年 12 月份之前的传统型内网负载均衡都是开启了 snat 的。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_snat;
                    bool m_snatHasBeenSet;

                    /**
                     * 0：表示未被隔离，1：表示被隔离。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isolation;
                    bool m_isolationHasBeenSet;

                    /**
                     * 用户开启日志的信息，日志只有公网属性创建了 HTTP 、HTTPS 监听器的负载均衡才会有日志。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * 负载均衡实例所在的子网（仅对内网VPC型LB有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 负载均衡实例的标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 负载均衡实例的安全组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_secureGroups;
                    bool m_secureGroupsHasBeenSet;

                    /**
                     * 负载均衡实例绑定的后端设备的基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TargetRegionInfo m_targetRegionInfo;
                    bool m_targetRegionInfoHasBeenSet;

                    /**
                     * anycast负载均衡的发布域，对于非anycast的负载均衡，此字段返回为空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_anycastZone;
                    bool m_anycastZoneHasBeenSet;

                    /**
                     * IP版本，ipv4 | ipv6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * 数值形式的私有网络 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * 负载均衡IP地址所属的ISP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * 主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ZoneInfo m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * 备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ZoneInfo> m_backupZoneSet;
                    bool m_backupZoneSetHasBeenSet;

                    /**
                     * 负载均衡实例被隔离的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * 负载均衡实例的过期时间，仅对预付费负载均衡生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 负载均衡实例的计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 负载均衡实例的网络属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InternetAccessible m_networkAttributes;
                    bool m_networkAttributesHasBeenSet;

                    /**
                     * 负载均衡实例的预付费相关属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LBChargePrepaid m_prepaidAttributes;
                    bool m_prepaidAttributesHasBeenSet;

                    /**
                     * 负载均衡日志服务(CLS)的日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 负载均衡日志服务(CLS)的日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * 负载均衡实例的IPv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addressIPv6;
                    bool m_addressIPv6HasBeenSet;

                    /**
                     * 暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCER_H_
