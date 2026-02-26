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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNPOLICYBASEDROUTINGNEXTHOPRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNPOLICYBASEDROUTINGNEXTHOPRESPONSE_H_

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
                * CreateCcnPolicyBasedRoutingNextHop返回参数结构体
                */
                class CreateCcnPolicyBasedRoutingNextHopResponse : public AbstractModel
                {
                public:
                    CreateCcnPolicyBasedRoutingNextHopResponse();
                    ~CreateCcnPolicyBasedRoutingNextHopResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略路由下一跳ID
                     * @return PolicyBasedRoutingNextHopId 策略路由下一跳ID
                     * 
                     */
                    std::string GetPolicyBasedRoutingNextHopId() const;

                    /**
                     * 判断参数 PolicyBasedRoutingNextHopId 是否已赋值
                     * @return PolicyBasedRoutingNextHopId 是否已赋值
                     * 
                     */
                    bool PolicyBasedRoutingNextHopIdHasBeenSet() const;

                private:

                    /**
                     * 策略路由下一跳ID
                     */
                    std::string m_policyBasedRoutingNextHopId;
                    bool m_policyBasedRoutingNextHopIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATECCNPOLICYBASEDROUTINGNEXTHOPRESPONSE_H_
