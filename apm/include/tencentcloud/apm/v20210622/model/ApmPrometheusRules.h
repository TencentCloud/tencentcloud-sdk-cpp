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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMPROMETHEUSRULES_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMPROMETHEUSRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 展示apm业务系统关联prometheus关系返回体
                */
                class ApmPrometheusRules : public AbstractModel
                {
                public:
                    ApmPrometheusRules();
                    ~ApmPrometheusRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标匹配规则ID
                     * @return Id 指标匹配规则ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置指标匹配规则ID
                     * @param _id 指标匹配规则ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取指标匹配规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 指标匹配规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置指标匹配规则名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 指标匹配规则名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取规则生效的应用。生效于全部应用就传空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 规则生效的应用。生效于全部应用就传空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置规则生效的应用。生效于全部应用就传空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName 规则生效的应用。生效于全部应用就传空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取指标匹配规则状态：1(启用)、2（不启用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 指标匹配规则状态：1(启用)、2（不启用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置指标匹配规则状态：1(启用)、2（不启用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 指标匹配规则状态：1(启用)、2（不启用）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取指标匹配规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricNameRule 指标匹配规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricNameRule() const;

                    /**
                     * 设置指标匹配规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricNameRule 指标匹配规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricNameRule(const std::string& _metricNameRule);

                    /**
                     * 判断参数 MetricNameRule 是否已赋值
                     * @return MetricNameRule 是否已赋值
                     * 
                     */
                    bool MetricNameRuleHasBeenSet() const;

                    /**
                     * 获取匹配类型：0精准匹配，1前缀匹配，2后缀匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricMatchType 匹配类型：0精准匹配，1前缀匹配，2后缀匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMetricMatchType() const;

                    /**
                     * 设置匹配类型：0精准匹配，1前缀匹配，2后缀匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricMatchType 匹配类型：0精准匹配，1前缀匹配，2后缀匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricMatchType(const int64_t& _metricMatchType);

                    /**
                     * 判断参数 MetricMatchType 是否已赋值
                     * @return MetricMatchType 是否已赋值
                     * 
                     */
                    bool MetricMatchTypeHasBeenSet() const;

                private:

                    /**
                     * 指标匹配规则ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 指标匹配规则名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则生效的应用。生效于全部应用就传空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 指标匹配规则状态：1(启用)、2（不启用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 指标匹配规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricNameRule;
                    bool m_metricNameRuleHasBeenSet;

                    /**
                     * 匹配类型：0精准匹配，1前缀匹配，2后缀匹配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_metricMatchType;
                    bool m_metricMatchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMPROMETHEUSRULES_H_
