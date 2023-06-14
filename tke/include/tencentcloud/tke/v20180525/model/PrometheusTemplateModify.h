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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSTEMPLATEMODIFY_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSTEMPLATEMODIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusAlertRule.h>
#include <tencentcloud/tke/v20180525/model/PrometheusConfigItem.h>
#include <tencentcloud/tke/v20180525/model/PrometheusAlertRuleDetail.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 云原生Prometheus模板可修改项
                */
                class PrometheusTemplateModify : public AbstractModel
                {
                public:
                    PrometheusTemplateModify();
                    ~PrometheusTemplateModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取修改名称
                     * @return Name 修改名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置修改名称
                     * @param _name 修改名称
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
                     * 获取修改描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Describe 修改描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置修改描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _describe 修改描述
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
                     * 获取修改内容，只有当模板类型是Alert时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertRules 修改内容，只有当模板类型是Alert时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusAlertRule> GetAlertRules() const;

                    /**
                     * 设置修改内容，只有当模板类型是Alert时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertRules 修改内容，只有当模板类型是Alert时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertRules(const std::vector<PrometheusAlertRule>& _alertRules);

                    /**
                     * 判断参数 AlertRules 是否已赋值
                     * @return AlertRules 是否已赋值
                     * 
                     */
                    bool AlertRulesHasBeenSet() const;

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
                     * 获取修改内容，只有当模板类型是Alert时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertDetailRules 修改内容，只有当模板类型是Alert时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusAlertRuleDetail> GetAlertDetailRules() const;

                    /**
                     * 设置修改内容，只有当模板类型是Alert时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertDetailRules 修改内容，只有当模板类型是Alert时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertDetailRules(const std::vector<PrometheusAlertRuleDetail>& _alertDetailRules);

                    /**
                     * 判断参数 AlertDetailRules 是否已赋值
                     * @return AlertDetailRules 是否已赋值
                     * 
                     */
                    bool AlertDetailRulesHasBeenSet() const;

                private:

                    /**
                     * 修改名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 修改描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 修改内容，只有当模板类型是Alert时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusAlertRule> m_alertRules;
                    bool m_alertRulesHasBeenSet;

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
                     * 修改内容，只有当模板类型是Alert时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusAlertRuleDetail> m_alertDetailRules;
                    bool m_alertDetailRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSTEMPLATEMODIFY_H_
