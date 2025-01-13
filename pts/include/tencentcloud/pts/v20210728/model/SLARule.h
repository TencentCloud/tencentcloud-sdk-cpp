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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SLARULE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SLARULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/SLALabel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * SLA 规则
                */
                class SLARule : public AbstractModel
                {
                public:
                    SLARule();
                    ~SLARule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取压测指标
                     * @return Metric 压测指标
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置压测指标
                     * @param _metric 压测指标
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
                     * 获取压测指标聚合方法
                     * @return Aggregation 压测指标聚合方法
                     * 
                     */
                    std::string GetAggregation() const;

                    /**
                     * 设置压测指标聚合方法
                     * @param _aggregation 压测指标聚合方法
                     * 
                     */
                    void SetAggregation(const std::string& _aggregation);

                    /**
                     * 判断参数 Aggregation 是否已赋值
                     * @return Aggregation 是否已赋值
                     * 
                     */
                    bool AggregationHasBeenSet() const;

                    /**
                     * 获取压测指标条件判断符号
                     * @return Condition 压测指标条件判断符号
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置压测指标条件判断符号
                     * @param _condition 压测指标条件判断符号
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取阈值
                     * @return Value 阈值
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置阈值
                     * @param _value 阈值
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelFilter 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SLALabel> GetLabelFilter() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelFilter 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelFilter(const std::vector<SLALabel>& _labelFilter);

                    /**
                     * 判断参数 LabelFilter 是否已赋值
                     * @return LabelFilter 是否已赋值
                     * 
                     */
                    bool LabelFilterHasBeenSet() const;

                    /**
                     * 获取是否停止压测任务
                     * @return AbortFlag 是否停止压测任务
                     * 
                     */
                    bool GetAbortFlag() const;

                    /**
                     * 设置是否停止压测任务
                     * @param _abortFlag 是否停止压测任务
                     * 
                     */
                    void SetAbortFlag(const bool& _abortFlag);

                    /**
                     * 判断参数 AbortFlag 是否已赋值
                     * @return AbortFlag 是否已赋值
                     * 
                     */
                    bool AbortFlagHasBeenSet() const;

                    /**
                     * 获取持续时长
                     * @return For 持续时长
                     * 
                     */
                    std::string GetFor() const;

                    /**
                     * 设置持续时长
                     * @param _for 持续时长
                     * 
                     */
                    void SetFor(const std::string& _for);

                    /**
                     * 判断参数 For 是否已赋值
                     * @return For 是否已赋值
                     * 
                     */
                    bool ForHasBeenSet() const;

                private:

                    /**
                     * 压测指标
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 压测指标聚合方法
                     */
                    std::string m_aggregation;
                    bool m_aggregationHasBeenSet;

                    /**
                     * 压测指标条件判断符号
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 阈值
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SLALabel> m_labelFilter;
                    bool m_labelFilterHasBeenSet;

                    /**
                     * 是否停止压测任务
                     */
                    bool m_abortFlag;
                    bool m_abortFlagHasBeenSet;

                    /**
                     * 持续时长
                     */
                    std::string m_for;
                    bool m_forHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SLARULE_H_
