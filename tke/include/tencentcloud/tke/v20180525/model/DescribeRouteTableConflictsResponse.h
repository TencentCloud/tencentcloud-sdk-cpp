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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEROUTETABLECONFLICTSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEROUTETABLECONFLICTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/RouteTableConflict.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeRouteTableConflicts返回参数结构体
                */
                class DescribeRouteTableConflictsResponse : public AbstractModel
                {
                public:
                    DescribeRouteTableConflictsResponse();
                    ~DescribeRouteTableConflictsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取路由表是否冲突。
                     * @return HasConflict 路由表是否冲突。
                     * 
                     */
                    bool GetHasConflict() const;

                    /**
                     * 判断参数 HasConflict 是否已赋值
                     * @return HasConflict 是否已赋值
                     * 
                     */
                    bool HasConflictHasBeenSet() const;

                    /**
                     * 获取路由表冲突列表。
                     * @return RouteTableConflictSet 路由表冲突列表。
                     * 
                     */
                    std::vector<RouteTableConflict> GetRouteTableConflictSet() const;

                    /**
                     * 判断参数 RouteTableConflictSet 是否已赋值
                     * @return RouteTableConflictSet 是否已赋值
                     * 
                     */
                    bool RouteTableConflictSetHasBeenSet() const;

                private:

                    /**
                     * 路由表是否冲突。
                     */
                    bool m_hasConflict;
                    bool m_hasConflictHasBeenSet;

                    /**
                     * 路由表冲突列表。
                     */
                    std::vector<RouteTableConflict> m_routeTableConflictSet;
                    bool m_routeTableConflictSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEROUTETABLECONFLICTSRESPONSE_H_
