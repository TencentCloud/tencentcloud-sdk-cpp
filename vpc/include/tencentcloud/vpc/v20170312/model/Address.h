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
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置`EIP`的`ID`，是`EIP`的唯一标识。
                     * @param AddressId `EIP`的`ID`，是`EIP`的唯一标识。
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取`EIP`名称。
                     * @return AddressName `EIP`名称。
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置`EIP`名称。
                     * @param AddressName `EIP`名称。
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取`EIP`状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     * @return AddressStatus `EIP`状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     */
                    std::string GetAddressStatus() const;

                    /**
                     * 设置`EIP`状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     * @param AddressStatus `EIP`状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     */
                    void SetAddressStatus(const std::string& _addressStatus);

                    /**
                     * 判断参数 AddressStatus 是否已赋值
                     * @return AddressStatus 是否已赋值
                     */
                    bool AddressStatusHasBeenSet() const;

                    /**
                     * 获取外网IP地址
                     * @return AddressIp 外网IP地址
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置外网IP地址
                     * @param AddressIp 外网IP地址
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     */
                    bool AddressIpHasBeenSet() const;

                    /**
                     * 获取绑定的资源实例`ID`。可能是一个`CVM`，`NAT`。
                     * @return InstanceId 绑定的资源实例`ID`。可能是一个`CVM`，`NAT`。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置绑定的资源实例`ID`。可能是一个`CVM`，`NAT`。
                     * @param InstanceId 绑定的资源实例`ID`。可能是一个`CVM`，`NAT`。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @return CreatedTime 创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @param CreatedTime 创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取绑定的弹性网卡ID
                     * @return NetworkInterfaceId 绑定的弹性网卡ID
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置绑定的弹性网卡ID
                     * @param NetworkInterfaceId 绑定的弹性网卡ID
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取绑定的资源内网ip
                     * @return PrivateAddressIp 绑定的资源内网ip
                     */
                    std::string GetPrivateAddressIp() const;

                    /**
                     * 设置绑定的资源内网ip
                     * @param PrivateAddressIp 绑定的资源内网ip
                     */
                    void SetPrivateAddressIp(const std::string& _privateAddressIp);

                    /**
                     * 判断参数 PrivateAddressIp 是否已赋值
                     * @return PrivateAddressIp 是否已赋值
                     */
                    bool PrivateAddressIpHasBeenSet() const;

                    /**
                     * 获取资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态
                     * @return IsArrears 资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态
                     */
                    bool GetIsArrears() const;

                    /**
                     * 设置资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态
                     * @param IsArrears 资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态
                     */
                    void SetIsArrears(const bool& _isArrears);

                    /**
                     * 判断参数 IsArrears 是否已赋值
                     * @return IsArrears 是否已赋值
                     */
                    bool IsArrearsHasBeenSet() const;

                    /**
                     * 获取资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态
                     * @return IsBlocked 资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态
                     */
                    bool GetIsBlocked() const;

                    /**
                     * 设置资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态
                     * @param IsBlocked 资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态
                     */
                    void SetIsBlocked(const bool& _isBlocked);

                    /**
                     * 判断参数 IsBlocked 是否已赋值
                     * @return IsBlocked 是否已赋值
                     */
                    bool IsBlockedHasBeenSet() const;

                    /**
                     * 获取eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式
                     * @return IsEipDirectConnection eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式
                     */
                    bool GetIsEipDirectConnection() const;

                    /**
                     * 设置eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式
                     * @param IsEipDirectConnection eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式
                     */
                    void SetIsEipDirectConnection(const bool& _isEipDirectConnection);

                    /**
                     * 判断参数 IsEipDirectConnection 是否已赋值
                     * @return IsEipDirectConnection 是否已赋值
                     */
                    bool IsEipDirectConnectionHasBeenSet() const;

                    /**
                     * 获取eip资源类型，包括"CalcIP","WanIP","EIP","AnycastEIP"。其中"CalcIP"表示设备ip，“WanIP”表示普通公网ip，“EIP”表示弹性公网ip，“AnycastEip”表示加速EIP
                     * @return AddressType eip资源类型，包括"CalcIP","WanIP","EIP","AnycastEIP"。其中"CalcIP"表示设备ip，“WanIP”表示普通公网ip，“EIP”表示弹性公网ip，“AnycastEip”表示加速EIP
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置eip资源类型，包括"CalcIP","WanIP","EIP","AnycastEIP"。其中"CalcIP"表示设备ip，“WanIP”表示普通公网ip，“EIP”表示弹性公网ip，“AnycastEip”表示加速EIP
                     * @param AddressType eip资源类型，包括"CalcIP","WanIP","EIP","AnycastEIP"。其中"CalcIP"表示设备ip，“WanIP”表示普通公网ip，“EIP”表示弹性公网ip，“AnycastEip”表示加速EIP
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放
                     * @return CascadeRelease eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放
                     */
                    bool GetCascadeRelease() const;

                    /**
                     * 设置eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放
                     * @param CascadeRelease eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放
                     */
                    void SetCascadeRelease(const bool& _cascadeRelease);

                    /**
                     * 判断参数 CascadeRelease 是否已赋值
                     * @return CascadeRelease 是否已赋值
                     */
                    bool CascadeReleaseHasBeenSet() const;

                    /**
                     * 获取EIP ALG开启的协议类型。
                     * @return EipAlgType EIP ALG开启的协议类型。
                     */
                    AlgType GetEipAlgType() const;

                    /**
                     * 设置EIP ALG开启的协议类型。
                     * @param EipAlgType EIP ALG开启的协议类型。
                     */
                    void SetEipAlgType(const AlgType& _eipAlgType);

                    /**
                     * 判断参数 EipAlgType 是否已赋值
                     * @return EipAlgType 是否已赋值
                     */
                    bool EipAlgTypeHasBeenSet() const;

                    /**
                     * 获取弹性公网IP的运营商信息，当前可能返回值包括"CMCC","CTCC","CUCC","BGP"
                     * @return InternetServiceProvider 弹性公网IP的运营商信息，当前可能返回值包括"CMCC","CTCC","CUCC","BGP"
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置弹性公网IP的运营商信息，当前可能返回值包括"CMCC","CTCC","CUCC","BGP"
                     * @param InternetServiceProvider 弹性公网IP的运营商信息，当前可能返回值包括"CMCC","CTCC","CUCC","BGP"
                     */
                    void SetInternetServiceProvider(const std::string& _internetServiceProvider);

                    /**
                     * 判断参数 InternetServiceProvider 是否已赋值
                     * @return InternetServiceProvider 是否已赋值
                     */
                    bool InternetServiceProviderHasBeenSet() const;

                    /**
                     * 获取是否本地带宽EIP
                     * @return LocalBgp 是否本地带宽EIP
                     */
                    bool GetLocalBgp() const;

                    /**
                     * 设置是否本地带宽EIP
                     * @param LocalBgp 是否本地带宽EIP
                     */
                    void SetLocalBgp(const bool& _localBgp);

                    /**
                     * 判断参数 LocalBgp 是否已赋值
                     * @return LocalBgp 是否已赋值
                     */
                    bool LocalBgpHasBeenSet() const;

                    /**
                     * 获取弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bandwidth 弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Bandwidth 弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetChargeType 弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InternetChargeType 弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     */
                    bool InternetChargeTypeHasBeenSet() const;

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
                     * 绑定的弹性网卡ID
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 绑定的资源内网ip
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
                     * eip资源类型，包括"CalcIP","WanIP","EIP","AnycastEIP"。其中"CalcIP"表示设备ip，“WanIP”表示普通公网ip，“EIP”表示弹性公网ip，“AnycastEip”表示加速EIP
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
                     * 弹性公网IP的运营商信息，当前可能返回值包括"CMCC","CTCC","CUCC","BGP"
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * 是否本地带宽EIP
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
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESS_H_
