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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEADDRESSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEADDRESSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressInfo.h>
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
                * CreateAddressTemplate请求参数结构体
                */
                class CreateAddressTemplateRequest : public AbstractModel
                {
                public:
                    CreateAddressTemplateRequest();
                    ~CreateAddressTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IP地址模板名称。
                     * @return AddressTemplateName IP地址模板名称。
                     * 
                     */
                    std::string GetAddressTemplateName() const;

                    /**
                     * 设置IP地址模板名称。
                     * @param _addressTemplateName IP地址模板名称。
                     * 
                     */
                    void SetAddressTemplateName(const std::string& _addressTemplateName);

                    /**
                     * 判断参数 AddressTemplateName 是否已赋值
                     * @return AddressTemplateName 是否已赋值
                     * 
                     */
                    bool AddressTemplateNameHasBeenSet() const;

                    /**
                     * 获取地址信息，支持 IP、CIDR、IP 范围。Addresses与AddressesExtra必填其一。
                     * @return Addresses 地址信息，支持 IP、CIDR、IP 范围。Addresses与AddressesExtra必填其一。
                     * 
                     */
                    std::vector<std::string> GetAddresses() const;

                    /**
                     * 设置地址信息，支持 IP、CIDR、IP 范围。Addresses与AddressesExtra必填其一。
                     * @param _addresses 地址信息，支持 IP、CIDR、IP 范围。Addresses与AddressesExtra必填其一。
                     * 
                     */
                    void SetAddresses(const std::vector<std::string>& _addresses);

                    /**
                     * 判断参数 Addresses 是否已赋值
                     * @return Addresses 是否已赋值
                     * 
                     */
                    bool AddressesHasBeenSet() const;

                    /**
                     * 获取地址信息，支持携带备注，支持 IP、CIDR、IP 范围。Addresses与AddressesExtra必填其一。
                     * @return AddressesExtra 地址信息，支持携带备注，支持 IP、CIDR、IP 范围。Addresses与AddressesExtra必填其一。
                     * 
                     */
                    std::vector<AddressInfo> GetAddressesExtra() const;

                    /**
                     * 设置地址信息，支持携带备注，支持 IP、CIDR、IP 范围。Addresses与AddressesExtra必填其一。
                     * @param _addressesExtra 地址信息，支持携带备注，支持 IP、CIDR、IP 范围。Addresses与AddressesExtra必填其一。
                     * 
                     */
                    void SetAddressesExtra(const std::vector<AddressInfo>& _addressesExtra);

                    /**
                     * 判断参数 AddressesExtra 是否已赋值
                     * @return AddressesExtra 是否已赋值
                     * 
                     */
                    bool AddressesExtraHasBeenSet() const;

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
                     * IP地址模板名称。
                     */
                    std::string m_addressTemplateName;
                    bool m_addressTemplateNameHasBeenSet;

                    /**
                     * 地址信息，支持 IP、CIDR、IP 范围。Addresses与AddressesExtra必填其一。
                     */
                    std::vector<std::string> m_addresses;
                    bool m_addressesHasBeenSet;

                    /**
                     * 地址信息，支持携带备注，支持 IP、CIDR、IP 范围。Addresses与AddressesExtra必填其一。
                     */
                    std::vector<AddressInfo> m_addressesExtra;
                    bool m_addressesExtraHasBeenSet;

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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEADDRESSTEMPLATEREQUEST_H_
