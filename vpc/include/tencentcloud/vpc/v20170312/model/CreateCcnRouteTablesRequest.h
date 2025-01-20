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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNROUTETABLESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNROUTETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnBatchRouteTable.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateCcnRouteTables请求参数结构体
                */
                class CreateCcnRouteTablesRequest : public AbstractModel
                {
                public:
                    CreateCcnRouteTablesRequest();
                    ~CreateCcnRouteTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要创建的路由表列表。
                     * @return RouteTable 需要创建的路由表列表。
                     * 
                     */
                    std::vector<CcnBatchRouteTable> GetRouteTable() const;

                    /**
                     * 设置需要创建的路由表列表。
                     * @param _routeTable 需要创建的路由表列表。
                     * 
                     */
                    void SetRouteTable(const std::vector<CcnBatchRouteTable>& _routeTable);

                    /**
                     * 判断参数 RouteTable 是否已赋值
                     * @return RouteTable 是否已赋值
                     * 
                     */
                    bool RouteTableHasBeenSet() const;

                private:

                    /**
                     * 需要创建的路由表列表。
                     */
                    std::vector<CcnBatchRouteTable> m_routeTable;
                    bool m_routeTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNROUTETABLESREQUEST_H_
