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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLEATTRIBUTEREQUEST_H_

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
                * ModifyRouteTableAttribute请求参数结构体
                */
                class ModifyRouteTableAttributeRequest : public AbstractModel
                {
                public:
                    ModifyRouteTableAttributeRequest();
                    ~ModifyRouteTableAttributeRequest() = default;
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
                     * 获取路由表名称。
                     * @return RouteTableName 路由表名称。
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置路由表名称。
                     * @param _routeTableName 路由表名称。
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

                private:

                    /**
                     * 路由表实例ID，例如：rtb-azd4dt1c。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 路由表名称。
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLEATTRIBUTEREQUEST_H_
