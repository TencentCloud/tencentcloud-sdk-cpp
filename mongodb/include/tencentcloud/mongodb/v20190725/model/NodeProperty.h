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
                     * @return Zone 节点所在的可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所在的可用区。
                     * @param _zone 节点所在的可用区。
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
                     * 获取节点名称。
                     * @return NodeName 节点名称。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称。
                     * @param _nodeName 节点名称。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点访问地址。
                     * @return Address 节点访问地址。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置节点访问地址。
                     * @param _address 节点访问地址。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取节点公网访问外网地址(IP或域名，示例为IP方式)。
                     * @return WanServiceAddress 节点公网访问外网地址(IP或域名，示例为IP方式)。
                     * 
                     */
                    std::string GetWanServiceAddress() const;

                    /**
                     * 设置节点公网访问外网地址(IP或域名，示例为IP方式)。
                     * @param _wanServiceAddress 节点公网访问外网地址(IP或域名，示例为IP方式)。
                     * 
                     */
                    void SetWanServiceAddress(const std::string& _wanServiceAddress);

                    /**
                     * 判断参数 WanServiceAddress 是否已赋值
                     * @return WanServiceAddress 是否已赋值
                     * 
                     */
                    bool WanServiceAddressHasBeenSet() const;

                    /**
                     * 获取节点角色。
- PRIMARY：主节点。
- SECONDARY：从节点。
- READONLY：只读节点。
- ARBITER：仲裁节点。
                     * @return Role 节点角色。
- PRIMARY：主节点。
- SECONDARY：从节点。
- READONLY：只读节点。
- ARBITER：仲裁节点。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置节点角色。
- PRIMARY：主节点。
- SECONDARY：从节点。
- READONLY：只读节点。
- ARBITER：仲裁节点。
                     * @param _role 节点角色。
- PRIMARY：主节点。
- SECONDARY：从节点。
- READONLY：只读节点。
- ARBITER：仲裁节点。
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取节点是否为 Hidden 节点。
- true：Hidden 节点。
- false：非 Hidden 节点。
                     * @return Hidden 节点是否为 Hidden 节点。
- true：Hidden 节点。
- false：非 Hidden 节点。
                     * 
                     */
                    bool GetHidden() const;

                    /**
                     * 设置节点是否为 Hidden 节点。
- true：Hidden 节点。
- false：非 Hidden 节点。
                     * @param _hidden 节点是否为 Hidden 节点。
- true：Hidden 节点。
- false：非 Hidden 节点。
                     * 
                     */
                    void SetHidden(const bool& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     * 
                     */
                    bool HiddenHasBeenSet() const;

                    /**
                     * 获取节点状态。
- NORMAL：正常运行中。
- STARTUP：正在启动。
- STARTUP2：正在启动，处理中间数据。
- RECOVERING：恢复中，暂不可用。
- DOWN：已掉线。
- UNKNOWN：未知状态。
- ROLLBACK：回滚中。
- REMOVED：已移除。
                     * @return Status 节点状态。
- NORMAL：正常运行中。
- STARTUP：正在启动。
- STARTUP2：正在启动，处理中间数据。
- RECOVERING：恢复中，暂不可用。
- DOWN：已掉线。
- UNKNOWN：未知状态。
- ROLLBACK：回滚中。
- REMOVED：已移除。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置节点状态。
- NORMAL：正常运行中。
- STARTUP：正在启动。
- STARTUP2：正在启动，处理中间数据。
- RECOVERING：恢复中，暂不可用。
- DOWN：已掉线。
- UNKNOWN：未知状态。
- ROLLBACK：回滚中。
- REMOVED：已移除。
                     * @param _status 节点状态。
- NORMAL：正常运行中。
- STARTUP：正在启动。
- STARTUP2：正在启动，处理中间数据。
- RECOVERING：恢复中，暂不可用。
- DOWN：已掉线。
- UNKNOWN：未知状态。
- ROLLBACK：回滚中。
- REMOVED：已移除。
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
                     * 获取主从同步延迟时间，单位：秒。
                     * @return SlaveDelay 主从同步延迟时间，单位：秒。
                     * 
                     */
                    int64_t GetSlaveDelay() const;

                    /**
                     * 设置主从同步延迟时间，单位：秒。
                     * @param _slaveDelay 主从同步延迟时间，单位：秒。
                     * 
                     */
                    void SetSlaveDelay(const int64_t& _slaveDelay);

                    /**
                     * 判断参数 SlaveDelay 是否已赋值
                     * @return SlaveDelay 是否已赋值
                     * 
                     */
                    bool SlaveDelayHasBeenSet() const;

                    /**
                     * 获取节点优先级。其取值范围为[0,100]，数值越高，优先级越高。
                     * @return Priority 节点优先级。其取值范围为[0,100]，数值越高，优先级越高。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置节点优先级。其取值范围为[0,100]，数值越高，优先级越高。
                     * @param _priority 节点优先级。其取值范围为[0,100]，数值越高，优先级越高。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取节点投票权。
- 1：具有投票权。
- 0：无投票权。
                     * @return Votes 节点投票权。
- 1：具有投票权。
- 0：无投票权。
                     * 
                     */
                    int64_t GetVotes() const;

                    /**
                     * 设置节点投票权。
- 1：具有投票权。
- 0：无投票权。
                     * @param _votes 节点投票权。
- 1：具有投票权。
- 0：无投票权。
                     * 
                     */
                    void SetVotes(const int64_t& _votes);

                    /**
                     * 判断参数 Votes 是否已赋值
                     * @return Votes 是否已赋值
                     * 
                     */
                    bool VotesHasBeenSet() const;

                    /**
                     * 获取节点标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 节点标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeTag> GetTags() const;

                    /**
                     * 设置节点标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 节点标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<NodeTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取副本集 ID。
                     * @return ReplicateSetId 副本集 ID。
                     * 
                     */
                    std::string GetReplicateSetId() const;

                    /**
                     * 设置副本集 ID。
                     * @param _replicateSetId 副本集 ID。
                     * 
                     */
                    void SetReplicateSetId(const std::string& _replicateSetId);

                    /**
                     * 判断参数 ReplicateSetId 是否已赋值
                     * @return ReplicateSetId 是否已赋值
                     * 
                     */
                    bool ReplicateSetIdHasBeenSet() const;

                private:

                    /**
                     * 节点所在的可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 节点名称。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点访问地址。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 节点公网访问外网地址(IP或域名，示例为IP方式)。
                     */
                    std::string m_wanServiceAddress;
                    bool m_wanServiceAddressHasBeenSet;

                    /**
                     * 节点角色。
- PRIMARY：主节点。
- SECONDARY：从节点。
- READONLY：只读节点。
- ARBITER：仲裁节点。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 节点是否为 Hidden 节点。
- true：Hidden 节点。
- false：非 Hidden 节点。
                     */
                    bool m_hidden;
                    bool m_hiddenHasBeenSet;

                    /**
                     * 节点状态。
- NORMAL：正常运行中。
- STARTUP：正在启动。
- STARTUP2：正在启动，处理中间数据。
- RECOVERING：恢复中，暂不可用。
- DOWN：已掉线。
- UNKNOWN：未知状态。
- ROLLBACK：回滚中。
- REMOVED：已移除。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 主从同步延迟时间，单位：秒。
                     */
                    int64_t m_slaveDelay;
                    bool m_slaveDelayHasBeenSet;

                    /**
                     * 节点优先级。其取值范围为[0,100]，数值越高，优先级越高。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 节点投票权。
- 1：具有投票权。
- 0：无投票权。
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
                     * 副本集 ID。
                     */
                    std::string m_replicateSetId;
                    bool m_replicateSetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_NODEPROPERTY_H_
