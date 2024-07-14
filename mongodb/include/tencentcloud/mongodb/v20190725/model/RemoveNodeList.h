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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_REMOVENODELIST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_REMOVENODELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 修改实例节点详情
                */
                class RemoveNodeList : public AbstractModel
                {
                public:
                    RemoveNodeList();
                    ~RemoveNodeList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要删除的节点角色。
- SECONDARY：Mongod 从节点。
- READONLY：只读节点。
- MONGOS：Mongos 节点。
                     * @return Role 需要删除的节点角色。
- SECONDARY：Mongod 从节点。
- READONLY：只读节点。
- MONGOS：Mongos 节点。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置需要删除的节点角色。
- SECONDARY：Mongod 从节点。
- READONLY：只读节点。
- MONGOS：Mongos 节点。
                     * @param _role 需要删除的节点角色。
- SECONDARY：Mongod 从节点。
- READONLY：只读节点。
- MONGOS：Mongos 节点。
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
                     * 获取要删除的节点 ID。分片集群须指定一组分片要删除的节点名称即可，其余分片对改组对齐。

- 获取方式：登录 [MongoDB控制台](https://console.cloud.tencent.com/)，在**节点管理**页签，可获取**节点 ID**。
- 特别说明：分片集群同一节点上的分片，仅需指定0分片节点 ID 即可。例如：cmgo-6hfk****_0-node-primary。
                     * @return NodeName 要删除的节点 ID。分片集群须指定一组分片要删除的节点名称即可，其余分片对改组对齐。

- 获取方式：登录 [MongoDB控制台](https://console.cloud.tencent.com/)，在**节点管理**页签，可获取**节点 ID**。
- 特别说明：分片集群同一节点上的分片，仅需指定0分片节点 ID 即可。例如：cmgo-6hfk****_0-node-primary。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置要删除的节点 ID。分片集群须指定一组分片要删除的节点名称即可，其余分片对改组对齐。

- 获取方式：登录 [MongoDB控制台](https://console.cloud.tencent.com/)，在**节点管理**页签，可获取**节点 ID**。
- 特别说明：分片集群同一节点上的分片，仅需指定0分片节点 ID 即可。例如：cmgo-6hfk****_0-node-primary。
                     * @param _nodeName 要删除的节点 ID。分片集群须指定一组分片要删除的节点名称即可，其余分片对改组对齐。

- 获取方式：登录 [MongoDB控制台](https://console.cloud.tencent.com/)，在**节点管理**页签，可获取**节点 ID**。
- 特别说明：分片集群同一节点上的分片，仅需指定0分片节点 ID 即可。例如：cmgo-6hfk****_0-node-primary。
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
                     * 获取节点所对应的可用区。
- 单可用区，所有节点在同一可用区。
- 多可用区：当前标准规格是三可用区分布，主从节点不在同一可用区，需注意配置所删除节点对应的可用区，且删除后必须满足任意2个可用区节点数大于第3个可用区原则。
                     * @return Zone 节点所对应的可用区。
- 单可用区，所有节点在同一可用区。
- 多可用区：当前标准规格是三可用区分布，主从节点不在同一可用区，需注意配置所删除节点对应的可用区，且删除后必须满足任意2个可用区节点数大于第3个可用区原则。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置节点所对应的可用区。
- 单可用区，所有节点在同一可用区。
- 多可用区：当前标准规格是三可用区分布，主从节点不在同一可用区，需注意配置所删除节点对应的可用区，且删除后必须满足任意2个可用区节点数大于第3个可用区原则。
                     * @param _zone 节点所对应的可用区。
- 单可用区，所有节点在同一可用区。
- 多可用区：当前标准规格是三可用区分布，主从节点不在同一可用区，需注意配置所删除节点对应的可用区，且删除后必须满足任意2个可用区节点数大于第3个可用区原则。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 需要删除的节点角色。
- SECONDARY：Mongod 从节点。
- READONLY：只读节点。
- MONGOS：Mongos 节点。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 要删除的节点 ID。分片集群须指定一组分片要删除的节点名称即可，其余分片对改组对齐。

- 获取方式：登录 [MongoDB控制台](https://console.cloud.tencent.com/)，在**节点管理**页签，可获取**节点 ID**。
- 特别说明：分片集群同一节点上的分片，仅需指定0分片节点 ID 即可。例如：cmgo-6hfk****_0-node-primary。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点所对应的可用区。
- 单可用区，所有节点在同一可用区。
- 多可用区：当前标准规格是三可用区分布，主从节点不在同一可用区，需注意配置所删除节点对应的可用区，且删除后必须满足任意2个可用区节点数大于第3个可用区原则。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_REMOVENODELIST_H_
