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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTETABLESRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTETABLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/RouteTable.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeRouteTables返回参数结构体
                */
                class DescribeRouteTablesResponse : public AbstractModel
                {
                public:
                    DescribeRouteTablesResponse();
                    ~DescribeRouteTablesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的实例数量
                     * @return TotalCount 符合条件的实例数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取路由表列表
                     * @return RouteTableSet 路由表列表
                     * 
                     */
                    std::vector<RouteTable> GetRouteTableSet() const;

                    /**
                     * 判断参数 RouteTableSet 是否已赋值
                     * @return RouteTableSet 是否已赋值
                     * 
                     */
                    bool RouteTableSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的实例数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 路由表列表
                     */
                    std::vector<RouteTable> m_routeTableSet;
                    bool m_routeTableSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTETABLESRESPONSE_H_
