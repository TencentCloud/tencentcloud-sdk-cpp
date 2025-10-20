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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTEPOLICYASSOCIATIONSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTEPOLICYASSOCIATIONSREQUEST_H_

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
                * ReplaceRoutePolicyAssociations请求参数结构体
                */
                class ReplaceRoutePolicyAssociationsRequest : public AbstractModel
                {
                public:
                    ReplaceRoutePolicyAssociationsRequest();
                    ~ReplaceRoutePolicyAssociationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由接收策略绑定对象列表。需要指定路由接收策略实例ID（RoutePolicyId）和路由表实例ID（RouteTableId）。
                     * @return RoutePolicyAssociationSet 路由接收策略绑定对象列表。需要指定路由接收策略实例ID（RoutePolicyId）和路由表实例ID（RouteTableId）。
                     * 
                     */
                    std::vector<RoutePolicyAssociation> GetRoutePolicyAssociationSet() const;

                    /**
                     * 设置路由接收策略绑定对象列表。需要指定路由接收策略实例ID（RoutePolicyId）和路由表实例ID（RouteTableId）。
                     * @param _routePolicyAssociationSet 路由接收策略绑定对象列表。需要指定路由接收策略实例ID（RoutePolicyId）和路由表实例ID（RouteTableId）。
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
                     * 路由接收策略绑定对象列表。需要指定路由接收策略实例ID（RoutePolicyId）和路由表实例ID（RouteTableId）。
                     */
                    std::vector<RoutePolicyAssociation> m_routePolicyAssociationSet;
                    bool m_routePolicyAssociationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTEPOLICYASSOCIATIONSREQUEST_H_
