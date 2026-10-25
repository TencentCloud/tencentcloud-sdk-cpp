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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_METRICDISTRIBUTIONITEM_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_METRICDISTRIBUTIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 分析指标分布桶
                */
                class MetricDistributionItem : public AbstractModel
                {
                public:
                    MetricDistributionItem();
                    ~MetricDistributionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>维度值</p>
                     * @return Value <p>维度值</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>维度值</p>
                     * @param _value <p>维度值</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>次数</p>
                     * @return Count <p>次数</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>次数</p>
                     * @param _count <p>次数</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>影响用户数</p>
                     * @return AffectedUser <p>影响用户数</p>
                     * 
                     */
                    int64_t GetAffectedUser() const;

                    /**
                     * 设置<p>影响用户数</p>
                     * @param _affectedUser <p>影响用户数</p>
                     * 
                     */
                    void SetAffectedUser(const int64_t& _affectedUser);

                    /**
                     * 判断参数 AffectedUser 是否已赋值
                     * @return AffectedUser 是否已赋值
                     * 
                     */
                    bool AffectedUserHasBeenSet() const;

                    /**
                     * 获取<p>率，分母为 0 时省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rate <p>率，分母为 0 时省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRate() const;

                    /**
                     * 设置<p>率，分母为 0 时省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rate <p>率，分母为 0 时省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRate(const double& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取<p>影响用户率，缺省省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectedUserRate <p>影响用户率，缺省省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAffectedUserRate() const;

                    /**
                     * 设置<p>影响用户率，缺省省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectedUserRate <p>影响用户率，缺省省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectedUserRate(const double& _affectedUserRate);

                    /**
                     * 判断参数 AffectedUserRate 是否已赋值
                     * @return AffectedUserRate 是否已赋值
                     * 
                     */
                    bool AffectedUserRateHasBeenSet() const;

                    /**
                     * 获取<p>均值，缺省省略</p>
                     * @return Avg <p>均值，缺省省略</p>
                     * 
                     */
                    double GetAvg() const;

                    /**
                     * 设置<p>均值，缺省省略</p>
                     * @param _avg <p>均值，缺省省略</p>
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
                     * 获取<p>P50，缺省省略</p>
                     * @return P50 <p>P50，缺省省略</p>
                     * 
                     */
                    double GetP50() const;

                    /**
                     * 设置<p>P50，缺省省略</p>
                     * @param _p50 <p>P50，缺省省略</p>
                     * 
                     */
                    void SetP50(const double& _p50);

                    /**
                     * 判断参数 P50 是否已赋值
                     * @return P50 是否已赋值
                     * 
                     */
                    bool P50HasBeenSet() const;

                    /**
                     * 获取<p>P75，缺省省略</p>
                     * @return P75 <p>P75，缺省省略</p>
                     * 
                     */
                    double GetP75() const;

                    /**
                     * 设置<p>P75，缺省省略</p>
                     * @param _p75 <p>P75，缺省省略</p>
                     * 
                     */
                    void SetP75(const double& _p75);

                    /**
                     * 判断参数 P75 是否已赋值
                     * @return P75 是否已赋值
                     * 
                     */
                    bool P75HasBeenSet() const;

                    /**
                     * 获取<p>P95，缺省省略</p>
                     * @return P95 <p>P95，缺省省略</p>
                     * 
                     */
                    double GetP95() const;

                    /**
                     * 设置<p>P95，缺省省略</p>
                     * @param _p95 <p>P95，缺省省略</p>
                     * 
                     */
                    void SetP95(const double& _p95);

                    /**
                     * 判断参数 P95 是否已赋值
                     * @return P95 是否已赋值
                     * 
                     */
                    bool P95HasBeenSet() const;

                    /**
                     * 获取<p>P99，缺省省略</p>
                     * @return P99 <p>P99，缺省省略</p>
                     * 
                     */
                    double GetP99() const;

                    /**
                     * 设置<p>P99，缺省省略</p>
                     * @param _p99 <p>P99，缺省省略</p>
                     * 
                     */
                    void SetP99(const double& _p99);

                    /**
                     * 判断参数 P99 是否已赋值
                     * @return P99 是否已赋值
                     * 
                     */
                    bool P99HasBeenSet() const;

                private:

                    /**
                     * <p>维度值</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>次数</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>影响用户数</p>
                     */
                    int64_t m_affectedUser;
                    bool m_affectedUserHasBeenSet;

                    /**
                     * <p>率，分母为 0 时省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * <p>影响用户率，缺省省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_affectedUserRate;
                    bool m_affectedUserRateHasBeenSet;

                    /**
                     * <p>均值，缺省省略</p>
                     */
                    double m_avg;
                    bool m_avgHasBeenSet;

                    /**
                     * <p>P50，缺省省略</p>
                     */
                    double m_p50;
                    bool m_p50HasBeenSet;

                    /**
                     * <p>P75，缺省省略</p>
                     */
                    double m_p75;
                    bool m_p75HasBeenSet;

                    /**
                     * <p>P95，缺省省略</p>
                     */
                    double m_p95;
                    bool m_p95HasBeenSet;

                    /**
                     * <p>P99，缺省省略</p>
                     */
                    double m_p99;
                    bool m_p99HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_METRICDISTRIBUTIONITEM_H_
