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
                     * 获取节点池ID
                     * @return NodePoolId 节点池ID
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置节点池ID
                     * @param _nodePoolId 节点池ID
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
                     * 获取子网列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetIds 子网列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetIds 子网列表
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
                     * 获取节点池生命周期
                     * @return LifeState 节点池生命周期
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置节点池生命周期
                     * @param _lifeState 节点池生命周期
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
                     * 获取虚拟节点label
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 虚拟节点label
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置虚拟节点label
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 虚拟节点label
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
                     * 获取虚拟节点taint
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Taints 虚拟节点taint
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置虚拟节点taint
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taints 虚拟节点taint
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

                private:

                    /**
                     * 节点池ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 子网列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 节点池名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点池生命周期
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 虚拟节点label
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 虚拟节点taint
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_VIRTUALNODEPOOL_H_
