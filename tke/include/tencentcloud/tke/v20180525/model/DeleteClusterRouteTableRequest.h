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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERROUTETABLEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERROUTETABLEREQUEST_H_

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
                * DeleteClusterRouteTable请求参数结构体
                */
                class DeleteClusterRouteTableRequest : public AbstractModel
                {
                public:
                    DeleteClusterRouteTableRequest();
                    ~DeleteClusterRouteTableRequest() = default;
                    std::string ToJsonString() const;


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
                     * 路由表名称
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERROUTETABLEREQUEST_H_
