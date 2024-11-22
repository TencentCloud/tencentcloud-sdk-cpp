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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATERESERVEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATERESERVEIPADDRESSESREQUEST_H_

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
                * CreateReserveIpAddresses请求参数结构体
                */
                class CreateReserveIpAddressesRequest : public AbstractModel
                {
                public:
                    CreateReserveIpAddressesRequest();
                    ~CreateReserveIpAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC唯一 ID。
                     * @return VpcId VPC唯一 ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC唯一 ID。
                     * @param _vpcId VPC唯一 ID。
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
                     * 获取指定IP申请的内网保留IP地址。
                     * @return IpAddresses 指定IP申请的内网保留IP地址。
                     * 
                     */
                    std::vector<std::string> GetIpAddresses() const;

                    /**
                     * 设置指定IP申请的内网保留IP地址。
                     * @param _ipAddresses 指定IP申请的内网保留IP地址。
                     * 
                     */
                    void SetIpAddresses(const std::vector<std::string>& _ipAddresses);

                    /**
                     * 判断参数 IpAddresses 是否已赋值
                     * @return IpAddresses 是否已赋值
                     * 
                     */
                    bool IpAddressesHasBeenSet() const;

                    /**
                     * 获取不指定IP地址，指定个数自动分配保留内网IP。
                     * @return IpAddressCount 不指定IP地址，指定个数自动分配保留内网IP。
                     * 
                     */
                    uint64_t GetIpAddressCount() const;

                    /**
                     * 设置不指定IP地址，指定个数自动分配保留内网IP。
                     * @param _ipAddressCount 不指定IP地址，指定个数自动分配保留内网IP。
                     * 
                     */
                    void SetIpAddressCount(const uint64_t& _ipAddressCount);

                    /**
                     * 判断参数 IpAddressCount 是否已赋值
                     * @return IpAddressCount 是否已赋值
                     * 
                     */
                    bool IpAddressCountHasBeenSet() const;

                    /**
                     * 获取子网唯一 ID。
                     * @return SubnetId 子网唯一 ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网唯一 ID。
                     * @param _subnetId 子网唯一 ID。
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
                     * 获取内网保留 IP名称。
                     * @return Name 内网保留 IP名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置内网保留 IP名称。
                     * @param _name 内网保留 IP名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取内网保留 IP描述。
                     * @return Description 内网保留 IP描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置内网保留 IP描述。
                     * @param _description 内网保留 IP描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

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

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * VPC唯一 ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 指定IP申请的内网保留IP地址。
                     */
                    std::vector<std::string> m_ipAddresses;
                    bool m_ipAddressesHasBeenSet;

                    /**
                     * 不指定IP地址，指定个数自动分配保留内网IP。
                     */
                    uint64_t m_ipAddressCount;
                    bool m_ipAddressCountHasBeenSet;

                    /**
                     * 子网唯一 ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 内网保留 IP名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 内网保留 IP描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATERESERVEIPADDRESSESREQUEST_H_
