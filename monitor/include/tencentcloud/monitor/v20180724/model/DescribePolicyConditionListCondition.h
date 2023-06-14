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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListEventMetric.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListMetric.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListResponseDeprecatingInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionList策略条件
                */
                class DescribePolicyConditionListCondition : public AbstractModel
                {
                public:
                    DescribePolicyConditionListCondition();
                    ~DescribePolicyConditionListCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略视图名称
                     * @return PolicyViewName 策略视图名称
                     * 
                     */
                    std::string GetPolicyViewName() const;

                    /**
                     * 设置策略视图名称
                     * @param _policyViewName 策略视图名称
                     * 
                     */
                    void SetPolicyViewName(const std::string& _policyViewName);

                    /**
                     * 判断参数 PolicyViewName 是否已赋值
                     * @return PolicyViewName 是否已赋值
                     * 
                     */
                    bool PolicyViewNameHasBeenSet() const;

                    /**
                     * 获取事件告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventMetrics 事件告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribePolicyConditionListEventMetric> GetEventMetrics() const;

                    /**
                     * 设置事件告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventMetrics 事件告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventMetrics(const std::vector<DescribePolicyConditionListEventMetric>& _eventMetrics);

                    /**
                     * 判断参数 EventMetrics 是否已赋值
                     * @return EventMetrics 是否已赋值
                     * 
                     */
                    bool EventMetricsHasBeenSet() const;

                    /**
                     * 获取是否支持多地域
                     * @return IsSupportMultiRegion 是否支持多地域
                     * 
                     */
                    bool GetIsSupportMultiRegion() const;

                    /**
                     * 设置是否支持多地域
                     * @param _isSupportMultiRegion 是否支持多地域
                     * 
                     */
                    void SetIsSupportMultiRegion(const bool& _isSupportMultiRegion);

                    /**
                     * 判断参数 IsSupportMultiRegion 是否已赋值
                     * @return IsSupportMultiRegion 是否已赋值
                     * 
                     */
                    bool IsSupportMultiRegionHasBeenSet() const;

                    /**
                     * 获取指标告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metrics 指标告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribePolicyConditionListMetric> GetMetrics() const;

                    /**
                     * 设置指标告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metrics 指标告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetrics(const std::vector<DescribePolicyConditionListMetric>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取策略类型名称
                     * @return Name 策略类型名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略类型名称
                     * @param _name 策略类型名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取排序id
                     * @return SortId 排序id
                     * 
                     */
                    int64_t GetSortId() const;

                    /**
                     * 设置排序id
                     * @param _sortId 排序id
                     * 
                     */
                    void SetSortId(const int64_t& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取是否支持默认策略
                     * @return SupportDefault 是否支持默认策略
                     * 
                     */
                    bool GetSupportDefault() const;

                    /**
                     * 设置是否支持默认策略
                     * @param _supportDefault 是否支持默认策略
                     * 
                     */
                    void SetSupportDefault(const bool& _supportDefault);

                    /**
                     * 判断参数 SupportDefault 是否已赋值
                     * @return SupportDefault 是否已赋值
                     * 
                     */
                    bool SupportDefaultHasBeenSet() const;

                    /**
                     * 获取支持该策略类型的地域列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportRegions 支持该策略类型的地域列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSupportRegions() const;

                    /**
                     * 设置支持该策略类型的地域列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportRegions 支持该策略类型的地域列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportRegions(const std::vector<std::string>& _supportRegions);

                    /**
                     * 判断参数 SupportRegions 是否已赋值
                     * @return SupportRegions 是否已赋值
                     * 
                     */
                    bool SupportRegionsHasBeenSet() const;

                    /**
                     * 获取弃用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeprecatingInfo 弃用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyConditionListResponseDeprecatingInfo GetDeprecatingInfo() const;

                    /**
                     * 设置弃用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deprecatingInfo 弃用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeprecatingInfo(const DescribePolicyConditionListResponseDeprecatingInfo& _deprecatingInfo);

                    /**
                     * 判断参数 DeprecatingInfo 是否已赋值
                     * @return DeprecatingInfo 是否已赋值
                     * 
                     */
                    bool DeprecatingInfoHasBeenSet() const;

                private:

                    /**
                     * 策略视图名称
                     */
                    std::string m_policyViewName;
                    bool m_policyViewNameHasBeenSet;

                    /**
                     * 事件告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribePolicyConditionListEventMetric> m_eventMetrics;
                    bool m_eventMetricsHasBeenSet;

                    /**
                     * 是否支持多地域
                     */
                    bool m_isSupportMultiRegion;
                    bool m_isSupportMultiRegionHasBeenSet;

                    /**
                     * 指标告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribePolicyConditionListMetric> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 策略类型名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 排序id
                     */
                    int64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * 是否支持默认策略
                     */
                    bool m_supportDefault;
                    bool m_supportDefaultHasBeenSet;

                    /**
                     * 支持该策略类型的地域列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_supportRegions;
                    bool m_supportRegionsHasBeenSet;

                    /**
                     * 弃用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyConditionListResponseDeprecatingInfo m_deprecatingInfo;
                    bool m_deprecatingInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONDITION_H_
