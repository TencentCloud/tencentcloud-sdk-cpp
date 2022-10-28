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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_NODEPROPERTY_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_NODEPROPERTY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/NodeTag.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 节点属性
                */
                class NodeProperty : public AbstractModel
                {
                public:
                    NodeProperty();
                    ~NodeProperty() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点所在的可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 节点所在的可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所在的可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Zone 节点所在的可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取节点名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeName 节点名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点访问地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 节点访问地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置节点访问地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Address 节点访问地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取角色。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Role 角色。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Role 角色。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取是否为Hidden节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hidden 是否为Hidden节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetHidden() const;

                    /**
                     * 设置是否为Hidden节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Hidden 是否为Hidden节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHidden(const bool& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     */
                    bool HiddenHasBeenSet() const;

                    /**
                     * 获取节点状态，包括：ORMAL/STARTUP/RECOVERING/STARTUP2/UNKNOWN/DOWN/ROLLBACK/REMOVED等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 节点状态，包括：ORMAL/STARTUP/RECOVERING/STARTUP2/UNKNOWN/DOWN/ROLLBACK/REMOVED等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置节点状态，包括：ORMAL/STARTUP/RECOVERING/STARTUP2/UNKNOWN/DOWN/ROLLBACK/REMOVED等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 节点状态，包括：ORMAL/STARTUP/RECOVERING/STARTUP2/UNKNOWN/DOWN/ROLLBACK/REMOVED等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取主从延迟，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlaveDelay 主从延迟，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSlaveDelay() const;

                    /**
                     * 设置主从延迟，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SlaveDelay 主从延迟，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSlaveDelay(const int64_t& _slaveDelay);

                    /**
                     * 判断参数 SlaveDelay 是否已赋值
                     * @return SlaveDelay 是否已赋值
                     */
                    bool SlaveDelayHasBeenSet() const;

                    /**
                     * 获取节点优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 节点优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置节点优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Priority 节点优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取节点投票权。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Votes 节点投票权。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetVotes() const;

                    /**
                     * 设置节点投票权。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Votes 节点投票权。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVotes(const int64_t& _votes);

                    /**
                     * 判断参数 Votes 是否已赋值
                     * @return Votes 是否已赋值
                     */
                    bool VotesHasBeenSet() const;

                    /**
                     * 获取节点标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 节点标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeTag> GetTags() const;

                    /**
                     * 设置节点标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 节点标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<NodeTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取副本集Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicateSetId 副本集Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReplicateSetId() const;

                    /**
                     * 设置副本集Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReplicateSetId 副本集Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReplicateSetId(const std::string& _replicateSetId);

                    /**
                     * 判断参数 ReplicateSetId 是否已赋值
                     * @return ReplicateSetId 是否已赋值
                     */
                    bool ReplicateSetIdHasBeenSet() const;

                private:

                    /**
                     * 节点所在的可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 节点名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点访问地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 角色。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 是否为Hidden节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hidden;
                    bool m_hiddenHasBeenSet;

                    /**
                     * 节点状态，包括：ORMAL/STARTUP/RECOVERING/STARTUP2/UNKNOWN/DOWN/ROLLBACK/REMOVED等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 主从延迟，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_slaveDelay;
                    bool m_slaveDelayHasBeenSet;

                    /**
                     * 节点优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 节点投票权。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_votes;
                    bool m_votesHasBeenSet;

                    /**
                     * 节点标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 副本集Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replicateSetId;
                    bool m_replicateSetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_NODEPROPERTY_H_
