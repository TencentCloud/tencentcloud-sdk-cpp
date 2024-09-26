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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEHIGHPRIORITYROUTETABLESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEHIGHPRIORITYROUTETABLESREQUEST_H_

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
                * DeleteHighPriorityRouteTables请求参数结构体
                */
                class DeleteHighPriorityRouteTablesRequest : public AbstractModel
                {
                public:
                    DeleteHighPriorityRouteTablesRequest();
                    ~DeleteHighPriorityRouteTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取高优路由表表唯一ID 列表。
                     * @return HighPriorityRouteTableIds 高优路由表表唯一ID 列表。
                     * 
                     */
                    std::vector<std::string> GetHighPriorityRouteTableIds() const;

                    /**
                     * 设置高优路由表表唯一ID 列表。
                     * @param _highPriorityRouteTableIds 高优路由表表唯一ID 列表。
                     * 
                     */
                    void SetHighPriorityRouteTableIds(const std::vector<std::string>& _highPriorityRouteTableIds);

                    /**
                     * 判断参数 HighPriorityRouteTableIds 是否已赋值
                     * @return HighPriorityRouteTableIds 是否已赋值
                     * 
                     */
                    bool HighPriorityRouteTableIdsHasBeenSet() const;

                private:

                    /**
                     * 高优路由表表唯一ID 列表。
                     */
                    std::vector<std::string> m_highPriorityRouteTableIds;
                    bool m_highPriorityRouteTableIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEHIGHPRIORITYROUTETABLESREQUEST_H_
