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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ROUTINGSTRATEGYARGS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ROUTINGSTRATEGYARGS_H_

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
                * L2模型内路由算法策略参数
                */
                class RoutingStrategyArgs : public AbstractModel
                {
                public:
                    RoutingStrategyArgs();
                    ~RoutingStrategyArgs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>最低繁忙路由算法相对近优容差。</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低繁忙路由算法生效。0 表示请求仅会路由到在途数最小的上游大模型部署，0.10 表示请求路由到的上游大模型部署在途请求数最多比最小在途数高10%，依次类推。</p>
                     * @return LeastBusyBuffer <p>最低繁忙路由算法相对近优容差。</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低繁忙路由算法生效。0 表示请求仅会路由到在途数最小的上游大模型部署，0.10 表示请求路由到的上游大模型部署在途请求数最多比最小在途数高10%，依次类推。</p>
                     * 
                     */
                    double GetLeastBusyBuffer() const;

                    /**
                     * 设置<p>最低繁忙路由算法相对近优容差。</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低繁忙路由算法生效。0 表示请求仅会路由到在途数最小的上游大模型部署，0.10 表示请求路由到的上游大模型部署在途请求数最多比最小在途数高10%，依次类推。</p>
                     * @param _leastBusyBuffer <p>最低繁忙路由算法相对近优容差。</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低繁忙路由算法生效。0 表示请求仅会路由到在途数最小的上游大模型部署，0.10 表示请求路由到的上游大模型部署在途请求数最多比最小在途数高10%，依次类推。</p>
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
                     * 获取<p>用量均衡路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅用量均衡路由算法生效。0 表示请求仅会路由到TPM最低的上游大模型部署；0.10 表示请求最多会路由到比TPM最小值高10%的上游大模型部署，依次类推。</p>
                     * @return UsageBasedBuffer <p>用量均衡路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅用量均衡路由算法生效。0 表示请求仅会路由到TPM最低的上游大模型部署；0.10 表示请求最多会路由到比TPM最小值高10%的上游大模型部署，依次类推。</p>
                     * 
                     */
                    double GetUsageBasedBuffer() const;

                    /**
                     * 设置<p>用量均衡路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅用量均衡路由算法生效。0 表示请求仅会路由到TPM最低的上游大模型部署；0.10 表示请求最多会路由到比TPM最小值高10%的上游大模型部署，依次类推。</p>
                     * @param _usageBasedBuffer <p>用量均衡路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅用量均衡路由算法生效。0 表示请求仅会路由到TPM最低的上游大模型部署；0.10 表示请求最多会路由到比TPM最小值高10%的上游大模型部署，依次类推。</p>
                     * 
                     */
                    void SetUsageBasedBuffer(const double& _usageBasedBuffer);

                    /**
                     * 判断参数 UsageBasedBuffer 是否已赋值
                     * @return UsageBasedBuffer 是否已赋值
                     * 
                     */
                    bool UsageBasedBufferHasBeenSet() const;

                    /**
                     * 获取<p>最低延迟路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低延迟路由算法生效。0 表示请求仅会路由到延迟最低的上游大模型部署；0.10 表示请求最多会路由到比延迟最小值高10%的上游大模型部署，依次类推。</p>
                     * @return LowestLatencyBuffer <p>最低延迟路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低延迟路由算法生效。0 表示请求仅会路由到延迟最低的上游大模型部署；0.10 表示请求最多会路由到比延迟最小值高10%的上游大模型部署，依次类推。</p>
                     * 
                     */
                    double GetLowestLatencyBuffer() const;

                    /**
                     * 设置<p>最低延迟路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低延迟路由算法生效。0 表示请求仅会路由到延迟最低的上游大模型部署；0.10 表示请求最多会路由到比延迟最小值高10%的上游大模型部署，依次类推。</p>
                     * @param _lowestLatencyBuffer <p>最低延迟路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低延迟路由算法生效。0 表示请求仅会路由到延迟最低的上游大模型部署；0.10 表示请求最多会路由到比延迟最小值高10%的上游大模型部署，依次类推。</p>
                     * 
                     */
                    void SetLowestLatencyBuffer(const double& _lowestLatencyBuffer);

                    /**
                     * 判断参数 LowestLatencyBuffer 是否已赋值
                     * @return LowestLatencyBuffer 是否已赋值
                     * 
                     */
                    bool LowestLatencyBufferHasBeenSet() const;

                    /**
                     * 获取<p>最低积分系数路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低积分系数路由算法生效。0 表示请求仅会路由到积分系数最低的上游大模型部署；0.10 表示请求最多会路由到比积分系数最小值高10%的上游大模型部署，依次类推。</p>
                     * @return LowestCostBuffer <p>最低积分系数路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低积分系数路由算法生效。0 表示请求仅会路由到积分系数最低的上游大模型部署；0.10 表示请求最多会路由到比积分系数最小值高10%的上游大模型部署，依次类推。</p>
                     * 
                     */
                    double GetLowestCostBuffer() const;

                    /**
                     * 设置<p>最低积分系数路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低积分系数路由算法生效。0 表示请求仅会路由到积分系数最低的上游大模型部署；0.10 表示请求最多会路由到比积分系数最小值高10%的上游大模型部署，依次类推。</p>
                     * @param _lowestCostBuffer <p>最低积分系数路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低积分系数路由算法生效。0 表示请求仅会路由到积分系数最低的上游大模型部署；0.10 表示请求最多会路由到比积分系数最小值高10%的上游大模型部署，依次类推。</p>
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
                     * <p>最低繁忙路由算法相对近优容差。</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低繁忙路由算法生效。0 表示请求仅会路由到在途数最小的上游大模型部署，0.10 表示请求路由到的上游大模型部署在途请求数最多比最小在途数高10%，依次类推。</p>
                     */
                    double m_leastBusyBuffer;
                    bool m_leastBusyBufferHasBeenSet;

                    /**
                     * <p>用量均衡路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅用量均衡路由算法生效。0 表示请求仅会路由到TPM最低的上游大模型部署；0.10 表示请求最多会路由到比TPM最小值高10%的上游大模型部署，依次类推。</p>
                     */
                    double m_usageBasedBuffer;
                    bool m_usageBasedBufferHasBeenSet;

                    /**
                     * <p>最低延迟路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低延迟路由算法生效。0 表示请求仅会路由到延迟最低的上游大模型部署；0.10 表示请求最多会路由到比延迟最小值高10%的上游大模型部署，依次类推。</p>
                     */
                    double m_lowestLatencyBuffer;
                    bool m_lowestLatencyBufferHasBeenSet;

                    /**
                     * <p>最低积分系数路由算法相对近优容差</p><p>取值范围：[0, 100]</p><p>默认值：0</p><p>仅最低积分系数路由算法生效。0 表示请求仅会路由到积分系数最低的上游大模型部署；0.10 表示请求最多会路由到比积分系数最小值高10%的上游大模型部署，依次类推。</p>
                     */
                    double m_lowestCostBuffer;
                    bool m_lowestCostBufferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ROUTINGSTRATEGYARGS_H_
