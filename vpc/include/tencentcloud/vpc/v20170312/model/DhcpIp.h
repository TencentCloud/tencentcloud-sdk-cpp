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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DHCPIP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DHCPIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 描述 DhcpIp 信息
                */
                class DhcpIp : public AbstractModel
                {
                public:
                    DhcpIp();
                    ~DhcpIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`DhcpIp`的`ID`，是`DhcpIp`的唯一标识。
                     * @return DhcpIpId `DhcpIp`的`ID`，是`DhcpIp`的唯一标识。
                     * 
                     */
                    std::string GetDhcpIpId() const;

                    /**
                     * 设置`DhcpIp`的`ID`，是`DhcpIp`的唯一标识。
                     * @param _dhcpIpId `DhcpIp`的`ID`，是`DhcpIp`的唯一标识。
                     * 
                     */
                    void SetDhcpIpId(const std::string& _dhcpIpId);

                    /**
                     * 判断参数 DhcpIpId 是否已赋值
                     * @return DhcpIpId 是否已赋值
                     * 
                     */
                    bool DhcpIpIdHasBeenSet() const;

                    /**
                     * 获取`DhcpIp`所在私有网络`ID`。
                     * @return VpcId `DhcpIp`所在私有网络`ID`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`DhcpIp`所在私有网络`ID`。
                     * @param _vpcId `DhcpIp`所在私有网络`ID`。
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
                     * 获取`DhcpIp`所在子网`ID`。
                     * @return SubnetId `DhcpIp`所在子网`ID`。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置`DhcpIp`所在子网`ID`。
                     * @param _subnetId `DhcpIp`所在子网`ID`。
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
                     * 获取`DhcpIp`的名称。
                     * @return DhcpIpName `DhcpIp`的名称。
                     * 
                     */
                    std::string GetDhcpIpName() const;

                    /**
                     * 设置`DhcpIp`的名称。
                     * @param _dhcpIpName `DhcpIp`的名称。
                     * 
                     */
                    void SetDhcpIpName(const std::string& _dhcpIpName);

                    /**
                     * 判断参数 DhcpIpName 是否已赋值
                     * @return DhcpIpName 是否已赋值
                     * 
                     */
                    bool DhcpIpNameHasBeenSet() const;

                    /**
                     * 获取IP地址。
                     * @return PrivateIpAddress IP地址。
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置IP地址。
                     * @param _privateIpAddress IP地址。
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取绑定`EIP`。
                     * @return AddressIp 绑定`EIP`。
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置绑定`EIP`。
                     * @param _addressIp 绑定`EIP`。
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
                     * 获取`DhcpIp`关联弹性网卡`ID`。
                     * @return NetworkInterfaceId `DhcpIp`关联弹性网卡`ID`。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置`DhcpIp`关联弹性网卡`ID`。
                     * @param _networkInterfaceId `DhcpIp`关联弹性网卡`ID`。
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
                     * 获取被绑定的实例`ID`。
                     * @return InstanceId 被绑定的实例`ID`。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置被绑定的实例`ID`。
                     * @param _instanceId 被绑定的实例`ID`。
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
                     * 获取状态：
<li>`AVAILABLE`：运行中</li>
<li>`UNBIND`：未绑定</li>
                     * @return State 状态：
<li>`AVAILABLE`：运行中</li>
<li>`UNBIND`：未绑定</li>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态：
<li>`AVAILABLE`：运行中</li>
<li>`UNBIND`：未绑定</li>
                     * @param _state 状态：
<li>`AVAILABLE`：运行中</li>
<li>`UNBIND`：未绑定</li>
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

                private:

                    /**
                     * `DhcpIp`的`ID`，是`DhcpIp`的唯一标识。
                     */
                    std::string m_dhcpIpId;
                    bool m_dhcpIpIdHasBeenSet;

                    /**
                     * `DhcpIp`所在私有网络`ID`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * `DhcpIp`所在子网`ID`。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * `DhcpIp`的名称。
                     */
                    std::string m_dhcpIpName;
                    bool m_dhcpIpNameHasBeenSet;

                    /**
                     * IP地址。
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * 绑定`EIP`。
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * `DhcpIp`关联弹性网卡`ID`。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 被绑定的实例`ID`。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 状态：
<li>`AVAILABLE`：运行中</li>
<li>`UNBIND`：未绑定</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 标签键值对。	
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DHCPIP_H_
