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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYLIMITSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYLIMITSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/PrivateNatGatewayLimit.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribePrivateNatGatewayLimits返回参数结构体
                */
                class DescribePrivateNatGatewayLimitsResponse : public AbstractModel
                {
                public:
                    DescribePrivateNatGatewayLimitsResponse();
                    ~DescribePrivateNatGatewayLimitsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询返回结果个数。
                     * @return TotalCount 查询返回结果个数。
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
                     * 获取私网网关配额。
                     * @return PrivateNatGatewayLimitSet 私网网关配额。
                     * 
                     */
                    std::vector<PrivateNatGatewayLimit> GetPrivateNatGatewayLimitSet() const;

                    /**
                     * 判断参数 PrivateNatGatewayLimitSet 是否已赋值
                     * @return PrivateNatGatewayLimitSet 是否已赋值
                     * 
                     */
                    bool PrivateNatGatewayLimitSetHasBeenSet() const;

                private:

                    /**
                     * 查询返回结果个数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 私网网关配额。
                     */
                    std::vector<PrivateNatGatewayLimit> m_privateNatGatewayLimitSet;
                    bool m_privateNatGatewayLimitSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYLIMITSRESPONSE_H_
