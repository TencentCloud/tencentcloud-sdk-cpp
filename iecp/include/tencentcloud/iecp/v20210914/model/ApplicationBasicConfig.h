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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONBASICCONFIG_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONBASICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/Label.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 应用基本配置
                */
                class ApplicationBasicConfig : public AbstractModel
                {
                public:
                    ApplicationBasicConfig();
                    ~ApplicationBasicConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
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
                     * 获取工作负载类型
                     * @return WorkflowKind 工作负载类型
                     * 
                     */
                    std::string GetWorkflowKind() const;

                    /**
                     * 设置工作负载类型
                     * @param _workflowKind 工作负载类型
                     * 
                     */
                    void SetWorkflowKind(const std::string& _workflowKind);

                    /**
                     * 判断参数 WorkflowKind 是否已赋值
                     * @return WorkflowKind 是否已赋值
                     * 
                     */
                    bool WorkflowKindHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return Labels 标签信息
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置标签信息
                     * @param _labels 标签信息
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Grid唯一Key
                     * @return GridUniqKey Grid唯一Key
                     * 
                     */
                    std::string GetGridUniqKey() const;

                    /**
                     * 设置Grid唯一Key
                     * @param _gridUniqKey Grid唯一Key
                     * 
                     */
                    void SetGridUniqKey(const std::string& _gridUniqKey);

                    /**
                     * 判断参数 GridUniqKey 是否已赋值
                     * @return GridUniqKey 是否已赋值
                     * 
                     */
                    bool GridUniqKeyHasBeenSet() const;

                    /**
                     * 获取NodeSelector标签
                     * @return NodeSelector NodeSelector标签
                     * 
                     */
                    std::vector<Label> GetNodeSelector() const;

                    /**
                     * 设置NodeSelector标签
                     * @param _nodeSelector NodeSelector标签
                     * 
                     */
                    void SetNodeSelector(const std::vector<Label>& _nodeSelector);

                    /**
                     * 判断参数 NodeSelector 是否已赋值
                     * @return NodeSelector 是否已赋值
                     * 
                     */
                    bool NodeSelectorHasBeenSet() const;

                    /**
                     * 获取实例数
                     * @return Replicas 实例数
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置实例数
                     * @param _replicas 实例数
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取可用实例数
                     * @return AvailableReplicas 可用实例数
                     * 
                     */
                    int64_t GetAvailableReplicas() const;

                    /**
                     * 设置可用实例数
                     * @param _availableReplicas 可用实例数
                     * 
                     */
                    void SetAvailableReplicas(const int64_t& _availableReplicas);

                    /**
                     * 判断参数 AvailableReplicas 是否已赋值
                     * @return AvailableReplicas 是否已赋值
                     * 
                     */
                    bool AvailableReplicasHasBeenSet() const;

                    /**
                     * 获取是否开启service环境变量注入pod
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableServiceLinks 是否开启service环境变量注入pod
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableServiceLinks() const;

                    /**
                     * 设置是否开启service环境变量注入pod
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableServiceLinks 是否开启service环境变量注入pod
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableServiceLinks(const bool& _enableServiceLinks);

                    /**
                     * 判断参数 EnableServiceLinks 是否已赋值
                     * @return EnableServiceLinks 是否已赋值
                     * 
                     */
                    bool EnableServiceLinksHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 工作负载类型
                     */
                    std::string m_workflowKind;
                    bool m_workflowKindHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Grid唯一Key
                     */
                    std::string m_gridUniqKey;
                    bool m_gridUniqKeyHasBeenSet;

                    /**
                     * NodeSelector标签
                     */
                    std::vector<Label> m_nodeSelector;
                    bool m_nodeSelectorHasBeenSet;

                    /**
                     * 实例数
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 可用实例数
                     */
                    int64_t m_availableReplicas;
                    bool m_availableReplicasHasBeenSet;

                    /**
                     * 是否开启service环境变量注入pod
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableServiceLinks;
                    bool m_enableServiceLinksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONBASICCONFIG_H_
