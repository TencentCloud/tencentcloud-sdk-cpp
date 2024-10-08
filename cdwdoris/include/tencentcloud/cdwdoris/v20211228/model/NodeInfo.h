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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NODEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * NodeInfo
                */
                class NodeInfo : public AbstractModel
                {
                public:
                    NodeInfo();
                    ~NodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip 用户IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置用户IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip 用户IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取节点状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 节点状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置节点状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 节点状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取节点角色名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点角色名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点角色名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 节点角色名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取组件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComponentName 组件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置组件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _componentName 组件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取节点角色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeRole 节点角色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置节点角色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeRole 节点角色
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
                     * 获取节点上次重启的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastRestartTime 节点上次重启的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastRestartTime() const;

                    /**
                     * 设置节点上次重启的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastRestartTime 节点上次重启的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastRestartTime(const std::string& _lastRestartTime);

                    /**
                     * 判断参数 LastRestartTime 是否已赋值
                     * @return LastRestartTime 是否已赋值
                     * 
                     */
                    bool LastRestartTimeHasBeenSet() const;

                    /**
                     * 获取节点所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 节点所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 节点所在可用区
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
                     * 获取Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 用户IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 节点状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 节点角色名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 组件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 节点角色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * 节点上次重启的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastRestartTime;
                    bool m_lastRestartTimeHasBeenSet;

                    /**
                     * 节点所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NODEINFO_H_
