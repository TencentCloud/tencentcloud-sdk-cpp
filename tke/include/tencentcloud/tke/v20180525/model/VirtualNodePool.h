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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_VIRTUALNODEPOOL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_VIRTUALNODEPOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/SubnetAllocationPolicy.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 虚拟节点池
                */
                class VirtualNodePool : public AbstractModel
                {
                public:
                    VirtualNodePool();
                    ~VirtualNodePool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点池ID</p>
                     * @return NodePoolId <p>节点池ID</p>
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置<p>节点池ID</p>
                     * @param _nodePoolId <p>节点池ID</p>
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
                     * 获取<p>子网列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetIds <p>子网列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>子网列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetIds <p>子网列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取<p>节点池名称</p>
                     * @return Name <p>节点池名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>节点池名称</p>
                     * @param _name <p>节点池名称</p>
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
                     * 获取<p>节点池生命周期</p><ul><li>creating：创建中</li><li>normal：正常</li><li>updating：更新中</li></ul>
                     * @return LifeState <p>节点池生命周期</p><ul><li>creating：创建中</li><li>normal：正常</li><li>updating：更新中</li></ul>
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置<p>节点池生命周期</p><ul><li>creating：创建中</li><li>normal：正常</li><li>updating：更新中</li></ul>
                     * @param _lifeState <p>节点池生命周期</p><ul><li>creating：创建中</li><li>normal：正常</li><li>updating：更新中</li></ul>
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
                     * 获取<p>虚拟节点label</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels <p>虚拟节点label</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置<p>虚拟节点label</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels <p>虚拟节点label</p>
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
                     * 获取<p>虚拟节点taint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Taints <p>虚拟节点taint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置<p>虚拟节点taint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taints <p>虚拟节点taint</p>
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
                     * 获取<p>子网分配策略</p>
                     * @return SubnetAllocationPolicy <p>子网分配策略</p>
                     * 
                     */
                    SubnetAllocationPolicy GetSubnetAllocationPolicy() const;

                    /**
                     * 设置<p>子网分配策略</p>
                     * @param _subnetAllocationPolicy <p>子网分配策略</p>
                     * 
                     */
                    void SetSubnetAllocationPolicy(const SubnetAllocationPolicy& _subnetAllocationPolicy);

                    /**
                     * 判断参数 SubnetAllocationPolicy 是否已赋值
                     * @return SubnetAllocationPolicy 是否已赋值
                     * 
                     */
                    bool SubnetAllocationPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>节点池ID</p>
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * <p>子网列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>节点池名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>节点池生命周期</p><ul><li>creating：创建中</li><li>normal：正常</li><li>updating：更新中</li></ul>
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * <p>虚拟节点label</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>虚拟节点taint</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * <p>子网分配策略</p>
                     */
                    SubnetAllocationPolicy m_subnetAllocationPolicy;
                    bool m_subnetAllocationPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_VIRTUALNODEPOOL_H_
