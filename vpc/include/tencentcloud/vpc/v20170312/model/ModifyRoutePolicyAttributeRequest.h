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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTEPOLICYATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTEPOLICYATTRIBUTEREQUEST_H_

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
                * ModifyRoutePolicyAttribute请求参数结构体
                */
                class ModifyRoutePolicyAttributeRequest : public AbstractModel
                {
                public:
                    ModifyRoutePolicyAttributeRequest();
                    ~ModifyRoutePolicyAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由接收策略实例ID，例如：rrp-dz0219jq。
                     * @return RoutePolicyId 路由接收策略实例ID，例如：rrp-dz0219jq。
                     * 
                     */
                    std::string GetRoutePolicyId() const;

                    /**
                     * 设置路由接收策略实例ID，例如：rrp-dz0219jq。
                     * @param _routePolicyId 路由接收策略实例ID，例如：rrp-dz0219jq。
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
                     * 获取路由接收策略名称。
                     * @return RoutePolicyName 路由接收策略名称。
                     * 
                     */
                    std::string GetRoutePolicyName() const;

                    /**
                     * 设置路由接收策略名称。
                     * @param _routePolicyName 路由接收策略名称。
                     * 
                     */
                    void SetRoutePolicyName(const std::string& _routePolicyName);

                    /**
                     * 判断参数 RoutePolicyName 是否已赋值
                     * @return RoutePolicyName 是否已赋值
                     * 
                     */
                    bool RoutePolicyNameHasBeenSet() const;

                    /**
                     * 获取路由接收策略描述。
                     * @return RoutePolicyDescription 路由接收策略描述。
                     * 
                     */
                    std::string GetRoutePolicyDescription() const;

                    /**
                     * 设置路由接收策略描述。
                     * @param _routePolicyDescription 路由接收策略描述。
                     * 
                     */
                    void SetRoutePolicyDescription(const std::string& _routePolicyDescription);

                    /**
                     * 判断参数 RoutePolicyDescription 是否已赋值
                     * @return RoutePolicyDescription 是否已赋值
                     * 
                     */
                    bool RoutePolicyDescriptionHasBeenSet() const;

                private:

                    /**
                     * 路由接收策略实例ID，例如：rrp-dz0219jq。
                     */
                    std::string m_routePolicyId;
                    bool m_routePolicyIdHasBeenSet;

                    /**
                     * 路由接收策略名称。
                     */
                    std::string m_routePolicyName;
                    bool m_routePolicyNameHasBeenSet;

                    /**
                     * 路由接收策略描述。
                     */
                    std::string m_routePolicyDescription;
                    bool m_routePolicyDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTEPOLICYATTRIBUTEREQUEST_H_
