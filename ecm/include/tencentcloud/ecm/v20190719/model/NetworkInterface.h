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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKINTERFACE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKINTERFACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PrivateIpAddressSpecification.h>
#include <tencentcloud/ecm/v20190719/model/NetworkInterfaceAttachment.h>
#include <tencentcloud/ecm/v20190719/model/Ipv6Address.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupSet 绑定的安全组。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetGroupSet() const;

                    /**
                     * 设置绑定的安全组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupSet 绑定的安全组。
注意：此字段可能返回 null，表示取不到有效值。
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
PENDING：创建中
AVAILABLE：可用的
ATTACHING：绑定中
DETACHING：解绑中
DELETING：删除中
                     * @return State 弹性网卡状态：
PENDING：创建中
AVAILABLE：可用的
ATTACHING：绑定中
DETACHING：解绑中
DELETING：删除中
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置弹性网卡状态：
PENDING：创建中
AVAILABLE：可用的
ATTACHING：绑定中
DETACHING：解绑中
DELETING：删除中
                     * @param _state 弹性网卡状态：
PENDING：创建中
AVAILABLE：可用的
ATTACHING：绑定中
DETACHING：解绑中
DELETING：删除中
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
                     * 获取内网IP信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIpAddressSet 内网IP信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddressSet() const;

                    /**
                     * 设置内网IP信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIpAddressSet 内网IP信息。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attachment 绑定的云服务器对象。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NetworkInterfaceAttachment GetAttachment() const;

                    /**
                     * 设置绑定的云服务器对象。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachment 绑定的云服务器对象。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
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
                     * 获取IPv6地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6AddressSet IPv6地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6AddressSet() const;

                    /**
                     * 设置IPv6地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv6AddressSet IPv6地址列表。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSet 标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取网卡类型。0 - 弹性网卡；1 - evm弹性网卡。
                     * @return EniType 网卡类型。0 - 弹性网卡；1 - evm弹性网卡。
                     * 
                     */
                    uint64_t GetEniType() const;

                    /**
                     * 设置网卡类型。0 - 弹性网卡；1 - evm弹性网卡。
                     * @param _eniType 网卡类型。0 - 弹性网卡；1 - evm弹性网卡。
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
                     * 获取EcmRegion ecm区域
                     * @return EcmRegion EcmRegion ecm区域
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置EcmRegion ecm区域
                     * @param _ecmRegion EcmRegion ecm区域
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取网卡绑定的子机类型：cvm，eks。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Business 网卡绑定的子机类型：cvm，eks。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置网卡绑定的子机类型：cvm，eks。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _business 网卡绑定的子机类型：cvm，eks。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
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
PENDING：创建中
AVAILABLE：可用的
ATTACHING：绑定中
DETACHING：解绑中
DELETING：删除中
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 内网IP信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddressSet;
                    bool m_privateIpAddressSetHasBeenSet;

                    /**
                     * 绑定的云服务器对象。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * IPv6地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Ipv6Address> m_ipv6AddressSet;
                    bool m_ipv6AddressSetHasBeenSet;

                    /**
                     * 标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 网卡类型。0 - 弹性网卡；1 - evm弹性网卡。
                     */
                    uint64_t m_eniType;
                    bool m_eniTypeHasBeenSet;

                    /**
                     * EcmRegion ecm区域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 网卡绑定的子机类型：cvm，eks。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKINTERFACE_H_
