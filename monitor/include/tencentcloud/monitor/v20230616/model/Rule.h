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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_RULE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/ExtMetric.h>
#include <tencentcloud/monitor/v20230616/model/Producer.h>
#include <tencentcloud/monitor/v20230616/model/DispenseCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 转发规则
                */
                class Rule : public AbstractModel
                {
                public:
                    Rule();
                    ~Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则Id
                     * @return RuleId 规则Id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则Id
                     * @param _ruleId 规则Id
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取对外namespace
                     * @return ExtNamespace 对外namespace
                     * 
                     */
                    std::string GetExtNamespace() const;

                    /**
                     * 设置对外namespace
                     * @param _extNamespace 对外namespace
                     * 
                     */
                    void SetExtNamespace(const std::string& _extNamespace);

                    /**
                     * 判断参数 ExtNamespace 是否已赋值
                     * @return ExtNamespace 是否已赋值
                     * 
                     */
                    bool ExtNamespaceHasBeenSet() const;

                    /**
                     * 获取对外指标列表
                     * @return ExtMetric 对外指标列表
                     * 
                     */
                    std::vector<ExtMetric> GetExtMetric() const;

                    /**
                     * 设置对外指标列表
                     * @param _extMetric 对外指标列表
                     * 
                     */
                    void SetExtMetric(const std::vector<ExtMetric>& _extMetric);

                    /**
                     * 判断参数 ExtMetric 是否已赋值
                     * @return ExtMetric 是否已赋值
                     * 
                     */
                    bool ExtMetricHasBeenSet() const;

                    /**
                     * 获取输出信息
                     * @return Producer 输出信息
                     * 
                     */
                    Producer GetProducer() const;

                    /**
                     * 设置输出信息
                     * @param _producer 输出信息
                     * 
                     */
                    void SetProducer(const Producer& _producer);

                    /**
                     * 判断参数 Producer 是否已赋值
                     * @return Producer 是否已赋值
                     * 
                     */
                    bool ProducerHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取规则触发状态
                     * @return Status 规则触发状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则触发状态
                     * @param _status 规则触发状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取指标粒度周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Period 指标粒度周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetPeriod() const;

                    /**
                     * 设置指标粒度周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _period 指标粒度周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriod(const std::vector<int64_t>& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取转发过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DispenseConditions 转发过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DispenseCondition> GetDispenseConditions() const;

                    /**
                     * 设置转发过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dispenseConditions 转发过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDispenseConditions(const std::vector<DispenseCondition>& _dispenseConditions);

                    /**
                     * 判断参数 DispenseConditions 是否已赋值
                     * @return DispenseConditions 是否已赋值
                     * 
                     */
                    bool DispenseConditionsHasBeenSet() const;

                    /**
                     * 获取转发地域列表
                     * @return DispenseRegions 转发地域列表
                     * 
                     */
                    std::vector<std::string> GetDispenseRegions() const;

                    /**
                     * 设置转发地域列表
                     * @param _dispenseRegions 转发地域列表
                     * 
                     */
                    void SetDispenseRegions(const std::vector<std::string>& _dispenseRegions);

                    /**
                     * 判断参数 DispenseRegions 是否已赋值
                     * @return DispenseRegions 是否已赋值
                     * 
                     */
                    bool DispenseRegionsHasBeenSet() const;

                private:

                    /**
                     * 规则Id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 对外namespace
                     */
                    std::string m_extNamespace;
                    bool m_extNamespaceHasBeenSet;

                    /**
                     * 对外指标列表
                     */
                    std::vector<ExtMetric> m_extMetric;
                    bool m_extMetricHasBeenSet;

                    /**
                     * 输出信息
                     */
                    Producer m_producer;
                    bool m_producerHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 规则触发状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 指标粒度周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 转发过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DispenseCondition> m_dispenseConditions;
                    bool m_dispenseConditionsHasBeenSet;

                    /**
                     * 转发地域列表
                     */
                    std::vector<std::string> m_dispenseRegions;
                    bool m_dispenseRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_RULE_H_
