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
                     * @return Ip 用户IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置用户IP
                     * @param _ip 用户IP
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
                     * @return Status 节点状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置节点状态
                     * @param _status 节点状态
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
                     * @return NodeName 节点角色名
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点角色名
                     * @param _nodeName 节点角色名
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
                     * @return ComponentName 组件名
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置组件名
                     * @param _componentName 组件名
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
                     * @return NodeRole 节点角色
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置节点角色
                     * @param _nodeRole 节点角色
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
                     * @return LastRestartTime 节点上次重启的时间
                     * 
                     */
                    std::string GetLastRestartTime() const;

                    /**
                     * 设置节点上次重启的时间
                     * @param _lastRestartTime 节点上次重启的时间
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
                     * @return Zone 节点所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所在可用区
                     * @param _zone 节点所在可用区
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
                     * @return Id Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Id
                     * @param _id Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取RIP
                     * @return RIp RIP
                     * 
                     */
                    std::string GetRIp() const;

                    /**
                     * 设置RIP
                     * @param _rIp RIP
                     * 
                     */
                    void SetRIp(const std::string& _rIp);

                    /**
                     * 判断参数 RIp 是否已赋值
                     * @return RIp 是否已赋值
                     * 
                     */
                    bool RIpHasBeenSet() const;

                    /**
                     * 获取计算组ID
                     * @return ComputeGroupId 计算组ID
                     * 
                     */
                    std::string GetComputeGroupId() const;

                    /**
                     * 设置计算组ID
                     * @param _computeGroupId 计算组ID
                     * 
                     */
                    void SetComputeGroupId(const std::string& _computeGroupId);

                    /**
                     * 判断参数 ComputeGroupId 是否已赋值
                     * @return ComputeGroupId 是否已赋值
                     * 
                     */
                    bool ComputeGroupIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 用户IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 节点状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 节点角色名
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 组件名
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 节点角色
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * 节点上次重启的时间
                     */
                    std::string m_lastRestartTime;
                    bool m_lastRestartTimeHasBeenSet;

                    /**
                     * 节点所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * RIP
                     */
                    std::string m_rIp;
                    bool m_rIpHasBeenSet;

                    /**
                     * 计算组ID
                     */
                    std::string m_computeGroupId;
                    bool m_computeGroupIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NODEINFO_H_
