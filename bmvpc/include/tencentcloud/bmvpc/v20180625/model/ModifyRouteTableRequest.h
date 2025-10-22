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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYROUTETABLEREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYROUTETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyRouteTable请求参数结构体
                */
                class ModifyRouteTableRequest : public AbstractModel
                {
                public:
                    ModifyRouteTableRequest();
                    ~ModifyRouteTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由表ID
                     * @return RouteTableId 路由表ID
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表ID
                     * @param _routeTableId 路由表ID
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
                     * 获取路由表名称
                     * @return RouteTableName 路由表名称
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置路由表名称
                     * @param _routeTableName 路由表名称
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
                     * 路由表ID
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 路由表名称
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYROUTETABLEREQUEST_H_
