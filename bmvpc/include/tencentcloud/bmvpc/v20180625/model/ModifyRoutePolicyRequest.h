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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYROUTEPOLICYREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYROUTEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/RoutePolicy.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyRoutePolicy请求参数结构体
                */
                class ModifyRoutePolicyRequest : public AbstractModel
                {
                public:
                    ModifyRoutePolicyRequest();
                    ~ModifyRoutePolicyRequest() = default;
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
                     * 获取修改的路由
                     * @return RoutePolicy 修改的路由
                     * 
                     */
                    RoutePolicy GetRoutePolicy() const;

                    /**
                     * 设置修改的路由
                     * @param _routePolicy 修改的路由
                     * 
                     */
                    void SetRoutePolicy(const RoutePolicy& _routePolicy);

                    /**
                     * 判断参数 RoutePolicy 是否已赋值
                     * @return RoutePolicy 是否已赋值
                     * 
                     */
                    bool RoutePolicyHasBeenSet() const;

                private:

                    /**
                     * 路由表ID
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 修改的路由
                     */
                    RoutePolicy m_routePolicy;
                    bool m_routePolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYROUTEPOLICYREQUEST_H_
