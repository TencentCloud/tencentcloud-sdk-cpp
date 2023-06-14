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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_SERVICEDISCOVERYITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_SERVICEDISCOVERYITEM_H_

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
                * Prometheus 服务发现信息
                */
                class ServiceDiscoveryItem : public AbstractModel
                {
                public:
                    ServiceDiscoveryItem();
                    ~ServiceDiscoveryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务发现名称
                     * @return Name 服务发现名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务发现名称
                     * @param _name 服务发现名称
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
                     * 获取服务发现属于的 Namespace
                     * @return Namespace 服务发现属于的 Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置服务发现属于的 Namespace
                     * @param _namespace 服务发现属于的 Namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取服务发现类型: ServiceMonitor/PodMonitor
                     * @return Kind 服务发现类型: ServiceMonitor/PodMonitor
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置服务发现类型: ServiceMonitor/PodMonitor
                     * @param _kind 服务发现类型: ServiceMonitor/PodMonitor
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
                     * 获取Namespace 选取方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceSelector Namespace 选取方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceSelector() const;

                    /**
                     * 设置Namespace 选取方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceSelector Namespace 选取方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceSelector(const std::string& _namespaceSelector);

                    /**
                     * 判断参数 NamespaceSelector 是否已赋值
                     * @return NamespaceSelector 是否已赋值
                     * 
                     */
                    bool NamespaceSelectorHasBeenSet() const;

                    /**
                     * 获取Label 选取方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Selector Label 选取方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelector() const;

                    /**
                     * 设置Label 选取方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selector Label 选取方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSelector(const std::string& _selector);

                    /**
                     * 判断参数 Selector 是否已赋值
                     * @return Selector 是否已赋值
                     * 
                     */
                    bool SelectorHasBeenSet() const;

                    /**
                     * 获取Endpoints 信息（PodMonitor 不含该参数）
                     * @return Endpoints Endpoints 信息（PodMonitor 不含该参数）
                     * 
                     */
                    std::string GetEndpoints() const;

                    /**
                     * 设置Endpoints 信息（PodMonitor 不含该参数）
                     * @param _endpoints Endpoints 信息（PodMonitor 不含该参数）
                     * 
                     */
                    void SetEndpoints(const std::string& _endpoints);

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                    /**
                     * 获取服务发现对应的配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Yaml 服务发现对应的配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置服务发现对应的配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yaml 服务发现对应的配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                private:

                    /**
                     * 服务发现名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 服务发现属于的 Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 服务发现类型: ServiceMonitor/PodMonitor
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Namespace 选取方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceSelector;
                    bool m_namespaceSelectorHasBeenSet;

                    /**
                     * Label 选取方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selector;
                    bool m_selectorHasBeenSet;

                    /**
                     * Endpoints 信息（PodMonitor 不含该参数）
                     */
                    std::string m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * 服务发现对应的配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_SERVICEDISCOVERYITEM_H_
