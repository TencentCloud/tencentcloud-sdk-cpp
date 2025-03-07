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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_INVOCATIONINDICATOR_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_INVOCATIONINDICATOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/IndicatorCoord.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 服务调用监控指标
                */
                class InvocationIndicator : public AbstractModel
                {
                public:
                    InvocationIndicator();
                    ~InvocationIndicator() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvocationQuantity 总请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInvocationQuantity() const;

                    /**
                     * 设置总请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invocationQuantity 总请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvocationQuantity(const int64_t& _invocationQuantity);

                    /**
                     * 判断参数 InvocationQuantity 是否已赋值
                     * @return InvocationQuantity 是否已赋值
                     * 
                     */
                    bool InvocationQuantityHasBeenSet() const;

                    /**
                     * 获取请求成功率，百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvocationSuccessRate 请求成功率，百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInvocationSuccessRate() const;

                    /**
                     * 设置请求成功率，百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invocationSuccessRate 请求成功率，百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvocationSuccessRate(const double& _invocationSuccessRate);

                    /**
                     * 判断参数 InvocationSuccessRate 是否已赋值
                     * @return InvocationSuccessRate 是否已赋值
                     * 
                     */
                    bool InvocationSuccessRateHasBeenSet() const;

                    /**
                     * 获取请求平均耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvocationAvgDuration 请求平均耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInvocationAvgDuration() const;

                    /**
                     * 设置请求平均耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invocationAvgDuration 请求平均耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvocationAvgDuration(const double& _invocationAvgDuration);

                    /**
                     * 判断参数 InvocationAvgDuration 是否已赋值
                     * @return InvocationAvgDuration 是否已赋值
                     * 
                     */
                    bool InvocationAvgDurationHasBeenSet() const;

                    /**
                     * 获取成功请求数时间分布
                     * @return InvocationSuccessDistribution 成功请求数时间分布
                     * 
                     */
                    std::vector<IndicatorCoord> GetInvocationSuccessDistribution() const;

                    /**
                     * 设置成功请求数时间分布
                     * @param _invocationSuccessDistribution 成功请求数时间分布
                     * 
                     */
                    void SetInvocationSuccessDistribution(const std::vector<IndicatorCoord>& _invocationSuccessDistribution);

                    /**
                     * 判断参数 InvocationSuccessDistribution 是否已赋值
                     * @return InvocationSuccessDistribution 是否已赋值
                     * 
                     */
                    bool InvocationSuccessDistributionHasBeenSet() const;

                    /**
                     * 获取失败请求数时间分布
                     * @return InvocationFailedDistribution 失败请求数时间分布
                     * 
                     */
                    std::vector<IndicatorCoord> GetInvocationFailedDistribution() const;

                    /**
                     * 设置失败请求数时间分布
                     * @param _invocationFailedDistribution 失败请求数时间分布
                     * 
                     */
                    void SetInvocationFailedDistribution(const std::vector<IndicatorCoord>& _invocationFailedDistribution);

                    /**
                     * 判断参数 InvocationFailedDistribution 是否已赋值
                     * @return InvocationFailedDistribution 是否已赋值
                     * 
                     */
                    bool InvocationFailedDistributionHasBeenSet() const;

                    /**
                     * 获取状态码分布
                     * @return InvocationStatusDistribution 状态码分布
                     * 
                     */
                    std::vector<IndicatorCoord> GetInvocationStatusDistribution() const;

                    /**
                     * 设置状态码分布
                     * @param _invocationStatusDistribution 状态码分布
                     * 
                     */
                    void SetInvocationStatusDistribution(const std::vector<IndicatorCoord>& _invocationStatusDistribution);

                    /**
                     * 判断参数 InvocationStatusDistribution 是否已赋值
                     * @return InvocationStatusDistribution 是否已赋值
                     * 
                     */
                    bool InvocationStatusDistributionHasBeenSet() const;

                    /**
                     * 获取时延分布
                     * @return InvocationDurationDistribution 时延分布
                     * 
                     */
                    std::vector<IndicatorCoord> GetInvocationDurationDistribution() const;

                    /**
                     * 设置时延分布
                     * @param _invocationDurationDistribution 时延分布
                     * 
                     */
                    void SetInvocationDurationDistribution(const std::vector<IndicatorCoord>& _invocationDurationDistribution);

                    /**
                     * 判断参数 InvocationDurationDistribution 是否已赋值
                     * @return InvocationDurationDistribution 是否已赋值
                     * 
                     */
                    bool InvocationDurationDistributionHasBeenSet() const;

                    /**
                     * 获取并发请求次数时间分布
                     * @return InvocationQuantityDistribution 并发请求次数时间分布
                     * 
                     */
                    std::vector<IndicatorCoord> GetInvocationQuantityDistribution() const;

                    /**
                     * 设置并发请求次数时间分布
                     * @param _invocationQuantityDistribution 并发请求次数时间分布
                     * 
                     */
                    void SetInvocationQuantityDistribution(const std::vector<IndicatorCoord>& _invocationQuantityDistribution);

                    /**
                     * 判断参数 InvocationQuantityDistribution 是否已赋值
                     * @return InvocationQuantityDistribution 是否已赋值
                     * 
                     */
                    bool InvocationQuantityDistributionHasBeenSet() const;

                private:

                    /**
                     * 总请求数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_invocationQuantity;
                    bool m_invocationQuantityHasBeenSet;

                    /**
                     * 请求成功率，百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_invocationSuccessRate;
                    bool m_invocationSuccessRateHasBeenSet;

                    /**
                     * 请求平均耗时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_invocationAvgDuration;
                    bool m_invocationAvgDurationHasBeenSet;

                    /**
                     * 成功请求数时间分布
                     */
                    std::vector<IndicatorCoord> m_invocationSuccessDistribution;
                    bool m_invocationSuccessDistributionHasBeenSet;

                    /**
                     * 失败请求数时间分布
                     */
                    std::vector<IndicatorCoord> m_invocationFailedDistribution;
                    bool m_invocationFailedDistributionHasBeenSet;

                    /**
                     * 状态码分布
                     */
                    std::vector<IndicatorCoord> m_invocationStatusDistribution;
                    bool m_invocationStatusDistributionHasBeenSet;

                    /**
                     * 时延分布
                     */
                    std::vector<IndicatorCoord> m_invocationDurationDistribution;
                    bool m_invocationDurationDistributionHasBeenSet;

                    /**
                     * 并发请求次数时间分布
                     */
                    std::vector<IndicatorCoord> m_invocationQuantityDistribution;
                    bool m_invocationQuantityDistributionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_INVOCATIONINDICATOR_H_
