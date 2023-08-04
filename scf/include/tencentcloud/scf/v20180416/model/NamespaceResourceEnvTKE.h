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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENVTKE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENVTKE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/K8SLabel.h>
#include <tencentcloud/scf/v20180416/model/K8SToleration.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 基于TKE的资源池选项
                */
                class NamespaceResourceEnvTKE : public AbstractModel
                {
                public:
                    NamespaceResourceEnvTKE();
                    ~NamespaceResourceEnvTKE() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetID 子网ID
                     * 
                     */
                    std::string GetSubnetID() const;

                    /**
                     * 设置子网ID
                     * @param _subnetID 子网ID
                     * 
                     */
                    void SetSubnetID(const std::string& _subnetID);

                    /**
                     * 判断参数 SubnetID 是否已赋值
                     * @return SubnetID 是否已赋值
                     * 
                     */
                    bool SubnetIDHasBeenSet() const;

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
                     * 获取数据存储地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataPath 数据存储地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataPath() const;

                    /**
                     * 设置数据存储地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataPath 数据存储地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataPath(const std::string& _dataPath);

                    /**
                     * 判断参数 DataPath 是否已赋值
                     * @return DataPath 是否已赋值
                     * 
                     */
                    bool DataPathHasBeenSet() const;

                    /**
                     * 获取node选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeSelector node选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<K8SLabel> GetNodeSelector() const;

                    /**
                     * 设置node选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeSelector node选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeSelector(const std::vector<K8SLabel>& _nodeSelector);

                    /**
                     * 判断参数 NodeSelector 是否已赋值
                     * @return NodeSelector 是否已赋值
                     * 
                     */
                    bool NodeSelectorHasBeenSet() const;

                    /**
                     * 获取污点容忍
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tolerations 污点容忍
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<K8SToleration> GetTolerations() const;

                    /**
                     * 设置污点容忍
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tolerations 污点容忍
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTolerations(const std::vector<K8SToleration>& _tolerations);

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                    /**
                     * 获取scf组件将占用的节点端口起始号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port scf组件将占用的节点端口起始号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置scf组件将占用的节点端口起始号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port scf组件将占用的节点端口起始号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取yaml格式的pod patch内容，例如
metadata:
  labels:
    key: value
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodTemplatePatch yaml格式的pod patch内容，例如
metadata:
  labels:
    key: value
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodTemplatePatch() const;

                    /**
                     * 设置yaml格式的pod patch内容，例如
metadata:
  labels:
    key: value
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podTemplatePatch yaml格式的pod patch内容，例如
metadata:
  labels:
    key: value
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodTemplatePatch(const std::string& _podTemplatePatch);

                    /**
                     * 判断参数 PodTemplatePatch 是否已赋值
                     * @return PodTemplatePatch 是否已赋值
                     * 
                     */
                    bool PodTemplatePatchHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetID;
                    bool m_subnetIDHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 数据存储地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataPath;
                    bool m_dataPathHasBeenSet;

                    /**
                     * node选择器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<K8SLabel> m_nodeSelector;
                    bool m_nodeSelectorHasBeenSet;

                    /**
                     * 污点容忍
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<K8SToleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * scf组件将占用的节点端口起始号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * yaml格式的pod patch内容，例如
metadata:
  labels:
    key: value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podTemplatePatch;
                    bool m_podTemplatePatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACERESOURCEENVTKE_H_
