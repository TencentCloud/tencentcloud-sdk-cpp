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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_NODEPOOL_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_NODEPOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/TagSpecification.h>
#include <tencentcloud/tke/v20220501/model/Taint.h>
#include <tencentcloud/tke/v20220501/model/Label.h>
#include <tencentcloud/tke/v20220501/model/NativeNodePoolInfo.h>
#include <tencentcloud/tke/v20220501/model/Annotation.h>
#include <tencentcloud/tke/v20220501/model/SuperNodePoolInfo.h>
#include <tencentcloud/tke/v20220501/model/RegularNodePoolInfo.h>
#include <tencentcloud/tke/v20220501/model/ExternalNodePoolInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 节点池信息
                */
                class NodePool : public AbstractModel
                {
                public:
                    NodePool();
                    ~NodePool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取节点池 ID
                     * @return NodePoolId 节点池 ID
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置节点池 ID
                     * @param _nodePoolId 节点池 ID
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagSpecification> GetTags() const;

                    /**
                     * 设置节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<TagSpecification>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取节点污点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Taints 节点污点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置节点污点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taints 节点污点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     * 
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取是否开启删除保护
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeletionProtection 是否开启删除保护
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置是否开启删除保护
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deletionProtection 是否开启删除保护
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取节点是否不可调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unschedulable 节点是否不可调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUnschedulable() const;

                    /**
                     * 设置节点是否不可调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unschedulable 节点是否不可调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnschedulable(const bool& _unschedulable);

                    /**
                     * 判断参数 Unschedulable 是否已赋值
                     * @return Unschedulable 是否已赋值
                     * 
                     */
                    bool UnschedulableHasBeenSet() const;

                    /**
                     * 获取节点池类型
                     * @return Type 节点池类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点池类型
                     * @param _type 节点池类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取节点  Labels
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 节点  Labels
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置节点  Labels
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 节点  Labels
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取节点池状态
                     * @return LifeState 节点池状态
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置节点池状态
                     * @param _lifeState 节点池状态
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
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
                     * 获取节点池名称
                     * @return Name 节点池名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点池名称
                     * @param _name 节点池名称
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
                     * 获取原生节点池参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Native 原生节点池参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NativeNodePoolInfo GetNative() const;

                    /**
                     * 设置原生节点池参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _native 原生节点池参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNative(const NativeNodePoolInfo& _native);

                    /**
                     * 判断参数 Native 是否已赋值
                     * @return Native 是否已赋值
                     * 
                     */
                    bool NativeHasBeenSet() const;

                    /**
                     * 获取节点 Annotation 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Annotations 节点 Annotation 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Annotation> GetAnnotations() const;

                    /**
                     * 设置节点 Annotation 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _annotations 节点 Annotation 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnnotations(const std::vector<Annotation>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取超级节点池参数，在Type等于Super该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Super 超级节点池参数，在Type等于Super该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SuperNodePoolInfo GetSuper() const;

                    /**
                     * 设置超级节点池参数，在Type等于Super该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _super 超级节点池参数，在Type等于Super该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuper(const SuperNodePoolInfo& _super);

                    /**
                     * 判断参数 Super 是否已赋值
                     * @return Super 是否已赋值
                     * 
                     */
                    bool SuperHasBeenSet() const;

                    /**
                     * 获取普通节点池参数，在Type等于Regular该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Regular 普通节点池参数，在Type等于Regular该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RegularNodePoolInfo GetRegular() const;

                    /**
                     * 设置普通节点池参数，在Type等于Regular该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regular 普通节点池参数，在Type等于Regular该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegular(const RegularNodePoolInfo& _regular);

                    /**
                     * 判断参数 Regular 是否已赋值
                     * @return Regular 是否已赋值
                     * 
                     */
                    bool RegularHasBeenSet() const;

                    /**
                     * 获取第三方节点池参数，在Type等于External该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return External 第三方节点池参数，在Type等于External该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExternalNodePoolInfo GetExternal() const;

                    /**
                     * 设置第三方节点池参数，在Type等于External该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _external 第三方节点池参数，在Type等于External该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternal(const ExternalNodePoolInfo& _external);

                    /**
                     * 判断参数 External 是否已赋值
                     * @return External 是否已赋值
                     * 
                     */
                    bool ExternalHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点池 ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagSpecification> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 节点污点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * 是否开启删除保护
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * 节点是否不可调度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                    /**
                     * 节点池类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 节点  Labels
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 节点池状态
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 节点池名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 原生节点池参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NativeNodePoolInfo m_native;
                    bool m_nativeHasBeenSet;

                    /**
                     * 节点 Annotation 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Annotation> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * 超级节点池参数，在Type等于Super该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SuperNodePoolInfo m_super;
                    bool m_superHasBeenSet;

                    /**
                     * 普通节点池参数，在Type等于Regular该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RegularNodePoolInfo m_regular;
                    bool m_regularHasBeenSet;

                    /**
                     * 第三方节点池参数，在Type等于External该字段才有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExternalNodePoolInfo m_external;
                    bool m_externalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_NODEPOOL_H_
