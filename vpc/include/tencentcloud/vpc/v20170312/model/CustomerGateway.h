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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 对端网关
                */
                class CustomerGateway : public AbstractModel
                {
                public:
                    CustomerGateway();
                    ~CustomerGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户网关唯一ID
                     * @return CustomerGatewayId 用户网关唯一ID
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置用户网关唯一ID
                     * @param _customerGatewayId 用户网关唯一ID
                     * 
                     */
                    void SetCustomerGatewayId(const std::string& _customerGatewayId);

                    /**
                     * 判断参数 CustomerGatewayId 是否已赋值
                     * @return CustomerGatewayId 是否已赋值
                     * 
                     */
                    bool CustomerGatewayIdHasBeenSet() const;

                    /**
                     * 获取网关名称
                     * @return CustomerGatewayName 网关名称
                     * 
                     */
                    std::string GetCustomerGatewayName() const;

                    /**
                     * 设置网关名称
                     * @param _customerGatewayName 网关名称
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
                     * 获取公网地址
                     * @return IpAddress 公网地址
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置公网地址
                     * @param _ipAddress 公网地址
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
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
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
                     * 获取BGP ASN。
                     * @return BgpAsn BGP ASN。
                     * 
                     */
                    uint64_t GetBgpAsn() const;

                    /**
                     * 设置BGP ASN。
                     * @param _bgpAsn BGP ASN。
                     * 
                     */
                    void SetBgpAsn(const uint64_t& _bgpAsn);

                    /**
                     * 判断参数 BgpAsn 是否已赋值
                     * @return BgpAsn 是否已赋值
                     * 
                     */
                    bool BgpAsnHasBeenSet() const;

                private:

                    /**
                     * 用户网关唯一ID
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                    /**
                     * 网关名称
                     */
                    std::string m_customerGatewayName;
                    bool m_customerGatewayNameHasBeenSet;

                    /**
                     * 公网地址
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * BGP ASN。
                     */
                    uint64_t m_bgpAsn;
                    bool m_bgpAsnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAY_H_
