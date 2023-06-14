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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATECUSTOMERGATEWAYREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATECUSTOMERGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
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
                     * 获取可用区ID
                     * @return Zone 可用区ID
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区ID
                     * @param _zone 可用区ID
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

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
                     * 可用区ID
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATECUSTOMERGATEWAYREQUEST_H_
