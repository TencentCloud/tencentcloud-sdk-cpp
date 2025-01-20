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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNROUTETABLESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNROUTETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyCcnRouteTables请求参数结构体
                */
                class ModifyCcnRouteTablesRequest : public AbstractModel
                {
                public:
                    ModifyCcnRouteTablesRequest();
                    ~ModifyCcnRouteTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的路由表列表。
                     * @return RouteTableInfo 需要修改的路由表列表。
                     * 
                     */
                    std::vector<ModifyRouteTableInfo> GetRouteTableInfo() const;

                    /**
                     * 设置需要修改的路由表列表。
                     * @param _routeTableInfo 需要修改的路由表列表。
                     * 
                     */
                    void SetRouteTableInfo(const std::vector<ModifyRouteTableInfo>& _routeTableInfo);

                    /**
                     * 判断参数 RouteTableInfo 是否已赋值
                     * @return RouteTableInfo 是否已赋值
                     * 
                     */
                    bool RouteTableInfoHasBeenSet() const;

                private:

                    /**
                     * 需要修改的路由表列表。
                     */
                    std::vector<ModifyRouteTableInfo> m_routeTableInfo;
                    bool m_routeTableInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNROUTETABLESREQUEST_H_
