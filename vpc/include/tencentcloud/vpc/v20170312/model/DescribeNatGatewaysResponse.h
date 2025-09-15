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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NatGateway.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNatGateways返回参数结构体
                */
                class DescribeNatGatewaysResponse : public AbstractModel
                {
                public:
                    DescribeNatGatewaysResponse();
                    ~DescribeNatGatewaysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT网关对象数组。
                     * @return NatGatewaySet NAT网关对象数组。
                     * 
                     */
                    std::vector<NatGateway> GetNatGatewaySet() const;

                    /**
                     * 判断参数 NatGatewaySet 是否已赋值
                     * @return NatGatewaySet 是否已赋值
                     * 
                     */
                    bool NatGatewaySetHasBeenSet() const;

                    /**
                     * 获取符合条件的NAT网关对象个数。
                     * @return TotalCount 符合条件的NAT网关对象个数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取输出信息详细程度，DETAIL代表输出实例所有信息；COMPACT代表不输出NAT规则和自定义路由，输出实例基本信息、特性开关和EIP信息；SIMPLE代表仅输出实例基本信息和特性开关
                     * @return VerboseLevel 输出信息详细程度，DETAIL代表输出实例所有信息；COMPACT代表不输出NAT规则和自定义路由，输出实例基本信息、特性开关和EIP信息；SIMPLE代表仅输出实例基本信息和特性开关
                     * 
                     */
                    std::string GetVerboseLevel() const;

                    /**
                     * 判断参数 VerboseLevel 是否已赋值
                     * @return VerboseLevel 是否已赋值
                     * 
                     */
                    bool VerboseLevelHasBeenSet() const;

                private:

                    /**
                     * NAT网关对象数组。
                     */
                    std::vector<NatGateway> m_natGatewaySet;
                    bool m_natGatewaySetHasBeenSet;

                    /**
                     * 符合条件的NAT网关对象个数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 输出信息详细程度，DETAIL代表输出实例所有信息；COMPACT代表不输出NAT规则和自定义路由，输出实例基本信息、特性开关和EIP信息；SIMPLE代表仅输出实例基本信息和特性开关
                     */
                    std::string m_verboseLevel;
                    bool m_verboseLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYSRESPONSE_H_
