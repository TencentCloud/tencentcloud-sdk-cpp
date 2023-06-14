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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTECONFLICTSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTECONFLICTSREQUEST_H_

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
                * DescribeRouteConflicts请求参数结构体
                */
                class DescribeRouteConflictsRequest : public AbstractModel
                {
                public:
                    DescribeRouteConflictsRequest();
                    ~DescribeRouteConflictsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由表实例ID，例如：rtb-azd4dt1c。
                     * @return RouteTableId 路由表实例ID，例如：rtb-azd4dt1c。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表实例ID，例如：rtb-azd4dt1c。
                     * @param _routeTableId 路由表实例ID，例如：rtb-azd4dt1c。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取要检查的与之冲突的目的端列表。
                     * @return DestinationCidrBlocks 要检查的与之冲突的目的端列表。
                     * 
                     */
                    std::vector<std::string> GetDestinationCidrBlocks() const;

                    /**
                     * 设置要检查的与之冲突的目的端列表。
                     * @param _destinationCidrBlocks 要检查的与之冲突的目的端列表。
                     * 
                     */
                    void SetDestinationCidrBlocks(const std::vector<std::string>& _destinationCidrBlocks);

                    /**
                     * 判断参数 DestinationCidrBlocks 是否已赋值
                     * @return DestinationCidrBlocks 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlocksHasBeenSet() const;

                private:

                    /**
                     * 路由表实例ID，例如：rtb-azd4dt1c。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 要检查的与之冲突的目的端列表。
                     */
                    std::vector<std::string> m_destinationCidrBlocks;
                    bool m_destinationCidrBlocksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTECONFLICTSREQUEST_H_
