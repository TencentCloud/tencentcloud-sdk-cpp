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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTRULEDETAIL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusAlertRule.h>
#include <tencentcloud/tke/v20180525/model/PrometheusNotification.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 托管prometheus告警配置实例
                */
                class PrometheusAlertRuleDetail : public AbstractModel
                {
                public:
                    PrometheusAlertRuleDetail();
                    ~PrometheusAlertRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取规则列表
                     * @return Rules 规则列表
                     * 
                     */
                    std::vector<PrometheusAlertRule> GetRules() const;

                    /**
                     * 设置规则列表
                     * @param _rules 规则列表
                     * 
                     */
                    void SetRules(const std::vector<PrometheusAlertRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取最后修改时间
                     * @return UpdatedAt 最后修改时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置最后修改时间
                     * @param _updatedAt 最后修改时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取告警渠道
                     * @return Notification 告警渠道
                     * 
                     */
                    PrometheusNotification GetNotification() const;

                    /**
                     * 设置告警渠道
                     * @param _notification 告警渠道
                     * 
                     */
                    void SetNotification(const PrometheusNotification& _notification);

                    /**
                     * 判断参数 Notification 是否已赋值
                     * @return Notification 是否已赋值
                     * 
                     */
                    bool NotificationHasBeenSet() const;

                    /**
                     * 获取告警 id
                     * @return Id 告警 id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置告警 id
                     * @param _id 告警 id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取如果该告警来至模板下发，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 如果该告警来至模板下发，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置如果该告警来至模板下发，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 如果该告警来至模板下发，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取计算周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Interval 计算周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置计算周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interval 计算周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<PrometheusAlertRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 最后修改时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 告警渠道
                     */
                    PrometheusNotification m_notification;
                    bool m_notificationHasBeenSet;

                    /**
                     * 告警 id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 如果该告警来至模板下发，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 计算周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSALERTRULEDETAIL_H_
