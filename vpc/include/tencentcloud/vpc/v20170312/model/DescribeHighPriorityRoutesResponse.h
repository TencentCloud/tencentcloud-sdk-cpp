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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHIGHPRIORITYROUTESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHIGHPRIORITYROUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/HighPriorityRoute.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeHighPriorityRoutes返回参数结构体
                */
                class DescribeHighPriorityRoutesResponse : public AbstractModel
                {
                public:
                    DescribeHighPriorityRoutesResponse();
                    ~DescribeHighPriorityRoutesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取高优路由表条目信息。
                     * @return HighPriorityRouteSet 高优路由表条目信息。
                     * 
                     */
                    std::vector<HighPriorityRoute> GetHighPriorityRouteSet() const;

                    /**
                     * 判断参数 HighPriorityRouteSet 是否已赋值
                     * @return HighPriorityRouteSet 是否已赋值
                     * 
                     */
                    bool HighPriorityRouteSetHasBeenSet() const;

                    /**
                     * 获取高优路由表条目个数。
                     * @return TotalCount 高优路由表条目个数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 高优路由表条目信息。
                     */
                    std::vector<HighPriorityRoute> m_highPriorityRouteSet;
                    bool m_highPriorityRouteSetHasBeenSet;

                    /**
                     * 高优路由表条目个数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHIGHPRIORITYROUTESRESPONSE_H_
