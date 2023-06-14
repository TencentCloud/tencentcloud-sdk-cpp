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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTPOLICYITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTPOLICYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertRule.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusNotificationItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 托管prometheus告警策略实例
                */
                class PrometheusAlertPolicyItem : public AbstractModel
                {
                public:
                    PrometheusAlertPolicyItem();
                    ~PrometheusAlertPolicyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名称
                     * @return Name 策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名称
                     * @param _name 策略名称
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
                     * 获取告警策略 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 告警策略 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置告警策略 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 告警策略 id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取如果该告警来自模板下发，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 如果该告警来自模板下发，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置如果该告警来自模板下发，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 如果该告警来自模板下发，则TemplateId为模板id
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
                     * 获取告警渠道，模板中使用可能返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notification 告警渠道，模板中使用可能返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrometheusNotificationItem GetNotification() const;

                    /**
                     * 设置告警渠道，模板中使用可能返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notification 告警渠道，模板中使用可能返回null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotification(const PrometheusNotificationItem& _notification);

                    /**
                     * 判断参数 Notification 是否已赋值
                     * @return Notification 是否已赋值
                     * 
                     */
                    bool NotificationHasBeenSet() const;

                    /**
                     * 获取最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取如果告警策略来源于用户集群CRD资源定义，则ClusterId为所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 如果告警策略来源于用户集群CRD资源定义，则ClusterId为所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置如果告警策略来源于用户集群CRD资源定义，则ClusterId为所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 如果告警策略来源于用户集群CRD资源定义，则ClusterId为所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<PrometheusAlertRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 告警策略 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 如果该告警来自模板下发，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 告警渠道，模板中使用可能返回null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrometheusNotificationItem m_notification;
                    bool m_notificationHasBeenSet;

                    /**
                     * 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 如果告警策略来源于用户集群CRD资源定义，则ClusterId为所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTPOLICYITEM_H_
