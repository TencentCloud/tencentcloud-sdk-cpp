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
                     * 获取<p><code>EIP</code>的<code>ID</code>，是<code>EIP</code>的唯一标识。</p>
                     * @return AddressId <p><code>EIP</code>的<code>ID</code>，是<code>EIP</code>的唯一标识。</p>
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置<p><code>EIP</code>的<code>ID</code>，是<code>EIP</code>的唯一标识。</p>
                     * @param _addressId <p><code>EIP</code>的<code>ID</code>，是<code>EIP</code>的唯一标识。</p>
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
                     * 获取<p><code>EIP</code>名称。</p>
                     * @return AddressName <p><code>EIP</code>名称。</p>
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置<p><code>EIP</code>名称。</p>
                     * @param _addressName <p><code>EIP</code>名称。</p>
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
                     * 获取<p><code>EIP</code>状态，包含&#39;CREATING&#39;(创建中),&#39;BINDING&#39;(绑定中),&#39;BIND&#39;(已绑定),&#39;UNBINDING&#39;(解绑中),&#39;UNBIND&#39;(已解绑),&#39;OFFLINING&#39;(释放中),&#39;BIND_ENI&#39;(绑定悬空弹性网卡)</p>
                     * @return AddressStatus <p><code>EIP</code>状态，包含&#39;CREATING&#39;(创建中),&#39;BINDING&#39;(绑定中),&#39;BIND&#39;(已绑定),&#39;UNBINDING&#39;(解绑中),&#39;UNBIND&#39;(已解绑),&#39;OFFLINING&#39;(释放中),&#39;BIND_ENI&#39;(绑定悬空弹性网卡)</p>
                     * 
                     */
                    std::string GetAddressStatus() const;

                    /**
                     * 设置<p><code>EIP</code>状态，包含&#39;CREATING&#39;(创建中),&#39;BINDING&#39;(绑定中),&#39;BIND&#39;(已绑定),&#39;UNBINDING&#39;(解绑中),&#39;UNBIND&#39;(已解绑),&#39;OFFLINING&#39;(释放中),&#39;BIND_ENI&#39;(绑定悬空弹性网卡)</p>
                     * @param _addressStatus <p><code>EIP</code>状态，包含&#39;CREATING&#39;(创建中),&#39;BINDING&#39;(绑定中),&#39;BIND&#39;(已绑定),&#39;UNBINDING&#39;(解绑中),&#39;UNBIND&#39;(已解绑),&#39;OFFLINING&#39;(释放中),&#39;BIND_ENI&#39;(绑定悬空弹性网卡)</p>
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
                     * 获取<p>外网IP地址</p>
                     * @return AddressIp <p>外网IP地址</p>
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置<p>外网IP地址</p>
                     * @param _addressIp <p>外网IP地址</p>
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
                     * 获取<p>绑定的资源实例<code>ID</code>。可能是一个<code>CVM</code>，<code>NAT</code>。</p>
                     * @return InstanceId <p>绑定的资源实例<code>ID</code>。可能是一个<code>CVM</code>，<code>NAT</code>。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>绑定的资源实例<code>ID</code>。可能是一个<code>CVM</code>，<code>NAT</code>。</p>
                     * @param _instanceId <p>绑定的资源实例<code>ID</code>。可能是一个<code>CVM</code>，<code>NAT</code>。</p>
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
                     * 获取<p>创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * @return CreatedTime <p>创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     * @param _createdTime <p>创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
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
                     * 获取<p>绑定的弹性网卡ID，null表示没有绑定弹性网卡。</p>
                     * @return NetworkInterfaceId <p>绑定的弹性网卡ID，null表示没有绑定弹性网卡。</p>
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置<p>绑定的弹性网卡ID，null表示没有绑定弹性网卡。</p>
                     * @param _networkInterfaceId <p>绑定的弹性网卡ID，null表示没有绑定弹性网卡。</p>
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
                     * 获取<p>绑定的资源内网ip，null表示没有绑定资源内网ip。</p>
                     * @return PrivateAddressIp <p>绑定的资源内网ip，null表示没有绑定资源内网ip。</p>
                     * 
                     */
                    std::string GetPrivateAddressIp() const;

                    /**
                     * 设置<p>绑定的资源内网ip，null表示没有绑定资源内网ip。</p>
                     * @param _privateAddressIp <p>绑定的资源内网ip，null表示没有绑定资源内网ip。</p>
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
                     * 获取<p>资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态</p>
                     * @return IsArrears <p>资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态</p>
                     * 
                     */
                    bool GetIsArrears() const;

                    /**
                     * 设置<p>资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态</p>
                     * @param _isArrears <p>资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态</p>
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
                     * 获取<p>资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态</p>
                     * @return IsBlocked <p>资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态</p>
                     * 
                     */
                    bool GetIsBlocked() const;

                    /**
                     * 设置<p>资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态</p>
                     * @param _isBlocked <p>资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态</p>
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
                     * 获取<p>eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式</p>
                     * @return IsEipDirectConnection <p>eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式</p>
                     * 
                     */
                    bool GetIsEipDirectConnection() const;

                    /**
                     * 设置<p>eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式</p>
                     * @param _isEipDirectConnection <p>eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式</p>
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
                     * 获取<p>EIP 资源类型，包括CalcIP、WanIP、EIP和AnycastEIP、高防EIP。其中：<code>CalcIP</code> 表示设备 IP，<code>WanIP</code> 表示普通公网 IP，<code>EIP</code> 表示弹性公网 IP，<code>AnycastEIP</code> 表示加速 EIP，<code>AntiDDoSEIP</code>表示高防EIP。</p>
                     * @return AddressType <p>EIP 资源类型，包括CalcIP、WanIP、EIP和AnycastEIP、高防EIP。其中：<code>CalcIP</code> 表示设备 IP，<code>WanIP</code> 表示普通公网 IP，<code>EIP</code> 表示弹性公网 IP，<code>AnycastEIP</code> 表示加速 EIP，<code>AntiDDoSEIP</code>表示高防EIP。</p>
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置<p>EIP 资源类型，包括CalcIP、WanIP、EIP和AnycastEIP、高防EIP。其中：<code>CalcIP</code> 表示设备 IP，<code>WanIP</code> 表示普通公网 IP，<code>EIP</code> 表示弹性公网 IP，<code>AnycastEIP</code> 表示加速 EIP，<code>AntiDDoSEIP</code>表示高防EIP。</p>
                     * @param _addressType <p>EIP 资源类型，包括CalcIP、WanIP、EIP和AnycastEIP、高防EIP。其中：<code>CalcIP</code> 表示设备 IP，<code>WanIP</code> 表示普通公网 IP，<code>EIP</code> 表示弹性公网 IP，<code>AnycastEIP</code> 表示加速 EIP，<code>AntiDDoSEIP</code>表示高防EIP。</p>
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
                     * 获取<p>eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放</p>
                     * @return CascadeRelease <p>eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放</p>
                     * 
                     */
                    bool GetCascadeRelease() const;

                    /**
                     * 设置<p>eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放</p>
                     * @param _cascadeRelease <p>eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放</p>
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
                     * 获取<p>EIP ALG开启的协议类型。</p>
                     * @return EipAlgType <p>EIP ALG开启的协议类型。</p>
                     * 
                     */
                    AlgType GetEipAlgType() const;

                    /**
                     * 设置<p>EIP ALG开启的协议类型。</p>
                     * @param _eipAlgType <p>EIP ALG开启的协议类型。</p>
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
                     * 获取<p>弹性公网IP的运营商信息，当前可能返回值包括&quot;CMCC&quot;(移动),&quot;CTCC&quot;(电信),&quot;CUCC&quot;(联通),&quot;BGP&quot;(常规BGP)。</p>
                     * @return InternetServiceProvider <p>弹性公网IP的运营商信息，当前可能返回值包括&quot;CMCC&quot;(移动),&quot;CTCC&quot;(电信),&quot;CUCC&quot;(联通),&quot;BGP&quot;(常规BGP)。</p>
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置<p>弹性公网IP的运营商信息，当前可能返回值包括&quot;CMCC&quot;(移动),&quot;CTCC&quot;(电信),&quot;CUCC&quot;(联通),&quot;BGP&quot;(常规BGP)。</p>
                     * @param _internetServiceProvider <p>弹性公网IP的运营商信息，当前可能返回值包括&quot;CMCC&quot;(移动),&quot;CTCC&quot;(电信),&quot;CUCC&quot;(联通),&quot;BGP&quot;(常规BGP)。</p>
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
                     * 获取<p>是否本地带宽EIP，可选值：</p><li>true：本地带宽EIP</li><li>false：非本地带宽EIP</li>
                     * @return LocalBgp <p>是否本地带宽EIP，可选值：</p><li>true：本地带宽EIP</li><li>false：非本地带宽EIP</li>
                     * 
                     */
                    bool GetLocalBgp() const;

                    /**
                     * 设置<p>是否本地带宽EIP，可选值：</p><li>true：本地带宽EIP</li><li>false：非本地带宽EIP</li>
                     * @param _localBgp <p>是否本地带宽EIP，可选值：</p><li>true：本地带宽EIP</li><li>false：非本地带宽EIP</li>
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
                     * 获取<p>弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bandwidth <p>弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidth <p>弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。</p>
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
                     * 获取<p>弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。<br>注意：此字段可能返回 null，表示取不到有效值。<br>包括：</p><li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li><p style="padding-left: 30px;">表示包月带宽预付费。</p><li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li><p style="padding-left: 30px;">表示按小时流量后付费。</p><li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li><p style="padding-left: 30px;">表示按小时带宽后付费。</p><li><strong>BANDWIDTH_PACKAGE</strong></li><p style="padding-left: 30px;">表示共享带宽包。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetChargeType <p>弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。<br>注意：此字段可能返回 null，表示取不到有效值。<br>包括：</p><li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li><p style="padding-left: 30px;">表示包月带宽预付费。</p><li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li><p style="padding-left: 30px;">表示按小时流量后付费。</p><li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li><p style="padding-left: 30px;">表示按小时带宽后付费。</p><li><strong>BANDWIDTH_PACKAGE</strong></li><p style="padding-left: 30px;">表示共享带宽包。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置<p>弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。<br>注意：此字段可能返回 null，表示取不到有效值。<br>包括：</p><li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li><p style="padding-left: 30px;">表示包月带宽预付费。</p><li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li><p style="padding-left: 30px;">表示按小时流量后付费。</p><li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li><p style="padding-left: 30px;">表示按小时带宽后付费。</p><li><strong>BANDWIDTH_PACKAGE</strong></li><p style="padding-left: 30px;">表示共享带宽包。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetChargeType <p>弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。<br>注意：此字段可能返回 null，表示取不到有效值。<br>包括：</p><li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li><p style="padding-left: 30px;">表示包月带宽预付费。</p><li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li><p style="padding-left: 30px;">表示按小时流量后付费。</p><li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li><p style="padding-left: 30px;">表示按小时带宽后付费。</p><li><strong>BANDWIDTH_PACKAGE</strong></li><p style="padding-left: 30px;">表示共享带宽包。</p>
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
                     * 获取<p>弹性公网IP关联的标签列表。</p>
                     * @return TagSet <p>弹性公网IP关联的标签列表。</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>弹性公网IP关联的标签列表。</p>
                     * @param _tagSet <p>弹性公网IP关联的标签列表。</p>
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
                     * 获取<p>预付费包月带宽IP到期时间。<br>时间格式：YYYY-MM-DDThh:mm:ssZ</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadlineDate <p>预付费包月带宽IP到期时间。<br>时间格式：YYYY-MM-DDThh:mm:ssZ</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadlineDate() const;

                    /**
                     * 设置<p>预付费包月带宽IP到期时间。<br>时间格式：YYYY-MM-DDThh:mm:ssZ</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadlineDate <p>预付费包月带宽IP到期时间。<br>时间格式：YYYY-MM-DDThh:mm:ssZ</p>
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
                     * 获取<p>EIP绑定的实例类型。可选值：</p><li>CVM：云服务器</li><li>NAT：NAT 网关</li><li>HAVIP：高可用虚拟IP</li><li>ENI：弹性网卡</li><li>CLB：内网CLB</li><li>DHCPIP：弹性内网IP</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType <p>EIP绑定的实例类型。可选值：</p><li>CVM：云服务器</li><li>NAT：NAT 网关</li><li>HAVIP：高可用虚拟IP</li><li>ENI：弹性网卡</li><li>CLB：内网CLB</li><li>DHCPIP：弹性内网IP</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>EIP绑定的实例类型。可选值：</p><li>CVM：云服务器</li><li>NAT：NAT 网关</li><li>HAVIP：高可用虚拟IP</li><li>ENI：弹性网卡</li><li>CLB：内网CLB</li><li>DHCPIP：弹性内网IP</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType <p>EIP绑定的实例类型。可选值：</p><li>CVM：云服务器</li><li>NAT：NAT 网关</li><li>HAVIP：高可用虚拟IP</li><li>ENI：弹性网卡</li><li>CLB：内网CLB</li><li>DHCPIP：弹性内网IP</li>
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
                     * 获取<p>静态单线IP网络出口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Egress <p>静态单线IP网络出口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置<p>静态单线IP网络出口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _egress <p>静态单线IP网络出口</p>
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
                     * 获取<p>高防包ID,当EIP类型为高防EIP时，返回EIP绑定的高防包ID.</p>
                     * @return AntiDDoSPackageId <p>高防包ID,当EIP类型为高防EIP时，返回EIP绑定的高防包ID.</p>
                     * 
                     */
                    std::string GetAntiDDoSPackageId() const;

                    /**
                     * 设置<p>高防包ID,当EIP类型为高防EIP时，返回EIP绑定的高防包ID.</p>
                     * @param _antiDDoSPackageId <p>高防包ID,当EIP类型为高防EIP时，返回EIP绑定的高防包ID.</p>
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
                     * 获取<p>当前EIP是否自动续费，只有按月带宽预付费的EIP才会显示该字段，具体值示例如下:</p><li>NOTIFY_AND_MANUAL_RENEW:正常续费</li><li>NOTIFY_AND_AUTO_RENEW:自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW:到期不续费 </li>
                     * @return RenewFlag <p>当前EIP是否自动续费，只有按月带宽预付费的EIP才会显示该字段，具体值示例如下:</p><li>NOTIFY_AND_MANUAL_RENEW:正常续费</li><li>NOTIFY_AND_AUTO_RENEW:自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW:到期不续费 </li>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>当前EIP是否自动续费，只有按月带宽预付费的EIP才会显示该字段，具体值示例如下:</p><li>NOTIFY_AND_MANUAL_RENEW:正常续费</li><li>NOTIFY_AND_AUTO_RENEW:自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW:到期不续费 </li>
                     * @param _renewFlag <p>当前EIP是否自动续费，只有按月带宽预付费的EIP才会显示该字段，具体值示例如下:</p><li>NOTIFY_AND_MANUAL_RENEW:正常续费</li><li>NOTIFY_AND_AUTO_RENEW:自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW:到期不续费 </li>
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
                     * 获取<p>当前公网IP所关联的带宽包ID，如果该公网IP未使用带宽包计费，则返回为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthPackageId <p>当前公网IP所关联的带宽包ID，如果该公网IP未使用带宽包计费，则返回为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置<p>当前公网IP所关联的带宽包ID，如果该公网IP未使用带宽包计费，则返回为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidthPackageId <p>当前公网IP所关联的带宽包ID，如果该公网IP未使用带宽包计费，则返回为空</p>
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
                     * 获取<p>传统弹性公网IPv6所属vpc唯一ID</p>
                     * @return UnVpcId <p>传统弹性公网IPv6所属vpc唯一ID</p>
                     * 
                     */
                    std::string GetUnVpcId() const;

                    /**
                     * 设置<p>传统弹性公网IPv6所属vpc唯一ID</p>
                     * @param _unVpcId <p>传统弹性公网IPv6所属vpc唯一ID</p>
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
                     * 获取<p>CDC唯一ID</p>
                     * @return DedicatedClusterId <p>CDC唯一ID</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>CDC唯一ID</p>
                     * @param _dedicatedClusterId <p>CDC唯一ID</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>eip是否在网卡上可见。true表示支持，false表示不支持</p>
                     * @return EipVisibleOnEni <p>eip是否在网卡上可见。true表示支持，false表示不支持</p>
                     * 
                     */
                    bool GetEipVisibleOnEni() const;

                    /**
                     * 设置<p>eip是否在网卡上可见。true表示支持，false表示不支持</p>
                     * @param _eipVisibleOnEni <p>eip是否在网卡上可见。true表示支持，false表示不支持</p>
                     * 
                     */
                    void SetEipVisibleOnEni(const bool& _eipVisibleOnEni);

                    /**
                     * 判断参数 EipVisibleOnEni 是否已赋值
                     * @return EipVisibleOnEni 是否已赋值
                     * 
                     */
                    bool EipVisibleOnEniHasBeenSet() const;

                private:

                    /**
                     * <p><code>EIP</code>的<code>ID</code>，是<code>EIP</code>的唯一标识。</p>
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * <p><code>EIP</code>名称。</p>
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * <p><code>EIP</code>状态，包含&#39;CREATING&#39;(创建中),&#39;BINDING&#39;(绑定中),&#39;BIND&#39;(已绑定),&#39;UNBINDING&#39;(解绑中),&#39;UNBIND&#39;(已解绑),&#39;OFFLINING&#39;(释放中),&#39;BIND_ENI&#39;(绑定悬空弹性网卡)</p>
                     */
                    std::string m_addressStatus;
                    bool m_addressStatusHasBeenSet;

                    /**
                     * <p>外网IP地址</p>
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * <p>绑定的资源实例<code>ID</code>。可能是一个<code>CVM</code>，<code>NAT</code>。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>创建时间。按照<code>ISO8601</code>标准表示，并且使用<code>UTC</code>时间。格式为：<code>YYYY-MM-DDThh:mm:ssZ</code>。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>绑定的弹性网卡ID，null表示没有绑定弹性网卡。</p>
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * <p>绑定的资源内网ip，null表示没有绑定资源内网ip。</p>
                     */
                    std::string m_privateAddressIp;
                    bool m_privateAddressIpHasBeenSet;

                    /**
                     * <p>资源隔离状态。true表示eip处于隔离状态，false表示资源处于未隔离状态</p>
                     */
                    bool m_isArrears;
                    bool m_isArrearsHasBeenSet;

                    /**
                     * <p>资源封堵状态。true表示eip处于封堵状态，false表示eip处于未封堵状态</p>
                     */
                    bool m_isBlocked;
                    bool m_isBlockedHasBeenSet;

                    /**
                     * <p>eip是否支持直通模式。true表示eip支持直通模式，false表示资源不支持直通模式</p>
                     */
                    bool m_isEipDirectConnection;
                    bool m_isEipDirectConnectionHasBeenSet;

                    /**
                     * <p>EIP 资源类型，包括CalcIP、WanIP、EIP和AnycastEIP、高防EIP。其中：<code>CalcIP</code> 表示设备 IP，<code>WanIP</code> 表示普通公网 IP，<code>EIP</code> 表示弹性公网 IP，<code>AnycastEIP</code> 表示加速 EIP，<code>AntiDDoSEIP</code>表示高防EIP。</p>
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * <p>eip是否在解绑后自动释放。true表示eip将会在解绑后自动释放，false表示eip在解绑后不会自动释放</p>
                     */
                    bool m_cascadeRelease;
                    bool m_cascadeReleaseHasBeenSet;

                    /**
                     * <p>EIP ALG开启的协议类型。</p>
                     */
                    AlgType m_eipAlgType;
                    bool m_eipAlgTypeHasBeenSet;

                    /**
                     * <p>弹性公网IP的运营商信息，当前可能返回值包括&quot;CMCC&quot;(移动),&quot;CTCC&quot;(电信),&quot;CUCC&quot;(联通),&quot;BGP&quot;(常规BGP)。</p>
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * <p>是否本地带宽EIP，可选值：</p><li>true：本地带宽EIP</li><li>false：非本地带宽EIP</li>
                     */
                    bool m_localBgp;
                    bool m_localBgpHasBeenSet;

                    /**
                     * <p>弹性公网IP的带宽值。注意，传统账户类型账户的弹性公网IP没有带宽属性，值为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>弹性公网IP的网络计费模式。注意，传统账户类型账户的弹性公网IP没有网络计费模式属性，值为空。<br>注意：此字段可能返回 null，表示取不到有效值。<br>包括：</p><li><strong>BANDWIDTH_PREPAID_BY_MONTH</strong></li><p style="padding-left: 30px;">表示包月带宽预付费。</p><li><strong>TRAFFIC_POSTPAID_BY_HOUR</strong></li><p style="padding-left: 30px;">表示按小时流量后付费。</p><li><strong>BANDWIDTH_POSTPAID_BY_HOUR</strong></li><p style="padding-left: 30px;">表示按小时带宽后付费。</p><li><strong>BANDWIDTH_PACKAGE</strong></li><p style="padding-left: 30px;">表示共享带宽包。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * <p>弹性公网IP关联的标签列表。</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>预付费包月带宽IP到期时间。<br>时间格式：YYYY-MM-DDThh:mm:ssZ</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadlineDate;
                    bool m_deadlineDateHasBeenSet;

                    /**
                     * <p>EIP绑定的实例类型。可选值：</p><li>CVM：云服务器</li><li>NAT：NAT 网关</li><li>HAVIP：高可用虚拟IP</li><li>ENI：弹性网卡</li><li>CLB：内网CLB</li><li>DHCPIP：弹性内网IP</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>静态单线IP网络出口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * <p>高防包ID,当EIP类型为高防EIP时，返回EIP绑定的高防包ID.</p>
                     */
                    std::string m_antiDDoSPackageId;
                    bool m_antiDDoSPackageIdHasBeenSet;

                    /**
                     * <p>当前EIP是否自动续费，只有按月带宽预付费的EIP才会显示该字段，具体值示例如下:</p><li>NOTIFY_AND_MANUAL_RENEW:正常续费</li><li>NOTIFY_AND_AUTO_RENEW:自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW:到期不续费 </li>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>当前公网IP所关联的带宽包ID，如果该公网IP未使用带宽包计费，则返回为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * <p>传统弹性公网IPv6所属vpc唯一ID</p>
                     */
                    std::string m_unVpcId;
                    bool m_unVpcIdHasBeenSet;

                    /**
                     * <p>CDC唯一ID</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>eip是否在网卡上可见。true表示支持，false表示不支持</p>
                     */
                    bool m_eipVisibleOnEni;
                    bool m_eipVisibleOnEniHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESS_H_
