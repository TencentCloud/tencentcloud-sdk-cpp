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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYREADONLYGROUPCONFIGREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYREADONLYGROUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyReadOnlyGroupConfig请求参数结构体
                */
                class ModifyReadOnlyGroupConfigRequest : public AbstractModel
                {
                public:
                    ModifyReadOnlyGroupConfigRequest();
                    ~ModifyReadOnlyGroupConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取只读组ID
                     * @return ReadOnlyGroupId 只读组ID
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置只读组ID
                     * @param _readOnlyGroupId 只读组ID
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取只读组名称
                     * @return ReadOnlyGroupName 只读组名称
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置只读组名称
                     * @param _readOnlyGroupName 只读组名称
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取延迟时间配置开关：0关、1开
                     * @return ReplayLagEliminate 延迟时间配置开关：0关、1开
                     * 
                     */
                    uint64_t GetReplayLagEliminate() const;

                    /**
                     * 设置延迟时间配置开关：0关、1开
                     * @param _replayLagEliminate 延迟时间配置开关：0关、1开
                     * 
                     */
                    void SetReplayLagEliminate(const uint64_t& _replayLagEliminate);

                    /**
                     * 判断参数 ReplayLagEliminate 是否已赋值
                     * @return ReplayLagEliminate 是否已赋值
                     * 
                     */
                    bool ReplayLagEliminateHasBeenSet() const;

                    /**
                     * 获取延迟日志大小配置开关：0关、1开
                     * @return ReplayLatencyEliminate 延迟日志大小配置开关：0关、1开
                     * 
                     */
                    uint64_t GetReplayLatencyEliminate() const;

                    /**
                     * 设置延迟日志大小配置开关：0关、1开
                     * @param _replayLatencyEliminate 延迟日志大小配置开关：0关、1开
                     * 
                     */
                    void SetReplayLatencyEliminate(const uint64_t& _replayLatencyEliminate);

                    /**
                     * 判断参数 ReplayLatencyEliminate 是否已赋值
                     * @return ReplayLatencyEliminate 是否已赋值
                     * 
                     */
                    bool ReplayLatencyEliminateHasBeenSet() const;

                    /**
                     * 获取延迟日志大小阈值，单位MB
                     * @return MaxReplayLatency 延迟日志大小阈值，单位MB
                     * 
                     */
                    uint64_t GetMaxReplayLatency() const;

                    /**
                     * 设置延迟日志大小阈值，单位MB
                     * @param _maxReplayLatency 延迟日志大小阈值，单位MB
                     * 
                     */
                    void SetMaxReplayLatency(const uint64_t& _maxReplayLatency);

                    /**
                     * 判断参数 MaxReplayLatency 是否已赋值
                     * @return MaxReplayLatency 是否已赋值
                     * 
                     */
                    bool MaxReplayLatencyHasBeenSet() const;

                    /**
                     * 获取延迟时间大小阈值，单位ms
                     * @return MaxReplayLag 延迟时间大小阈值，单位ms
                     * 
                     */
                    uint64_t GetMaxReplayLag() const;

                    /**
                     * 设置延迟时间大小阈值，单位ms
                     * @param _maxReplayLag 延迟时间大小阈值，单位ms
                     * 
                     */
                    void SetMaxReplayLag(const uint64_t& _maxReplayLag);

                    /**
                     * 判断参数 MaxReplayLag 是否已赋值
                     * @return MaxReplayLag 是否已赋值
                     * 
                     */
                    bool MaxReplayLagHasBeenSet() const;

                    /**
                     * 获取自动负载均衡开关：0关、1开
                     * @return Rebalance 自动负载均衡开关：0关、1开
                     * 
                     */
                    uint64_t GetRebalance() const;

                    /**
                     * 设置自动负载均衡开关：0关、1开
                     * @param _rebalance 自动负载均衡开关：0关、1开
                     * 
                     */
                    void SetRebalance(const uint64_t& _rebalance);

                    /**
                     * 判断参数 Rebalance 是否已赋值
                     * @return Rebalance 是否已赋值
                     * 
                     */
                    bool RebalanceHasBeenSet() const;

                    /**
                     * 获取延迟剔除最小保留实例数
                     * @return MinDelayEliminateReserve 延迟剔除最小保留实例数
                     * 
                     */
                    uint64_t GetMinDelayEliminateReserve() const;

                    /**
                     * 设置延迟剔除最小保留实例数
                     * @param _minDelayEliminateReserve 延迟剔除最小保留实例数
                     * 
                     */
                    void SetMinDelayEliminateReserve(const uint64_t& _minDelayEliminateReserve);

                    /**
                     * 判断参数 MinDelayEliminateReserve 是否已赋值
                     * @return MinDelayEliminateReserve 是否已赋值
                     * 
                     */
                    bool MinDelayEliminateReserveHasBeenSet() const;

                private:

                    /**
                     * 只读组ID
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * 只读组名称
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * 延迟时间配置开关：0关、1开
                     */
                    uint64_t m_replayLagEliminate;
                    bool m_replayLagEliminateHasBeenSet;

                    /**
                     * 延迟日志大小配置开关：0关、1开
                     */
                    uint64_t m_replayLatencyEliminate;
                    bool m_replayLatencyEliminateHasBeenSet;

                    /**
                     * 延迟日志大小阈值，单位MB
                     */
                    uint64_t m_maxReplayLatency;
                    bool m_maxReplayLatencyHasBeenSet;

                    /**
                     * 延迟时间大小阈值，单位ms
                     */
                    uint64_t m_maxReplayLag;
                    bool m_maxReplayLagHasBeenSet;

                    /**
                     * 自动负载均衡开关：0关、1开
                     */
                    uint64_t m_rebalance;
                    bool m_rebalanceHasBeenSet;

                    /**
                     * 延迟剔除最小保留实例数
                     */
                    uint64_t m_minDelayEliminateReserve;
                    bool m_minDelayEliminateReserveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYREADONLYGROUPCONFIGREQUEST_H_
