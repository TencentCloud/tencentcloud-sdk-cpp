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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEROUTETABLECONFLICTSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEROUTETABLECONFLICTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeRouteTableConflicts请求参数结构体
                */
                class DescribeRouteTableConflictsRequest : public AbstractModel
                {
                public:
                    DescribeRouteTableConflictsRequest();
                    ~DescribeRouteTableConflictsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由表CIDR
                     * @return RouteTableCidrBlock 路由表CIDR
                     * 
                     */
                    std::string GetRouteTableCidrBlock() const;

                    /**
                     * 设置路由表CIDR
                     * @param _routeTableCidrBlock 路由表CIDR
                     * 
                     */
                    void SetRouteTableCidrBlock(const std::string& _routeTableCidrBlock);

                    /**
                     * 判断参数 RouteTableCidrBlock 是否已赋值
                     * @return RouteTableCidrBlock 是否已赋值
                     * 
                     */
                    bool RouteTableCidrBlockHasBeenSet() const;

                    /**
                     * 获取路由表绑定的VPC
                     * @return VpcId 路由表绑定的VPC
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置路由表绑定的VPC
                     * @param _vpcId 路由表绑定的VPC
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * 路由表CIDR
                     */
                    std::string m_routeTableCidrBlock;
                    bool m_routeTableCidrBlockHasBeenSet;

                    /**
                     * 路由表绑定的VPC
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEROUTETABLECONFLICTSREQUEST_H_
