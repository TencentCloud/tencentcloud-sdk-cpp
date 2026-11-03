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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_ROLESTATUSINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_ROLESTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 角色状态信息
                */
                class RoleStatusInfo : public AbstractModel
                {
                public:
                    RoleStatusInfo();
                    ~RoleStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return RoleName 
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置
                     * @param _roleName 
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return WorkloadType 
                     * 
                     */
                    std::string GetWorkloadType() const;

                    /**
                     * 设置
                     * @param _workloadType 
                     * 
                     */
                    void SetWorkloadType(const std::string& _workloadType);

                    /**
                     * 判断参数 WorkloadType 是否已赋值
                     * @return WorkloadType 是否已赋值
                     * 
                     */
                    bool WorkloadTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return WorkloadName 
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置
                     * @param _workloadName 
                     * 
                     */
                    void SetWorkloadName(const std::string& _workloadName);

                    /**
                     * 判断参数 WorkloadName 是否已赋值
                     * @return WorkloadName 是否已赋值
                     * 
                     */
                    bool WorkloadNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return RunningReplicas 
                     * 
                     */
                    int64_t GetRunningReplicas() const;

                    /**
                     * 设置
                     * @param _runningReplicas 
                     * 
                     */
                    void SetRunningReplicas(const int64_t& _runningReplicas);

                    /**
                     * 判断参数 RunningReplicas 是否已赋值
                     * @return RunningReplicas 是否已赋值
                     * 
                     */
                    bool RunningReplicasHasBeenSet() const;

                    /**
                     * 获取
                     * @return TargetReplicas 
                     * 
                     */
                    int64_t GetTargetReplicas() const;

                    /**
                     * 设置
                     * @param _targetReplicas 
                     * 
                     */
                    void SetTargetReplicas(const int64_t& _targetReplicas);

                    /**
                     * 判断参数 TargetReplicas 是否已赋值
                     * @return TargetReplicas 是否已赋值
                     * 
                     */
                    bool TargetReplicasHasBeenSet() const;

                    /**
                     * 获取
                     * @return ContainerCount 
                     * 
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置
                     * @param _containerCount 
                     * 
                     */
                    void SetContainerCount(const int64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return State 
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置
                     * @param _state 
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取
                     * @return LastObservedTime 
                     * 
                     */
                    std::string GetLastObservedTime() const;

                    /**
                     * 设置
                     * @param _lastObservedTime 
                     * 
                     */
                    void SetLastObservedTime(const std::string& _lastObservedTime);

                    /**
                     * 判断参数 LastObservedTime 是否已赋值
                     * @return LastObservedTime 是否已赋值
                     * 
                     */
                    bool LastObservedTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Role 
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置
                     * @param _role 
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_workloadType;
                    bool m_workloadTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_runningReplicas;
                    bool m_runningReplicasHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_targetReplicas;
                    bool m_targetReplicasHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_lastObservedTime;
                    bool m_lastObservedTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_ROLESTATUSINFO_H_
