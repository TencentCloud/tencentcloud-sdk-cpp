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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTESWITHROUTEPOLICYROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTESWITHROUTEPOLICYROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 匹配路由接收策略对象
                */
                class ReplaceRoutesWithRoutePolicyRoute : public AbstractModel
                {
                public:
                    ReplaceRoutesWithRoutePolicyRoute();
                    ~ReplaceRoutesWithRoutePolicyRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由唯一策略ID。
                     * @return RouteItemId 路由唯一策略ID。
                     * 
                     */
                    std::string GetRouteItemId() const;

                    /**
                     * 设置路由唯一策略ID。
                     * @param _routeItemId 路由唯一策略ID。
                     * 
                     */
                    void SetRouteItemId(const std::string& _routeItemId);

                    /**
                     * 判断参数 RouteItemId 是否已赋值
                     * @return RouteItemId 是否已赋值
                     * 
                     */
                    bool RouteItemIdHasBeenSet() const;

                    /**
                     * 获取匹配路由接收策略标记。
                     * @return ForceMatchPolicy 匹配路由接收策略标记。
                     * 
                     */
                    bool GetForceMatchPolicy() const;

                    /**
                     * 设置匹配路由接收策略标记。
                     * @param _forceMatchPolicy 匹配路由接收策略标记。
                     * 
                     */
                    void SetForceMatchPolicy(const bool& _forceMatchPolicy);

                    /**
                     * 判断参数 ForceMatchPolicy 是否已赋值
                     * @return ForceMatchPolicy 是否已赋值
                     * 
                     */
                    bool ForceMatchPolicyHasBeenSet() const;

                private:

                    /**
                     * 路由唯一策略ID。
                     */
                    std::string m_routeItemId;
                    bool m_routeItemIdHasBeenSet;

                    /**
                     * 匹配路由接收策略标记。
                     */
                    bool m_forceMatchPolicy;
                    bool m_forceMatchPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_REPLACEROUTESWITHROUTEPOLICYROUTE_H_
