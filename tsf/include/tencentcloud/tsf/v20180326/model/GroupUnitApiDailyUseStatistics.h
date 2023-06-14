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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GROUPUNITAPIDAILYUSESTATISTICS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GROUPUNITAPIDAILYUSESTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MetricDataPointMap.h>
#include <tencentcloud/tsf/v20180326/model/ApiUseStatisticsEntity.h>
#include <tencentcloud/tsf/v20180326/model/QuantileEntity.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 单元化API使用详情统计对象列表
                */
                class GroupUnitApiDailyUseStatistics : public AbstractModel
                {
                public:
                    GroupUnitApiDailyUseStatistics();
                    ~GroupUnitApiDailyUseStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param _namespaceId 命名空间ID
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取该API在该命名空间下的总调用次数
                     * @return SumReqAmount 该API在该命名空间下的总调用次数
                     * 
                     */
                    std::string GetSumReqAmount() const;

                    /**
                     * 设置该API在该命名空间下的总调用次数
                     * @param _sumReqAmount 该API在该命名空间下的总调用次数
                     * 
                     */
                    void SetSumReqAmount(const std::string& _sumReqAmount);

                    /**
                     * 判断参数 SumReqAmount 是否已赋值
                     * @return SumReqAmount 是否已赋值
                     * 
                     */
                    bool SumReqAmountHasBeenSet() const;

                    /**
                     * 获取该API在该命名空间下的平均错误率
                     * @return AvgFailureRate 该API在该命名空间下的平均错误率
                     * 
                     */
                    std::string GetAvgFailureRate() const;

                    /**
                     * 设置该API在该命名空间下的平均错误率
                     * @param _avgFailureRate 该API在该命名空间下的平均错误率
                     * 
                     */
                    void SetAvgFailureRate(const std::string& _avgFailureRate);

                    /**
                     * 判断参数 AvgFailureRate 是否已赋值
                     * @return AvgFailureRate 是否已赋值
                     * 
                     */
                    bool AvgFailureRateHasBeenSet() const;

                    /**
                     * 获取该API在该命名空间下的平均响应时间
                     * @return AvgTimeCost 该API在该命名空间下的平均响应时间
                     * 
                     */
                    std::string GetAvgTimeCost() const;

                    /**
                     * 设置该API在该命名空间下的平均响应时间
                     * @param _avgTimeCost 该API在该命名空间下的平均响应时间
                     * 
                     */
                    void SetAvgTimeCost(const std::string& _avgTimeCost);

                    /**
                     * 判断参数 AvgTimeCost 是否已赋值
                     * @return AvgTimeCost 是否已赋值
                     * 
                     */
                    bool AvgTimeCostHasBeenSet() const;

                    /**
                     * 获取监控数据曲线点位图Map集合
                     * @return MetricDataPointMap 监控数据曲线点位图Map集合
                     * 
                     */
                    MetricDataPointMap GetMetricDataPointMap() const;

                    /**
                     * 设置监控数据曲线点位图Map集合
                     * @param _metricDataPointMap 监控数据曲线点位图Map集合
                     * 
                     */
                    void SetMetricDataPointMap(const MetricDataPointMap& _metricDataPointMap);

                    /**
                     * 判断参数 MetricDataPointMap 是否已赋值
                     * @return MetricDataPointMap 是否已赋值
                     * 
                     */
                    bool MetricDataPointMapHasBeenSet() const;

                    /**
                     * 获取状态码分布详情
                     * @return TopStatusCode 状态码分布详情
                     * 
                     */
                    std::vector<ApiUseStatisticsEntity> GetTopStatusCode() const;

                    /**
                     * 设置状态码分布详情
                     * @param _topStatusCode 状态码分布详情
                     * 
                     */
                    void SetTopStatusCode(const std::vector<ApiUseStatisticsEntity>& _topStatusCode);

                    /**
                     * 判断参数 TopStatusCode 是否已赋值
                     * @return TopStatusCode 是否已赋值
                     * 
                     */
                    bool TopStatusCodeHasBeenSet() const;

                    /**
                     * 获取耗时分布详情
                     * @return TopTimeCost 耗时分布详情
                     * 
                     */
                    std::vector<ApiUseStatisticsEntity> GetTopTimeCost() const;

                    /**
                     * 设置耗时分布详情
                     * @param _topTimeCost 耗时分布详情
                     * 
                     */
                    void SetTopTimeCost(const std::vector<ApiUseStatisticsEntity>& _topTimeCost);

                    /**
                     * 判断参数 TopTimeCost 是否已赋值
                     * @return TopTimeCost 是否已赋值
                     * 
                     */
                    bool TopTimeCostHasBeenSet() const;

                    /**
                     * 获取分位值对象
                     * @return Quantile 分位值对象
                     * 
                     */
                    QuantileEntity GetQuantile() const;

                    /**
                     * 设置分位值对象
                     * @param _quantile 分位值对象
                     * 
                     */
                    void SetQuantile(const QuantileEntity& _quantile);

                    /**
                     * 判断参数 Quantile 是否已赋值
                     * @return Quantile 是否已赋值
                     * 
                     */
                    bool QuantileHasBeenSet() const;

                private:

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 该API在该命名空间下的总调用次数
                     */
                    std::string m_sumReqAmount;
                    bool m_sumReqAmountHasBeenSet;

                    /**
                     * 该API在该命名空间下的平均错误率
                     */
                    std::string m_avgFailureRate;
                    bool m_avgFailureRateHasBeenSet;

                    /**
                     * 该API在该命名空间下的平均响应时间
                     */
                    std::string m_avgTimeCost;
                    bool m_avgTimeCostHasBeenSet;

                    /**
                     * 监控数据曲线点位图Map集合
                     */
                    MetricDataPointMap m_metricDataPointMap;
                    bool m_metricDataPointMapHasBeenSet;

                    /**
                     * 状态码分布详情
                     */
                    std::vector<ApiUseStatisticsEntity> m_topStatusCode;
                    bool m_topStatusCodeHasBeenSet;

                    /**
                     * 耗时分布详情
                     */
                    std::vector<ApiUseStatisticsEntity> m_topTimeCost;
                    bool m_topTimeCostHasBeenSet;

                    /**
                     * 分位值对象
                     */
                    QuantileEntity m_quantile;
                    bool m_quantileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GROUPUNITAPIDAILYUSESTATISTICS_H_
