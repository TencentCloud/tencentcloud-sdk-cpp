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
                     * 获取<p>弹性网卡实例ID，例如：eni-f1xjkw1b。</p>
                     * @return NetworkInterfaceId <p>弹性网卡实例ID，例如：eni-f1xjkw1b。</p>
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置<p>弹性网卡实例ID，例如：eni-f1xjkw1b。</p>
                     * @param _networkInterfaceId <p>弹性网卡实例ID，例如：eni-f1xjkw1b。</p>
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
                     * 获取<p>弹性网卡名称。</p>
                     * @return NetworkInterfaceName <p>弹性网卡名称。</p>
                     * 
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置<p>弹性网卡名称。</p>
                     * @param _networkInterfaceName <p>弹性网卡名称。</p>
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
                     * 获取<p>弹性网卡描述。</p>
                     * @return NetworkInterfaceDescription <p>弹性网卡描述。</p>
                     * 
                     */
                    std::string GetNetworkInterfaceDescription() const;

                    /**
                     * 设置<p>弹性网卡描述。</p>
                     * @param _networkInterfaceDescription <p>弹性网卡描述。</p>
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
                     * 获取<p>子网实例ID。</p>
                     * @return SubnetId <p>子网实例ID。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网实例ID。</p>
                     * @param _subnetId <p>子网实例ID。</p>
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
                     * 获取<p>VPC实例ID。</p>
                     * @return VpcId <p>VPC实例ID。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC实例ID。</p>
                     * @param _vpcId <p>VPC实例ID。</p>
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
                     * 获取<p>绑定的安全组。</p>
                     * @return GroupSet <p>绑定的安全组。</p>
                     * 
                     */
                    std::vector<std::string> GetGroupSet() const;

                    /**
                     * 设置<p>绑定的安全组。</p>
                     * @param _groupSet <p>绑定的安全组。</p>
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
                     * 获取<p>是否是主网卡。</p>
                     * @return Primary <p>是否是主网卡。</p>
                     * 
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置<p>是否是主网卡。</p>
                     * @param _primary <p>是否是主网卡。</p>
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
                     * 获取<p>MAC地址。</p>
                     * @return MacAddress <p>MAC地址。</p>
                     * 
                     */
                    std::string GetMacAddress() const;

                    /**
                     * 设置<p>MAC地址。</p>
                     * @param _macAddress <p>MAC地址。</p>
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
                     * 获取<p>弹性网卡状态：</p><li><code>PENDING</code>：创建中</li><li><code>AVAILABLE</code>：可用的</li><li><code>ATTACHING</code>：绑定中</li><li><code>DETACHING</code>：解绑中</li><li><code>DELETING</code>：删除中</li>
                     * @return State <p>弹性网卡状态：</p><li><code>PENDING</code>：创建中</li><li><code>AVAILABLE</code>：可用的</li><li><code>ATTACHING</code>：绑定中</li><li><code>DETACHING</code>：解绑中</li><li><code>DELETING</code>：删除中</li>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>弹性网卡状态：</p><li><code>PENDING</code>：创建中</li><li><code>AVAILABLE</code>：可用的</li><li><code>ATTACHING</code>：绑定中</li><li><code>DETACHING</code>：解绑中</li><li><code>DELETING</code>：删除中</li>
                     * @param _state <p>弹性网卡状态：</p><li><code>PENDING</code>：创建中</li><li><code>AVAILABLE</code>：可用的</li><li><code>ATTACHING</code>：绑定中</li><li><code>DETACHING</code>：解绑中</li><li><code>DELETING</code>：删除中</li>
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
                     * 获取<p>弹性网卡状态：</p><li><code>PENDING</code>：创建中</li><li><code>AVAILABLE</code>：可用的</li><li><code>ATTACHING</code>：绑定中</li><li><code>DETACHING</code>：解绑中</li><li><code>DELETING</code>：删除中</li><li><code>INUSE</code>：已绑定</li>
                     * @return NetworkInterfaceState <p>弹性网卡状态：</p><li><code>PENDING</code>：创建中</li><li><code>AVAILABLE</code>：可用的</li><li><code>ATTACHING</code>：绑定中</li><li><code>DETACHING</code>：解绑中</li><li><code>DELETING</code>：删除中</li><li><code>INUSE</code>：已绑定</li>
                     * 
                     */
                    std::string GetNetworkInterfaceState() const;

                    /**
                     * 设置<p>弹性网卡状态：</p><li><code>PENDING</code>：创建中</li><li><code>AVAILABLE</code>：可用的</li><li><code>ATTACHING</code>：绑定中</li><li><code>DETACHING</code>：解绑中</li><li><code>DELETING</code>：删除中</li><li><code>INUSE</code>：已绑定</li>
                     * @param _networkInterfaceState <p>弹性网卡状态：</p><li><code>PENDING</code>：创建中</li><li><code>AVAILABLE</code>：可用的</li><li><code>ATTACHING</code>：绑定中</li><li><code>DETACHING</code>：解绑中</li><li><code>DELETING</code>：删除中</li><li><code>INUSE</code>：已绑定</li>
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
                     * 获取<p>内网IP信息。</p>
                     * @return PrivateIpAddressSet <p>内网IP信息。</p>
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddressSet() const;

                    /**
                     * 设置<p>内网IP信息。</p>
                     * @param _privateIpAddressSet <p>内网IP信息。</p>
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
                     * 获取<p>绑定的云服务器对象。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attachment <p>绑定的云服务器对象。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NetworkInterfaceAttachment GetAttachment() const;

                    /**
                     * 设置<p>绑定的云服务器对象。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachment <p>绑定的云服务器对象。</p>
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
                     * 获取<p>可用区。</p>
                     * @return Zone <p>可用区。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区。</p>
                     * @param _zone <p>可用区。</p>
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
                     * 获取<p>创建时间。格式：YYYY-MM-DD hh:mm:ss。示例值：2020-10-28 08:23:59</p>
                     * @return CreatedTime <p>创建时间。格式：YYYY-MM-DD hh:mm:ss。示例值：2020-10-28 08:23:59</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。格式：YYYY-MM-DD hh:mm:ss。示例值：2020-10-28 08:23:59</p>
                     * @param _createdTime <p>创建时间。格式：YYYY-MM-DD hh:mm:ss。示例值：2020-10-28 08:23:59</p>
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
                     * 获取<p><code>IPv6</code>地址列表。</p>
                     * @return Ipv6AddressSet <p><code>IPv6</code>地址列表。</p>
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6AddressSet() const;

                    /**
                     * 设置<p><code>IPv6</code>地址列表。</p>
                     * @param _ipv6AddressSet <p><code>IPv6</code>地址列表。</p>
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
                     * 获取<p>标签键值对。</p>
                     * @return TagSet <p>标签键值对。</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签键值对。</p>
                     * @param _tagSet <p>标签键值对。</p>
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
                     * 获取<p>网卡类型。“0”-辅助网卡，“1”-主网卡，“2”：中继网卡</p>
                     * @return EniType <p>网卡类型。“0”-辅助网卡，“1”-主网卡，“2”：中继网卡</p>
                     * 
                     */
                    uint64_t GetEniType() const;

                    /**
                     * 设置<p>网卡类型。“0”-辅助网卡，“1”-主网卡，“2”：中继网卡</p>
                     * @param _eniType <p>网卡类型。“0”-辅助网卡，“1”-主网卡，“2”：中继网卡</p>
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
                     * 获取<p>网卡绑定的子机类型：cvm（普通CVM子机），eks（弹性容器服务Elastic Kubernetes Service）， hai（高性能应用服务Hyper Application Inventor）。</p>
                     * @return Business <p>网卡绑定的子机类型：cvm（普通CVM子机），eks（弹性容器服务Elastic Kubernetes Service）， hai（高性能应用服务Hyper Application Inventor）。</p>
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置<p>网卡绑定的子机类型：cvm（普通CVM子机），eks（弹性容器服务Elastic Kubernetes Service）， hai（高性能应用服务Hyper Application Inventor）。</p>
                     * @param _business <p>网卡绑定的子机类型：cvm（普通CVM子机），eks（弹性容器服务Elastic Kubernetes Service）， hai（高性能应用服务Hyper Application Inventor）。</p>
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
                     * 获取<p>网卡所关联的CDC实例ID。</p>
                     * @return CdcId <p>网卡所关联的CDC实例ID。</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>网卡所关联的CDC实例ID。</p>
                     * @param _cdcId <p>网卡所关联的CDC实例ID。</p>
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
                     * 获取<p>弹性网卡类型：0:标准型/1:扩展型。默认值为0。</p>
                     * @return AttachType <p>弹性网卡类型：0:标准型/1:扩展型。默认值为0。</p>
                     * 
                     */
                    uint64_t GetAttachType() const;

                    /**
                     * 设置<p>弹性网卡类型：0:标准型/1:扩展型。默认值为0。</p>
                     * @param _attachType <p>弹性网卡类型：0:标准型/1:扩展型。默认值为0。</p>
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
                     * 获取<p>用于保留网卡主IP的资源ID用于保留网卡主IP的资源ID。用于删除网卡时作为入参数。</p>
                     * @return ResourceId <p>用于保留网卡主IP的资源ID用于保留网卡主IP的资源ID。用于删除网卡时作为入参数。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>用于保留网卡主IP的资源ID用于保留网卡主IP的资源ID。用于删除网卡时作为入参数。</p>
                     * @param _resourceId <p>用于保留网卡主IP的资源ID用于保留网卡主IP的资源ID。用于删除网卡时作为入参数。</p>
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
                     * 获取<p>服务质量级别：<br>PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p><p>可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p>
                     * @return QosLevel <p>服务质量级别：<br>PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p><p>可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p>
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置<p>服务质量级别：<br>PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p><p>可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p>
                     * @param _qosLevel <p>服务质量级别：<br>PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p><p>可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p>
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取<p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。</p>
                     * @return Ipv6Addresses <p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。</p>
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6Addresses() const;

                    /**
                     * 设置<p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。</p>
                     * @param _ipv6Addresses <p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。</p>
                     * 
                     */
                    void SetIpv6Addresses(const std::vector<Ipv6Address>& _ipv6Addresses);

                    /**
                     * 判断参数 Ipv6Addresses 是否已赋值
                     * @return Ipv6Addresses 是否已赋值
                     * 
                     */
                    bool Ipv6AddressesHasBeenSet() const;

                    /**
                     * 获取<p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。</p><p>取值范围：[1, 10]</p><p>单位：个</p>
                     * @return Ipv6AddressCount <p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。</p><p>取值范围：[1, 10]</p><p>单位：个</p>
                     * 
                     */
                    uint64_t GetIpv6AddressCount() const;

                    /**
                     * 设置<p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。</p><p>取值范围：[1, 10]</p><p>单位：个</p>
                     * @param _ipv6AddressCount <p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。</p><p>取值范围：[1, 10]</p><p>单位：个</p>
                     * 
                     */
                    void SetIpv6AddressCount(const uint64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     * 
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                private:

                    /**
                     * <p>弹性网卡实例ID，例如：eni-f1xjkw1b。</p>
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * <p>弹性网卡名称。</p>
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * <p>弹性网卡描述。</p>
                     */
                    std::string m_networkInterfaceDescription;
                    bool m_networkInterfaceDescriptionHasBeenSet;

                    /**
                     * <p>子网实例ID。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>VPC实例ID。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>绑定的安全组。</p>
                     */
                    std::vector<std::string> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * <p>是否是主网卡。</p>
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * <p>MAC地址。</p>
                     */
                    std::string m_macAddress;
                    bool m_macAddressHasBeenSet;

                    /**
                     * <p>弹性网卡状态：</p><li><code>PENDING</code>：创建中</li><li><code>AVAILABLE</code>：可用的</li><li><code>ATTACHING</code>：绑定中</li><li><code>DETACHING</code>：解绑中</li><li><code>DELETING</code>：删除中</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>弹性网卡状态：</p><li><code>PENDING</code>：创建中</li><li><code>AVAILABLE</code>：可用的</li><li><code>ATTACHING</code>：绑定中</li><li><code>DETACHING</code>：解绑中</li><li><code>DELETING</code>：删除中</li><li><code>INUSE</code>：已绑定</li>
                     */
                    std::string m_networkInterfaceState;
                    bool m_networkInterfaceStateHasBeenSet;

                    /**
                     * <p>内网IP信息。</p>
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddressSet;
                    bool m_privateIpAddressSetHasBeenSet;

                    /**
                     * <p>绑定的云服务器对象。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NetworkInterfaceAttachment m_attachment;
                    bool m_attachmentHasBeenSet;

                    /**
                     * <p>可用区。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>创建时间。格式：YYYY-MM-DD hh:mm:ss。示例值：2020-10-28 08:23:59</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p><code>IPv6</code>地址列表。</p>
                     */
                    std::vector<Ipv6Address> m_ipv6AddressSet;
                    bool m_ipv6AddressSetHasBeenSet;

                    /**
                     * <p>标签键值对。</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>网卡类型。“0”-辅助网卡，“1”-主网卡，“2”：中继网卡</p>
                     */
                    uint64_t m_eniType;
                    bool m_eniTypeHasBeenSet;

                    /**
                     * <p>网卡绑定的子机类型：cvm（普通CVM子机），eks（弹性容器服务Elastic Kubernetes Service）， hai（高性能应用服务Hyper Application Inventor）。</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>网卡所关联的CDC实例ID。</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>弹性网卡类型：0:标准型/1:扩展型。默认值为0。</p>
                     */
                    uint64_t m_attachType;
                    bool m_attachTypeHasBeenSet;

                    /**
                     * <p>用于保留网卡主IP的资源ID用于保留网卡主IP的资源ID。用于删除网卡时作为入参数。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>服务质量级别：<br>PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p><p>可选值：PT（云金）、AU（云银）、AG(云铜）、DEFAULT（默认）。</p>
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * <p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。</p>
                     */
                    std::vector<Ipv6Address> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                    /**
                     * <p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。</p><p>取值范围：[1, 10]</p><p>单位：个</p>
                     */
                    uint64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKINTERFACE_H_
