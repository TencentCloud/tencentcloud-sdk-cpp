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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICEDESTINATION_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICEDESTINATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/RoutingDestinationRuleLabel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 服务实例组
                */
                class GovernanceServiceDestination : public AbstractModel
                {
                public:
                    GovernanceServiceDestination();
                    ~GovernanceServiceDestination() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Service 服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _service 服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取实例标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 实例标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RoutingDestinationRuleLabel> GetLabels() const;

                    /**
                     * 设置实例标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 实例标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<RoutingDestinationRuleLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 实例标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RoutingDestinationRuleLabel> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICEDESTINATION_H_
