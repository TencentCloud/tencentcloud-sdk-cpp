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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_NODEOVERVIEW_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_NODEOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 节点概览信息。
                */
                class NodeOverview : public AbstractModel
                {
                public:
                    NodeOverview();
                    ~NodeOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 节点实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置节点实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 节点实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取节点所在可用区信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 节点所在可用区信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所在可用区信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 节点所在可用区信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取节点状态。<li>SUBMITTED：已完成提交。</li><li>CREATING：创建中。</li><li>CREATED：完成创建。</li><li>INITING：初始化中。</li><li>INIT_FAILED：初始化失败。</li><li>RUNNING：运行中。</li><li>DELETING：销毁中。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeState 节点状态。<li>SUBMITTED：已完成提交。</li><li>CREATING：创建中。</li><li>CREATED：完成创建。</li><li>INITING：初始化中。</li><li>INIT_FAILED：初始化失败。</li><li>RUNNING：运行中。</li><li>DELETING：销毁中。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeState() const;

                    /**
                     * 设置节点状态。<li>SUBMITTED：已完成提交。</li><li>CREATING：创建中。</li><li>CREATED：完成创建。</li><li>INITING：初始化中。</li><li>INIT_FAILED：初始化失败。</li><li>RUNNING：运行中。</li><li>DELETING：销毁中。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeState 节点状态。<li>SUBMITTED：已完成提交。</li><li>CREATING：创建中。</li><li>CREATED：完成创建。</li><li>INITING：初始化中。</li><li>INIT_FAILED：初始化失败。</li><li>RUNNING：运行中。</li><li>DELETING：销毁中。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeState(const std::string& _nodeState);

                    /**
                     * 判断参数 NodeState 是否已赋值
                     * @return NodeState 是否已赋值
                     * 
                     */
                    bool NodeStateHasBeenSet() const;

                    /**
                     * 获取镜像ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageId 镜像ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageId 镜像ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取节点所属队列名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueName 节点所属队列名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置节点所属队列名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueName 节点所属队列名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取节点角色。<li>Manager：管控节点。</li><li>Compute：计算节点。</li><li>Login：登录节点。</li><li>ManagerBackup：备用管控节点。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeRole 节点角色。<li>Manager：管控节点。</li><li>Compute：计算节点。</li><li>Login：登录节点。</li><li>ManagerBackup：备用管控节点。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置节点角色。<li>Manager：管控节点。</li><li>Compute：计算节点。</li><li>Login：登录节点。</li><li>ManagerBackup：备用管控节点。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeRole 节点角色。<li>Manager：管控节点。</li><li>Compute：计算节点。</li><li>Login：登录节点。</li><li>ManagerBackup：备用管控节点。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取节点类型。<li>STATIC：静态节点。</li><li>DYNAMIC：弹性节点。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType 节点类型。<li>STATIC：静态节点。</li><li>DYNAMIC：弹性节点。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型。<li>STATIC：静态节点。</li><li>DYNAMIC：弹性节点。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType 节点类型。<li>STATIC：静态节点。</li><li>DYNAMIC：弹性节点。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取thpc集群节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId thpc集群节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置thpc集群节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId thpc集群节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点的工作状态
                     * @return NodeAllocateState 节点的工作状态
                     * 
                     */
                    std::string GetNodeAllocateState() const;

                    /**
                     * 设置节点的工作状态
                     * @param _nodeAllocateState 节点的工作状态
                     * 
                     */
                    void SetNodeAllocateState(const std::string& _nodeAllocateState);

                    /**
                     * 判断参数 NodeAllocateState 是否已赋值
                     * @return NodeAllocateState 是否已赋值
                     * 
                     */
                    bool NodeAllocateStateHasBeenSet() const;

                private:

                    /**
                     * 节点实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点所在可用区信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 节点状态。<li>SUBMITTED：已完成提交。</li><li>CREATING：创建中。</li><li>CREATED：完成创建。</li><li>INITING：初始化中。</li><li>INIT_FAILED：初始化失败。</li><li>RUNNING：运行中。</li><li>DELETING：销毁中。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeState;
                    bool m_nodeStateHasBeenSet;

                    /**
                     * 镜像ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 节点所属队列名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 节点角色。<li>Manager：管控节点。</li><li>Compute：计算节点。</li><li>Login：登录节点。</li><li>ManagerBackup：备用管控节点。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * 节点类型。<li>STATIC：静态节点。</li><li>DYNAMIC：弹性节点。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * thpc集群节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点的工作状态
                     */
                    std::string m_nodeAllocateState;
                    bool m_nodeAllocateStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_NODEOVERVIEW_H_
