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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REALTIMEROUTINGSTRATEGYARGS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REALTIMEROUTINGSTRATEGYARGS_H_

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
                * Realtime 路由策略参数。LeastBusy 仅支持 LeastBusyBuffer，CostBasedRouting 仅支持 LowestCostBuffer，SimpleShuffle 不支持策略参数。Buffer 取值为 0～1000，最多两位小数，默认 0；修改时未传字段保留旧值。
                */
                class RealtimeRoutingStrategyArgs : public AbstractModel
                {
                public:
                    RealtimeRoutingStrategyArgs();
                    ~RealtimeRoutingStrategyArgs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>LeastBusy 路由策略的缓冲参数，仅 RoutingStrategy=LeastBusy 时允许设置。</p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>最多支持两位小数；不接受字符串、布尔值或 null。修改时未传保留旧值，显式 0 生效。</p>
                     * @return LeastBusyBuffer <p>LeastBusy 路由策略的缓冲参数，仅 RoutingStrategy=LeastBusy 时允许设置。</p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>最多支持两位小数；不接受字符串、布尔值或 null。修改时未传保留旧值，显式 0 生效。</p>
                     * 
                     */
                    double GetLeastBusyBuffer() const;

                    /**
                     * 设置<p>LeastBusy 路由策略的缓冲参数，仅 RoutingStrategy=LeastBusy 时允许设置。</p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>最多支持两位小数；不接受字符串、布尔值或 null。修改时未传保留旧值，显式 0 生效。</p>
                     * @param _leastBusyBuffer <p>LeastBusy 路由策略的缓冲参数，仅 RoutingStrategy=LeastBusy 时允许设置。</p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>最多支持两位小数；不接受字符串、布尔值或 null。修改时未传保留旧值，显式 0 生效。</p>
                     * 
                     */
                    void SetLeastBusyBuffer(const double& _leastBusyBuffer);

                    /**
                     * 判断参数 LeastBusyBuffer 是否已赋值
                     * @return LeastBusyBuffer 是否已赋值
                     * 
                     */
                    bool LeastBusyBufferHasBeenSet() const;

                    /**
                     * 获取<p>CostBasedRouting 路由策略的缓冲参数，仅 RoutingStrategy=CostBasedRouting 时允许设置。</p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>最多支持两位小数；不接受字符串、布尔值或 null。修改时未传保留旧值，显式 0 生效。</p>
                     * @return LowestCostBuffer <p>CostBasedRouting 路由策略的缓冲参数，仅 RoutingStrategy=CostBasedRouting 时允许设置。</p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>最多支持两位小数；不接受字符串、布尔值或 null。修改时未传保留旧值，显式 0 生效。</p>
                     * 
                     */
                    double GetLowestCostBuffer() const;

                    /**
                     * 设置<p>CostBasedRouting 路由策略的缓冲参数，仅 RoutingStrategy=CostBasedRouting 时允许设置。</p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>最多支持两位小数；不接受字符串、布尔值或 null。修改时未传保留旧值，显式 0 生效。</p>
                     * @param _lowestCostBuffer <p>CostBasedRouting 路由策略的缓冲参数，仅 RoutingStrategy=CostBasedRouting 时允许设置。</p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>最多支持两位小数；不接受字符串、布尔值或 null。修改时未传保留旧值，显式 0 生效。</p>
                     * 
                     */
                    void SetLowestCostBuffer(const double& _lowestCostBuffer);

                    /**
                     * 判断参数 LowestCostBuffer 是否已赋值
                     * @return LowestCostBuffer 是否已赋值
                     * 
                     */
                    bool LowestCostBufferHasBeenSet() const;

                private:

                    /**
                     * <p>LeastBusy 路由策略的缓冲参数，仅 RoutingStrategy=LeastBusy 时允许设置。</p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>最多支持两位小数；不接受字符串、布尔值或 null。修改时未传保留旧值，显式 0 生效。</p>
                     */
                    double m_leastBusyBuffer;
                    bool m_leastBusyBufferHasBeenSet;

                    /**
                     * <p>CostBasedRouting 路由策略的缓冲参数，仅 RoutingStrategy=CostBasedRouting 时允许设置。</p><p>取值范围：[0, 1000]</p><p>默认值：0</p><p>最多支持两位小数；不接受字符串、布尔值或 null。修改时未传保留旧值，显式 0 生效。</p>
                     */
                    double m_lowestCostBuffer;
                    bool m_lowestCostBufferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REALTIMEROUTINGSTRATEGYARGS_H_
