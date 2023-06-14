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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESS_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取EIP的ID，是EIP的唯一标识。
                     * @return AddressId EIP的ID，是EIP的唯一标识。
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置EIP的ID，是EIP的唯一标识。
                     * @param _addressId EIP的ID，是EIP的唯一标识。
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
                     * 获取EIP名称。
                     * @return AddressName EIP名称。
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置EIP名称。
                     * @param _addressName EIP名称。
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
                     * 获取EIP状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     * @return AddressStatus EIP状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     * 
                     */
                    std::string GetAddressStatus() const;

                    /**
                     * 设置EIP状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     * @param _addressStatus EIP状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
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
                     * 获取绑定的资源实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 绑定的资源实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置绑定的资源实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 绑定的资源实例ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间。ISO 8601 格式：YYYY-MM-DDTHH:mm:ss.sssZ
                     * @return CreatedTime 创建时间。ISO 8601 格式：YYYY-MM-DDTHH:mm:ss.sssZ
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。ISO 8601 格式：YYYY-MM-DDTHH:mm:ss.sssZ
                     * @param _createdTime 创建时间。ISO 8601 格式：YYYY-MM-DDTHH:mm:ss.sssZ
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
                     * 获取绑定的弹性网卡ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkInterfaceId 绑定的弹性网卡ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置绑定的弹性网卡ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkInterfaceId 绑定的弹性网卡ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取绑定的资源内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateAddressIp 绑定的资源内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateAddressIp() const;

                    /**
                     * 设置绑定的资源内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateAddressIp 绑定的资源内网ip
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取eip资源类型，包括"CalcIP","WanIP","EIP","AnycastEIP"。其中"CalcIP"表示设备ip，“WanIP”表示普通公网ip，“EIP”表示弹性公网ip，“AnycastEip”表示加速EIP
                     * @return AddressType eip资源类型，包括"CalcIP","WanIP","EIP","AnycastEIP"。其中"CalcIP"表示设备ip，“WanIP”表示普通公网ip，“EIP”表示弹性公网ip，“AnycastEip”表示加速EIP
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置eip资源类型，包括"CalcIP","WanIP","EIP","AnycastEIP"。其中"CalcIP"表示设备ip，“WanIP”表示普通公网ip，“EIP”表示弹性公网ip，“AnycastEip”表示加速EIP
                     * @param _addressType eip资源类型，包括"CalcIP","WanIP","EIP","AnycastEIP"。其中"CalcIP"表示设备ip，“WanIP”表示普通公网ip，“EIP”表示弹性公网ip，“AnycastEip”表示加速EIP
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
                     * 获取运营商，CTCC电信，CUCC联通，CMCC移动
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetServiceProvider 运营商，CTCC电信，CUCC联通，CMCC移动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置运营商，CTCC电信，CUCC联通，CMCC移动
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetServiceProvider 运营商，CTCC电信，CUCC联通，CMCC移动
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取带宽上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bandwidth 带宽上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置带宽上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidth 带宽上限
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
                     * 获取计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * EIP的ID，是EIP的唯一标识。
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * EIP名称。
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * EIP状态，包含'CREATING'(创建中),'BINDING'(绑定中),'BIND'(已绑定),'UNBINDING'(解绑中),'UNBIND'(已解绑),'OFFLINING'(释放中),'BIND_ENI'(绑定悬空弹性网卡)
                     */
                    std::string m_addressStatus;
                    bool m_addressStatusHasBeenSet;

                    /**
                     * 外网IP地址
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * 绑定的资源实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 创建时间。ISO 8601 格式：YYYY-MM-DDTHH:mm:ss.sssZ
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 绑定的弹性网卡ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 绑定的资源内网ip
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 运营商，CTCC电信，CUCC联通，CMCC移动
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * 带宽上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESS_H_
