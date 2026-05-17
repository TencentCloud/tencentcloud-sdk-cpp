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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_POD_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_POD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Container.h>
#include <tencentcloud/tione/v20211111/model/CrossTenantENIInfo.h>
#include <tencentcloud/tione/v20211111/model/ResourceInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Pod信息展示
                */
                class Pod : public AbstractModel
                {
                public:
                    Pod();
                    ~Pod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>pod名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>pod名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>pod名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>pod名</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>pod的唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uid <p>pod的唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置<p>pod的唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uid <p>pod的唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取<p>服务付费模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType <p>服务付费模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>服务付费模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeType <p>服务付费模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>pod的状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phase <p>pod的状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置<p>pod的状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phase <p>pod的状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhase(const std::string& _phase);

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取<p>pod的IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP <p>pod的IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置<p>pod的IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iP <p>pod的IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取<p>pod的创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>pod的创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>pod的创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>pod的创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>容器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Containers <p>容器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    Container GetContainers() const;

                    /**
                     * 设置<p>容器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containers <p>容器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetContainers(const Container& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * @deprecated
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取<p>容器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerInfos <p>容器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Container> GetContainerInfos() const;

                    /**
                     * 设置<p>容器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerInfos <p>容器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerInfos(const std::vector<Container>& _containerInfos);

                    /**
                     * 判断参数 ContainerInfos 是否已赋值
                     * @return ContainerInfos 是否已赋值
                     * 
                     */
                    bool ContainerInfosHasBeenSet() const;

                    /**
                     * 获取<p>容器调用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrossTenantENIInfo <p>容器调用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CrossTenantENIInfo GetCrossTenantENIInfo() const;

                    /**
                     * 设置<p>容器调用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crossTenantENIInfo <p>容器调用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrossTenantENIInfo(const CrossTenantENIInfo& _crossTenantENIInfo);

                    /**
                     * 判断参数 CrossTenantENIInfo 是否已赋值
                     * @return CrossTenantENIInfo 是否已赋值
                     * 
                     */
                    bool CrossTenantENIInfoHasBeenSet() const;

                    /**
                     * 获取<p>实例的状态信息</p>
                     * @return Status <p>实例的状态信息</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>实例的状态信息</p>
                     * @param _status <p>实例的状态信息</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例的开始调度时间</p>
                     * @return StartScheduleTime <p>实例的开始调度时间</p>
                     * 
                     */
                    std::string GetStartScheduleTime() const;

                    /**
                     * 设置<p>实例的开始调度时间</p>
                     * @param _startScheduleTime <p>实例的开始调度时间</p>
                     * 
                     */
                    void SetStartScheduleTime(const std::string& _startScheduleTime);

                    /**
                     * 判断参数 StartScheduleTime 是否已赋值
                     * @return StartScheduleTime 是否已赋值
                     * 
                     */
                    bool StartScheduleTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例状态的补充信息</p>
                     * @return Message <p>实例状态的补充信息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>实例状态的补充信息</p>
                     * @param _message <p>实例状态的补充信息</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>当前实例所在的节点 IP</p>
                     * @return NodeIP <p>当前实例所在的节点 IP</p>
                     * 
                     */
                    std::string GetNodeIP() const;

                    /**
                     * 设置<p>当前实例所在的节点 IP</p>
                     * @param _nodeIP <p>当前实例所在的节点 IP</p>
                     * 
                     */
                    void SetNodeIP(const std::string& _nodeIP);

                    /**
                     * 判断参数 NodeIP 是否已赋值
                     * @return NodeIP 是否已赋值
                     * 
                     */
                    bool NodeIPHasBeenSet() const;

                    /**
                     * 获取<p>当前实例所在节点id</p>
                     * @return NodeId <p>当前实例所在节点id</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>当前实例所在节点id</p>
                     * @param _nodeId <p>当前实例所在节点id</p>
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
                     * 获取<p>当时实例所属资源组 id</p>
                     * @return ResourceGroupId <p>当时实例所属资源组 id</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>当时实例所属资源组 id</p>
                     * @param _resourceGroupId <p>当时实例所属资源组 id</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>资源组名称</p>
                     * @return ResourceGroupName <p>资源组名称</p>
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>资源组名称</p>
                     * @param _resourceGroupName <p>资源组名称</p>
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>实例的资源占用信息</p>
                     * @return ResourceInfo <p>实例的资源占用信息</p>
                     * 
                     */
                    ResourceInfo GetResourceInfo() const;

                    /**
                     * 设置<p>实例的资源占用信息</p>
                     * @param _resourceInfo <p>实例的资源占用信息</p>
                     * 
                     */
                    void SetResourceInfo(const ResourceInfo& _resourceInfo);

                    /**
                     * 判断参数 ResourceInfo 是否已赋值
                     * @return ResourceInfo 是否已赋值
                     * 
                     */
                    bool ResourceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>pod名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>pod的唯一id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * <p>服务付费模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>pod的状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * <p>pod的IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * <p>pod的创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>容器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Container m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * <p>容器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Container> m_containerInfos;
                    bool m_containerInfosHasBeenSet;

                    /**
                     * <p>容器调用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CrossTenantENIInfo m_crossTenantENIInfo;
                    bool m_crossTenantENIInfoHasBeenSet;

                    /**
                     * <p>实例的状态信息</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例的开始调度时间</p>
                     */
                    std::string m_startScheduleTime;
                    bool m_startScheduleTimeHasBeenSet;

                    /**
                     * <p>实例状态的补充信息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>当前实例所在的节点 IP</p>
                     */
                    std::string m_nodeIP;
                    bool m_nodeIPHasBeenSet;

                    /**
                     * <p>当前实例所在节点id</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>当时实例所属资源组 id</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>资源组名称</p>
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>实例的资源占用信息</p>
                     */
                    ResourceInfo m_resourceInfo;
                    bool m_resourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_POD_H_
