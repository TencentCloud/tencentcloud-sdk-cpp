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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDIRECTCONNECTGATEWAYROUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDIRECTCONNECTGATEWAYROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeNatGatewayDirectConnectGatewayRoute请求参数结构体
                */
                class DescribeNatGatewayDirectConnectGatewayRouteRequest : public AbstractModel
                {
                public:
                    DescribeNatGatewayDirectConnectGatewayRouteRequest();
                    ~DescribeNatGatewayDirectConnectGatewayRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取nat的唯一标识
                     * @return NatGatewayId nat的唯一标识
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置nat的唯一标识
                     * @param _natGatewayId nat的唯一标识
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取vpc的唯一标识
                     * @return VpcId vpc的唯一标识
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc的唯一标识
                     * @param _vpcId vpc的唯一标识
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
                     * 获取查询NAT网关绑定的路由数量，可选值0-200，默认为10
                     * @return Limit 查询NAT网关绑定的路由数量，可选值0-200，默认为10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询NAT网关绑定的路由数量，可选值0-200，默认为10
                     * @param _limit 查询NAT网关绑定的路由数量，可选值0-200，默认为10
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取数据偏移量，默认为0
                     * @return Offset 数据偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认为0
                     * @param _offset 数据偏移量，默认为0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * nat的唯一标识
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * vpc的唯一标识
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 查询NAT网关绑定的路由数量，可选值0-200，默认为10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYDIRECTCONNECTGATEWAYROUTEREQUEST_H_
