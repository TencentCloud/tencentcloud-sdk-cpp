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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_OVERVIEWSTATS_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_OVERVIEWSTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/TopologyNodeStats.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 拓扑图节点状态
                */
                class OverviewStats : public AbstractModel
                {
                public:
                    OverviewStats();
                    ~OverviewStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用节点状态
                     * @return ServiceStats 应用节点状态
                     * 
                     */
                    TopologyNodeStats GetServiceStats() const;

                    /**
                     * 设置应用节点状态
                     * @param _serviceStats 应用节点状态
                     * 
                     */
                    void SetServiceStats(const TopologyNodeStats& _serviceStats);

                    /**
                     * 判断参数 ServiceStats 是否已赋值
                     * @return ServiceStats 是否已赋值
                     * 
                     */
                    bool ServiceStatsHasBeenSet() const;

                    /**
                     * 获取数据库节点状态
                     * @return DatabaseStats 数据库节点状态
                     * 
                     */
                    TopologyNodeStats GetDatabaseStats() const;

                    /**
                     * 设置数据库节点状态
                     * @param _databaseStats 数据库节点状态
                     * 
                     */
                    void SetDatabaseStats(const TopologyNodeStats& _databaseStats);

                    /**
                     * 判断参数 DatabaseStats 是否已赋值
                     * @return DatabaseStats 是否已赋值
                     * 
                     */
                    bool DatabaseStatsHasBeenSet() const;

                    /**
                     * 获取消息队列节点状态
                     * @return MQStats 消息队列节点状态
                     * 
                     */
                    TopologyNodeStats GetMQStats() const;

                    /**
                     * 设置消息队列节点状态
                     * @param _mQStats 消息队列节点状态
                     * 
                     */
                    void SetMQStats(const TopologyNodeStats& _mQStats);

                    /**
                     * 判断参数 MQStats 是否已赋值
                     * @return MQStats 是否已赋值
                     * 
                     */
                    bool MQStatsHasBeenSet() const;

                    /**
                     * 获取节点总数
                     * @return TotalNodes 节点总数
                     * 
                     */
                    int64_t GetTotalNodes() const;

                    /**
                     * 设置节点总数
                     * @param _totalNodes 节点总数
                     * 
                     */
                    void SetTotalNodes(const int64_t& _totalNodes);

                    /**
                     * 判断参数 TotalNodes 是否已赋值
                     * @return TotalNodes 是否已赋值
                     * 
                     */
                    bool TotalNodesHasBeenSet() const;

                    /**
                     * 获取健康节点总数
                     * @return HealthyNodes 健康节点总数
                     * 
                     */
                    int64_t GetHealthyNodes() const;

                    /**
                     * 设置健康节点总数
                     * @param _healthyNodes 健康节点总数
                     * 
                     */
                    void SetHealthyNodes(const int64_t& _healthyNodes);

                    /**
                     * 判断参数 HealthyNodes 是否已赋值
                     * @return HealthyNodes 是否已赋值
                     * 
                     */
                    bool HealthyNodesHasBeenSet() const;

                    /**
                     * 获取警告节点总数
                     * @return WarningNodes 警告节点总数
                     * 
                     */
                    int64_t GetWarningNodes() const;

                    /**
                     * 设置警告节点总数
                     * @param _warningNodes 警告节点总数
                     * 
                     */
                    void SetWarningNodes(const int64_t& _warningNodes);

                    /**
                     * 判断参数 WarningNodes 是否已赋值
                     * @return WarningNodes 是否已赋值
                     * 
                     */
                    bool WarningNodesHasBeenSet() const;

                    /**
                     * 获取错误节点总数
                     * @return ErrorNodes 错误节点总数
                     * 
                     */
                    int64_t GetErrorNodes() const;

                    /**
                     * 设置错误节点总数
                     * @param _errorNodes 错误节点总数
                     * 
                     */
                    void SetErrorNodes(const int64_t& _errorNodes);

                    /**
                     * 判断参数 ErrorNodes 是否已赋值
                     * @return ErrorNodes 是否已赋值
                     * 
                     */
                    bool ErrorNodesHasBeenSet() const;

                private:

                    /**
                     * 应用节点状态
                     */
                    TopologyNodeStats m_serviceStats;
                    bool m_serviceStatsHasBeenSet;

                    /**
                     * 数据库节点状态
                     */
                    TopologyNodeStats m_databaseStats;
                    bool m_databaseStatsHasBeenSet;

                    /**
                     * 消息队列节点状态
                     */
                    TopologyNodeStats m_mQStats;
                    bool m_mQStatsHasBeenSet;

                    /**
                     * 节点总数
                     */
                    int64_t m_totalNodes;
                    bool m_totalNodesHasBeenSet;

                    /**
                     * 健康节点总数
                     */
                    int64_t m_healthyNodes;
                    bool m_healthyNodesHasBeenSet;

                    /**
                     * 警告节点总数
                     */
                    int64_t m_warningNodes;
                    bool m_warningNodesHasBeenSet;

                    /**
                     * 错误节点总数
                     */
                    int64_t m_errorNodes;
                    bool m_errorNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_OVERVIEWSTATS_H_
