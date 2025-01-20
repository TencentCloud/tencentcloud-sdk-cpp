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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATECUSTOMERGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATECUSTOMERGATEWAYREQUEST_H_

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
                * CreateCustomerGateway请求参数结构体
                */
                class CreateCustomerGatewayRequest : public AbstractModel
                {
                public:
                    CreateCustomerGatewayRequest();
                    ~CreateCustomerGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取对端网关名称，可任意命名，但不得超过60个字符。
                     * @return CustomerGatewayName 对端网关名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetCustomerGatewayName() const;

                    /**
                     * 设置对端网关名称，可任意命名，但不得超过60个字符。
                     * @param _customerGatewayName 对端网关名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    void SetCustomerGatewayName(const std::string& _customerGatewayName);

                    /**
                     * 判断参数 CustomerGatewayName 是否已赋值
                     * @return CustomerGatewayName 是否已赋值
                     * 
                     */
                    bool CustomerGatewayNameHasBeenSet() const;

                    /**
                     * 获取对端网关公网IP。
                     * @return IpAddress 对端网关公网IP。
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置对端网关公网IP。
                     * @param _ipAddress 对端网关公网IP。
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
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
                     * 获取BGP ASN。ASN取值范围为1- 4294967295，其中139341、45090和58835不可用。
                     * @return BgpAsn BGP ASN。ASN取值范围为1- 4294967295，其中139341、45090和58835不可用。
                     * 
                     */
                    int64_t GetBgpAsn() const;

                    /**
                     * 设置BGP ASN。ASN取值范围为1- 4294967295，其中139341、45090和58835不可用。
                     * @param _bgpAsn BGP ASN。ASN取值范围为1- 4294967295，其中139341、45090和58835不可用。
                     * 
                     */
                    void SetBgpAsn(const int64_t& _bgpAsn);

                    /**
                     * 判断参数 BgpAsn 是否已赋值
                     * @return BgpAsn 是否已赋值
                     * 
                     */
                    bool BgpAsnHasBeenSet() const;

                private:

                    /**
                     * 对端网关名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_customerGatewayName;
                    bool m_customerGatewayNameHasBeenSet;

                    /**
                     * 对端网关公网IP。
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * BGP ASN。ASN取值范围为1- 4294967295，其中139341、45090和58835不可用。
                     */
                    int64_t m_bgpAsn;
                    bool m_bgpAsnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATECUSTOMERGATEWAYREQUEST_H_
