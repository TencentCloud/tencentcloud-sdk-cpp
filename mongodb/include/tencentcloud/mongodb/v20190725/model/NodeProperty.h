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
                     * 获取<p>节点所在的可用区。</p>
                     * @return Zone <p>节点所在的可用区。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>节点所在的可用区。</p>
                     * @param _zone <p>节点所在的可用区。</p>
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
                     * 获取<p>节点名称。</p>
                     * @return NodeName <p>节点名称。</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>节点名称。</p>
                     * @param _nodeName <p>节点名称。</p>
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
                     * 获取<p>节点访问地址。</p>
                     * @return Address <p>节点访问地址。</p>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>节点访问地址。</p>
                     * @param _address <p>节点访问地址。</p>
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
                     * 获取<p>节点公网访问外网地址(IP或域名，示例为IP方式)。</p>
                     * @return WanServiceAddress <p>节点公网访问外网地址(IP或域名，示例为IP方式)。</p>
                     * 
                     */
                    std::string GetWanServiceAddress() const;

                    /**
                     * 设置<p>节点公网访问外网地址(IP或域名，示例为IP方式)。</p>
                     * @param _wanServiceAddress <p>节点公网访问外网地址(IP或域名，示例为IP方式)。</p>
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
                     * 获取<p>节点角色。</p><ul><li>PRIMARY：主节点。</li><li>SECONDARY：从节点。</li><li>READONLY：只读节点。</li><li>ARBITER：仲裁节点。</li></ul>
                     * @return Role <p>节点角色。</p><ul><li>PRIMARY：主节点。</li><li>SECONDARY：从节点。</li><li>READONLY：只读节点。</li><li>ARBITER：仲裁节点。</li></ul>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>节点角色。</p><ul><li>PRIMARY：主节点。</li><li>SECONDARY：从节点。</li><li>READONLY：只读节点。</li><li>ARBITER：仲裁节点。</li></ul>
                     * @param _role <p>节点角色。</p><ul><li>PRIMARY：主节点。</li><li>SECONDARY：从节点。</li><li>READONLY：只读节点。</li><li>ARBITER：仲裁节点。</li></ul>
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
                     * 获取<p>节点是否为 Hidden 节点。</p><ul><li>true：Hidden 节点。</li><li>false：非 Hidden 节点。</li></ul>
                     * @return Hidden <p>节点是否为 Hidden 节点。</p><ul><li>true：Hidden 节点。</li><li>false：非 Hidden 节点。</li></ul>
                     * 
                     */
                    bool GetHidden() const;

                    /**
                     * 设置<p>节点是否为 Hidden 节点。</p><ul><li>true：Hidden 节点。</li><li>false：非 Hidden 节点。</li></ul>
                     * @param _hidden <p>节点是否为 Hidden 节点。</p><ul><li>true：Hidden 节点。</li><li>false：非 Hidden 节点。</li></ul>
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
                     * 获取<p>节点状态。</p><ul><li>NORMAL：正常运行中。</li><li>STARTUP：正在启动。</li><li>STARTUP2：正在启动，处理中间数据。</li><li>RECOVERING：恢复中，暂不可用。</li><li>DOWN：已掉线。</li><li>UNKNOWN：未知状态。</li><li>ROLLBACK：回滚中。</li><li>REMOVED：已移除。</li></ul>
                     * @return Status <p>节点状态。</p><ul><li>NORMAL：正常运行中。</li><li>STARTUP：正在启动。</li><li>STARTUP2：正在启动，处理中间数据。</li><li>RECOVERING：恢复中，暂不可用。</li><li>DOWN：已掉线。</li><li>UNKNOWN：未知状态。</li><li>ROLLBACK：回滚中。</li><li>REMOVED：已移除。</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>节点状态。</p><ul><li>NORMAL：正常运行中。</li><li>STARTUP：正在启动。</li><li>STARTUP2：正在启动，处理中间数据。</li><li>RECOVERING：恢复中，暂不可用。</li><li>DOWN：已掉线。</li><li>UNKNOWN：未知状态。</li><li>ROLLBACK：回滚中。</li><li>REMOVED：已移除。</li></ul>
                     * @param _status <p>节点状态。</p><ul><li>NORMAL：正常运行中。</li><li>STARTUP：正在启动。</li><li>STARTUP2：正在启动，处理中间数据。</li><li>RECOVERING：恢复中，暂不可用。</li><li>DOWN：已掉线。</li><li>UNKNOWN：未知状态。</li><li>ROLLBACK：回滚中。</li><li>REMOVED：已移除。</li></ul>
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
                     * 获取<p>主从同步延迟时间，单位：秒。</p>
                     * @return SlaveDelay <p>主从同步延迟时间，单位：秒。</p>
                     * 
                     */
                    int64_t GetSlaveDelay() const;

                    /**
                     * 设置<p>主从同步延迟时间，单位：秒。</p>
                     * @param _slaveDelay <p>主从同步延迟时间，单位：秒。</p>
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
                     * 获取<p>节点优先级。其取值范围为[0,100]，数值越高，优先级越高。</p>
                     * @return Priority <p>节点优先级。其取值范围为[0,100]，数值越高，优先级越高。</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>节点优先级。其取值范围为[0,100]，数值越高，优先级越高。</p>
                     * @param _priority <p>节点优先级。其取值范围为[0,100]，数值越高，优先级越高。</p>
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
                     * 获取<p>节点投票权。</p><ul><li>1：具有投票权。</li><li>0：无投票权。</li></ul>
                     * @return Votes <p>节点投票权。</p><ul><li>1：具有投票权。</li><li>0：无投票权。</li></ul>
                     * 
                     */
                    int64_t GetVotes() const;

                    /**
                     * 设置<p>节点投票权。</p><ul><li>1：具有投票权。</li><li>0：无投票权。</li></ul>
                     * @param _votes <p>节点投票权。</p><ul><li>1：具有投票权。</li><li>0：无投票权。</li></ul>
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
                     * 获取<p>节点标签。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>节点标签。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeTag> GetTags() const;

                    /**
                     * 设置<p>节点标签。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>节点标签。</p>
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
                     * 获取<p>副本集 ID。</p>
                     * @return ReplicateSetId <p>副本集 ID。</p>
                     * 
                     */
                    std::string GetReplicateSetId() const;

                    /**
                     * 设置<p>副本集 ID。</p>
                     * @param _replicateSetId <p>副本集 ID。</p>
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
                     * <p>节点所在的可用区。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>节点名称。</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>节点访问地址。</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>节点公网访问外网地址(IP或域名，示例为IP方式)。</p>
                     */
                    std::string m_wanServiceAddress;
                    bool m_wanServiceAddressHasBeenSet;

                    /**
                     * <p>节点角色。</p><ul><li>PRIMARY：主节点。</li><li>SECONDARY：从节点。</li><li>READONLY：只读节点。</li><li>ARBITER：仲裁节点。</li></ul>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>节点是否为 Hidden 节点。</p><ul><li>true：Hidden 节点。</li><li>false：非 Hidden 节点。</li></ul>
                     */
                    bool m_hidden;
                    bool m_hiddenHasBeenSet;

                    /**
                     * <p>节点状态。</p><ul><li>NORMAL：正常运行中。</li><li>STARTUP：正在启动。</li><li>STARTUP2：正在启动，处理中间数据。</li><li>RECOVERING：恢复中，暂不可用。</li><li>DOWN：已掉线。</li><li>UNKNOWN：未知状态。</li><li>ROLLBACK：回滚中。</li><li>REMOVED：已移除。</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>主从同步延迟时间，单位：秒。</p>
                     */
                    int64_t m_slaveDelay;
                    bool m_slaveDelayHasBeenSet;

                    /**
                     * <p>节点优先级。其取值范围为[0,100]，数值越高，优先级越高。</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>节点投票权。</p><ul><li>1：具有投票权。</li><li>0：无投票权。</li></ul>
                     */
                    int64_t m_votes;
                    bool m_votesHasBeenSet;

                    /**
                     * <p>节点标签。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>副本集 ID。</p>
                     */
                    std::string m_replicateSetId;
                    bool m_replicateSetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_NODEPROPERTY_H_
