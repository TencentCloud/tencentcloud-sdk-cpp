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
                     * 获取<p>指标匹配规则ID</p>
                     * @return Id <p>指标匹配规则ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>指标匹配规则ID</p>
                     * @param _id <p>指标匹配规则ID</p>
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
                     * 获取<p>指标匹配规则名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>指标匹配规则名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>指标匹配规则名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>指标匹配规则名</p>
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
                     * 获取<p>规则生效的应用。生效于全部应用就传空字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName <p>规则生效的应用。生效于全部应用就传空字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>规则生效的应用。生效于全部应用就传空字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName <p>规则生效的应用。生效于全部应用就传空字符串</p>
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
                     * 获取<p>指标匹配规则状态：1(启用)、2（不启用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>指标匹配规则状态：1(启用)、2（不启用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>指标匹配规则状态：1(启用)、2（不启用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>指标匹配规则状态：1(启用)、2（不启用）</p>
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
                     * 获取<p>指标匹配规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricNameRule <p>指标匹配规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricNameRule() const;

                    /**
                     * 设置<p>指标匹配规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricNameRule <p>指标匹配规则</p>
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
                     * 获取<p>匹配类型：0精准匹配，1前缀匹配，2后缀匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricMatchType <p>匹配类型：0精准匹配，1前缀匹配，2后缀匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMetricMatchType() const;

                    /**
                     * 设置<p>匹配类型：0精准匹配，1前缀匹配，2后缀匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricMatchType <p>匹配类型：0精准匹配，1前缀匹配，2后缀匹配</p>
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

                    /**
                     * 获取<p>是否追加资源属性</p>
                     * @return AppendResourceAttributes <p>是否追加资源属性</p>
                     * 
                     */
                    bool GetAppendResourceAttributes() const;

                    /**
                     * 设置<p>是否追加资源属性</p>
                     * @param _appendResourceAttributes <p>是否追加资源属性</p>
                     * 
                     */
                    void SetAppendResourceAttributes(const bool& _appendResourceAttributes);

                    /**
                     * 判断参数 AppendResourceAttributes 是否已赋值
                     * @return AppendResourceAttributes 是否已赋值
                     * 
                     */
                    bool AppendResourceAttributesHasBeenSet() const;

                private:

                    /**
                     * <p>指标匹配规则ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>指标匹配规则名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>规则生效的应用。生效于全部应用就传空字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>指标匹配规则状态：1(启用)、2（不启用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>指标匹配规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricNameRule;
                    bool m_metricNameRuleHasBeenSet;

                    /**
                     * <p>匹配类型：0精准匹配，1前缀匹配，2后缀匹配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_metricMatchType;
                    bool m_metricMatchTypeHasBeenSet;

                    /**
                     * <p>是否追加资源属性</p>
                     */
                    bool m_appendResourceAttributes;
                    bool m_appendResourceAttributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMPROMETHEUSRULES_H_
