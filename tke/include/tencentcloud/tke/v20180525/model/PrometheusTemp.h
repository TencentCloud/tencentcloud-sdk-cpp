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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSTEMP_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSTEMP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusConfigItem.h>
#include <tencentcloud/tke/v20180525/model/PrometheusAlertPolicyItem.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 模板实例
                */
                class PrometheusTemp : public AbstractModel
                {
                public:
                    PrometheusTemp();
                    ~PrometheusTemp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板名称
                     * @return Name 模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
                     * @param _name 模板名称
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
                     * 获取模板维度，支持以下类型
instance 实例级别
cluster 集群级别
                     * @return Level 模板维度，支持以下类型
instance 实例级别
cluster 集群级别
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置模板维度，支持以下类型
instance 实例级别
cluster 集群级别
                     * @param _level 模板维度，支持以下类型
instance 实例级别
cluster 集群级别
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Describe 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _describe 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取当Level为instance时有效，
模板中的聚合规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordRules 当Level为instance时有效，
模板中的聚合规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetRecordRules() const;

                    /**
                     * 设置当Level为instance时有效，
模板中的聚合规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordRules 当Level为instance时有效，
模板中的聚合规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordRules(const std::vector<PrometheusConfigItem>& _recordRules);

                    /**
                     * 判断参数 RecordRules 是否已赋值
                     * @return RecordRules 是否已赋值
                     * 
                     */
                    bool RecordRulesHasBeenSet() const;

                    /**
                     * 获取当Level为cluster时有效，
模板中的ServiceMonitor规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceMonitors 当Level为cluster时有效，
模板中的ServiceMonitor规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetServiceMonitors() const;

                    /**
                     * 设置当Level为cluster时有效，
模板中的ServiceMonitor规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceMonitors 当Level为cluster时有效，
模板中的ServiceMonitor规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceMonitors(const std::vector<PrometheusConfigItem>& _serviceMonitors);

                    /**
                     * 判断参数 ServiceMonitors 是否已赋值
                     * @return ServiceMonitors 是否已赋值
                     * 
                     */
                    bool ServiceMonitorsHasBeenSet() const;

                    /**
                     * 获取当Level为cluster时有效，
模板中的PodMonitors规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodMonitors 当Level为cluster时有效，
模板中的PodMonitors规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetPodMonitors() const;

                    /**
                     * 设置当Level为cluster时有效，
模板中的PodMonitors规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podMonitors 当Level为cluster时有效，
模板中的PodMonitors规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodMonitors(const std::vector<PrometheusConfigItem>& _podMonitors);

                    /**
                     * 判断参数 PodMonitors 是否已赋值
                     * @return PodMonitors 是否已赋值
                     * 
                     */
                    bool PodMonitorsHasBeenSet() const;

                    /**
                     * 获取当Level为cluster时有效，
模板中的RawJobs规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RawJobs 当Level为cluster时有效，
模板中的RawJobs规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetRawJobs() const;

                    /**
                     * 设置当Level为cluster时有效，
模板中的RawJobs规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rawJobs 当Level为cluster时有效，
模板中的RawJobs规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRawJobs(const std::vector<PrometheusConfigItem>& _rawJobs);

                    /**
                     * 判断参数 RawJobs 是否已赋值
                     * @return RawJobs 是否已赋值
                     * 
                     */
                    bool RawJobsHasBeenSet() const;

                    /**
                     * 获取模板的ID, 用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 模板的ID, 用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板的ID, 用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 模板的ID, 用于出参
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
                     * 获取最近更新时间，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 最近更新时间，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近更新时间，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 最近更新时间，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取当前版本，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 当前版本，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置当前版本，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 当前版本，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取是否系统提供的默认模板，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefault 是否系统提供的默认模板，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否系统提供的默认模板，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDefault 是否系统提供的默认模板，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取当Level为instance时有效，
模板中的告警配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertDetailRules 当Level为instance时有效，
模板中的告警配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusAlertPolicyItem> GetAlertDetailRules() const;

                    /**
                     * 设置当Level为instance时有效，
模板中的告警配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertDetailRules 当Level为instance时有效，
模板中的告警配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertDetailRules(const std::vector<PrometheusAlertPolicyItem>& _alertDetailRules);

                    /**
                     * 判断参数 AlertDetailRules 是否已赋值
                     * @return AlertDetailRules 是否已赋值
                     * 
                     */
                    bool AlertDetailRulesHasBeenSet() const;

                    /**
                     * 获取关联实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetsTotal 关联实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTargetsTotal() const;

                    /**
                     * 设置关联实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetsTotal 关联实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetsTotal(const int64_t& _targetsTotal);

                    /**
                     * 判断参数 TargetsTotal 是否已赋值
                     * @return TargetsTotal 是否已赋值
                     * 
                     */
                    bool TargetsTotalHasBeenSet() const;

                private:

                    /**
                     * 模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板维度，支持以下类型
instance 实例级别
cluster 集群级别
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 当Level为instance时有效，
模板中的聚合规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusConfigItem> m_recordRules;
                    bool m_recordRulesHasBeenSet;

                    /**
                     * 当Level为cluster时有效，
模板中的ServiceMonitor规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusConfigItem> m_serviceMonitors;
                    bool m_serviceMonitorsHasBeenSet;

                    /**
                     * 当Level为cluster时有效，
模板中的PodMonitors规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusConfigItem> m_podMonitors;
                    bool m_podMonitorsHasBeenSet;

                    /**
                     * 当Level为cluster时有效，
模板中的RawJobs规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusConfigItem> m_rawJobs;
                    bool m_rawJobsHasBeenSet;

                    /**
                     * 模板的ID, 用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 最近更新时间，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 当前版本，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 是否系统提供的默认模板，用于出参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 当Level为instance时有效，
模板中的告警配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusAlertPolicyItem> m_alertDetailRules;
                    bool m_alertDetailRulesHasBeenSet;

                    /**
                     * 关联实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetsTotal;
                    bool m_targetsTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSTEMP_H_
