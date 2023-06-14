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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECENTRYVALUE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECENTRYVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TimingDataItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 安全数据维度值信息
                */
                class SecEntryValue : public AbstractModel
                {
                public:
                    SecEntryValue();
                    ~SecEntryValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名称。
                     * @return Metric 指标名称。
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名称。
                     * @param _metric 指标名称。
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取时序数据详情。
                     * @return Detail 时序数据详情。
                     * 
                     */
                    std::vector<TimingDataItem> GetDetail() const;

                    /**
                     * 设置时序数据详情。
                     * @param _detail 时序数据详情。
                     * 
                     */
                    void SetDetail(const std::vector<TimingDataItem>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取最大值。
                     * @return Max 最大值。
                     * 
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置最大值。
                     * @param _max 最大值。
                     * 
                     */
                    void SetMax(const int64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取平均值。
                     * @return Avg 平均值。
                     * 
                     */
                    double GetAvg() const;

                    /**
                     * 设置平均值。
                     * @param _avg 平均值。
                     * 
                     */
                    void SetAvg(const double& _avg);

                    /**
                     * 判断参数 Avg 是否已赋值
                     * @return Avg 是否已赋值
                     * 
                     */
                    bool AvgHasBeenSet() const;

                    /**
                     * 获取数据总和。
                     * @return Sum 数据总和。
                     * 
                     */
                    double GetSum() const;

                    /**
                     * 设置数据总和。
                     * @param _sum 数据总和。
                     * 
                     */
                    void SetSum(const double& _sum);

                    /**
                     * 判断参数 Sum 是否已赋值
                     * @return Sum 是否已赋值
                     * 
                     */
                    bool SumHasBeenSet() const;

                private:

                    /**
                     * 指标名称。
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 时序数据详情。
                     */
                    std::vector<TimingDataItem> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 最大值。
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 平均值。
                     */
                    double m_avg;
                    bool m_avgHasBeenSet;

                    /**
                     * 数据总和。
                     */
                    double m_sum;
                    bool m_sumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECENTRYVALUE_H_
