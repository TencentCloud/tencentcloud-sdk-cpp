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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ROUTERSETTINGWITHOUTFALLBACK_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ROUTERSETTINGWITHOUTFALLBACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 路由设置
                */
                class RouterSettingWithoutFallBack : public AbstractModel
                {
                public:
                    RouterSettingWithoutFallBack();
                    ~RouterSettingWithoutFallBack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
                     * @return RoutingStrategy <p>路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
                     * 
                     */
                    std::string GetRoutingStrategy() const;

                    /**
                     * 设置<p>路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
                     * @param _routingStrategy <p>路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
                     * 
                     */
                    void SetRoutingStrategy(const std::string& _routingStrategy);

                    /**
                     * 判断参数 RoutingStrategy 是否已赋值
                     * @return RoutingStrategy 是否已赋值
                     * 
                     */
                    bool RoutingStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>路由策略</p><p>枚举值：</p><ul><li>SimpleShuffle： 简单随机路由</li><li>LeastBusy： 最低繁忙路由</li><li>LatencyBasedRouting： 最低延迟路由</li><li>UsageBasedRouting： 用量均衡路由</li><li>CostBasedRouting： 最低积分路由</li></ul>
                     */
                    std::string m_routingStrategy;
                    bool m_routingStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ROUTERSETTINGWITHOUTFALLBACK_H_
