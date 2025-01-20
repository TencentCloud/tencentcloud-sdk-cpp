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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEHIGHPRIORITYROUTETABLEASSOCIATIONREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEHIGHPRIORITYROUTETABLEASSOCIATIONREQUEST_H_

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
                * ReplaceHighPriorityRouteTableAssociation请求参数结构体
                */
                class ReplaceHighPriorityRouteTableAssociationRequest : public AbstractModel
                {
                public:
                    ReplaceHighPriorityRouteTableAssociationRequest();
                    ~ReplaceHighPriorityRouteTableAssociationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取高优路由表唯一 ID。
                     * @return HighPriorityRouteTableId 高优路由表唯一 ID。
                     * 
                     */
                    std::string GetHighPriorityRouteTableId() const;

                    /**
                     * 设置高优路由表唯一 ID。
                     * @param _highPriorityRouteTableId 高优路由表唯一 ID。
                     * 
                     */
                    void SetHighPriorityRouteTableId(const std::string& _highPriorityRouteTableId);

                    /**
                     * 判断参数 HighPriorityRouteTableId 是否已赋值
                     * @return HighPriorityRouteTableId 是否已赋值
                     * 
                     */
                    bool HighPriorityRouteTableIdHasBeenSet() const;

                    /**
                     * 获取子网唯一 ID
                     * @return SubnetId 子网唯一 ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网唯一 ID
                     * @param _subnetId 子网唯一 ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * 高优路由表唯一 ID。
                     */
                    std::string m_highPriorityRouteTableId;
                    bool m_highPriorityRouteTableIdHasBeenSet;

                    /**
                     * 子网唯一 ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEHIGHPRIORITYROUTETABLEASSOCIATIONREQUEST_H_
