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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTEPOLICYENTRIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTEPOLICYENTRIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RoutePolicyEntry.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateRoutePolicyEntries请求参数结构体
                */
                class CreateRoutePolicyEntriesRequest : public AbstractModel
                {
                public:
                    CreateRoutePolicyEntriesRequest();
                    ~CreateRoutePolicyEntriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由接收策略实例ID。
                     * @return RoutePolicyId 路由接收策略实例ID。
                     * 
                     */
                    std::string GetRoutePolicyId() const;

                    /**
                     * 设置路由接收策略实例ID。
                     * @param _routePolicyId 路由接收策略实例ID。
                     * 
                     */
                    void SetRoutePolicyId(const std::string& _routePolicyId);

                    /**
                     * 判断参数 RoutePolicyId 是否已赋值
                     * @return RoutePolicyId 是否已赋值
                     * 
                     */
                    bool RoutePolicyIdHasBeenSet() const;

                    /**
                     * 获取路由接收策略条目列表。
                     * @return RoutePolicyEntrySet 路由接收策略条目列表。
                     * 
                     */
                    std::vector<RoutePolicyEntry> GetRoutePolicyEntrySet() const;

                    /**
                     * 设置路由接收策略条目列表。
                     * @param _routePolicyEntrySet 路由接收策略条目列表。
                     * 
                     */
                    void SetRoutePolicyEntrySet(const std::vector<RoutePolicyEntry>& _routePolicyEntrySet);

                    /**
                     * 判断参数 RoutePolicyEntrySet 是否已赋值
                     * @return RoutePolicyEntrySet 是否已赋值
                     * 
                     */
                    bool RoutePolicyEntrySetHasBeenSet() const;

                private:

                    /**
                     * 路由接收策略实例ID。
                     */
                    std::string m_routePolicyId;
                    bool m_routePolicyIdHasBeenSet;

                    /**
                     * 路由接收策略条目列表。
                     */
                    std::vector<RoutePolicyEntry> m_routePolicyEntrySet;
                    bool m_routePolicyEntrySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTEPOLICYENTRIESREQUEST_H_
