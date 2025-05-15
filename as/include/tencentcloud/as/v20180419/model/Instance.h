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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INSTANCE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 实例信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取伸缩组ID
                     * @return AutoScalingGroupId 伸缩组ID
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID
                     * @param _autoScalingGroupId 伸缩组ID
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取启动配置ID
                     * @return LaunchConfigurationId 启动配置ID
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置启动配置ID
                     * @param _launchConfigurationId 启动配置ID
                     * 
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取启动配置名称
                     * @return LaunchConfigurationName 启动配置名称
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置启动配置名称
                     * @param _launchConfigurationName 启动配置名称
                     * 
                     */
                    void SetLaunchConfigurationName(const std::string& _launchConfigurationName);

                    /**
                     * 判断参数 LaunchConfigurationName 是否已赋值
                     * @return LaunchConfigurationName 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationNameHasBeenSet() const;

                    /**
                     * 获取生命周期状态，取值如下：
<li>IN_SERVICE：运行中</li>
<li>CREATING：创建中</li>
<li>CREATION_FAILED：创建失败</li>
<li>TERMINATING：中止中</li>
<li>TERMINATION_FAILED：中止失败</li>
<li>ATTACHING：绑定中</li>
<li>ATTACH_FAILED：绑定失败</li>
<li>DETACHING：解绑中</li>
<li>DETACH_FAILED：解绑失败</li>
<li>ATTACHING_LB：绑定LB中</li>
<li>DETACHING_LB：解绑LB中</li>
<li>MODIFYING_LB：修改LB中</li>
<li>STARTING：开机中</li>
<li>START_FAILED：开机失败</li>
<li>STOPPING：关机中</li>
<li>STOP_FAILED：关机失败</li>
<li>STOPPED：已关机</li>
<li>IN_LAUNCHING_HOOK：扩容生命周期挂钩中</li>
<li>IN_TERMINATING_HOOK：缩容生命周期挂钩中</li>
                     * @return LifeCycleState 生命周期状态，取值如下：
<li>IN_SERVICE：运行中</li>
<li>CREATING：创建中</li>
<li>CREATION_FAILED：创建失败</li>
<li>TERMINATING：中止中</li>
<li>TERMINATION_FAILED：中止失败</li>
<li>ATTACHING：绑定中</li>
<li>ATTACH_FAILED：绑定失败</li>
<li>DETACHING：解绑中</li>
<li>DETACH_FAILED：解绑失败</li>
<li>ATTACHING_LB：绑定LB中</li>
<li>DETACHING_LB：解绑LB中</li>
<li>MODIFYING_LB：修改LB中</li>
<li>STARTING：开机中</li>
<li>START_FAILED：开机失败</li>
<li>STOPPING：关机中</li>
<li>STOP_FAILED：关机失败</li>
<li>STOPPED：已关机</li>
<li>IN_LAUNCHING_HOOK：扩容生命周期挂钩中</li>
<li>IN_TERMINATING_HOOK：缩容生命周期挂钩中</li>
                     * 
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置生命周期状态，取值如下：
<li>IN_SERVICE：运行中</li>
<li>CREATING：创建中</li>
<li>CREATION_FAILED：创建失败</li>
<li>TERMINATING：中止中</li>
<li>TERMINATION_FAILED：中止失败</li>
<li>ATTACHING：绑定中</li>
<li>ATTACH_FAILED：绑定失败</li>
<li>DETACHING：解绑中</li>
<li>DETACH_FAILED：解绑失败</li>
<li>ATTACHING_LB：绑定LB中</li>
<li>DETACHING_LB：解绑LB中</li>
<li>MODIFYING_LB：修改LB中</li>
<li>STARTING：开机中</li>
<li>START_FAILED：开机失败</li>
<li>STOPPING：关机中</li>
<li>STOP_FAILED：关机失败</li>
<li>STOPPED：已关机</li>
<li>IN_LAUNCHING_HOOK：扩容生命周期挂钩中</li>
<li>IN_TERMINATING_HOOK：缩容生命周期挂钩中</li>
                     * @param _lifeCycleState 生命周期状态，取值如下：
<li>IN_SERVICE：运行中</li>
<li>CREATING：创建中</li>
<li>CREATION_FAILED：创建失败</li>
<li>TERMINATING：中止中</li>
<li>TERMINATION_FAILED：中止失败</li>
<li>ATTACHING：绑定中</li>
<li>ATTACH_FAILED：绑定失败</li>
<li>DETACHING：解绑中</li>
<li>DETACH_FAILED：解绑失败</li>
<li>ATTACHING_LB：绑定LB中</li>
<li>DETACHING_LB：解绑LB中</li>
<li>MODIFYING_LB：修改LB中</li>
<li>STARTING：开机中</li>
<li>START_FAILED：开机失败</li>
<li>STOPPING：关机中</li>
<li>STOP_FAILED：关机失败</li>
<li>STOPPED：已关机</li>
<li>IN_LAUNCHING_HOOK：扩容生命周期挂钩中</li>
<li>IN_TERMINATING_HOOK：缩容生命周期挂钩中</li>
                     * 
                     */
                    void SetLifeCycleState(const std::string& _lifeCycleState);

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     * 
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取健康状态，取值范围如下：
<li>HEALTHY：实例处于健康状态</li>
<li>UNHEALTHY：实例 ping 不可达</li>
<li>CLB_UNHEALTHY：CLB 监听的实例端口不健康</li>
                     * @return HealthStatus 健康状态，取值范围如下：
<li>HEALTHY：实例处于健康状态</li>
<li>UNHEALTHY：实例 ping 不可达</li>
<li>CLB_UNHEALTHY：CLB 监听的实例端口不健康</li>
                     * 
                     */
                    std::string GetHealthStatus() const;

                    /**
                     * 设置健康状态，取值范围如下：
<li>HEALTHY：实例处于健康状态</li>
<li>UNHEALTHY：实例 ping 不可达</li>
<li>CLB_UNHEALTHY：CLB 监听的实例端口不健康</li>
                     * @param _healthStatus 健康状态，取值范围如下：
<li>HEALTHY：实例处于健康状态</li>
<li>UNHEALTHY：实例 ping 不可达</li>
<li>CLB_UNHEALTHY：CLB 监听的实例端口不健康</li>
                     * 
                     */
                    void SetHealthStatus(const std::string& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取是否加入缩容保护
                     * @return ProtectedFromScaleIn 是否加入缩容保护
                     * 
                     */
                    bool GetProtectedFromScaleIn() const;

                    /**
                     * 设置是否加入缩容保护
                     * @param _protectedFromScaleIn 是否加入缩容保护
                     * 
                     */
                    void SetProtectedFromScaleIn(const bool& _protectedFromScaleIn);

                    /**
                     * 判断参数 ProtectedFromScaleIn 是否已赋值
                     * @return ProtectedFromScaleIn 是否已赋值
                     * 
                     */
                    bool ProtectedFromScaleInHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取创建类型，取值包括AUTO_CREATION, MANUAL_ATTACHING。
                     * @return CreationType 创建类型，取值包括AUTO_CREATION, MANUAL_ATTACHING。
                     * 
                     */
                    std::string GetCreationType() const;

                    /**
                     * 设置创建类型，取值包括AUTO_CREATION, MANUAL_ATTACHING。
                     * @param _creationType 创建类型，取值包括AUTO_CREATION, MANUAL_ATTACHING。
                     * 
                     */
                    void SetCreationType(const std::string& _creationType);

                    /**
                     * 判断参数 CreationType 是否已赋值
                     * @return CreationType 是否已赋值
                     * 
                     */
                    bool CreationTypeHasBeenSet() const;

                    /**
                     * 获取实例加入时间，按照ISO8601标准表示，并且使用UTC时间。
                     * @return AddTime 实例加入时间，按照ISO8601标准表示，并且使用UTC时间。
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置实例加入时间，按照ISO8601标准表示，并且使用UTC时间。
                     * @param _addTime 实例加入时间，按照ISO8601标准表示，并且使用UTC时间。
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return VersionNumber 版本号
                     * 
                     */
                    int64_t GetVersionNumber() const;

                    /**
                     * 设置版本号
                     * @param _versionNumber 版本号
                     * 
                     */
                    void SetVersionNumber(const int64_t& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * 
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取伸缩组名称
                     * @return AutoScalingGroupName 伸缩组名称
                     * 
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置伸缩组名称
                     * @param _autoScalingGroupName 伸缩组名称
                     * 
                     */
                    void SetAutoScalingGroupName(const std::string& _autoScalingGroupName);

                    /**
                     * 判断参数 AutoScalingGroupName 是否已赋值
                     * @return AutoScalingGroupName 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupNameHasBeenSet() const;

                    /**
                     * 获取预热状态，取值如下：
<li>WAITING_ENTER_WARMUP：等待进入预热</li>
<li>NO_NEED_WARMUP：无需预热</li>
<li>IN_WARMUP：预热中</li>
<li>AFTER_WARMUP：完成预热</li>
                     * @return WarmupStatus 预热状态，取值如下：
<li>WAITING_ENTER_WARMUP：等待进入预热</li>
<li>NO_NEED_WARMUP：无需预热</li>
<li>IN_WARMUP：预热中</li>
<li>AFTER_WARMUP：完成预热</li>
                     * 
                     */
                    std::string GetWarmupStatus() const;

                    /**
                     * 设置预热状态，取值如下：
<li>WAITING_ENTER_WARMUP：等待进入预热</li>
<li>NO_NEED_WARMUP：无需预热</li>
<li>IN_WARMUP：预热中</li>
<li>AFTER_WARMUP：完成预热</li>
                     * @param _warmupStatus 预热状态，取值如下：
<li>WAITING_ENTER_WARMUP：等待进入预热</li>
<li>NO_NEED_WARMUP：无需预热</li>
<li>IN_WARMUP：预热中</li>
<li>AFTER_WARMUP：完成预热</li>
                     * 
                     */
                    void SetWarmupStatus(const std::string& _warmupStatus);

                    /**
                     * 判断参数 WarmupStatus 是否已赋值
                     * @return WarmupStatus 是否已赋值
                     * 
                     */
                    bool WarmupStatusHasBeenSet() const;

                    /**
                     * 获取置放群组id，仅支持指定一个。
                     * @return DisasterRecoverGroupIds 置放群组id，仅支持指定一个。
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置置放群组id，仅支持指定一个。
                     * @param _disasterRecoverGroupIds 置放群组id，仅支持指定一个。
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 伸缩组ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 启动配置ID
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * 启动配置名称
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * 生命周期状态，取值如下：
<li>IN_SERVICE：运行中</li>
<li>CREATING：创建中</li>
<li>CREATION_FAILED：创建失败</li>
<li>TERMINATING：中止中</li>
<li>TERMINATION_FAILED：中止失败</li>
<li>ATTACHING：绑定中</li>
<li>ATTACH_FAILED：绑定失败</li>
<li>DETACHING：解绑中</li>
<li>DETACH_FAILED：解绑失败</li>
<li>ATTACHING_LB：绑定LB中</li>
<li>DETACHING_LB：解绑LB中</li>
<li>MODIFYING_LB：修改LB中</li>
<li>STARTING：开机中</li>
<li>START_FAILED：开机失败</li>
<li>STOPPING：关机中</li>
<li>STOP_FAILED：关机失败</li>
<li>STOPPED：已关机</li>
<li>IN_LAUNCHING_HOOK：扩容生命周期挂钩中</li>
<li>IN_TERMINATING_HOOK：缩容生命周期挂钩中</li>
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * 健康状态，取值范围如下：
<li>HEALTHY：实例处于健康状态</li>
<li>UNHEALTHY：实例 ping 不可达</li>
<li>CLB_UNHEALTHY：CLB 监听的实例端口不健康</li>
                     */
                    std::string m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * 是否加入缩容保护
                     */
                    bool m_protectedFromScaleIn;
                    bool m_protectedFromScaleInHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 创建类型，取值包括AUTO_CREATION, MANUAL_ATTACHING。
                     */
                    std::string m_creationType;
                    bool m_creationTypeHasBeenSet;

                    /**
                     * 实例加入时间，按照ISO8601标准表示，并且使用UTC时间。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 版本号
                     */
                    int64_t m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * 伸缩组名称
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * 预热状态，取值如下：
<li>WAITING_ENTER_WARMUP：等待进入预热</li>
<li>NO_NEED_WARMUP：无需预热</li>
<li>IN_WARMUP：预热中</li>
<li>AFTER_WARMUP：完成预热</li>
                     */
                    std::string m_warmupStatus;
                    bool m_warmupStatusHasBeenSet;

                    /**
                     * 置放群组id，仅支持指定一个。
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INSTANCE_H_
