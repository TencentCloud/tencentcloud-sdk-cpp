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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSRECORDRULEYAMLITEM_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSRECORDRULEYAMLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * prometheus聚合规则实例详情，包含所属集群ID
                */
                class PrometheusRecordRuleYamlItem : public AbstractModel
                {
                public:
                    PrometheusRecordRuleYamlItem();
                    ~PrometheusRecordRuleYamlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例名称
                     * @return Name 实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称
                     * @param _name 实例名称
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
                     * 获取最近更新时间
                     * @return UpdateTime 最近更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近更新时间
                     * @param _updateTime 最近更新时间
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
                     * 获取Yaml内容
                     * @return TemplateId Yaml内容
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Yaml内容
                     * @param _templateId Yaml内容
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
                     * 获取如果该聚合规则来至模板，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 如果该聚合规则来至模板，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置如果该聚合规则来至模板，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 如果该聚合规则来至模板，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取该聚合规则如果来源于用户集群crd资源定义，则ClusterId为所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 该聚合规则如果来源于用户集群crd资源定义，则ClusterId为所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置该聚合规则如果来源于用户集群crd资源定义，则ClusterId为所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 该聚合规则如果来源于用户集群crd资源定义，则ClusterId为所属集群ID
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
                     * 实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 最近更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Yaml内容
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 如果该聚合规则来至模板，则TemplateId为模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 该聚合规则如果来源于用户集群crd资源定义，则ClusterId为所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSRECORDRULEYAMLITEM_H_
