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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyGroup.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyGroupRwInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyNodeInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyConnectionPoolInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/NetAddr.h>
#include <tencentcloud/cynosdb/v20190107/model/ObjectTask.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 数据库代理组详细信息
                */
                class ProxyGroupInfo : public AbstractModel
                {
                public:
                    ProxyGroupInfo();
                    ~ProxyGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库代理组
                     * @return ProxyGroup 数据库代理组
                     * 
                     */
                    ProxyGroup GetProxyGroup() const;

                    /**
                     * 设置数据库代理组
                     * @param _proxyGroup 数据库代理组
                     * 
                     */
                    void SetProxyGroup(const ProxyGroup& _proxyGroup);

                    /**
                     * 判断参数 ProxyGroup 是否已赋值
                     * @return ProxyGroup 是否已赋值
                     * 
                     */
                    bool ProxyGroupHasBeenSet() const;

                    /**
                     * 获取数据库代理组读写分离信息
                     * @return ProxyGroupRwInfo 数据库代理组读写分离信息
                     * 
                     */
                    ProxyGroupRwInfo GetProxyGroupRwInfo() const;

                    /**
                     * 设置数据库代理组读写分离信息
                     * @param _proxyGroupRwInfo 数据库代理组读写分离信息
                     * 
                     */
                    void SetProxyGroupRwInfo(const ProxyGroupRwInfo& _proxyGroupRwInfo);

                    /**
                     * 判断参数 ProxyGroupRwInfo 是否已赋值
                     * @return ProxyGroupRwInfo 是否已赋值
                     * 
                     */
                    bool ProxyGroupRwInfoHasBeenSet() const;

                    /**
                     * 获取数据库代理节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyNodes 数据库代理节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProxyNodeInfo> GetProxyNodes() const;

                    /**
                     * 设置数据库代理节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyNodes 数据库代理节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyNodes(const std::vector<ProxyNodeInfo>& _proxyNodes);

                    /**
                     * 判断参数 ProxyNodes 是否已赋值
                     * @return ProxyNodes 是否已赋值
                     * 
                     */
                    bool ProxyNodesHasBeenSet() const;

                    /**
                     * 获取数据库代理连接池信息
                     * @return ConnectionPool 数据库代理连接池信息
                     * 
                     */
                    ProxyConnectionPoolInfo GetConnectionPool() const;

                    /**
                     * 设置数据库代理连接池信息
                     * @param _connectionPool 数据库代理连接池信息
                     * 
                     */
                    void SetConnectionPool(const ProxyConnectionPoolInfo& _connectionPool);

                    /**
                     * 判断参数 ConnectionPool 是否已赋值
                     * @return ConnectionPool 是否已赋值
                     * 
                     */
                    bool ConnectionPoolHasBeenSet() const;

                    /**
                     * 获取数据库代理网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetAddrInfos 数据库代理网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NetAddr> GetNetAddrInfos() const;

                    /**
                     * 设置数据库代理网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netAddrInfos 数据库代理网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetAddrInfos(const std::vector<NetAddr>& _netAddrInfos);

                    /**
                     * 判断参数 NetAddrInfos 是否已赋值
                     * @return NetAddrInfos 是否已赋值
                     * 
                     */
                    bool NetAddrInfosHasBeenSet() const;

                    /**
                     * 获取数据库代理任务集
                     * @return Tasks 数据库代理任务集
                     * 
                     */
                    std::vector<ObjectTask> GetTasks() const;

                    /**
                     * 设置数据库代理任务集
                     * @param _tasks 数据库代理任务集
                     * 
                     */
                    void SetTasks(const std::vector<ObjectTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * 数据库代理组
                     */
                    ProxyGroup m_proxyGroup;
                    bool m_proxyGroupHasBeenSet;

                    /**
                     * 数据库代理组读写分离信息
                     */
                    ProxyGroupRwInfo m_proxyGroupRwInfo;
                    bool m_proxyGroupRwInfoHasBeenSet;

                    /**
                     * 数据库代理节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProxyNodeInfo> m_proxyNodes;
                    bool m_proxyNodesHasBeenSet;

                    /**
                     * 数据库代理连接池信息
                     */
                    ProxyConnectionPoolInfo m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * 数据库代理网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NetAddr> m_netAddrInfos;
                    bool m_netAddrInfosHasBeenSet;

                    /**
                     * 数据库代理任务集
                     */
                    std::vector<ObjectTask> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPINFO_H_
