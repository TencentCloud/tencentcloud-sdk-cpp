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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKINTERFACE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKINTERFACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/PrivateIpAddressSpecification.h>
#include <tencentcloud/vpc/v20170312/model/NetworkInterfaceAttachment.h>
#include <tencentcloud/vpc/v20170312/model/Ipv6Address.h>
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
                * 弹性网卡
                */
                class NetworkInterface : public AbstractModel
                {
                public:
                    NetworkInterface();
                    ~NetworkInterface() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取弹性网卡实例ID，例如：eni-f1xjkw1b。
                     * @return NetworkInterfaceId 弹性网卡实例ID，例如：eni-f1xjkw1b。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置弹性网卡实例ID，例如：eni-f1xjkw1b。
                     * @param _networkInterfaceId 弹性网卡实例ID，例如：eni-f1xjkw1b。
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
                     * 获取弹性网卡名称。
                     * @return NetworkInterfaceName 弹性网卡名称。
                     * 
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置弹性网卡名称。
                     * @param _networkInterfaceName 弹性网卡名称。
                     * 
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取弹性网卡描述。
                     * @return NetworkInterfaceDescription 弹性网卡描述。
                     * 
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置弹性网卡描述。
                     * @param _networkInterfaceDescription 弹性网卡描述。
                     * 
                     */
                    void SetNetworkInterfaceDescription(const std::string& _networkInterfaceDescription);

                    /**
                     * 判断参数 NetworkInterfaceDescription 是否已赋值
                     * @return NetworkInterfaceDescription 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceDescriptionHasBeenSet() const;

                    /**
                     * 获取子网实例ID。
                     * @return SubnetId 子网实例ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID。
                     * @param _subnetId 子网实例ID。
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
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
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
                     * 获取绑定的安全组。
                     * @return GroupSet 绑定的安全组。
                     * 
                     */
                    std::vector<std::string> GetGroupSet() const;

                    /**
                     * 设置绑定的安全组。
                     * @param _groupSet 绑定的安全组。
                     * 
                     */
                    void SetGroupSet(const std::vector<std::string>& _groupSet);

                    /**
                     * 判断参数 GroupSet 是否已赋值
                     * @return GroupSet 是否已赋值
                     * 
                     */
                    bool GroupSetHasBeenSet() const;

                    /**
                     * 获取是否是主网卡。
                     * @return Primary 是否是主网卡。
                     * 
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置是否是主网卡。
                     * @param _primary 是否是主网卡。
                     * 
                     */
                    void SetPrimary(const bool& _primary);

                    /**
                     * 判断参数 Primary 是否已赋值
                     * @return Primary 是否已赋值
                     * 
                     */
                    bool PrimaryHasBeenSet() const;

                    /**
                     * 获取MAC地址。
                     * @return MacAddress MAC地址。
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置MAC地址。
                     * @param _macAddress MAC地址。
                     * 
                     */
                    void SetMacAddress(const std::string& _macAddress);

                    /**
                     * 判断参数 MacAddress 是否已赋值
                     * @return MacAddress 是否已赋值
                     * 
                     */
                    bool MacAddressHasBeenSet() const;

                    /**
                     * 获取弹性网卡状态：
<li>`PENDING`：创建中</li>
<li>`AVAILABLE`：可用的</li>
<li>`ATTACHING`：绑定中</li>
<li>`DETACHING`：解绑中</li>
<li>`DELETING`：删除中</li>
                     * @return State 弹性网卡状态：
<li>`PENDING`：创建中</li>
<li>`AVAILABLE`：可用的</li>
<li>`ATTACHING`：绑定中</li>
<li>`DETACHING`：解绑中</li>
<li>`DELETING`：删除中</li>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置弹性网卡状态：
<li>`PENDING`：创建中</li>
<li>`AVAILABLE`：可用的</li>
<li>`ATTACHING`：绑定中</li>
<li>`DETACHING`：解绑中</li>
<li>`DELETING`：删除中</li>
                     * @param _state 弹性网卡状态：
<li>`PENDING`：创建中</li>
<li>`AVAILABLE`：可用的</li>
<li>`ATTACHING`：绑定中</li>
<li>`DETACHING`：解绑中</li>
<li>`DELETING`：删除中</li>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取弹性网卡状态：
<li>`PENDING`：创建中</li>
<li>`AVAILABLE`：可用的</li>
<li>`ATTACHING`：绑定中</li>
<li>`DETACHING`：解绑中</li>
<li>`DELETING`：删除中</li>
<li>`INUSE`：已绑定</li>
                     * @return NetworkInterfaceState 弹性网卡状态：
<li>`PENDING`：创建中</li>
<li>`AVAILABLE`：可用的</li>
<li>`ATTACHING`：绑定中</li>
<li>`DETACHING`：解绑中</li>
<li>`DELETING`：删除中</li>
<li>`INUSE`：已绑定</li>
                     * 
                     */
                    std::string GetNetworkInterfaceState() const;

                    /**
                     * 设置弹性网卡状态：
<li>`PENDING`：创建中</li>
<li>`AVAILABLE`：可用的</li>
<li>`ATTACHING`：绑定中</li>
<li>`DETACHING`：解绑中</li>
<li>`DELETING`：删除中</li>
<li>`INUSE`：已绑定</li>
                     * @param _networkInterfaceState 弹性网卡状态：
<li>`PENDING`：创建中</li>
<li>`AVAILABLE`：可用的</li>
<li>`ATTACHING`：绑定中</li>
<li>`DETACHING`：解绑中</li>
<li>`DELETING`：删除中</li>
<li>`INUSE`：已绑定</li>
                     * 
                     */
                    void SetNetworkInterfaceState(const std::string& _networkInterfaceState);

                    /**
                     * 判断参数 NetworkInterfaceState 是否已赋值
                     * @return NetworkInterfaceState 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceStateHasBeenSet() const;

                    /**
                     * 获取内网IP信息。
                     * @return PrivateIpAddressSet 内网IP信息。
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddressSet() const;

                    /**
                     * 设置内网IP信息。
                     * @param _privateIpAddressSet 内网IP信息。
                     * 
                     */
                    void SetPrivateIpAddressSet(const std::vector<PrivateIpAddressSpecification>& _privateIpAddressSet);

                    /**
                     * 判断参数 PrivateIpAddressSet 是否已赋值
                     * @return PrivateIpAddressSet 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressSetHasBeenSet() const;

                    /**
                     * 获取绑定的云服务器对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attachment 绑定的云服务器对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NetworkInterfaceAttachment GetAttachment() const;

                    /**
                     * 设置绑定的云服务器对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachment 绑定的云服务器对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachment(const NetworkInterfaceAttachment& _attachment);

                    /**
                     * 判断参数 Attachment 是否已赋值
                     * @return Attachment 是否已赋值
                     * 
                     */
                    bool AttachmentHasBeenSet() const;

                    /**
                     * 获取可用区。
                     * @return Zone 可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
                     * @param _zone 可用区。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取创建时间。格式：YYYY-MM-DD hh:mm:ss。示例值：2020-10-28 08:23:59
                     * @return CreatedTime 创建时间。格式：YYYY-MM-DD hh:mm:ss。示例值：2020-10-28 08:23:59
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。格式：YYYY-MM-DD hh:mm:ss。示例值：2020-10-28 08:23:59
                     * @param _createdTime 创建时间。格式：YYYY-MM-DD hh:mm:ss。示例值：2020-10-28 08:23:59
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
                     * 获取`IPv6`地址列表。
                     * @return Ipv6AddressSet `IPv6`地址列表。
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6AddressSet() const;

                    /**
                     * 设置`IPv6`地址列表。
                     * @param _ipv6AddressSet `IPv6`地址列表。
                     * 
                     */
                    void SetIpv6AddressSet(const std::vector<Ipv6Address>& _ipv6AddressSet);

                    /**
                     * 判断参数 Ipv6AddressSet 是否已赋值
                     * @return Ipv6AddressSet 是否已赋值
                     * 
                     */
                    bool Ipv6AddressSetHasBeenSet() const;

                    /**
                     * 获取标签键值对。
                     * @return TagSet 标签键值对。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。
                     * @param _tagSet 标签键值对。
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
                     * 获取网卡类型。“0”-辅助网卡，“1”-主网卡，“2”：中继网卡
                     * @return EniType 网卡类型。“0”-辅助网卡，“1”-主网卡，“2”：中继网卡
                     * 
                     */
                    uint64_t GetEniType() const;

                    /**
                     * 设置网卡类型。“0”-辅助网卡，“1”-主网卡，“2”：中继网卡
                     * @param _eniType 网卡类型。“0”-辅助网卡，“1”-主网卡，“2”：中继网卡
                     * 
                     */
                    void SetEniType(const uint64_t& _eniType);

                    /**
                     * 判断参数 EniType 是否已赋值
                     * @return EniType 是否已赋值
                     * 
                     */
                    bool EniTypeHasBeenSet() const;

                    /**
                     * 获取网卡绑定的子机类型：cvm（普通CVM子机），eks（弹性容器服务Elastic Kubernetes Service）， hai（高性能应用服务Hyper Application Inventor）。
                     * @return Business 网卡绑定的子机类型：cvm（普通CVM子机），eks（弹性容器服务Elastic Kubernetes Service）， hai（高性能应用服务Hyper Application Inventor）。
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置网卡绑定的子机类型：cvm（普通CVM子机），eks（弹性容器服务Elastic Kubernetes Service）， hai（高性能应用服务Hyper Application Inventor）。
                     * @param _business 网卡绑定的子机类型：cvm（普通CVM子机），eks（弹性容器服务Elastic Kubernetes Service）， hai（高性能应用服务Hyper Application Inventor）。
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取网卡所关联的CDC实例ID。
                     * @return CdcId 网卡所关联的CDC实例ID。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置网卡所关联的CDC实例ID。
                     * @param _cdcId 网卡所关联的CDC实例ID。
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取弹性网卡类型：0:标准型/1:扩展型。默认值为0。
                     * @return AttachType 弹性网卡类型：0:标准型/1:扩展型。默认值为0。
                     * 
                     */
                    uint64_t GetAttachType() const;

                    /**
                     * 设置弹性网卡类型：0:标准型/1:扩展型。默认值为0。
                     * @param _attachType 弹性网卡类型：0:标准型/1:扩展型。默认值为0。
                     * 
                     */
                    void SetAttachType(const uint64_t& _attachType);

                    /**
                     * 判断参数 AttachType 是否已赋值
                     * @return AttachType 是否已赋值
                     * 
                     */
                    bool AttachTypeHasBeenSet() const;

                    /**
                     * 获取用于保留网卡主IP的资源ID用于保留网卡主IP的资源ID。用于删除网卡时作为入参数。
                     * @return ResourceId 用于保留网卡主IP的资源ID用于保留网卡主IP的资源ID。用于删除网卡时作为入参数。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置用于保留网卡主IP的资源ID用于保留网卡主IP的资源ID。用于删除网卡时作为入参数。
                     * @param _resourceId 用于保留网卡主IP的资源ID用于保留网卡主IP的资源ID。用于删除网卡时作为入参数。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取服务质量级别：
PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。

可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。

                     * @return QosLevel 服务质量级别：
PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。

可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。

                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置服务质量级别：
PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。

可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。

                     * @param _qosLevel 服务质量级别：
PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。

可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。

                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例ID，例如：eni-f1xjkw1b。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 弹性网卡名称。
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * 弹性网卡描述。
                     */
                    std::string m_networkInterfaceDescription;
                    bool m_networkInterfaceDescriptionHasBeenSet;

                    /**
                     * 子网实例ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 绑定的安全组。
                     */
                    std::vector<std::string> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * 是否是主网卡。
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * MAC地址。
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * 弹性网卡状态：
<li>`PENDING`：创建中</li>
<li>`AVAILABLE`：可用的</li>
<li>`ATTACHING`：绑定中</li>
<li>`DETACHING`：解绑中</li>
<li>`DELETING`：删除中</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 弹性网卡状态：
<li>`PENDING`：创建中</li>
<li>`AVAILABLE`：可用的</li>
<li>`ATTACHING`：绑定中</li>
<li>`DETACHING`：解绑中</li>
<li>`DELETING`：删除中</li>
<li>`INUSE`：已绑定</li>
                     */
                    std::string m_networkInterfaceState;
                    bool m_networkInterfaceStateHasBeenSet;

                    /**
                     * 内网IP信息。
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddressSet;
                    bool m_privateIpAddressSetHasBeenSet;

                    /**
                     * 绑定的云服务器对象。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NetworkInterfaceAttachment m_attachment;
                    bool m_attachmentHasBeenSet;

                    /**
                     * 可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 创建时间。格式：YYYY-MM-DD hh:mm:ss。示例值：2020-10-28 08:23:59
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * `IPv6`地址列表。
                     */
                    std::vector<Ipv6Address> m_ipv6AddressSet;
                    bool m_ipv6AddressSetHasBeenSet;

                    /**
                     * 标签键值对。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 网卡类型。“0”-辅助网卡，“1”-主网卡，“2”：中继网卡
                     */
                    uint64_t m_eniType;
                    bool m_eniTypeHasBeenSet;

                    /**
                     * 网卡绑定的子机类型：cvm（普通CVM子机），eks（弹性容器服务Elastic Kubernetes Service）， hai（高性能应用服务Hyper Application Inventor）。
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 网卡所关联的CDC实例ID。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * 弹性网卡类型：0:标准型/1:扩展型。默认值为0。
                     */
                    uint64_t m_attachType;
                    bool m_attachTypeHasBeenSet;

                    /**
                     * 用于保留网卡主IP的资源ID用于保留网卡主IP的资源ID。用于删除网卡时作为入参数。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 服务质量级别：
PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。

可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。

                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKINTERFACE_H_
