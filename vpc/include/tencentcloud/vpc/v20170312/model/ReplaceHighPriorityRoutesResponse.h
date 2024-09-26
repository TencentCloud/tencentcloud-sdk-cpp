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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEHIGHPRIORITYROUTESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEHIGHPRIORITYROUTESRESPONSE_H_

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
                * ReplaceHighPriorityRoutes返回参数结构体
                */
                class ReplaceHighPriorityRoutesResponse : public AbstractModel
                {
                public:
                    ReplaceHighPriorityRoutesResponse();
                    ~ReplaceHighPriorityRoutesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取新的高优路由表条目列表。
                     * @return NewHighPriorityRouteSet 新的高优路由表条目列表。
                     * 
                     */
                    std::vector<HighPriorityRoute> GetNewHighPriorityRouteSet() const;

                    /**
                     * 判断参数 NewHighPriorityRouteSet 是否已赋值
                     * @return NewHighPriorityRouteSet 是否已赋值
                     * 
                     */
                    bool NewHighPriorityRouteSetHasBeenSet() const;

                    /**
                     * 获取旧的高优路由表条目列表。
                     * @return OldHighPriorityRouteSet 旧的高优路由表条目列表。
                     * 
                     */
                    std::vector<HighPriorityRoute> GetOldHighPriorityRouteSet() const;

                    /**
                     * 判断参数 OldHighPriorityRouteSet 是否已赋值
                     * @return OldHighPriorityRouteSet 是否已赋值
                     * 
                     */
                    bool OldHighPriorityRouteSetHasBeenSet() const;

                private:

                    /**
                     * 新的高优路由表条目列表。
                     */
                    std::vector<HighPriorityRoute> m_newHighPriorityRouteSet;
                    bool m_newHighPriorityRouteSetHasBeenSet;

                    /**
                     * 旧的高优路由表条目列表。
                     */
                    std::vector<HighPriorityRoute> m_oldHighPriorityRouteSet;
                    bool m_oldHighPriorityRouteSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEHIGHPRIORITYROUTESRESPONSE_H_
