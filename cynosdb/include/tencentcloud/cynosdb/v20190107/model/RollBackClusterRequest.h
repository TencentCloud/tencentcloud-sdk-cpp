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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKCLUSTERREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackDatabase.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackTable.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * RollBackCluster请求参数结构体
                */
                class RollBackClusterRequest : public AbstractModel
                {
                public:
                    RollBackClusterRequest();
                    ~RollBackClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取回档策略 timeRollback-按时间点回档 snapRollback-按备份文件回档
                     * @return RollbackStrategy 回档策略 timeRollback-按时间点回档 snapRollback-按备份文件回档
                     * 
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置回档策略 timeRollback-按时间点回档 snapRollback-按备份文件回档
                     * @param _rollbackStrategy 回档策略 timeRollback-按时间点回档 snapRollback-按备份文件回档
                     * 
                     */
                    void SetRollbackStrategy(const std::string& _rollbackStrategy);

                    /**
                     * 判断参数 RollbackStrategy 是否已赋值
                     * @return RollbackStrategy 是否已赋值
                     * 
                     */
                    bool RollbackStrategyHasBeenSet() const;

                    /**
                     * 获取备份文件ID。
回档策略为按备份文件回档时必填。
                     * @return RollbackId 备份文件ID。
回档策略为按备份文件回档时必填。
                     * 
                     */
                    uint64_t GetRollbackId() const;

                    /**
                     * 设置备份文件ID。
回档策略为按备份文件回档时必填。
                     * @param _rollbackId 备份文件ID。
回档策略为按备份文件回档时必填。
                     * 
                     */
                    void SetRollbackId(const uint64_t& _rollbackId);

                    /**
                     * 判断参数 RollbackId 是否已赋值
                     * @return RollbackId 是否已赋值
                     * 
                     */
                    bool RollbackIdHasBeenSet() const;

                    /**
                     * 获取期望回档时间。
回档策略为timeRollback按时间点回档时必填。
                     * @return ExpectTime 期望回档时间。
回档策略为timeRollback按时间点回档时必填。
                     * 
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置期望回档时间。
回档策略为timeRollback按时间点回档时必填。
                     * @param _expectTime 期望回档时间。
回档策略为timeRollback按时间点回档时必填。
                     * 
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     * 
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取期望阈值（已废弃）
                     * @return ExpectTimeThresh 期望阈值（已废弃）
                     * 
                     */
                    uint64_t GetExpectTimeThresh() const;

                    /**
                     * 设置期望阈值（已废弃）
                     * @param _expectTimeThresh 期望阈值（已废弃）
                     * 
                     */
                    void SetExpectTimeThresh(const uint64_t& _expectTimeThresh);

                    /**
                     * 判断参数 ExpectTimeThresh 是否已赋值
                     * @return ExpectTimeThresh 是否已赋值
                     * 
                     */
                    bool ExpectTimeThreshHasBeenSet() const;

                    /**
                     * 获取回档数据库列表
                     * @return RollbackDatabases 回档数据库列表
                     * 
                     */
                    std::vector<RollbackDatabase> GetRollbackDatabases() const;

                    /**
                     * 设置回档数据库列表
                     * @param _rollbackDatabases 回档数据库列表
                     * 
                     */
                    void SetRollbackDatabases(const std::vector<RollbackDatabase>& _rollbackDatabases);

                    /**
                     * 判断参数 RollbackDatabases 是否已赋值
                     * @return RollbackDatabases 是否已赋值
                     * 
                     */
                    bool RollbackDatabasesHasBeenSet() const;

                    /**
                     * 获取回档数据库表列表
                     * @return RollbackTables 回档数据库表列表
                     * 
                     */
                    std::vector<RollbackTable> GetRollbackTables() const;

                    /**
                     * 设置回档数据库表列表
                     * @param _rollbackTables 回档数据库表列表
                     * 
                     */
                    void SetRollbackTables(const std::vector<RollbackTable>& _rollbackTables);

                    /**
                     * 判断参数 RollbackTables 是否已赋值
                     * @return RollbackTables 是否已赋值
                     * 
                     */
                    bool RollbackTablesHasBeenSet() const;

                    /**
                     * 获取按时间点回档模式，full: 普通; db: 快速; table: 极速  （默认是普通）
                     * @return RollbackMode 按时间点回档模式，full: 普通; db: 快速; table: 极速  （默认是普通）
                     * 
                     */
                    std::string GetRollbackMode() const;

                    /**
                     * 设置按时间点回档模式，full: 普通; db: 快速; table: 极速  （默认是普通）
                     * @param _rollbackMode 按时间点回档模式，full: 普通; db: 快速; table: 极速  （默认是普通）
                     * 
                     */
                    void SetRollbackMode(const std::string& _rollbackMode);

                    /**
                     * 判断参数 RollbackMode 是否已赋值
                     * @return RollbackMode 是否已赋值
                     * 
                     */
                    bool RollbackModeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 回档策略 timeRollback-按时间点回档 snapRollback-按备份文件回档
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * 备份文件ID。
回档策略为按备份文件回档时必填。
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * 期望回档时间。
回档策略为timeRollback按时间点回档时必填。
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * 期望阈值（已废弃）
                     */
                    uint64_t m_expectTimeThresh;
                    bool m_expectTimeThreshHasBeenSet;

                    /**
                     * 回档数据库列表
                     */
                    std::vector<RollbackDatabase> m_rollbackDatabases;
                    bool m_rollbackDatabasesHasBeenSet;

                    /**
                     * 回档数据库表列表
                     */
                    std::vector<RollbackTable> m_rollbackTables;
                    bool m_rollbackTablesHasBeenSet;

                    /**
                     * 按时间点回档模式，full: 普通; db: 快速; table: 极速  （默认是普通）
                     */
                    std::string m_rollbackMode;
                    bool m_rollbackModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKCLUSTERREQUEST_H_
