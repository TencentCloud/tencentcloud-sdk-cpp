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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBENATGATEWAYSRESPONSE_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBENATGATEWAYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/NatGatewayInfo.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
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
                     * 获取NAT网关信息列表
                     * @return NatGatewayInfoSet NAT网关信息列表
                     * 
                     */
                    std::vector<NatGatewayInfo> GetNatGatewayInfoSet() const;

                    /**
                     * 判断参数 NatGatewayInfoSet 是否已赋值
                     * @return NatGatewayInfoSet 是否已赋值
                     * 
                     */
                    bool NatGatewayInfoSetHasBeenSet() const;

                    /**
                     * 获取总数目
                     * @return TotalCount 总数目
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
                     * NAT网关信息列表
                     */
                    std::vector<NatGatewayInfo> m_natGatewayInfoSet;
                    bool m_natGatewayInfoSetHasBeenSet;

                    /**
                     * 总数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBENATGATEWAYSRESPONSE_H_
