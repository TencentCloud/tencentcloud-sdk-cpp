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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REALTIMECONFIG_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REALTIMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RealtimeRoutingStrategyArgs.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Realtime 路由配置。支持 SimpleShuffle、LeastBusy、CostBasedRouting，创建时默认 SimpleShuffle、NumRetries=2。修改时仅更新显式传入字段；切换策略时清理旧策略参数。所有字段选填，不接受显式 null。
                */
                class RealtimeConfig : public AbstractModel
                {
                public:
                    RealtimeConfig();
                    ~RealtimeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Realtime 模型路由策略。</p><p>入参限制：仅支持 SimpleShuffle（随机）、LeastBusy（最少繁忙）、CostBasedRouting（最低成本）。</p><p>默认值：SimpleShuffle</p><p>修改时未传保留旧策略；切换策略会清理旧策略的 RoutingStrategyArgs。不接受 null。</p>
                     * @return RoutingStrategy <p>Realtime 模型路由策略。</p><p>入参限制：仅支持 SimpleShuffle（随机）、LeastBusy（最少繁忙）、CostBasedRouting（最低成本）。</p><p>默认值：SimpleShuffle</p><p>修改时未传保留旧策略；切换策略会清理旧策略的 RoutingStrategyArgs。不接受 null。</p>
                     * 
                     */
                    std::string GetRoutingStrategy() const;

                    /**
                     * 设置<p>Realtime 模型路由策略。</p><p>入参限制：仅支持 SimpleShuffle（随机）、LeastBusy（最少繁忙）、CostBasedRouting（最低成本）。</p><p>默认值：SimpleShuffle</p><p>修改时未传保留旧策略；切换策略会清理旧策略的 RoutingStrategyArgs。不接受 null。</p>
                     * @param _routingStrategy <p>Realtime 模型路由策略。</p><p>入参限制：仅支持 SimpleShuffle（随机）、LeastBusy（最少繁忙）、CostBasedRouting（最低成本）。</p><p>默认值：SimpleShuffle</p><p>修改时未传保留旧策略；切换策略会清理旧策略的 RoutingStrategyArgs。不接受 null。</p>
                     * 
                     */
                    void SetRoutingStrategy(const std::string& _routingStrategy);

                    /**
                     * 判断参数 RoutingStrategy 是否已赋值
                     * @return RoutingStrategy 是否已赋值
                     * 
                     */
                    bool RoutingStrategyHasBeenSet() const;

                    /**
                     * 获取<p>Realtime 路由重试次数。</p><p>取值范围：[0, 5]</p><p>默认值：2</p><p>仅接受整数，0 表示不重试。修改时未提供此字段则保留旧值，不接受 null。</p>
                     * @return NumRetries <p>Realtime 路由重试次数。</p><p>取值范围：[0, 5]</p><p>默认值：2</p><p>仅接受整数，0 表示不重试。修改时未提供此字段则保留旧值，不接受 null。</p>
                     * 
                     */
                    uint64_t GetNumRetries() const;

                    /**
                     * 设置<p>Realtime 路由重试次数。</p><p>取值范围：[0, 5]</p><p>默认值：2</p><p>仅接受整数，0 表示不重试。修改时未提供此字段则保留旧值，不接受 null。</p>
                     * @param _numRetries <p>Realtime 路由重试次数。</p><p>取值范围：[0, 5]</p><p>默认值：2</p><p>仅接受整数，0 表示不重试。修改时未提供此字段则保留旧值，不接受 null。</p>
                     * 
                     */
                    void SetNumRetries(const uint64_t& _numRetries);

                    /**
                     * 判断参数 NumRetries 是否已赋值
                     * @return NumRetries 是否已赋值
                     * 
                     */
                    bool NumRetriesHasBeenSet() const;

                    /**
                     * 获取<p>Realtime 路由策略的附加参数。</p><p>入参限制：LeastBusy 仅接受 LeastBusyBuffer；CostBasedRouting 仅接受 LowestCostBuffer；SimpleShuffle 仅接受空对象。</p><p>修改时未提供的参数保留旧值，切换策略时清理旧参数；适用的 Buffer 默认 0。不接受 null。</p>
                     * @return RoutingStrategyArgs <p>Realtime 路由策略的附加参数。</p><p>入参限制：LeastBusy 仅接受 LeastBusyBuffer；CostBasedRouting 仅接受 LowestCostBuffer；SimpleShuffle 仅接受空对象。</p><p>修改时未提供的参数保留旧值，切换策略时清理旧参数；适用的 Buffer 默认 0。不接受 null。</p>
                     * 
                     */
                    RealtimeRoutingStrategyArgs GetRoutingStrategyArgs() const;

                    /**
                     * 设置<p>Realtime 路由策略的附加参数。</p><p>入参限制：LeastBusy 仅接受 LeastBusyBuffer；CostBasedRouting 仅接受 LowestCostBuffer；SimpleShuffle 仅接受空对象。</p><p>修改时未提供的参数保留旧值，切换策略时清理旧参数；适用的 Buffer 默认 0。不接受 null。</p>
                     * @param _routingStrategyArgs <p>Realtime 路由策略的附加参数。</p><p>入参限制：LeastBusy 仅接受 LeastBusyBuffer；CostBasedRouting 仅接受 LowestCostBuffer；SimpleShuffle 仅接受空对象。</p><p>修改时未提供的参数保留旧值，切换策略时清理旧参数；适用的 Buffer 默认 0。不接受 null。</p>
                     * 
                     */
                    void SetRoutingStrategyArgs(const RealtimeRoutingStrategyArgs& _routingStrategyArgs);

                    /**
                     * 判断参数 RoutingStrategyArgs 是否已赋值
                     * @return RoutingStrategyArgs 是否已赋值
                     * 
                     */
                    bool RoutingStrategyArgsHasBeenSet() const;

                private:

                    /**
                     * <p>Realtime 模型路由策略。</p><p>入参限制：仅支持 SimpleShuffle（随机）、LeastBusy（最少繁忙）、CostBasedRouting（最低成本）。</p><p>默认值：SimpleShuffle</p><p>修改时未传保留旧策略；切换策略会清理旧策略的 RoutingStrategyArgs。不接受 null。</p>
                     */
                    std::string m_routingStrategy;
                    bool m_routingStrategyHasBeenSet;

                    /**
                     * <p>Realtime 路由重试次数。</p><p>取值范围：[0, 5]</p><p>默认值：2</p><p>仅接受整数，0 表示不重试。修改时未提供此字段则保留旧值，不接受 null。</p>
                     */
                    uint64_t m_numRetries;
                    bool m_numRetriesHasBeenSet;

                    /**
                     * <p>Realtime 路由策略的附加参数。</p><p>入参限制：LeastBusy 仅接受 LeastBusyBuffer；CostBasedRouting 仅接受 LowestCostBuffer；SimpleShuffle 仅接受空对象。</p><p>修改时未提供的参数保留旧值，切换策略时清理旧参数；适用的 Buffer 默认 0。不接受 null。</p>
                     */
                    RealtimeRoutingStrategyArgs m_routingStrategyArgs;
                    bool m_routingStrategyArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REALTIMECONFIG_H_
