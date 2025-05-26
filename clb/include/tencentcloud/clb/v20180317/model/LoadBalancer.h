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
#include <tencentcloud/clb/v20180317/model/ExclusiveCluster.h>
#include <tencentcloud/clb/v20180317/model/SnatIp.h>


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
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param _loadBalancerId 负载均衡实例 ID。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的名称。
                     * @return LoadBalancerName 负载均衡实例的名称。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例的名称。
                     * @param _loadBalancerName 负载均衡实例的名称。
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性；对于内网属性的负载均衡，可通过绑定EIP出公网，具体可参考EIP文档[绑定弹性公网IP](https://cloud.tencent.com/document/product/215/16700)。
                     * @return LoadBalancerType 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性；对于内网属性的负载均衡，可通过绑定EIP出公网，具体可参考EIP文档[绑定弹性公网IP](https://cloud.tencent.com/document/product/215/16700)。
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性；对于内网属性的负载均衡，可通过绑定EIP出公网，具体可参考EIP文档[绑定弹性公网IP](https://cloud.tencent.com/document/product/215/16700)。
                     * @param _loadBalancerType 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性；对于内网属性的负载均衡，可通过绑定EIP出公网，具体可参考EIP文档[绑定弹性公网IP](https://cloud.tencent.com/document/product/215/16700)。
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡类型标识，1：负载均衡，0：传统型负载均衡。
                     * @return Forward 负载均衡类型标识，1：负载均衡，0：传统型负载均衡。
                     * 
                     */
                    uint64_t GetForward() const;

                    /**
                     * 设置负载均衡类型标识，1：负载均衡，0：传统型负载均衡。
                     * @param _forward 负载均衡类型标识，1：负载均衡，0：传统型负载均衡。
                     * 
                     */
                    void SetForward(const uint64_t& _forward);

                    /**
                     * 判断参数 Forward 是否已赋值
                     * @return Forward 是否已赋值
                     * 
                     */
                    bool ForwardHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的域名，仅公网传统型和域名型负载均衡实例才提供该字段。逐步下线中，建议用LoadBalancerDomain替代。
                     * @return Domain 负载均衡实例的域名，仅公网传统型和域名型负载均衡实例才提供该字段。逐步下线中，建议用LoadBalancerDomain替代。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置负载均衡实例的域名，仅公网传统型和域名型负载均衡实例才提供该字段。逐步下线中，建议用LoadBalancerDomain替代。
                     * @param _domain 负载均衡实例的域名，仅公网传统型和域名型负载均衡实例才提供该字段。逐步下线中，建议用LoadBalancerDomain替代。
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
                     * 获取负载均衡实例的 VIP 列表。
                     * @return LoadBalancerVips 负载均衡实例的 VIP 列表。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置负载均衡实例的 VIP 列表。
                     * @param _loadBalancerVips 负载均衡实例的 VIP 列表。
                     * 
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的状态，包括
0：创建中，1：正常运行。
                     * @return Status 负载均衡实例的状态，包括
0：创建中，1：正常运行。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置负载均衡实例的状态，包括
0：创建中，1：正常运行。
                     * @param _status 负载均衡实例的状态，包括
0：创建中，1：正常运行。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的创建时间。
格式：YYYY-MM-DD HH:mm:ss
                     * @return CreateTime 负载均衡实例的创建时间。
格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置负载均衡实例的创建时间。
格式：YYYY-MM-DD HH:mm:ss
                     * @param _createTime 负载均衡实例的创建时间。
格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的上次状态转换时间。
格式：YYYY-MM-DD HH:mm:ss
                     * @return StatusTime 负载均衡实例的上次状态转换时间。
格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetStatusTime() const;

                    /**
                     * 设置负载均衡实例的上次状态转换时间。
格式：YYYY-MM-DD HH:mm:ss
                     * @param _statusTime 负载均衡实例的上次状态转换时间。
格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetStatusTime(const std::string& _statusTime);

                    /**
                     * 判断参数 StatusTime 是否已赋值
                     * @return StatusTime 是否已赋值
                     * 
                     */
                    bool StatusTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所属的项目 ID， 0 表示默认项目。
                     * @return ProjectId 负载均衡实例所属的项目 ID， 0 表示默认项目。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置负载均衡实例所属的项目 ID， 0 表示默认项目。
                     * @param _projectId 负载均衡实例所属的项目 ID， 0 表示默认项目。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取私有网络的 ID
                     * @return VpcId 私有网络的 ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络的 ID
                     * @param _vpcId 私有网络的 ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取高防 LB 的标识，1：高防负载均衡 0：非高防负载均衡。
                     * @return OpenBgp 高防 LB 的标识，1：高防负载均衡 0：非高防负载均衡。
                     * 
                     */
                    uint64_t GetOpenBgp() const;

                    /**
                     * 设置高防 LB 的标识，1：高防负载均衡 0：非高防负载均衡。
                     * @param _openBgp 高防 LB 的标识，1：高防负载均衡 0：非高防负载均衡。
                     * 
                     */
                    void SetOpenBgp(const uint64_t& _openBgp);

                    /**
                     * 判断参数 OpenBgp 是否已赋值
                     * @return OpenBgp 是否已赋值
                     * 
                     */
                    bool OpenBgpHasBeenSet() const;

                    /**
                     * 获取是否开启 SNAT，在 2016 年 12 月份之前的传统型内网负载均衡都是开启了 SNAT 的。
                     * @return Snat 是否开启 SNAT，在 2016 年 12 月份之前的传统型内网负载均衡都是开启了 SNAT 的。
                     * 
                     */
                    bool GetSnat() const;

                    /**
                     * 设置是否开启 SNAT，在 2016 年 12 月份之前的传统型内网负载均衡都是开启了 SNAT 的。
                     * @param _snat 是否开启 SNAT，在 2016 年 12 月份之前的传统型内网负载均衡都是开启了 SNAT 的。
                     * 
                     */
                    void SetSnat(const bool& _snat);

                    /**
                     * 判断参数 Snat 是否已赋值
                     * @return Snat 是否已赋值
                     * 
                     */
                    bool SnatHasBeenSet() const;

                    /**
                     * 获取是否被隔离，0：表示未被隔离，1：表示被隔离。
                     * @return Isolation 是否被隔离，0：表示未被隔离，1：表示被隔离。
                     * 
                     */
                    uint64_t GetIsolation() const;

                    /**
                     * 设置是否被隔离，0：表示未被隔离，1：表示被隔离。
                     * @param _isolation 是否被隔离，0：表示未被隔离，1：表示被隔离。
                     * 
                     */
                    void SetIsolation(const uint64_t& _isolation);

                    /**
                     * 判断参数 Isolation 是否已赋值
                     * @return Isolation 是否已赋值
                     * 
                     */
                    bool IsolationHasBeenSet() const;

                    /**
                     * 获取用户开启日志的信息，日志只有公网属性创建了 HTTP 、HTTPS 监听器的负载均衡才会有日志。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Log 用户开启日志的信息，日志只有公网属性创建了 HTTP 、HTTPS 监听器的负载均衡才会有日志。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetLog() const;

                    /**
                     * 设置用户开启日志的信息，日志只有公网属性创建了 HTTP 、HTTPS 监听器的负载均衡才会有日志。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _log 用户开启日志的信息，日志只有公网属性创建了 HTTP 、HTTPS 监听器的负载均衡才会有日志。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * @deprecated
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所在的子网（仅对内网VPC型LB有意义）
                     * @return SubnetId 负载均衡实例所在的子网（仅对内网VPC型LB有意义）
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置负载均衡实例所在的子网（仅对内网VPC型LB有意义）
                     * @param _subnetId 负载均衡实例所在的子网（仅对内网VPC型LB有意义）
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的标签信息
                     * @return Tags 负载均衡实例的标签信息
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置负载均衡实例的标签信息
                     * @param _tags 负载均衡实例的标签信息
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的安全组
                     * @return SecureGroups 负载均衡实例的安全组
                     * 
                     */
                    std::vector<std::string> GetSecureGroups() const;

                    /**
                     * 设置负载均衡实例的安全组
                     * @param _secureGroups 负载均衡实例的安全组
                     * 
                     */
                    void SetSecureGroups(const std::vector<std::string>& _secureGroups);

                    /**
                     * 判断参数 SecureGroups 是否已赋值
                     * @return SecureGroups 是否已赋值
                     * 
                     */
                    bool SecureGroupsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例绑定的后端设备的基本信息
                     * @return TargetRegionInfo 负载均衡实例绑定的后端设备的基本信息
                     * 
                     */
                    TargetRegionInfo GetTargetRegionInfo() const;

                    /**
                     * 设置负载均衡实例绑定的后端设备的基本信息
                     * @param _targetRegionInfo 负载均衡实例绑定的后端设备的基本信息
                     * 
                     */
                    void SetTargetRegionInfo(const TargetRegionInfo& _targetRegionInfo);

                    /**
                     * 判断参数 TargetRegionInfo 是否已赋值
                     * @return TargetRegionInfo 是否已赋值
                     * 
                     */
                    bool TargetRegionInfoHasBeenSet() const;

                    /**
                     * 获取anycast负载均衡的发布域，对于非anycast的负载均衡，此字段返回为空字符串
                     * @return AnycastZone anycast负载均衡的发布域，对于非anycast的负载均衡，此字段返回为空字符串
                     * 
                     */
                    std::string GetAnycastZone() const;

                    /**
                     * 设置anycast负载均衡的发布域，对于非anycast的负载均衡，此字段返回为空字符串
                     * @param _anycastZone anycast负载均衡的发布域，对于非anycast的负载均衡，此字段返回为空字符串
                     * 
                     */
                    void SetAnycastZone(const std::string& _anycastZone);

                    /**
                     * 判断参数 AnycastZone 是否已赋值
                     * @return AnycastZone 是否已赋值
                     * 
                     */
                    bool AnycastZoneHasBeenSet() const;

                    /**
                     * 获取IP版本，ipv4 | ipv6
                     * @return AddressIPVersion IP版本，ipv4 | ipv6
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置IP版本，ipv4 | ipv6
                     * @param _addressIPVersion IP版本，ipv4 | ipv6
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取数值形式的私有网络 ID，可以通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取。
                     * @return NumericalVpcId 数值形式的私有网络 ID，可以通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取。
                     * 
                     */
                    uint64_t GetNumericalVpcId() const;

                    /**
                     * 设置数值形式的私有网络 ID，可以通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取。
                     * @param _numericalVpcId 数值形式的私有网络 ID，可以通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取。
                     * 
                     */
                    void SetNumericalVpcId(const uint64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     * 
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                    /**
                     * 获取负载均衡IP地址所属的运营商。

- BGP :  BGP（多线）
- CMCC：中国移动单线
- CTCC：中国电信单线
- CUCC：中国联通单线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipIsp 负载均衡IP地址所属的运营商。

- BGP :  BGP（多线）
- CMCC：中国移动单线
- CTCC：中国电信单线
- CUCC：中国联通单线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置负载均衡IP地址所属的运营商。

- BGP :  BGP（多线）
- CMCC：中国移动单线
- CTCC：中国电信单线
- CUCC：中国联通单线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipIsp 负载均衡IP地址所属的运营商。

- BGP :  BGP（多线）
- CMCC：中国移动单线
- CTCC：中国电信单线
- CUCC：中国联通单线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterZone 主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ZoneInfo GetMasterZone() const;

                    /**
                     * 设置主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _masterZone 主可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMasterZone(const ZoneInfo& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupZoneSet 备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ZoneInfo> GetBackupZoneSet() const;

                    /**
                     * 设置备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupZoneSet 备可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupZoneSet(const std::vector<ZoneInfo>& _backupZoneSet);

                    /**
                     * 判断参数 BackupZoneSet 是否已赋值
                     * @return BackupZoneSet 是否已赋值
                     * 
                     */
                    bool BackupZoneSetHasBeenSet() const;

                    /**
                     * 获取负载均衡实例被隔离的时间。
格式：YYYY-MM-DD HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTime 负载均衡实例被隔离的时间。
格式：YYYY-MM-DD HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置负载均衡实例被隔离的时间。
格式：YYYY-MM-DD HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedTime 负载均衡实例被隔离的时间。
格式：YYYY-MM-DD HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的过期时间，仅对预付费负载均衡生效。
格式：YYYY-MM-DD HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 负载均衡实例的过期时间，仅对预付费负载均衡生效。
格式：YYYY-MM-DD HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置负载均衡实例的过期时间，仅对预付费负载均衡生效。
格式：YYYY-MM-DD HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 负载均衡实例的过期时间，仅对预付费负载均衡生效。
格式：YYYY-MM-DD HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的计费类型，PREPAID：包年包月，POSTPAID_BY_HOUR：按量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 负载均衡实例的计费类型，PREPAID：包年包月，POSTPAID_BY_HOUR：按量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置负载均衡实例的计费类型，PREPAID：包年包月，POSTPAID_BY_HOUR：按量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeType 负载均衡实例的计费类型，PREPAID：包年包月，POSTPAID_BY_HOUR：按量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkAttributes 负载均衡实例的网络属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InternetAccessible GetNetworkAttributes() const;

                    /**
                     * 设置负载均衡实例的网络属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkAttributes 负载均衡实例的网络属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkAttributes(const InternetAccessible& _networkAttributes);

                    /**
                     * 判断参数 NetworkAttributes 是否已赋值
                     * @return NetworkAttributes 是否已赋值
                     * 
                     */
                    bool NetworkAttributesHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的预付费相关属性，仅在 ChargeType=PREPAID 时显示。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrepaidAttributes 负载均衡实例的预付费相关属性，仅在 ChargeType=PREPAID 时显示。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LBChargePrepaid GetPrepaidAttributes() const;

                    /**
                     * 设置负载均衡实例的预付费相关属性，仅在 ChargeType=PREPAID 时显示。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prepaidAttributes 负载均衡实例的预付费相关属性，仅在 ChargeType=PREPAID 时显示。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrepaidAttributes(const LBChargePrepaid& _prepaidAttributes);

                    /**
                     * 判断参数 PrepaidAttributes 是否已赋值
                     * @return PrepaidAttributes 是否已赋值
                     * 
                     */
                    bool PrepaidAttributesHasBeenSet() const;

                    /**
                     * 获取负载均衡日志服务(CLS)的日志集ID
                     * @return LogSetId 负载均衡日志服务(CLS)的日志集ID
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置负载均衡日志服务(CLS)的日志集ID
                     * @param _logSetId 负载均衡日志服务(CLS)的日志集ID
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取负载均衡日志服务(CLS)的日志主题ID
                     * @return LogTopicId 负载均衡日志服务(CLS)的日志主题ID
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置负载均衡日志服务(CLS)的日志主题ID
                     * @param _logTopicId 负载均衡日志服务(CLS)的日志主题ID
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的IPv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressIPv6 负载均衡实例的IPv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddressIPv6() const;

                    /**
                     * 设置负载均衡实例的IPv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addressIPv6 负载均衡实例的IPv6地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddressIPv6(const std::string& _addressIPv6);

                    /**
                     * 判断参数 AddressIPv6 是否已赋值
                     * @return AddressIPv6 是否已赋值
                     * 
                     */
                    bool AddressIPv6HasBeenSet() const;

                    /**
                     * 获取暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 设置暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const ExtraInfo& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取是否可绑定高防包
                     * @return IsDDos 是否可绑定高防包
                     * 
                     */
                    bool GetIsDDos() const;

                    /**
                     * 设置是否可绑定高防包
                     * @param _isDDos 是否可绑定高防包
                     * 
                     */
                    void SetIsDDos(const bool& _isDDos);

                    /**
                     * 判断参数 IsDDos 是否已赋值
                     * @return IsDDos 是否已赋值
                     * 
                     */
                    bool IsDDosHasBeenSet() const;

                    /**
                     * 获取负载均衡维度的个性化配置ID
                     * @return ConfigId 负载均衡维度的个性化配置ID
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置负载均衡维度的个性化配置ID
                     * @param _configId 负载均衡维度的个性化配置ID
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取后端服务是否放通来自LB的流量
                     * @return LoadBalancerPassToTarget 后端服务是否放通来自LB的流量
                     * 
                     */
                    bool GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置后端服务是否放通来自LB的流量
                     * @param _loadBalancerPassToTarget 后端服务是否放通来自LB的流量
                     * 
                     */
                    void SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     * 
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                    /**
                     * 获取内网独占集群
                     * @return ExclusiveCluster 内网独占集群
                     * 
                     */
                    ExclusiveCluster GetExclusiveCluster() const;

                    /**
                     * 设置内网独占集群
                     * @param _exclusiveCluster 内网独占集群
                     * 
                     */
                    void SetExclusiveCluster(const ExclusiveCluster& _exclusiveCluster);

                    /**
                     * 判断参数 ExclusiveCluster 是否已赋值
                     * @return ExclusiveCluster 是否已赋值
                     * 
                     */
                    bool ExclusiveClusterHasBeenSet() const;

                    /**
                     * 获取IP地址版本为ipv6时此字段有意义，IPv6Nat64 | IPv6FullChain。
IPv6Nat64: 基于 NAT64 IPv6 过渡技术实现的负载均衡器。
IPv6FullChain：基于 IPv6 单栈技术实现的负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPv6Mode IP地址版本为ipv6时此字段有意义，IPv6Nat64 | IPv6FullChain。
IPv6Nat64: 基于 NAT64 IPv6 过渡技术实现的负载均衡器。
IPv6FullChain：基于 IPv6 单栈技术实现的负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIPv6Mode() const;

                    /**
                     * 设置IP地址版本为ipv6时此字段有意义，IPv6Nat64 | IPv6FullChain。
IPv6Nat64: 基于 NAT64 IPv6 过渡技术实现的负载均衡器。
IPv6FullChain：基于 IPv6 单栈技术实现的负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iPv6Mode IP地址版本为ipv6时此字段有意义，IPv6Nat64 | IPv6FullChain。
IPv6Nat64: 基于 NAT64 IPv6 过渡技术实现的负载均衡器。
IPv6FullChain：基于 IPv6 单栈技术实现的负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIPv6Mode(const std::string& _iPv6Mode);

                    /**
                     * 判断参数 IPv6Mode 是否已赋值
                     * @return IPv6Mode 是否已赋值
                     * 
                     */
                    bool IPv6ModeHasBeenSet() const;

                    /**
                     * 获取是否开启SnatPro。
                     * @return SnatPro 是否开启SnatPro。
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置是否开启SnatPro。
                     * @param _snatPro 是否开启SnatPro。
                     * 
                     */
                    void SetSnatPro(const bool& _snatPro);

                    /**
                     * 判断参数 SnatPro 是否已赋值
                     * @return SnatPro 是否已赋值
                     * 
                     */
                    bool SnatProHasBeenSet() const;

                    /**
                     * 获取开启SnatPro负载均衡后，SnatIp列表。
                     * @return SnatIps 开启SnatPro负载均衡后，SnatIp列表。
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置开启SnatPro负载均衡后，SnatIp列表。
                     * @param _snatIps 开启SnatPro负载均衡后，SnatIp列表。
                     * 
                     */
                    void SetSnatIps(const std::vector<SnatIp>& _snatIps);

                    /**
                     * 判断参数 SnatIps 是否已赋值
                     * @return SnatIps 是否已赋值
                     * 
                     */
                    bool SnatIpsHasBeenSet() const;

                    /**
                     * 获取性能容量型规格。<ul><li> clb.c1.small：简约型规格 </li><li> clb.c2.medium：标准型规格 </li><li> clb.c3.small：高阶型1规格 </li><li> clb.c3.medium：高阶型2规格 </li><li> clb.c4.small：超强型1规格 </li><li> clb.c4.medium：超强型2规格 </li><li> clb.c4.large：超强型3规格 </li><li> clb.c4.xlarge：超强型4规格 </li><li>""：非性能容量型实例</li></ul>
                     * @return SlaType 性能容量型规格。<ul><li> clb.c1.small：简约型规格 </li><li> clb.c2.medium：标准型规格 </li><li> clb.c3.small：高阶型1规格 </li><li> clb.c3.medium：高阶型2规格 </li><li> clb.c4.small：超强型1规格 </li><li> clb.c4.medium：超强型2规格 </li><li> clb.c4.large：超强型3规格 </li><li> clb.c4.xlarge：超强型4规格 </li><li>""：非性能容量型实例</li></ul>
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置性能容量型规格。<ul><li> clb.c1.small：简约型规格 </li><li> clb.c2.medium：标准型规格 </li><li> clb.c3.small：高阶型1规格 </li><li> clb.c3.medium：高阶型2规格 </li><li> clb.c4.small：超强型1规格 </li><li> clb.c4.medium：超强型2规格 </li><li> clb.c4.large：超强型3规格 </li><li> clb.c4.xlarge：超强型4规格 </li><li>""：非性能容量型实例</li></ul>
                     * @param _slaType 性能容量型规格。<ul><li> clb.c1.small：简约型规格 </li><li> clb.c2.medium：标准型规格 </li><li> clb.c3.small：高阶型1规格 </li><li> clb.c3.medium：高阶型2规格 </li><li> clb.c4.small：超强型1规格 </li><li> clb.c4.medium：超强型2规格 </li><li> clb.c4.large：超强型3规格 </li><li> clb.c4.xlarge：超强型4规格 </li><li>""：非性能容量型实例</li></ul>
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取vip是否被封堵
                     * @return IsBlock vip是否被封堵
                     * 
                     */
                    bool GetIsBlock() const;

                    /**
                     * 设置vip是否被封堵
                     * @param _isBlock vip是否被封堵
                     * 
                     */
                    void SetIsBlock(const bool& _isBlock);

                    /**
                     * 判断参数 IsBlock 是否已赋值
                     * @return IsBlock 是否已赋值
                     * 
                     */
                    bool IsBlockHasBeenSet() const;

                    /**
                     * 获取封堵或解封时间。
格式：YYYY-MM-DD HH:mm:ss。
                     * @return IsBlockTime 封堵或解封时间。
格式：YYYY-MM-DD HH:mm:ss。
                     * 
                     */
                    std::string GetIsBlockTime() const;

                    /**
                     * 设置封堵或解封时间。
格式：YYYY-MM-DD HH:mm:ss。
                     * @param _isBlockTime 封堵或解封时间。
格式：YYYY-MM-DD HH:mm:ss。
                     * 
                     */
                    void SetIsBlockTime(const std::string& _isBlockTime);

                    /**
                     * 判断参数 IsBlockTime 是否已赋值
                     * @return IsBlockTime 是否已赋值
                     * 
                     */
                    bool IsBlockTimeHasBeenSet() const;

                    /**
                     * 获取IP类型是否是本地BGP
                     * @return LocalBgp IP类型是否是本地BGP
                     * 
                     */
                    bool GetLocalBgp() const;

                    /**
                     * 设置IP类型是否是本地BGP
                     * @param _localBgp IP类型是否是本地BGP
                     * 
                     */
                    void SetLocalBgp(const bool& _localBgp);

                    /**
                     * 判断参数 LocalBgp 是否已赋值
                     * @return LocalBgp 是否已赋值
                     * 
                     */
                    bool LocalBgpHasBeenSet() const;

                    /**
                     * 获取7层独占标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterTag 7层独占标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterTag() const;

                    /**
                     * 设置7层独占标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterTag 7层独占标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterTag(const std::string& _clusterTag);

                    /**
                     * 判断参数 ClusterTag 是否已赋值
                     * @return ClusterTag 是否已赋值
                     * 
                     */
                    bool ClusterTagHasBeenSet() const;

                    /**
                     * 获取开启IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标功能。
                     * @return MixIpTarget 开启IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标功能。
                     * 
                     */
                    bool GetMixIpTarget() const;

                    /**
                     * 设置开启IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标功能。
                     * @param _mixIpTarget 开启IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标功能。
                     * 
                     */
                    void SetMixIpTarget(const bool& _mixIpTarget);

                    /**
                     * 判断参数 MixIpTarget 是否已赋值
                     * @return MixIpTarget 是否已赋值
                     * 
                     */
                    bool MixIpTargetHasBeenSet() const;

                    /**
                     * 获取私有网络内网负载均衡，就近接入模式下规则所落在的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zones 私有网络内网负载均衡，就近接入模式下规则所落在的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置私有网络内网负载均衡，就近接入模式下规则所落在的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zones 私有网络内网负载均衡，就近接入模式下规则所落在的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取CLB是否为NFV，空：不是，l7nfv：七层是NFV。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NfvInfo CLB是否为NFV，空：不是，l7nfv：七层是NFV。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNfvInfo() const;

                    /**
                     * 设置CLB是否为NFV，空：不是，l7nfv：七层是NFV。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nfvInfo CLB是否为NFV，空：不是，l7nfv：七层是NFV。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNfvInfo(const std::string& _nfvInfo);

                    /**
                     * 判断参数 NfvInfo 是否已赋值
                     * @return NfvInfo 是否已赋值
                     * 
                     */
                    bool NfvInfoHasBeenSet() const;

                    /**
                     * 获取负载均衡日志服务(CLS)的健康检查日志集ID
                     * @return HealthLogSetId 负载均衡日志服务(CLS)的健康检查日志集ID
                     * 
                     */
                    std::string GetHealthLogSetId() const;

                    /**
                     * 设置负载均衡日志服务(CLS)的健康检查日志集ID
                     * @param _healthLogSetId 负载均衡日志服务(CLS)的健康检查日志集ID
                     * 
                     */
                    void SetHealthLogSetId(const std::string& _healthLogSetId);

                    /**
                     * 判断参数 HealthLogSetId 是否已赋值
                     * @return HealthLogSetId 是否已赋值
                     * 
                     */
                    bool HealthLogSetIdHasBeenSet() const;

                    /**
                     * 获取负载均衡日志服务(CLS)的健康检查日志主题ID
                     * @return HealthLogTopicId 负载均衡日志服务(CLS)的健康检查日志主题ID
                     * 
                     */
                    std::string GetHealthLogTopicId() const;

                    /**
                     * 设置负载均衡日志服务(CLS)的健康检查日志主题ID
                     * @param _healthLogTopicId 负载均衡日志服务(CLS)的健康检查日志主题ID
                     * 
                     */
                    void SetHealthLogTopicId(const std::string& _healthLogTopicId);

                    /**
                     * 判断参数 HealthLogTopicId 是否已赋值
                     * @return HealthLogTopicId 是否已赋值
                     * 
                     */
                    bool HealthLogTopicIdHasBeenSet() const;

                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterIds 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterIds 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取负载均衡的属性，传入字符串数组来决定是否开启
DeleteProtect: 删除保护，开启后防止负载均衡被误删除。 
UserInVisible: 用户不可见，控制负载均衡对用户的可见性。 
BlockStatus: 阻塞状态，用于限制负载均衡的某些操作或流量。 
NoLBNat: 禁用负载均衡的NAT功能，用于特定场景下的流量直接转发。 
BanStatus: 封禁状态，用于暂停负载均衡服务或限制访问。 
ShiftupFlag: 升配标志，用于标识负载均衡需要升级配置或性能。 
Stop: 停止状态，开启后负载均衡暂停服务。 
NoVpcGw: 不使用VPC网关，用于绕过VPC网关直接处理流量。 
SgInTgw: 安全组在TGW（Transit Gateway）中，涉及网络安全策略配置。 
SharedLimitFlag: 共享限制标志，用于控制负载均衡的共享资源限制。 
WafFlag: Web应用防火墙（WAF）标志，开启后启用WAF保护。 
IsDomainCLB: 域名型负载均衡，标识负载均衡是否基于域名进行流量分发。 
IPv6Snat: IPv6源地址转换（SNAT），用于IPv6网络的源地址处理。 
HideDomain: 隐藏域名，用于隐私保护或特定场景下不暴露域名。 
JumboFrame: 巨型帧支持，开启后支持更大的数据帧以提高网络效率。 
NoLBNatL4IPdc: 四层IP直连无NAT，用于四层负载均衡直接转发IP流量。 
VpcGwL3Service: VPC网关三层服务，涉及三层网络服务的网关功能。 
Ipv62Flag: IPv6扩展标志，用于特定的IPv6功能支持。 
Ipv62ExclusiveFlag: IPv6独占标志，用于专属IPv6流量处理。 
BgpPro: BGP Pro 支持。 
ToaClean: TOA（TCP Option Address）清理，清除TCP选项中的地址信息。 

                     * @return AttributeFlags 负载均衡的属性，传入字符串数组来决定是否开启
DeleteProtect: 删除保护，开启后防止负载均衡被误删除。 
UserInVisible: 用户不可见，控制负载均衡对用户的可见性。 
BlockStatus: 阻塞状态，用于限制负载均衡的某些操作或流量。 
NoLBNat: 禁用负载均衡的NAT功能，用于特定场景下的流量直接转发。 
BanStatus: 封禁状态，用于暂停负载均衡服务或限制访问。 
ShiftupFlag: 升配标志，用于标识负载均衡需要升级配置或性能。 
Stop: 停止状态，开启后负载均衡暂停服务。 
NoVpcGw: 不使用VPC网关，用于绕过VPC网关直接处理流量。 
SgInTgw: 安全组在TGW（Transit Gateway）中，涉及网络安全策略配置。 
SharedLimitFlag: 共享限制标志，用于控制负载均衡的共享资源限制。 
WafFlag: Web应用防火墙（WAF）标志，开启后启用WAF保护。 
IsDomainCLB: 域名型负载均衡，标识负载均衡是否基于域名进行流量分发。 
IPv6Snat: IPv6源地址转换（SNAT），用于IPv6网络的源地址处理。 
HideDomain: 隐藏域名，用于隐私保护或特定场景下不暴露域名。 
JumboFrame: 巨型帧支持，开启后支持更大的数据帧以提高网络效率。 
NoLBNatL4IPdc: 四层IP直连无NAT，用于四层负载均衡直接转发IP流量。 
VpcGwL3Service: VPC网关三层服务，涉及三层网络服务的网关功能。 
Ipv62Flag: IPv6扩展标志，用于特定的IPv6功能支持。 
Ipv62ExclusiveFlag: IPv6独占标志，用于专属IPv6流量处理。 
BgpPro: BGP Pro 支持。 
ToaClean: TOA（TCP Option Address）清理，清除TCP选项中的地址信息。 

                     * 
                     */
                    std::vector<std::string> GetAttributeFlags() const;

                    /**
                     * 设置负载均衡的属性，传入字符串数组来决定是否开启
DeleteProtect: 删除保护，开启后防止负载均衡被误删除。 
UserInVisible: 用户不可见，控制负载均衡对用户的可见性。 
BlockStatus: 阻塞状态，用于限制负载均衡的某些操作或流量。 
NoLBNat: 禁用负载均衡的NAT功能，用于特定场景下的流量直接转发。 
BanStatus: 封禁状态，用于暂停负载均衡服务或限制访问。 
ShiftupFlag: 升配标志，用于标识负载均衡需要升级配置或性能。 
Stop: 停止状态，开启后负载均衡暂停服务。 
NoVpcGw: 不使用VPC网关，用于绕过VPC网关直接处理流量。 
SgInTgw: 安全组在TGW（Transit Gateway）中，涉及网络安全策略配置。 
SharedLimitFlag: 共享限制标志，用于控制负载均衡的共享资源限制。 
WafFlag: Web应用防火墙（WAF）标志，开启后启用WAF保护。 
IsDomainCLB: 域名型负载均衡，标识负载均衡是否基于域名进行流量分发。 
IPv6Snat: IPv6源地址转换（SNAT），用于IPv6网络的源地址处理。 
HideDomain: 隐藏域名，用于隐私保护或特定场景下不暴露域名。 
JumboFrame: 巨型帧支持，开启后支持更大的数据帧以提高网络效率。 
NoLBNatL4IPdc: 四层IP直连无NAT，用于四层负载均衡直接转发IP流量。 
VpcGwL3Service: VPC网关三层服务，涉及三层网络服务的网关功能。 
Ipv62Flag: IPv6扩展标志，用于特定的IPv6功能支持。 
Ipv62ExclusiveFlag: IPv6独占标志，用于专属IPv6流量处理。 
BgpPro: BGP Pro 支持。 
ToaClean: TOA（TCP Option Address）清理，清除TCP选项中的地址信息。 

                     * @param _attributeFlags 负载均衡的属性，传入字符串数组来决定是否开启
DeleteProtect: 删除保护，开启后防止负载均衡被误删除。 
UserInVisible: 用户不可见，控制负载均衡对用户的可见性。 
BlockStatus: 阻塞状态，用于限制负载均衡的某些操作或流量。 
NoLBNat: 禁用负载均衡的NAT功能，用于特定场景下的流量直接转发。 
BanStatus: 封禁状态，用于暂停负载均衡服务或限制访问。 
ShiftupFlag: 升配标志，用于标识负载均衡需要升级配置或性能。 
Stop: 停止状态，开启后负载均衡暂停服务。 
NoVpcGw: 不使用VPC网关，用于绕过VPC网关直接处理流量。 
SgInTgw: 安全组在TGW（Transit Gateway）中，涉及网络安全策略配置。 
SharedLimitFlag: 共享限制标志，用于控制负载均衡的共享资源限制。 
WafFlag: Web应用防火墙（WAF）标志，开启后启用WAF保护。 
IsDomainCLB: 域名型负载均衡，标识负载均衡是否基于域名进行流量分发。 
IPv6Snat: IPv6源地址转换（SNAT），用于IPv6网络的源地址处理。 
HideDomain: 隐藏域名，用于隐私保护或特定场景下不暴露域名。 
JumboFrame: 巨型帧支持，开启后支持更大的数据帧以提高网络效率。 
NoLBNatL4IPdc: 四层IP直连无NAT，用于四层负载均衡直接转发IP流量。 
VpcGwL3Service: VPC网关三层服务，涉及三层网络服务的网关功能。 
Ipv62Flag: IPv6扩展标志，用于特定的IPv6功能支持。 
Ipv62ExclusiveFlag: IPv6独占标志，用于专属IPv6流量处理。 
BgpPro: BGP Pro 支持。 
ToaClean: TOA（TCP Option Address）清理，清除TCP选项中的地址信息。 

                     * 
                     */
                    void SetAttributeFlags(const std::vector<std::string>& _attributeFlags);

                    /**
                     * 判断参数 AttributeFlags 是否已赋值
                     * @return AttributeFlags 是否已赋值
                     * 
                     */
                    bool AttributeFlagsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的域名。
                     * @return LoadBalancerDomain 负载均衡实例的域名。
                     * 
                     */
                    std::string GetLoadBalancerDomain() const;

                    /**
                     * 设置负载均衡实例的域名。
                     * @param _loadBalancerDomain 负载均衡实例的域名。
                     * 
                     */
                    void SetLoadBalancerDomain(const std::string& _loadBalancerDomain);

                    /**
                     * 判断参数 LoadBalancerDomain 是否已赋值
                     * @return LoadBalancerDomain 是否已赋值
                     * 
                     */
                    bool LoadBalancerDomainHasBeenSet() const;

                    /**
                     * 获取网络出口
                     * @return Egress 网络出口
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置网络出口
                     * @param _egress 网络出口
                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                    /**
                     * 获取实例类型是否为独占型。1：独占型实例。0：非独占型实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Exclusive 实例类型是否为独占型。1：独占型实例。0：非独占型实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExclusive() const;

                    /**
                     * 设置实例类型是否为独占型。1：独占型实例。0：非独占型实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exclusive 实例类型是否为独占型。1：独占型实例。0：非独占型实例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExclusive(const uint64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取已绑定的后端服务数量。
                     * @return TargetCount 已绑定的后端服务数量。
                     * 
                     */
                    uint64_t GetTargetCount() const;

                    /**
                     * 设置已绑定的后端服务数量。
                     * @param _targetCount 已绑定的后端服务数量。
                     * 
                     */
                    void SetTargetCount(const uint64_t& _targetCount);

                    /**
                     * 判断参数 TargetCount 是否已赋值
                     * @return TargetCount 是否已赋值
                     * 
                     */
                    bool TargetCountHasBeenSet() const;

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
OPEN：公网属性， INTERNAL：内网属性；对于内网属性的负载均衡，可通过绑定EIP出公网，具体可参考EIP文档[绑定弹性公网IP](https://cloud.tencent.com/document/product/215/16700)。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 负载均衡类型标识，1：负载均衡，0：传统型负载均衡。
                     */
                    uint64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * 负载均衡实例的域名，仅公网传统型和域名型负载均衡实例才提供该字段。逐步下线中，建议用LoadBalancerDomain替代。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 负载均衡实例的 VIP 列表。
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * 负载均衡实例的状态，包括
0：创建中，1：正常运行。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 负载均衡实例的创建时间。
格式：YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 负载均衡实例的上次状态转换时间。
格式：YYYY-MM-DD HH:mm:ss
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
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 高防 LB 的标识，1：高防负载均衡 0：非高防负载均衡。
                     */
                    uint64_t m_openBgp;
                    bool m_openBgpHasBeenSet;

                    /**
                     * 是否开启 SNAT，在 2016 年 12 月份之前的传统型内网负载均衡都是开启了 SNAT 的。
                     */
                    bool m_snat;
                    bool m_snatHasBeenSet;

                    /**
                     * 是否被隔离，0：表示未被隔离，1：表示被隔离。
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
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 负载均衡实例的标签信息
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 负载均衡实例的安全组
                     */
                    std::vector<std::string> m_secureGroups;
                    bool m_secureGroupsHasBeenSet;

                    /**
                     * 负载均衡实例绑定的后端设备的基本信息
                     */
                    TargetRegionInfo m_targetRegionInfo;
                    bool m_targetRegionInfoHasBeenSet;

                    /**
                     * anycast负载均衡的发布域，对于非anycast的负载均衡，此字段返回为空字符串
                     */
                    std::string m_anycastZone;
                    bool m_anycastZoneHasBeenSet;

                    /**
                     * IP版本，ipv4 | ipv6
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * 数值形式的私有网络 ID，可以通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取。
                     */
                    uint64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * 负载均衡IP地址所属的运营商。

- BGP :  BGP（多线）
- CMCC：中国移动单线
- CTCC：中国电信单线
- CUCC：中国联通单线
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
                     * 负载均衡实例被隔离的时间。
格式：YYYY-MM-DD HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * 负载均衡实例的过期时间，仅对预付费负载均衡生效。
格式：YYYY-MM-DD HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 负载均衡实例的计费类型，PREPAID：包年包月，POSTPAID_BY_HOUR：按量计费
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
                     * 负载均衡实例的预付费相关属性，仅在 ChargeType=PREPAID 时显示。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LBChargePrepaid m_prepaidAttributes;
                    bool m_prepaidAttributesHasBeenSet;

                    /**
                     * 负载均衡日志服务(CLS)的日志集ID
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 负载均衡日志服务(CLS)的日志主题ID
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

                    /**
                     * 是否可绑定高防包
                     */
                    bool m_isDDos;
                    bool m_isDDosHasBeenSet;

                    /**
                     * 负载均衡维度的个性化配置ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 后端服务是否放通来自LB的流量
                     */
                    bool m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * 内网独占集群
                     */
                    ExclusiveCluster m_exclusiveCluster;
                    bool m_exclusiveClusterHasBeenSet;

                    /**
                     * IP地址版本为ipv6时此字段有意义，IPv6Nat64 | IPv6FullChain。
IPv6Nat64: 基于 NAT64 IPv6 过渡技术实现的负载均衡器。
IPv6FullChain：基于 IPv6 单栈技术实现的负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iPv6Mode;
                    bool m_iPv6ModeHasBeenSet;

                    /**
                     * 是否开启SnatPro。
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * 开启SnatPro负载均衡后，SnatIp列表。
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * 性能容量型规格。<ul><li> clb.c1.small：简约型规格 </li><li> clb.c2.medium：标准型规格 </li><li> clb.c3.small：高阶型1规格 </li><li> clb.c3.medium：高阶型2规格 </li><li> clb.c4.small：超强型1规格 </li><li> clb.c4.medium：超强型2规格 </li><li> clb.c4.large：超强型3规格 </li><li> clb.c4.xlarge：超强型4规格 </li><li>""：非性能容量型实例</li></ul>
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * vip是否被封堵
                     */
                    bool m_isBlock;
                    bool m_isBlockHasBeenSet;

                    /**
                     * 封堵或解封时间。
格式：YYYY-MM-DD HH:mm:ss。
                     */
                    std::string m_isBlockTime;
                    bool m_isBlockTimeHasBeenSet;

                    /**
                     * IP类型是否是本地BGP
                     */
                    bool m_localBgp;
                    bool m_localBgpHasBeenSet;

                    /**
                     * 7层独占标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterTag;
                    bool m_clusterTagHasBeenSet;

                    /**
                     * 开启IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标功能。
                     */
                    bool m_mixIpTarget;
                    bool m_mixIpTargetHasBeenSet;

                    /**
                     * 私有网络内网负载均衡，就近接入模式下规则所落在的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * CLB是否为NFV，空：不是，l7nfv：七层是NFV。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nfvInfo;
                    bool m_nfvInfoHasBeenSet;

                    /**
                     * 负载均衡日志服务(CLS)的健康检查日志集ID
                     */
                    std::string m_healthLogSetId;
                    bool m_healthLogSetIdHasBeenSet;

                    /**
                     * 负载均衡日志服务(CLS)的健康检查日志主题ID
                     */
                    std::string m_healthLogTopicId;
                    bool m_healthLogTopicIdHasBeenSet;

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 负载均衡的属性，传入字符串数组来决定是否开启
DeleteProtect: 删除保护，开启后防止负载均衡被误删除。 
UserInVisible: 用户不可见，控制负载均衡对用户的可见性。 
BlockStatus: 阻塞状态，用于限制负载均衡的某些操作或流量。 
NoLBNat: 禁用负载均衡的NAT功能，用于特定场景下的流量直接转发。 
BanStatus: 封禁状态，用于暂停负载均衡服务或限制访问。 
ShiftupFlag: 升配标志，用于标识负载均衡需要升级配置或性能。 
Stop: 停止状态，开启后负载均衡暂停服务。 
NoVpcGw: 不使用VPC网关，用于绕过VPC网关直接处理流量。 
SgInTgw: 安全组在TGW（Transit Gateway）中，涉及网络安全策略配置。 
SharedLimitFlag: 共享限制标志，用于控制负载均衡的共享资源限制。 
WafFlag: Web应用防火墙（WAF）标志，开启后启用WAF保护。 
IsDomainCLB: 域名型负载均衡，标识负载均衡是否基于域名进行流量分发。 
IPv6Snat: IPv6源地址转换（SNAT），用于IPv6网络的源地址处理。 
HideDomain: 隐藏域名，用于隐私保护或特定场景下不暴露域名。 
JumboFrame: 巨型帧支持，开启后支持更大的数据帧以提高网络效率。 
NoLBNatL4IPdc: 四层IP直连无NAT，用于四层负载均衡直接转发IP流量。 
VpcGwL3Service: VPC网关三层服务，涉及三层网络服务的网关功能。 
Ipv62Flag: IPv6扩展标志，用于特定的IPv6功能支持。 
Ipv62ExclusiveFlag: IPv6独占标志，用于专属IPv6流量处理。 
BgpPro: BGP Pro 支持。 
ToaClean: TOA（TCP Option Address）清理，清除TCP选项中的地址信息。 

                     */
                    std::vector<std::string> m_attributeFlags;
                    bool m_attributeFlagsHasBeenSet;

                    /**
                     * 负载均衡实例的域名。
                     */
                    std::string m_loadBalancerDomain;
                    bool m_loadBalancerDomainHasBeenSet;

                    /**
                     * 网络出口
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * 实例类型是否为独占型。1：独占型实例。0：非独占型实例。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * 已绑定的后端服务数量。
                     */
                    uint64_t m_targetCount;
                    bool m_targetCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCER_H_
