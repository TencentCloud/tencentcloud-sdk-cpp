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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CustomerGateway.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCustomerGateways返回参数结构体
                */
                class DescribeCustomerGatewaysResponse : public AbstractModel
                {
                public:
                    DescribeCustomerGatewaysResponse();
                    ~DescribeCustomerGatewaysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取对端网关对象列表。
                     * @return CustomerGatewaySet 对端网关对象列表。
                     * 
                     */
                    std::vector<CustomerGateway> GetCustomerGatewaySet() const;

                    /**
                     * 判断参数 CustomerGatewaySet 是否已赋值
                     * @return CustomerGatewaySet 是否已赋值
                     * 
                     */
                    bool CustomerGatewaySetHasBeenSet() const;

                    /**
                     * 获取符合条件的实例数量。
                     * @return TotalCount 符合条件的实例数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 对端网关对象列表。
                     */
                    std::vector<CustomerGateway> m_customerGatewaySet;
                    bool m_customerGatewaySetHasBeenSet;

                    /**
                     * 符合条件的实例数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYSRESPONSE_H_
