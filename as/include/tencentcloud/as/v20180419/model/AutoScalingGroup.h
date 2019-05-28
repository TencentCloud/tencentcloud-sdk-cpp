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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGGROUP_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ForwardLoadBalancer.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 伸缩组
                */
                class AutoScalingGroup : public AbstractModel
                {
                public:
                    AutoScalingGroup();
                    ~AutoScalingGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩组ID
                     * @return AutoScalingGroupId 伸缩组ID
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID
                     * @param AutoScalingGroupId 伸缩组ID
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取伸缩组名称
                     * @return AutoScalingGroupName 伸缩组名称
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置伸缩组名称
                     * @param AutoScalingGroupName 伸缩组名称
                     */
                    void SetAutoScalingGroupName(const std::string& _autoScalingGroupName);

                    /**
                     * 判断参数 AutoScalingGroupName 是否已赋值
                     * @return AutoScalingGroupName 是否已赋值
                     */
                    bool AutoScalingGroupNameHasBeenSet() const;

                    /**
                     * 获取伸缩组当前状态。取值范围：<br><li>NORMAL：正常<br><li>CVM_ABNORMAL：启动配置异常<br><li>LB_ABNORMAL：负载均衡器异常<br><li>VPC_ABNORMAL：VPC网络异常<br><li>INSUFFICIENT_BALANCE：余额不足<br>
                     * @return AutoScalingGroupStatus 伸缩组当前状态。取值范围：<br><li>NORMAL：正常<br><li>CVM_ABNORMAL：启动配置异常<br><li>LB_ABNORMAL：负载均衡器异常<br><li>VPC_ABNORMAL：VPC网络异常<br><li>INSUFFICIENT_BALANCE：余额不足<br>
                     */
                    std::string GetAutoScalingGroupStatus() const;

                    /**
                     * 设置伸缩组当前状态。取值范围：<br><li>NORMAL：正常<br><li>CVM_ABNORMAL：启动配置异常<br><li>LB_ABNORMAL：负载均衡器异常<br><li>VPC_ABNORMAL：VPC网络异常<br><li>INSUFFICIENT_BALANCE：余额不足<br>
                     * @param AutoScalingGroupStatus 伸缩组当前状态。取值范围：<br><li>NORMAL：正常<br><li>CVM_ABNORMAL：启动配置异常<br><li>LB_ABNORMAL：负载均衡器异常<br><li>VPC_ABNORMAL：VPC网络异常<br><li>INSUFFICIENT_BALANCE：余额不足<br>
                     */
                    void SetAutoScalingGroupStatus(const std::string& _autoScalingGroupStatus);

                    /**
                     * 判断参数 AutoScalingGroupStatus 是否已赋值
                     * @return AutoScalingGroupStatus 是否已赋值
                     */
                    bool AutoScalingGroupStatusHasBeenSet() const;

                    /**
                     * 获取创建时间，采用UTC标准计时
                     * @return CreatedTime 创建时间，采用UTC标准计时
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间，采用UTC标准计时
                     * @param CreatedTime 创建时间，采用UTC标准计时
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取默认冷却时间，单位秒
                     * @return DefaultCooldown 默认冷却时间，单位秒
                     */
                    int64_t GetDefaultCooldown() const;

                    /**
                     * 设置默认冷却时间，单位秒
                     * @param DefaultCooldown 默认冷却时间，单位秒
                     */
                    void SetDefaultCooldown(const int64_t& _defaultCooldown);

                    /**
                     * 判断参数 DefaultCooldown 是否已赋值
                     * @return DefaultCooldown 是否已赋值
                     */
                    bool DefaultCooldownHasBeenSet() const;

                    /**
                     * 获取期望实例数
                     * @return DesiredCapacity 期望实例数
                     */
                    int64_t GetDesiredCapacity() const;

                    /**
                     * 设置期望实例数
                     * @param DesiredCapacity 期望实例数
                     */
                    void SetDesiredCapacity(const int64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取启用状态，取值包括`ENABLED`和`DISABLED`
                     * @return EnabledStatus 启用状态，取值包括`ENABLED`和`DISABLED`
                     */
                    std::string GetEnabledStatus() const;

                    /**
                     * 设置启用状态，取值包括`ENABLED`和`DISABLED`
                     * @param EnabledStatus 启用状态，取值包括`ENABLED`和`DISABLED`
                     */
                    void SetEnabledStatus(const std::string& _enabledStatus);

                    /**
                     * 判断参数 EnabledStatus 是否已赋值
                     * @return EnabledStatus 是否已赋值
                     */
                    bool EnabledStatusHasBeenSet() const;

                    /**
                     * 获取应用型负载均衡器列表
                     * @return ForwardLoadBalancerSet 应用型负载均衡器列表
                     */
                    std::vector<ForwardLoadBalancer> GetForwardLoadBalancerSet() const;

                    /**
                     * 设置应用型负载均衡器列表
                     * @param ForwardLoadBalancerSet 应用型负载均衡器列表
                     */
                    void SetForwardLoadBalancerSet(const std::vector<ForwardLoadBalancer>& _forwardLoadBalancerSet);

                    /**
                     * 判断参数 ForwardLoadBalancerSet 是否已赋值
                     * @return ForwardLoadBalancerSet 是否已赋值
                     */
                    bool ForwardLoadBalancerSetHasBeenSet() const;

                    /**
                     * 获取实例数量
                     * @return InstanceCount 实例数量
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置实例数量
                     * @param InstanceCount 实例数量
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取状态为`IN_SERVICE`实例的数量
                     * @return InServiceInstanceCount 状态为`IN_SERVICE`实例的数量
                     */
                    int64_t GetInServiceInstanceCount() const;

                    /**
                     * 设置状态为`IN_SERVICE`实例的数量
                     * @param InServiceInstanceCount 状态为`IN_SERVICE`实例的数量
                     */
                    void SetInServiceInstanceCount(const int64_t& _inServiceInstanceCount);

                    /**
                     * 判断参数 InServiceInstanceCount 是否已赋值
                     * @return InServiceInstanceCount 是否已赋值
                     */
                    bool InServiceInstanceCountHasBeenSet() const;

                    /**
                     * 获取启动配置ID
                     * @return LaunchConfigurationId 启动配置ID
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置启动配置ID
                     * @param LaunchConfigurationId 启动配置ID
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取启动配置名称
                     * @return LaunchConfigurationName 启动配置名称
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置启动配置名称
                     * @param LaunchConfigurationName 启动配置名称
                     */
                    void SetLaunchConfigurationName(const std::string& _launchConfigurationName);

                    /**
                     * 判断参数 LaunchConfigurationName 是否已赋值
                     * @return LaunchConfigurationName 是否已赋值
                     */
                    bool LaunchConfigurationNameHasBeenSet() const;

                    /**
                     * 获取传统型负载均衡器ID列表
                     * @return LoadBalancerIdSet 传统型负载均衡器ID列表
                     */
                    std::vector<std::string> GetLoadBalancerIdSet() const;

                    /**
                     * 设置传统型负载均衡器ID列表
                     * @param LoadBalancerIdSet 传统型负载均衡器ID列表
                     */
                    void SetLoadBalancerIdSet(const std::vector<std::string>& _loadBalancerIdSet);

                    /**
                     * 判断参数 LoadBalancerIdSet 是否已赋值
                     * @return LoadBalancerIdSet 是否已赋值
                     */
                    bool LoadBalancerIdSetHasBeenSet() const;

                    /**
                     * 获取最大实例数
                     * @return MaxSize 最大实例数
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置最大实例数
                     * @param MaxSize 最大实例数
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取最小实例数
                     * @return MinSize 最小实例数
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置最小实例数
                     * @param MinSize 最小实例数
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取子网ID列表
                     * @return SubnetIdSet 子网ID列表
                     */
                    std::vector<std::string> GetSubnetIdSet() const;

                    /**
                     * 设置子网ID列表
                     * @param SubnetIdSet 子网ID列表
                     */
                    void SetSubnetIdSet(const std::vector<std::string>& _subnetIdSet);

                    /**
                     * 判断参数 SubnetIdSet 是否已赋值
                     * @return SubnetIdSet 是否已赋值
                     */
                    bool SubnetIdSetHasBeenSet() const;

                    /**
                     * 获取销毁策略
                     * @return TerminationPolicySet 销毁策略
                     */
                    std::vector<std::string> GetTerminationPolicySet() const;

                    /**
                     * 设置销毁策略
                     * @param TerminationPolicySet 销毁策略
                     */
                    void SetTerminationPolicySet(const std::vector<std::string>& _terminationPolicySet);

                    /**
                     * 判断参数 TerminationPolicySet 是否已赋值
                     * @return TerminationPolicySet 是否已赋值
                     */
                    bool TerminationPolicySetHasBeenSet() const;

                    /**
                     * 获取VPC标识
                     * @return VpcId VPC标识
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC标识
                     * @param VpcId VPC标识
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取可用区列表
                     * @return ZoneSet 可用区列表
                     */
                    std::vector<std::string> GetZoneSet() const;

                    /**
                     * 设置可用区列表
                     * @param ZoneSet 可用区列表
                     */
                    void SetZoneSet(const std::vector<std::string>& _zoneSet);

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     */
                    bool ZoneSetHasBeenSet() const;

                    /**
                     * 获取重试策略
                     * @return RetryPolicy 重试策略
                     */
                    std::string GetRetryPolicy() const;

                    /**
                     * 设置重试策略
                     * @param RetryPolicy 重试策略
                     */
                    void SetRetryPolicy(const std::string& _retryPolicy);

                    /**
                     * 判断参数 RetryPolicy 是否已赋值
                     * @return RetryPolicy 是否已赋值
                     */
                    bool RetryPolicyHasBeenSet() const;

                    /**
                     * 获取伸缩组是否处于伸缩活动中，`IN_ACTIVITY`表示处于伸缩活动中，`NOT_IN_ACTIVITY`表示不处于伸缩活动中。
                     * @return InActivityStatus 伸缩组是否处于伸缩活动中，`IN_ACTIVITY`表示处于伸缩活动中，`NOT_IN_ACTIVITY`表示不处于伸缩活动中。
                     */
                    std::string GetInActivityStatus() const;

                    /**
                     * 设置伸缩组是否处于伸缩活动中，`IN_ACTIVITY`表示处于伸缩活动中，`NOT_IN_ACTIVITY`表示不处于伸缩活动中。
                     * @param InActivityStatus 伸缩组是否处于伸缩活动中，`IN_ACTIVITY`表示处于伸缩活动中，`NOT_IN_ACTIVITY`表示不处于伸缩活动中。
                     */
                    void SetInActivityStatus(const std::string& _inActivityStatus);

                    /**
                     * 判断参数 InActivityStatus 是否已赋值
                     * @return InActivityStatus 是否已赋值
                     */
                    bool InActivityStatusHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 伸缩组名称
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * 伸缩组当前状态。取值范围：<br><li>NORMAL：正常<br><li>CVM_ABNORMAL：启动配置异常<br><li>LB_ABNORMAL：负载均衡器异常<br><li>VPC_ABNORMAL：VPC网络异常<br><li>INSUFFICIENT_BALANCE：余额不足<br>
                     */
                    std::string m_autoScalingGroupStatus;
                    bool m_autoScalingGroupStatusHasBeenSet;

                    /**
                     * 创建时间，采用UTC标准计时
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 默认冷却时间，单位秒
                     */
                    int64_t m_defaultCooldown;
                    bool m_defaultCooldownHasBeenSet;

                    /**
                     * 期望实例数
                     */
                    int64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * 启用状态，取值包括`ENABLED`和`DISABLED`
                     */
                    std::string m_enabledStatus;
                    bool m_enabledStatusHasBeenSet;

                    /**
                     * 应用型负载均衡器列表
                     */
                    std::vector<ForwardLoadBalancer> m_forwardLoadBalancerSet;
                    bool m_forwardLoadBalancerSetHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 状态为`IN_SERVICE`实例的数量
                     */
                    int64_t m_inServiceInstanceCount;
                    bool m_inServiceInstanceCountHasBeenSet;

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
                     * 传统型负载均衡器ID列表
                     */
                    std::vector<std::string> m_loadBalancerIdSet;
                    bool m_loadBalancerIdSetHasBeenSet;

                    /**
                     * 最大实例数
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 最小实例数
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 子网ID列表
                     */
                    std::vector<std::string> m_subnetIdSet;
                    bool m_subnetIdSetHasBeenSet;

                    /**
                     * 销毁策略
                     */
                    std::vector<std::string> m_terminationPolicySet;
                    bool m_terminationPolicySetHasBeenSet;

                    /**
                     * VPC标识
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 可用区列表
                     */
                    std::vector<std::string> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                    /**
                     * 重试策略
                     */
                    std::string m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                    /**
                     * 伸缩组是否处于伸缩活动中，`IN_ACTIVITY`表示处于伸缩活动中，`NOT_IN_ACTIVITY`表示不处于伸缩活动中。
                     */
                    std::string m_inActivityStatus;
                    bool m_inActivityStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGGROUP_H_
