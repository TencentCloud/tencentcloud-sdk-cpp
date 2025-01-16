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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINTEGRATIONCONFIG_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINTEGRATIONCONFIG_H_

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
                * Grafana 集成实例配置
                */
                class GrafanaIntegrationConfig : public AbstractModel
                {
                public:
                    GrafanaIntegrationConfig();
                    ~GrafanaIntegrationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集成 ID
                     * @return IntegrationId 集成 ID
                     * 
                     */
                    std::string GetIntegrationId() const;

                    /**
                     * 设置集成 ID
                     * @param _integrationId 集成 ID
                     * 
                     */
                    void SetIntegrationId(const std::string& _integrationId);

                    /**
                     * 判断参数 IntegrationId 是否已赋值
                     * @return IntegrationId 是否已赋值
                     * 
                     */
                    bool IntegrationIdHasBeenSet() const;

                    /**
                     * 获取集成类型
                     * @return Kind 集成类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置集成类型
                     * @param _kind 集成类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取集成内容
                     * @return Content 集成内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置集成内容
                     * @param _content 集成内容
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
                     * 获取集成描述
                     * @return Description 集成描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置集成描述
                     * @param _description 集成描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Grafana 跳转地址(目前未使用，默认为空)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaURL Grafana 跳转地址(目前未使用，默认为空)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrafanaURL() const;

                    /**
                     * 设置Grafana 跳转地址(目前未使用，默认为空)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaURL Grafana 跳转地址(目前未使用，默认为空)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrafanaURL(const std::string& _grafanaURL);

                    /**
                     * 判断参数 GrafanaURL 是否已赋值
                     * @return GrafanaURL 是否已赋值
                     * 
                     */
                    bool GrafanaURLHasBeenSet() const;

                private:

                    /**
                     * 集成 ID
                     */
                    std::string m_integrationId;
                    bool m_integrationIdHasBeenSet;

                    /**
                     * 集成类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 集成内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 集成描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Grafana 跳转地址(目前未使用，默认为空)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaURL;
                    bool m_grafanaURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINTEGRATIONCONFIG_H_
