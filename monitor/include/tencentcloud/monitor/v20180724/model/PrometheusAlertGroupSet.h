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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTGROUPSET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTGROUPSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertCustomReceiver.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertGroupRuleSet.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus告警规则分组信息
                */
                class PrometheusAlertGroupSet : public AbstractModel
                {
                public:
                    PrometheusAlertGroupSet();
                    ~PrometheusAlertGroupSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警分组ID，满足正则表达式`alert-[a-z0-9]{8}`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 告警分组ID，满足正则表达式`alert-[a-z0-9]{8}`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置告警分组ID，满足正则表达式`alert-[a-z0-9]{8}`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 告警分组ID，满足正则表达式`alert-[a-z0-9]{8}`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取告警分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 告警分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置告警分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 告警分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取云监控告警模板ID ，返回告警模板转换后的notice ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AMPReceivers 云监控告警模板ID ，返回告警模板转换后的notice ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAMPReceivers() const;

                    /**
                     * 设置云监控告警模板ID ，返回告警模板转换后的notice ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aMPReceivers 云监控告警模板ID ，返回告警模板转换后的notice ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAMPReceivers(const std::vector<std::string>& _aMPReceivers);

                    /**
                     * 判断参数 AMPReceivers 是否已赋值
                     * @return AMPReceivers 是否已赋值
                     * 
                     */
                    bool AMPReceiversHasBeenSet() const;

                    /**
                     * 获取自定义告警模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomReceiver 自定义告警模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrometheusAlertCustomReceiver GetCustomReceiver() const;

                    /**
                     * 设置自定义告警模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customReceiver 自定义告警模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomReceiver(const PrometheusAlertCustomReceiver& _customReceiver);

                    /**
                     * 判断参数 CustomReceiver 是否已赋值
                     * @return CustomReceiver 是否已赋值
                     * 
                     */
                    bool CustomReceiverHasBeenSet() const;

                    /**
                     * 获取告警通知间隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepeatInterval 告警通知间隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepeatInterval() const;

                    /**
                     * 设置告警通知间隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repeatInterval 告警通知间隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepeatInterval(const std::string& _repeatInterval);

                    /**
                     * 判断参数 RepeatInterval 是否已赋值
                     * @return RepeatInterval 是否已赋值
                     * 
                     */
                    bool RepeatIntervalHasBeenSet() const;

                    /**
                     * 获取若告警分组通过模板创建，则返回模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 若告警分组通过模板创建，则返回模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置若告警分组通过模板创建，则返回模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 若告警分组通过模板创建，则返回模板ID
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
                     * 获取分组内告警规则详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rules 分组内告警规则详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusAlertGroupRuleSet> GetRules() const;

                    /**
                     * 设置分组内告警规则详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rules 分组内告警规则详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRules(const std::vector<PrometheusAlertGroupRuleSet>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取分组创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 分组创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置分组创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 分组创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取分组更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 分组更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置分组更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 分组更新时间
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

                private:

                    /**
                     * 告警分组ID，满足正则表达式`alert-[a-z0-9]{8}`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 告警分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 云监控告警模板ID ，返回告警模板转换后的notice ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_aMPReceivers;
                    bool m_aMPReceiversHasBeenSet;

                    /**
                     * 自定义告警模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrometheusAlertCustomReceiver m_customReceiver;
                    bool m_customReceiverHasBeenSet;

                    /**
                     * 告警通知间隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repeatInterval;
                    bool m_repeatIntervalHasBeenSet;

                    /**
                     * 若告警分组通过模板创建，则返回模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 分组内告警规则详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusAlertGroupRuleSet> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 分组创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 分组更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTGROUPSET_H_
