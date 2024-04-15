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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERROUTETABLEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERROUTETABLEREQUEST_H_

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
                * CreateClusterRouteTable请求参数结构体
                */
                class CreateClusterRouteTableRequest : public AbstractModel
                {
                public:
                    CreateClusterRouteTableRequest();
                    ~CreateClusterRouteTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由表名称，一般为集群ID
                     * @return RouteTableName 路由表名称，一般为集群ID
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置路由表名称，一般为集群ID
                     * @param _routeTableName 路由表名称，一般为集群ID
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

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

                    /**
                     * 获取是否忽略CIDR与 vpc 路由表的冲突， 0 表示不忽略，1表示忽略。默认不忽略
                     * @return IgnoreClusterCidrConflict 是否忽略CIDR与 vpc 路由表的冲突， 0 表示不忽略，1表示忽略。默认不忽略
                     * 
                     */
                    int64_t GetIgnoreClusterCidrConflict() const;

                    /**
                     * 设置是否忽略CIDR与 vpc 路由表的冲突， 0 表示不忽略，1表示忽略。默认不忽略
                     * @param _ignoreClusterCidrConflict 是否忽略CIDR与 vpc 路由表的冲突， 0 表示不忽略，1表示忽略。默认不忽略
                     * 
                     */
                    void SetIgnoreClusterCidrConflict(const int64_t& _ignoreClusterCidrConflict);

                    /**
                     * 判断参数 IgnoreClusterCidrConflict 是否已赋值
                     * @return IgnoreClusterCidrConflict 是否已赋值
                     * 
                     */
                    bool IgnoreClusterCidrConflictHasBeenSet() const;

                private:

                    /**
                     * 路由表名称，一般为集群ID
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

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

                    /**
                     * 是否忽略CIDR与 vpc 路由表的冲突， 0 表示不忽略，1表示忽略。默认不忽略
                     */
                    int64_t m_ignoreClusterCidrConflict;
                    bool m_ignoreClusterCidrConflictHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERROUTETABLEREQUEST_H_
