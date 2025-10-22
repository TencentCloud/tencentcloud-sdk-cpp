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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESETROUTEPOLICYASSOCIATIONSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESETROUTEPOLICYASSOCIATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RoutePolicyAssociation.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ResetRoutePolicyAssociations请求参数结构体
                */
                class ResetRoutePolicyAssociationsRequest : public AbstractModel
                {
                public:
                    ResetRoutePolicyAssociationsRequest();
                    ~ResetRoutePolicyAssociationsRequest() = default;
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
                     * 获取路由策略绑定对象（RoutePolicyAssociation）列表。注意：路由策略绑定中的路由表实例ID（RouteTableId）需要和该接口的RouteTableId参数保持一致（也就是该接口只支持修改同一个路由表实例下的路有策略绑定关系及优先级）。
                     * @return RoutePolicyAssociationSet 路由策略绑定对象（RoutePolicyAssociation）列表。注意：路由策略绑定中的路由表实例ID（RouteTableId）需要和该接口的RouteTableId参数保持一致（也就是该接口只支持修改同一个路由表实例下的路有策略绑定关系及优先级）。
                     * 
                     */
                    std::vector<RoutePolicyAssociation> GetRoutePolicyAssociationSet() const;

                    /**
                     * 设置路由策略绑定对象（RoutePolicyAssociation）列表。注意：路由策略绑定中的路由表实例ID（RouteTableId）需要和该接口的RouteTableId参数保持一致（也就是该接口只支持修改同一个路由表实例下的路有策略绑定关系及优先级）。
                     * @param _routePolicyAssociationSet 路由策略绑定对象（RoutePolicyAssociation）列表。注意：路由策略绑定中的路由表实例ID（RouteTableId）需要和该接口的RouteTableId参数保持一致（也就是该接口只支持修改同一个路由表实例下的路有策略绑定关系及优先级）。
                     * 
                     */
                    void SetRoutePolicyAssociationSet(const std::vector<RoutePolicyAssociation>& _routePolicyAssociationSet);

                    /**
                     * 判断参数 RoutePolicyAssociationSet 是否已赋值
                     * @return RoutePolicyAssociationSet 是否已赋值
                     * 
                     */
                    bool RoutePolicyAssociationSetHasBeenSet() const;

                private:

                    /**
                     * 路由表实例ID，例如：rtb-azd4dt1c。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 路由策略绑定对象（RoutePolicyAssociation）列表。注意：路由策略绑定中的路由表实例ID（RouteTableId）需要和该接口的RouteTableId参数保持一致（也就是该接口只支持修改同一个路由表实例下的路有策略绑定关系及优先级）。
                     */
                    std::vector<RoutePolicyAssociation> m_routePolicyAssociationSet;
                    bool m_routePolicyAssociationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESETROUTEPOLICYASSOCIATIONSREQUEST_H_
