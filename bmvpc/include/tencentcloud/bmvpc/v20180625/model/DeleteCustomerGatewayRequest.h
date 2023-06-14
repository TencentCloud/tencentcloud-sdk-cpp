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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETECUSTOMERGATEWAYREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETECUSTOMERGATEWAYREQUEST_H_

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
                * DeleteCustomerGateway请求参数结构体
                */
                class DeleteCustomerGatewayRequest : public AbstractModel
                {
                public:
                    DeleteCustomerGatewayRequest();
                    ~DeleteCustomerGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取对端网关ID，例如：bmcgw-2wqq41m9，可通过DescribeCustomerGateways接口查询对端网关。
                     * @return CustomerGatewayId 对端网关ID，例如：bmcgw-2wqq41m9，可通过DescribeCustomerGateways接口查询对端网关。
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置对端网关ID，例如：bmcgw-2wqq41m9，可通过DescribeCustomerGateways接口查询对端网关。
                     * @param _customerGatewayId 对端网关ID，例如：bmcgw-2wqq41m9，可通过DescribeCustomerGateways接口查询对端网关。
                     * 
                     */
                    void SetCustomerGatewayId(const std::string& _customerGatewayId);

                    /**
                     * 判断参数 CustomerGatewayId 是否已赋值
                     * @return CustomerGatewayId 是否已赋值
                     * 
                     */
                    bool CustomerGatewayIdHasBeenSet() const;

                private:

                    /**
                     * 对端网关ID，例如：bmcgw-2wqq41m9，可通过DescribeCustomerGateways接口查询对端网关。
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETECUSTOMERGATEWAYREQUEST_H_
