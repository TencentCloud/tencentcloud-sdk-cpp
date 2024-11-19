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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDHCPIPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDHCPIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDhcpIp请求参数结构体
                */
                class CreateDhcpIpRequest : public AbstractModel
                {
                public:
                    CreateDhcpIpRequest();
                    ~CreateDhcpIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络`ID`。
                     * @return VpcId 私有网络`ID`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络`ID`。
                     * @param _vpcId 私有网络`ID`。
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
                     * 获取子网`ID`。
                     * @return SubnetId 子网`ID`。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网`ID`。
                     * @param _subnetId 子网`ID`。
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
                     * 获取`DhcpIp`名称。
                     * @return DhcpIpName `DhcpIp`名称。
                     * 
                     */
                    std::string GetDhcpIpName() const;

                    /**
                     * 设置`DhcpIp`名称。
                     * @param _dhcpIpName `DhcpIp`名称。
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
                     * 获取新申请的内网IP地址个数。总数不能超过64个，为了兼容性，当前参数必填。
                     * @return SecondaryPrivateIpAddressCount 新申请的内网IP地址个数。总数不能超过64个，为了兼容性，当前参数必填。
                     * 
                     */
                    uint64_t GetSecondaryPrivateIpAddressCount() const;

                    /**
                     * 设置新申请的内网IP地址个数。总数不能超过64个，为了兼容性，当前参数必填。
                     * @param _secondaryPrivateIpAddressCount 新申请的内网IP地址个数。总数不能超过64个，为了兼容性，当前参数必填。
                     * 
                     */
                    void SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount);

                    /**
                     * 判断参数 SecondaryPrivateIpAddressCount 是否已赋值
                     * @return SecondaryPrivateIpAddressCount 是否已赋值
                     * 
                     */
                    bool SecondaryPrivateIpAddressCountHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 私有网络`ID`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网`ID`。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * `DhcpIp`名称。
                     */
                    std::string m_dhcpIpName;
                    bool m_dhcpIpNameHasBeenSet;

                    /**
                     * 新申请的内网IP地址个数。总数不能超过64个，为了兼容性，当前参数必填。
                     */
                    uint64_t m_secondaryPrivateIpAddressCount;
                    bool m_secondaryPrivateIpAddressCountHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDHCPIPREQUEST_H_
