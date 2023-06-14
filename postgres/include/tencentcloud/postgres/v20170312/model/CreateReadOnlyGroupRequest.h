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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYGROUPREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYGROUPREQUEST_H_

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
                * CreateReadOnlyGroup请求参数结构体
                */
                class CreateReadOnlyGroupRequest : public AbstractModel
                {
                public:
                    CreateReadOnlyGroupRequest();
                    ~CreateReadOnlyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例ID
                     * @return MasterDBInstanceId 主实例ID
                     * 
                     */
                    std::string GetMasterDBInstanceId() const;

                    /**
                     * 设置主实例ID
                     * @param _masterDBInstanceId 主实例ID
                     * 
                     */
                    void SetMasterDBInstanceId(const std::string& _masterDBInstanceId);

                    /**
                     * 判断参数 MasterDBInstanceId 是否已赋值
                     * @return MasterDBInstanceId 是否已赋值
                     * 
                     */
                    bool MasterDBInstanceIdHasBeenSet() const;

                    /**
                     * 获取只读组名称
                     * @return Name 只读组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置只读组名称
                     * @param _name 只读组名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取延迟时间大小开关：0关、1开
                     * @return ReplayLagEliminate 延迟时间大小开关：0关、1开
                     * 
                     */
                    uint64_t GetReplayLagEliminate() const;

                    /**
                     * 设置延迟时间大小开关：0关、1开
                     * @param _replayLagEliminate 延迟时间大小开关：0关、1开
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
                     * 获取延迟空间大小开关： 0关、1开
                     * @return ReplayLatencyEliminate 延迟空间大小开关： 0关、1开
                     * 
                     */
                    uint64_t GetReplayLatencyEliminate() const;

                    /**
                     * 设置延迟空间大小开关： 0关、1开
                     * @param _replayLatencyEliminate 延迟空间大小开关： 0关、1开
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
                     * 获取延迟空间大小阈值，单位MB
                     * @return MaxReplayLatency 延迟空间大小阈值，单位MB
                     * 
                     */
                    uint64_t GetMaxReplayLatency() const;

                    /**
                     * 设置延迟空间大小阈值，单位MB
                     * @param _maxReplayLatency 延迟空间大小阈值，单位MB
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

                    /**
                     * 获取安全组id
                     * @return SecurityGroupIds 安全组id
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组id
                     * @param _securityGroupIds 安全组id
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 主实例ID
                     */
                    std::string m_masterDBInstanceId;
                    bool m_masterDBInstanceIdHasBeenSet;

                    /**
                     * 只读组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 延迟时间大小开关：0关、1开
                     */
                    uint64_t m_replayLagEliminate;
                    bool m_replayLagEliminateHasBeenSet;

                    /**
                     * 延迟空间大小开关： 0关、1开
                     */
                    uint64_t m_replayLatencyEliminate;
                    bool m_replayLatencyEliminateHasBeenSet;

                    /**
                     * 延迟时间大小阈值，单位ms
                     */
                    uint64_t m_maxReplayLag;
                    bool m_maxReplayLagHasBeenSet;

                    /**
                     * 延迟空间大小阈值，单位MB
                     */
                    uint64_t m_maxReplayLatency;
                    bool m_maxReplayLatencyHasBeenSet;

                    /**
                     * 延迟剔除最小保留实例数
                     */
                    uint64_t m_minDelayEliminateReserve;
                    bool m_minDelayEliminateReserveHasBeenSet;

                    /**
                     * 安全组id
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYGROUPREQUEST_H_
