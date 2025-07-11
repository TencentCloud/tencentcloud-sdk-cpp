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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTETABLEASSOCIATEDINSTANCESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTETABLEASSOCIATEDINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/InstanceBind.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeRouteTableAssociatedInstances返回参数结构体
                */
                class DescribeRouteTableAssociatedInstancesResponse : public AbstractModel
                {
                public:
                    DescribeRouteTableAssociatedInstancesResponse();
                    ~DescribeRouteTableAssociatedInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询到的绑定路由表的实例数量。
                     * @return TotalCount 查询到的绑定路由表的实例数量。
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
                     * 获取绑定信息。
                     * @return InstanceBindSet 绑定信息。
                     * 
                     */
                    std::vector<InstanceBind> GetInstanceBindSet() const;

                    /**
                     * 判断参数 InstanceBindSet 是否已赋值
                     * @return InstanceBindSet 是否已赋值
                     * 
                     */
                    bool InstanceBindSetHasBeenSet() const;

                private:

                    /**
                     * 查询到的绑定路由表的实例数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 绑定信息。
                     */
                    std::vector<InstanceBind> m_instanceBindSet;
                    bool m_instanceBindSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTETABLEASSOCIATEDINSTANCESRESPONSE_H_
