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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTMANAGERCONFIGINHIBITRULE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTMANAGERCONFIGINHIBITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus Alertmanger 抑制规则
                */
                class PrometheusAlertmanagerConfigInhibitRule : public AbstractModel
                {
                public:
                    PrometheusAlertmanagerConfigInhibitRule();
                    ~PrometheusAlertmanagerConfigInhibitRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source 告警的标签匹配规则，比如 "a=b"、"a!=c" 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceMatchers Source 告警的标签匹配规则，比如 "a=b"、"a!=c" 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSourceMatchers() const;

                    /**
                     * 设置Source 告警的标签匹配规则，比如 "a=b"、"a!=c" 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceMatchers Source 告警的标签匹配规则，比如 "a=b"、"a!=c" 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceMatchers(const std::vector<std::string>& _sourceMatchers);

                    /**
                     * 判断参数 SourceMatchers 是否已赋值
                     * @return SourceMatchers 是否已赋值
                     * 
                     */
                    bool SourceMatchersHasBeenSet() const;

                    /**
                     * 获取Target 告警的标签匹配规则，比如 "a=b"、"a!=c" 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetMatchers Target 告警的标签匹配规则，比如 "a=b"、"a!=c" 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTargetMatchers() const;

                    /**
                     * 设置Target 告警的标签匹配规则，比如 "a=b"、"a!=c" 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetMatchers Target 告警的标签匹配规则，比如 "a=b"、"a!=c" 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetMatchers(const std::vector<std::string>& _targetMatchers);

                    /**
                     * 判断参数 TargetMatchers 是否已赋值
                     * @return TargetMatchers 是否已赋值
                     * 
                     */
                    bool TargetMatchersHasBeenSet() const;

                    /**
                     * 获取Source 和 Target 告警都必须有的一组标签名，比如 alertname、cluster 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Equal Source 和 Target 告警都必须有的一组标签名，比如 alertname、cluster 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEqual() const;

                    /**
                     * 设置Source 和 Target 告警都必须有的一组标签名，比如 alertname、cluster 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _equal Source 和 Target 告警都必须有的一组标签名，比如 alertname、cluster 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEqual(const std::vector<std::string>& _equal);

                    /**
                     * 判断参数 Equal 是否已赋值
                     * @return Equal 是否已赋值
                     * 
                     */
                    bool EqualHasBeenSet() const;

                private:

                    /**
                     * Source 告警的标签匹配规则，比如 "a=b"、"a!=c" 等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_sourceMatchers;
                    bool m_sourceMatchersHasBeenSet;

                    /**
                     * Target 告警的标签匹配规则，比如 "a=b"、"a!=c" 等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_targetMatchers;
                    bool m_targetMatchersHasBeenSet;

                    /**
                     * Source 和 Target 告警都必须有的一组标签名，比如 alertname、cluster 等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_equal;
                    bool m_equalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTMANAGERCONFIGINHIBITRULE_H_
