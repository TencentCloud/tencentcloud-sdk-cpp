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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTECONFLICTSRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTECONFLICTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/RouteConflict.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeRouteConflicts返回参数结构体
                */
                class DescribeRouteConflictsResponse : public AbstractModel
                {
                public:
                    DescribeRouteConflictsResponse();
                    ~DescribeRouteConflictsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取路由策略冲突列表
                     * @return RouteConflictSet 路由策略冲突列表
                     * 
                     */
                    std::vector<RouteConflict> GetRouteConflictSet() const;

                    /**
                     * 判断参数 RouteConflictSet 是否已赋值
                     * @return RouteConflictSet 是否已赋值
                     * 
                     */
                    bool RouteConflictSetHasBeenSet() const;

                private:

                    /**
                     * 路由策略冲突列表
                     */
                    std::vector<RouteConflict> m_routeConflictSet;
                    bool m_routeConflictSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTECONFLICTSRESPONSE_H_
