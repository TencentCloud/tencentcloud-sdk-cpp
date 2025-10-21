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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEROUTEPOLICYASSOCIATIONSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEROUTEPOLICYASSOCIATIONSREQUEST_H_

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
                * DeleteRoutePolicyAssociations请求参数结构体
                */
                class DeleteRoutePolicyAssociationsRequest : public AbstractModel
                {
                public:
                    DeleteRoutePolicyAssociationsRequest();
                    ~DeleteRoutePolicyAssociationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由策略绑定对象列表，删除路由策略绑定时，仅需使用RoutePolicyAssociation的RouteTableId字段和RoutePolicyId字段（不需要填写Priority字段）。
                     * @return RoutePolicyAssociationSet 路由策略绑定对象列表，删除路由策略绑定时，仅需使用RoutePolicyAssociation的RouteTableId字段和RoutePolicyId字段（不需要填写Priority字段）。
                     * 
                     */
                    std::vector<RoutePolicyAssociation> GetRoutePolicyAssociationSet() const;

                    /**
                     * 设置路由策略绑定对象列表，删除路由策略绑定时，仅需使用RoutePolicyAssociation的RouteTableId字段和RoutePolicyId字段（不需要填写Priority字段）。
                     * @param _routePolicyAssociationSet 路由策略绑定对象列表，删除路由策略绑定时，仅需使用RoutePolicyAssociation的RouteTableId字段和RoutePolicyId字段（不需要填写Priority字段）。
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
                     * 路由策略绑定对象列表，删除路由策略绑定时，仅需使用RoutePolicyAssociation的RouteTableId字段和RoutePolicyId字段（不需要填写Priority字段）。
                     */
                    std::vector<RoutePolicyAssociation> m_routePolicyAssociationSet;
                    bool m_routePolicyAssociationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEROUTEPOLICYASSOCIATIONSREQUEST_H_
