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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETECCNROUTETABLESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETECCNROUTETABLESREQUEST_H_

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
                * DeleteCcnRouteTables请求参数结构体
                */
                class DeleteCcnRouteTablesRequest : public AbstractModel
                {
                public:
                    DeleteCcnRouteTablesRequest();
                    ~DeleteCcnRouteTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的路由表列表。
                     * @return RouteTableId 需要删除的路由表列表。
                     * 
                     */
                    std::vector<std::string> GetRouteTableId() const;

                    /**
                     * 设置需要删除的路由表列表。
                     * @param _routeTableId 需要删除的路由表列表。
                     * 
                     */
                    void SetRouteTableId(const std::vector<std::string>& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                private:

                    /**
                     * 需要删除的路由表列表。
                     */
                    std::vector<std::string> m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETECCNROUTETABLESREQUEST_H_
