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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONTAINERSTDOUTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONTAINERSTDOUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ContainerWorkLoadInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 自建k8s-容器标准输出信息
                */
                class ContainerStdoutInfo : public AbstractModel
                {
                public:
                    ContainerStdoutInfo();
                    ~ContainerStdoutInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否所有容器
                     * @return AllContainers 是否所有容器
                     * 
                     */
                    bool GetAllContainers() const;

                    /**
                     * 设置是否所有容器
                     * @param _allContainers 是否所有容器
                     * 
                     */
                    void SetAllContainers(const bool& _allContainers);

                    /**
                     * 判断参数 AllContainers 是否已赋值
                     * @return AllContainers 是否已赋值
                     * 
                     */
                    bool AllContainersHasBeenSet() const;

                    /**
                     * 获取container为空表所有的，不为空采集指定的容器
                     * @return Container container为空表所有的，不为空采集指定的容器
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置container为空表所有的，不为空采集指定的容器
                     * @param _container container为空表所有的，不为空采集指定的容器
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取namespace可以多个，用分隔号分割,例如A,B；为空或者没有这个字段，表示所有namespace
                     * @return Namespace namespace可以多个，用分隔号分割,例如A,B；为空或者没有这个字段，表示所有namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置namespace可以多个，用分隔号分割,例如A,B；为空或者没有这个字段，表示所有namespace
                     * @param _namespace namespace可以多个，用分隔号分割,例如A,B；为空或者没有这个字段，表示所有namespace
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
                     * 获取pod标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncludeLabels pod标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIncludeLabels() const;

                    /**
                     * 设置pod标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _includeLabels pod标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIncludeLabels(const std::vector<std::string>& _includeLabels);

                    /**
                     * 判断参数 IncludeLabels 是否已赋值
                     * @return IncludeLabels 是否已赋值
                     * 
                     */
                    bool IncludeLabelsHasBeenSet() const;

                    /**
                     * 获取工作负载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkLoads 工作负载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ContainerWorkLoadInfo> GetWorkLoads() const;

                    /**
                     * 设置工作负载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workLoads 工作负载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkLoads(const std::vector<ContainerWorkLoadInfo>& _workLoads);

                    /**
                     * 判断参数 WorkLoads 是否已赋值
                     * @return WorkLoads 是否已赋值
                     * 
                     */
                    bool WorkLoadsHasBeenSet() const;

                    /**
                     * 获取需要排除的namespace可以多个，用分隔号分割,例如A,B
                     * @return ExcludeNamespace 需要排除的namespace可以多个，用分隔号分割,例如A,B
                     * 
                     */
                    std::string GetExcludeNamespace() const;

                    /**
                     * 设置需要排除的namespace可以多个，用分隔号分割,例如A,B
                     * @param _excludeNamespace 需要排除的namespace可以多个，用分隔号分割,例如A,B
                     * 
                     */
                    void SetExcludeNamespace(const std::string& _excludeNamespace);

                    /**
                     * 判断参数 ExcludeNamespace 是否已赋值
                     * @return ExcludeNamespace 是否已赋值
                     * 
                     */
                    bool ExcludeNamespaceHasBeenSet() const;

                    /**
                     * 获取需要排除的pod标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludeLabels 需要排除的pod标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExcludeLabels() const;

                    /**
                     * 设置需要排除的pod标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludeLabels 需要排除的pod标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExcludeLabels(const std::vector<std::string>& _excludeLabels);

                    /**
                     * 判断参数 ExcludeLabels 是否已赋值
                     * @return ExcludeLabels 是否已赋值
                     * 
                     */
                    bool ExcludeLabelsHasBeenSet() const;

                    /**
                     * 获取metadata信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomLabels metadata信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCustomLabels() const;

                    /**
                     * 设置metadata信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customLabels metadata信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomLabels(const std::vector<std::string>& _customLabels);

                    /**
                     * 判断参数 CustomLabels 是否已赋值
                     * @return CustomLabels 是否已赋值
                     * 
                     */
                    bool CustomLabelsHasBeenSet() const;

                private:

                    /**
                     * 是否所有容器
                     */
                    bool m_allContainers;
                    bool m_allContainersHasBeenSet;

                    /**
                     * container为空表所有的，不为空采集指定的容器
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * namespace可以多个，用分隔号分割,例如A,B；为空或者没有这个字段，表示所有namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * pod标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_includeLabels;
                    bool m_includeLabelsHasBeenSet;

                    /**
                     * 工作负载信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ContainerWorkLoadInfo> m_workLoads;
                    bool m_workLoadsHasBeenSet;

                    /**
                     * 需要排除的namespace可以多个，用分隔号分割,例如A,B
                     */
                    std::string m_excludeNamespace;
                    bool m_excludeNamespaceHasBeenSet;

                    /**
                     * 需要排除的pod标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_excludeLabels;
                    bool m_excludeLabelsHasBeenSet;

                    /**
                     * metadata信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_customLabels;
                    bool m_customLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONTAINERSTDOUTINFO_H_
