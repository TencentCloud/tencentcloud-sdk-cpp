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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EnableScheduleOperationDuration.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * RestartNodes请求参数结构体
                */
                class RestartNodesRequest : public AbstractModel
                {
                public:
                    RestartNodesRequest();
                    ~RestartNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例ID
                     * @return InstanceId 集群实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID
                     * @param _instanceId 集群实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取节点名称列表
                     * @return NodeNames 节点名称列表
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置节点名称列表
                     * @param _nodeNames 节点名称列表
                     * 
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     * 
                     */
                    bool NodeNamesHasBeenSet() const;

                    /**
                     * 获取是否强制重启
                     * @return ForceRestart 是否强制重启
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置是否强制重启
                     * @param _forceRestart 是否强制重启
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取可选重启模式"in-place","blue-green"，分别表示重启，蓝绿重启；默认值为"in-place"
                     * @return RestartMode 可选重启模式"in-place","blue-green"，分别表示重启，蓝绿重启；默认值为"in-place"
                     * 
                     */
                    std::string GetRestartMode() const;

                    /**
                     * 设置可选重启模式"in-place","blue-green"，分别表示重启，蓝绿重启；默认值为"in-place"
                     * @param _restartMode 可选重启模式"in-place","blue-green"，分别表示重启，蓝绿重启；默认值为"in-place"
                     * 
                     */
                    void SetRestartMode(const std::string& _restartMode);

                    /**
                     * 判断参数 RestartMode 是否已赋值
                     * @return RestartMode 是否已赋值
                     * 
                     */
                    bool RestartModeHasBeenSet() const;

                    /**
                     * 获取节点状态，在蓝绿模式中使用；离线节点蓝绿有风险
                     * @return IsOffline 节点状态，在蓝绿模式中使用；离线节点蓝绿有风险
                     * 
                     */
                    bool GetIsOffline() const;

                    /**
                     * 设置节点状态，在蓝绿模式中使用；离线节点蓝绿有风险
                     * @param _isOffline 节点状态，在蓝绿模式中使用；离线节点蓝绿有风险
                     * 
                     */
                    void SetIsOffline(const bool& _isOffline);

                    /**
                     * 判断参数 IsOffline 是否已赋值
                     * @return IsOffline 是否已赋值
                     * 
                     */
                    bool IsOfflineHasBeenSet() const;

                    /**
                     * 获取cvm延迟上架时间
                     * @return CvmDelayOnlineTime cvm延迟上架时间
                     * 
                     */
                    uint64_t GetCvmDelayOnlineTime() const;

                    /**
                     * 设置cvm延迟上架时间
                     * @param _cvmDelayOnlineTime cvm延迟上架时间
                     * 
                     */
                    void SetCvmDelayOnlineTime(const uint64_t& _cvmDelayOnlineTime);

                    /**
                     * 判断参数 CvmDelayOnlineTime 是否已赋值
                     * @return CvmDelayOnlineTime 是否已赋值
                     * 
                     */
                    bool CvmDelayOnlineTimeHasBeenSet() const;

                    /**
                     * 获取分片迁移并发数
                     * @return ShardAllocationConcurrents 分片迁移并发数
                     * 
                     */
                    uint64_t GetShardAllocationConcurrents() const;

                    /**
                     * 设置分片迁移并发数
                     * @param _shardAllocationConcurrents 分片迁移并发数
                     * 
                     */
                    void SetShardAllocationConcurrents(const uint64_t& _shardAllocationConcurrents);

                    /**
                     * 判断参数 ShardAllocationConcurrents 是否已赋值
                     * @return ShardAllocationConcurrents 是否已赋值
                     * 
                     */
                    bool ShardAllocationConcurrentsHasBeenSet() const;

                    /**
                     * 获取分片迁移并发速度
                     * @return ShardAllocationBytes 分片迁移并发速度
                     * 
                     */
                    uint64_t GetShardAllocationBytes() const;

                    /**
                     * 设置分片迁移并发速度
                     * @param _shardAllocationBytes 分片迁移并发速度
                     * 
                     */
                    void SetShardAllocationBytes(const uint64_t& _shardAllocationBytes);

                    /**
                     * 判断参数 ShardAllocationBytes 是否已赋值
                     * @return ShardAllocationBytes 是否已赋值
                     * 
                     */
                    bool ShardAllocationBytesHasBeenSet() const;

                    /**
                     * 获取是否开启置放群组异步任务
                     * @return EnableScheduleRecoverGroup 是否开启置放群组异步任务
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置是否开启置放群组异步任务
                     * @param _enableScheduleRecoverGroup 是否开启置放群组异步任务
                     * 
                     */
                    void SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup);

                    /**
                     * 判断参数 EnableScheduleRecoverGroup 是否已赋值
                     * @return EnableScheduleRecoverGroup 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupHasBeenSet() const;

                    /**
                     * 获取置放群组异步任务时间段
                     * @return EnableScheduleOperationDuration 置放群组异步任务时间段
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置置放群组异步任务时间段
                     * @param _enableScheduleOperationDuration 置放群组异步任务时间段
                     * 
                     */
                    void SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration);

                    /**
                     * 判断参数 EnableScheduleOperationDuration 是否已赋值
                     * @return EnableScheduleOperationDuration 是否已赋值
                     * 
                     */
                    bool EnableScheduleOperationDurationHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点名称列表
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * 是否强制重启
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * 可选重启模式"in-place","blue-green"，分别表示重启，蓝绿重启；默认值为"in-place"
                     */
                    std::string m_restartMode;
                    bool m_restartModeHasBeenSet;

                    /**
                     * 节点状态，在蓝绿模式中使用；离线节点蓝绿有风险
                     */
                    bool m_isOffline;
                    bool m_isOfflineHasBeenSet;

                    /**
                     * cvm延迟上架时间
                     */
                    uint64_t m_cvmDelayOnlineTime;
                    bool m_cvmDelayOnlineTimeHasBeenSet;

                    /**
                     * 分片迁移并发数
                     */
                    uint64_t m_shardAllocationConcurrents;
                    bool m_shardAllocationConcurrentsHasBeenSet;

                    /**
                     * 分片迁移并发速度
                     */
                    uint64_t m_shardAllocationBytes;
                    bool m_shardAllocationBytesHasBeenSet;

                    /**
                     * 是否开启置放群组异步任务
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * 置放群组异步任务时间段
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_
