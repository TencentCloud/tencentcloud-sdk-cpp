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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AlgType.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述 EIP 信息
                */
                class Address : public AbstractModel
                {
                public:
                    Address();
                    ~Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`EIP`的`ID`，是`EIP`的唯一标识。
                     * @return AddressId `EIP`的`ID`，是`EIP`的唯一标识。
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置`EIP`的`ID`，是`EIP`的唯一标识。
                     * @param _addressId `EIP`的`ID`，是`EIP`的唯一标识。
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取`EIP`名称。
                     * @return AddressName `EIP`名称。
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置`EIP`名称。
                     * @param _addressName `EIP`名称。
                     * 
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     * 
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取`EIP`状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     * @return AddressStatus `EIP`状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     * 
                     */
                    std::string GetAddressStatus() const;

                    /**
                     * 设置`EIP`状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     * @param _addressStatus `EIP`状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     * 
                     */
                    void SetAddressStatus(const std::string& _addressStatus);

                    /**
                     * 判断参数 AddressStatus 是否已赋值
                     * @return AddressStatus 是否已赋值
                     * 
                     */
                    bool AddressStatusHasBeenSet() const;

                    /**
                     * 获取外网IP地址
                     * @return AddressIp 外网IP地址
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置外网IP地址
                     * @param _addressIp 外网IP地址
                     * 
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     * 
                     */
                    bool AddressIpHasBeenSet() const;

                    /**
                     * 获取绑定的资源实例`ID`。可能是一个`CVM`，`NAT`。
                     * @return InstanceId 绑定的资源实例`ID`。可能是一个`CVM`，`NAT`。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置绑定的资源实例`ID`。可能是一个`CVM`，`NAT`。
                     * @param _instanceId 绑定的资源实例`ID`。可能是一个`CVM`，`NAT`。
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
                     * 获取创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @return CreatedTime 创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @param _createdTime 创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取绑定的弹性网卡ID，null表示没有绑定弹性网卡。
                     * @return NetworkInterfaceId 绑定的弹性网卡ID，null表示没有绑定弹性网卡。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置绑定的弹性网卡ID，null表示没有绑定弹性网卡。
                     * @param _networkInterfaceId 绑定的弹性网卡ID，null表示没有绑定弹性网卡。
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取绑定的资源内网ip，null表示没有绑定资源内网ip。
                     * @return PrivateAddressIp 绑定的资源内网ip，null表示没有绑定资源内网ip。
                     * 
                     */
                    std::string GetPrivateAddressIp() const;

                    /**
                     * 设置绑定的资源内网ip，null表示没有绑定资源内网ip。
                     * @param _privateAddressIp 绑定的资源内网ip，null表示没有绑定资源内网ip。
                     * 
                     */
                    void SetPrivateAddressIp(const std::string& _privateAddressIp);

                    /**
                     * 判断参数 PrivateAddressIp 是否已赋值
                     * @return PrivateAddressIp 是否已赋值
                     * 
                     */
                    bool PrivateAddressIpHasBeenSet() const;

                    /**
                     * 获取资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态
                     * @return IsArrears 资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态
                     * 
                     */
                    bool GetIsArrears() const;

                    /**
                     * 设置资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态
                     * @param _isArrears 资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态
                     * 
                     */
                    void SetIsArrears(const bool& _isArrears);

                    /**
                     * 判断参数 IsArrears 是否已赋值
                     * @return IsArrears 是否已赋值
                     * 
                     */
                    bool IsArrearsHasBeenSet() const;

                    /**
                     * 获取资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态
                     * @return IsBlocked 资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态
                     * 
                     */
                    bool GetIsBlocked() const;

                    /**
                     * 设置资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态
                     * @param _isBlocked 资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态
                     * 
                     */
                    void SetIsBlocked(const bool& _isBlocked);

                    /**
                     * 判断参数 IsBlocked 是否已赋值
                     * @return IsBlocked 是否已赋值
                     * 
                     */
                    bool IsBlockedHasBeenSet() const;

                    /**
                     * 获取eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式
                     * @return IsEipDirectConnection eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式
                     * 
                     */
                    bool GetIsEipDirectConnection() const;

                    /**
                     * 设置eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式
                     * @param _isEipDirectConnection eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式
                     * 
                     */
                    void SetIsEipDirectConnection(const bool& _isEipDirectConnection);

                    /**
                     * 判断参数 IsEipDirectConnection 是否已赋值
                     * @return IsEipDirectConnection 是否已赋值
                     * 
                     */
                    bool IsEipDirectConnectionHasBeenSet() const;

                    /**
                     * 获取EIP 资源类型，包括CalcIP、WanIP、EIP和AnycastEIP、高防EIP。其中：`CalcIP` 表示设备 IP，`WanIP` 表示普通公网 IP，`EIP` 表示弹性公网 IP，`AnycastEIP` 表示加速 EIP，`AntiDDoSEIP`表示高防EIP。
                     * @return AddressType EIP 资源类型，包括CalcIP、WanIP、EIP和AnycastEIP、高防EIP。其中：`CalcIP` 表示设备 IP，`WanIP` 表示普通公网 IP，`EIP` 表示弹性公网 IP，`AnycastEIP` 表示加速 EIP，`AntiDDoSEIP`表示高防EIP。
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置EIP 资源类型，包括CalcIP、WanIP、EIP和AnycastEIP、高防EIP。其中：`CalcIP` 表示设备 IP，`WanIP` 表示普通公网 IP，`EIP` 表示弹性公网 IP，`AnycastEIP` 表示加速 EIP，`AntiDDoSEIP`表示高防EIP。
                     * @param _addressType EIP 资源类型，包括CalcIP、WanIP、EIP和AnycastEIP、高防EIP。其中：`CalcIP` 表示设备 IP，`WanIP` 表示普通公网 IP，`EIP` 表示弹性公网 IP，`AnycastEIP` 表示加速 EIP，`AntiDDoSEIP`表示高防EIP。
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放
                     * @return CascadeRelease eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放
                     * 
                     */
                    bool GetCascadeRelease() const;

                    /**
                     * 设置eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放
                     * @param _cascadeRelease eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放
                     * 
                     */
                    void SetCascadeRelease(const bool& _cascadeRelease);

                    /**
                     * 判断参数 CascadeRelease 是否已赋值
                     * @return CascadeRelease 是否已赋值
                     * 
                     */
                    bool CascadeReleaseHasBeenSet() const;

                    /**
                     * 获取EIP ALG开启的协议类型。
                     * @return EipAlgType EIP ALG开启的协议类型。
                     * 
                     */
                    AlgType GetEipAlgType() const;

                    /**
                     * 设置EIP ALG开启的协议类型。
                     * @param _eipAlgType EIP ALG开启的协议类型。
                     * 
                     */
                    void SetEipAlgType(const AlgType& _eipAlgType);

                    /**
                     * 判断参数 EipAlgType 是否已赋值
                     * @return EipAlgType 是否已赋值
                     * 
                     */
                    bool EipAlgTypeHasBeenSet() const;

                    /**
                     * 获取弹性公网IP的运营商信息，当前可能返回值包括"CMCC"(移动),"CTCC"(电信),"CUCC"(联通),"BGP"(常规BGP)。
                     * @return InternetServiceProvider 弹性公网IP的运营商信息，当前可能返回值包括"CMCC"(移动),"CTCC"(电信),"CUCC"(联通),"BGP"(常规BGP)。
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置弹性公网IP的运营商信息，当前可能返回值包括"CMCC"(移动),"CTCC"(电信),"CUCC"(联通),"BGP"(常规BGP)。
                     * @param _internetServiceProvider 弹性公网IP的运营商信息，当前可能返回值包括"CMCC"(移动),"CTCC"(电信),"CUCC"(联通),"BGP"(常规BGP)。
                     * 
                     */
                    void SetInternetServiceProvider(const std::string& _internetServiceProvider);

                    /**
                     * 判断参数 InternetServiceProvider 是否已赋值
                     * @return InternetServiceProvider 是否已赋值
                     * 
                     */
                    bool InternetServiceProviderHasBeenSet() const;

                    /**
                     * 获取是否本地带宽EIP，可选值：
<li>true：本地带宽EIP</li>
<li>false：非本地带宽EIP</li>
                     * @return LocalBgp 是否本地带宽EIP，可选值：
<li>true：本地带宽EIP</li>
<li>false：非本地带宽EIP</li>
                     * 
                     */
                    bool GetLocalBgp() const;

                    /**
                     * 设置是否本地带宽EIP，可选值：
<li>true：本地带宽EIP</li>
<li>false：非本地带宽EIP</li>
                     * @param _localBgp 是否本地带宽EIP，可选值：
<li>true：本地带宽EIP</li>
<li>false：非本地带宽EIP</li>
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
                     * 获取弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bandwidth 弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidth 弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
包括：
<li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li>
<p style="padding-left: 30px;">表示包月带宽预付费。</p>
<li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">表示按小时流量后付费。</p>
<li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">表示按小时带宽后付费。</p>
<li><strong>BANDWIDTH_PACKAGE</strong></li>
<p style="padding-left: 30px;">表示共享带宽包。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetChargeType 弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
包括：
<li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li>
<p style="padding-left: 30px;">表示包月带宽预付费。</p>
<li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">表示按小时流量后付费。</p>
<li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">表示按小时带宽后付费。</p>
<li><strong>BANDWIDTH_PACKAGE</strong></li>
<p style="padding-left: 30px;">表示共享带宽包。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
包括：
<li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li>
<p style="padding-left: 30px;">表示包月带宽预付费。</p>
<li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">表示按小时流量后付费。</p>
<li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">表示按小时带宽后付费。</p>
<li><strong>BANDWIDTH_PACKAGE</strong></li>
<p style="padding-left: 30px;">表示共享带宽包。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetChargeType 弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
包括：
<li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li>
<p style="padding-left: 30px;">表示包月带宽预付费。</p>
<li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">表示按小时流量后付费。</p>
<li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">表示按小时带宽后付费。</p>
<li><strong>BANDWIDTH_PACKAGE</strong></li>
<p style="padding-left: 30px;">表示共享带宽包。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取弹性公网IP关联的标签列表。
                     * @return TagSet 弹性公网IP关联的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置弹性公网IP关联的标签列表。
                     * @param _tagSet 弹性公网IP关联的标签列表。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取预付费包月带宽IP到期时间。
时间格式：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadlineDate 预付费包月带宽IP到期时间。
时间格式：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadlineDate() const;

                    /**
                     * 设置预付费包月带宽IP到期时间。
时间格式：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadlineDate 预付费包月带宽IP到期时间。
时间格式：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeadlineDate(const std::string& _deadlineDate);

                    /**
                     * 判断参数 DeadlineDate 是否已赋值
                     * @return DeadlineDate 是否已赋值
                     * 
                     */
                    bool DeadlineDateHasBeenSet() const;

                    /**
                     * 获取EIP绑定的实例类型。可选值：
<li>CVM：云服务器</li>
<li>NAT：NAT 网关</li>
<li>HAVIP：高可用虚拟IP</li>
<li>ENI：弹性网卡</li>
<li>CLB：内网CLB</li>
<li>DHCPIP：弹性内网IP</li>


注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType EIP绑定的实例类型。可选值：
<li>CVM：云服务器</li>
<li>NAT：NAT 网关</li>
<li>HAVIP：高可用虚拟IP</li>
<li>ENI：弹性网卡</li>
<li>CLB：内网CLB</li>
<li>DHCPIP：弹性内网IP</li>


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置EIP绑定的实例类型。可选值：
<li>CVM：云服务器</li>
<li>NAT：NAT 网关</li>
<li>HAVIP：高可用虚拟IP</li>
<li>ENI：弹性网卡</li>
<li>CLB：内网CLB</li>
<li>DHCPIP：弹性内网IP</li>


注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType EIP绑定的实例类型。可选值：
<li>CVM：云服务器</li>
<li>NAT：NAT 网关</li>
<li>HAVIP：高可用虚拟IP</li>
<li>ENI：弹性网卡</li>
<li>CLB：内网CLB</li>
<li>DHCPIP：弹性内网IP</li>


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取静态单线IP网络出口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Egress 静态单线IP网络出口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置静态单线IP网络出口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _egress 静态单线IP网络出口
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取高防包ID,当EIP类型为高防EIP时，返回EIP绑定的高防包ID.
                     * @return AntiDDoSPackageId 高防包ID,当EIP类型为高防EIP时，返回EIP绑定的高防包ID.
                     * 
                     */
                    std::string GetAntiDDoSPackageId() const;

                    /**
                     * 设置高防包ID,当EIP类型为高防EIP时，返回EIP绑定的高防包ID.
                     * @param _antiDDoSPackageId 高防包ID,当EIP类型为高防EIP时，返回EIP绑定的高防包ID.
                     * 
                     */
                    void SetAntiDDoSPackageId(const std::string& _antiDDoSPackageId);

                    /**
                     * 判断参数 AntiDDoSPackageId 是否已赋值
                     * @return AntiDDoSPackageId 是否已赋值
                     * 
                     */
                    bool AntiDDoSPackageIdHasBeenSet() const;

                    /**
                     * 获取当前EIP是否自动续费，只有按月带宽预付费的EIP才会显示该字段，具体值示例如下:
<li>NOTIFY_AND_MANUAL_RENEW:正常续费</li><li>NOTIFY_AND_AUTO_RENEW:自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW:到期不续费 </li>

                     * @return RenewFlag 当前EIP是否自动续费，只有按月带宽预付费的EIP才会显示该字段，具体值示例如下:
<li>NOTIFY_AND_MANUAL_RENEW:正常续费</li><li>NOTIFY_AND_AUTO_RENEW:自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW:到期不续费 </li>

                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置当前EIP是否自动续费，只有按月带宽预付费的EIP才会显示该字段，具体值示例如下:
<li>NOTIFY_AND_MANUAL_RENEW:正常续费</li><li>NOTIFY_AND_AUTO_RENEW:自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW:到期不续费 </li>

                     * @param _renewFlag 当前EIP是否自动续费，只有按月带宽预付费的EIP才会显示该字段，具体值示例如下:
<li>NOTIFY_AND_MANUAL_RENEW:正常续费</li><li>NOTIFY_AND_AUTO_RENEW:自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW:到期不续费 </li>

                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取当前公网IP所关联的带宽包ID，如果该公网IP未使用带宽包计费，则返回为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthPackageId 当前公网IP所关联的带宽包ID，如果该公网IP未使用带宽包计费，则返回为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置当前公网IP所关联的带宽包ID，如果该公网IP未使用带宽包计费，则返回为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidthPackageId 当前公网IP所关联的带宽包ID，如果该公网IP未使用带宽包计费，则返回为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取传统弹性公网IPv6所属vpc唯一ID
                     * @return UnVpcId 传统弹性公网IPv6所属vpc唯一ID
                     * 
                     */
                    std::string GetUnVpcId() const;

                    /**
                     * 设置传统弹性公网IPv6所属vpc唯一ID
                     * @param _unVpcId 传统弹性公网IPv6所属vpc唯一ID
                     * 
                     */
                    void SetUnVpcId(const std::string& _unVpcId);

                    /**
                     * 判断参数 UnVpcId 是否已赋值
                     * @return UnVpcId 是否已赋值
                     * 
                     */
                    bool UnVpcIdHasBeenSet() const;

                    /**
                     * 获取CDC唯一ID
                     * @return DedicatedClusterId CDC唯一ID
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC唯一ID
                     * @param _dedicatedClusterId CDC唯一ID
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * `EIP`的`ID`，是`EIP`的唯一标识。
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * `EIP`名称。
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * `EIP`状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     */
                    std::string m_addressStatus;
                    bool m_addressStatusHasBeenSet;

                    /**
                     * 外网IP地址
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * 绑定的资源实例`ID`。可能是一个`CVM`，`NAT`。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 绑定的弹性网卡ID，null表示没有绑定弹性网卡。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 绑定的资源内网ip，null表示没有绑定资源内网ip。
                     */
                    std::string m_privateAddressIp;
                    bool m_privateAddressIpHasBeenSet;

                    /**
                     * 资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态
                     */
                    bool m_isArrears;
                    bool m_isArrearsHasBeenSet;

                    /**
                     * 资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态
                     */
                    bool m_isBlocked;
                    bool m_isBlockedHasBeenSet;

                    /**
                     * eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式
                     */
                    bool m_isEipDirectConnection;
                    bool m_isEipDirectConnectionHasBeenSet;

                    /**
                     * EIP 资源类型，包括CalcIP、WanIP、EIP和AnycastEIP、高防EIP。其中：`CalcIP` 表示设备 IP，`WanIP` 表示普通公网 IP，`EIP` 表示弹性公网 IP，`AnycastEIP` 表示加速 EIP，`AntiDDoSEIP`表示高防EIP。
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放
                     */
                    bool m_cascadeRelease;
                    bool m_cascadeReleaseHasBeenSet;

                    /**
                     * EIP ALG开启的协议类型。
                     */
                    AlgType m_eipAlgType;
                    bool m_eipAlgTypeHasBeenSet;

                    /**
                     * 弹性公网IP的运营商信息，当前可能返回值包括"CMCC"(移动),"CTCC"(电信),"CUCC"(联通),"BGP"(常规BGP)。
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * 是否本地带宽EIP，可选值：
<li>true：本地带宽EIP</li>
<li>false：非本地带宽EIP</li>
                     */
                    bool m_localBgp;
                    bool m_localBgpHasBeenSet;

                    /**
                     * 弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
包括：
<li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li>
<p style="padding-left: 30px;">表示包月带宽预付费。</p>
<li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">表示按小时流量后付费。</p>
<li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li>
<p style="padding-left: 30px;">表示按小时带宽后付费。</p>
<li><strong>BANDWIDTH_PACKAGE</strong></li>
<p style="padding-left: 30px;">表示共享带宽包。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * 弹性公网IP关联的标签列表。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 预付费包月带宽IP到期时间。
时间格式：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadlineDate;
                    bool m_deadlineDateHasBeenSet;

                    /**
                     * EIP绑定的实例类型。可选值：
<li>CVM：云服务器</li>
<li>NAT：NAT 网关</li>
<li>HAVIP：高可用虚拟IP</li>
<li>ENI：弹性网卡</li>
<li>CLB：内网CLB</li>
<li>DHCPIP：弹性内网IP</li>


注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 静态单线IP网络出口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * 高防包ID,当EIP类型为高防EIP时，返回EIP绑定的高防包ID.
                     */
                    std::string m_antiDDoSPackageId;
                    bool m_antiDDoSPackageIdHasBeenSet;

                    /**
                     * 当前EIP是否自动续费，只有按月带宽预付费的EIP才会显示该字段，具体值示例如下:
<li>NOTIFY_AND_MANUAL_RENEW:正常续费</li><li>NOTIFY_AND_AUTO_RENEW:自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW:到期不续费 </li>

                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 当前公网IP所关联的带宽包ID，如果该公网IP未使用带宽包计费，则返回为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * 传统弹性公网IPv6所属vpc唯一ID
                     */
                    std::string m_unVpcId;
                    bool m_unVpcIdHasBeenSet;

                    /**
                     * CDC唯一ID
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESS_H_
