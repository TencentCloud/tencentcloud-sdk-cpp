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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTMANAGERCONFIGV2_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTMANAGERCONFIGV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertmanagerConfigInhibitRule.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus Alertmanger 可修改配置
                */
                class PrometheusAlertmanagerConfigV2 : public AbstractModel
                {
                public:
                    PrometheusAlertmanagerConfigV2();
                    ~PrometheusAlertmanagerConfigV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prometheus Alertmanger 抑制规则组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InhibitRules Prometheus Alertmanger 抑制规则组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusAlertmanagerConfigInhibitRule> GetInhibitRules() const;

                    /**
                     * 设置Prometheus Alertmanger 抑制规则组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inhibitRules Prometheus Alertmanger 抑制规则组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInhibitRules(const std::vector<PrometheusAlertmanagerConfigInhibitRule>& _inhibitRules);

                    /**
                     * 判断参数 InhibitRules 是否已赋值
                     * @return InhibitRules 是否已赋值
                     * 
                     */
                    bool InhibitRulesHasBeenSet() const;

                private:

                    /**
                     * Prometheus Alertmanger 抑制规则组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusAlertmanagerConfigInhibitRule> m_inhibitRules;
                    bool m_inhibitRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTMANAGERCONFIGV2_H_
