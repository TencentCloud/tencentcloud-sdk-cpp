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
#include <tencentcloud/as/v20180419/model/Tag.h>
#include <tencentcloud/as/v20180419/model/ServiceSettings.h>
#include <tencentcloud/as/v20180419/model/SpotMixedAllocationPolicy.h>


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
                     * 获取伸缩组当前状态。取值范围：<br>
<li>NORMAL：正常<br>
<li>CVM_ABNORMAL：启动配置异常<br>
<li>LB_ABNORMAL：负载均衡器异常<br>
<li>LB_LISTENER_ABNORMAL：负载均衡器监听器异常<br>
<li>LB_LOCATION_ABNORMAL：负载均衡器监听器转发配置异常<br>
<li>VPC_ABNORMAL：VPC网络异常<br>
<li>SUBNET_ABNORMAL：VPC子网异常<br>
<li>INSUFFICIENT_BALANCE：余额不足<br>
<li>LB_BACKEND_REGION_NOT_MATCH：CLB实例后端地域与AS服务所在地域不匹配<br>
<li>LB_BACKEND_VPC_NOT_MATCH：CLB实例VPC与伸缩组VPC不匹配
                     * @return AutoScalingGroupStatus 伸缩组当前状态。取值范围：<br>
<li>NORMAL：正常<br>
<li>CVM_ABNORMAL：启动配置异常<br>
<li>LB_ABNORMAL：负载均衡器异常<br>
<li>LB_LISTENER_ABNORMAL：负载均衡器监听器异常<br>
<li>LB_LOCATION_ABNORMAL：负载均衡器监听器转发配置异常<br>
<li>VPC_ABNORMAL：VPC网络异常<br>
<li>SUBNET_ABNORMAL：VPC子网异常<br>
<li>INSUFFICIENT_BALANCE：余额不足<br>
<li>LB_BACKEND_REGION_NOT_MATCH：CLB实例后端地域与AS服务所在地域不匹配<br>
<li>LB_BACKEND_VPC_NOT_MATCH：CLB实例VPC与伸缩组VPC不匹配
                     */
                    std::string GetAutoScalingGroupStatus() const;

                    /**
                     * 设置伸缩组当前状态。取值范围：<br>
<li>NORMAL：正常<br>
<li>CVM_ABNORMAL：启动配置异常<br>
<li>LB_ABNORMAL：负载均衡器异常<br>
<li>LB_LISTENER_ABNORMAL：负载均衡器监听器异常<br>
<li>LB_LOCATION_ABNORMAL：负载均衡器监听器转发配置异常<br>
<li>VPC_ABNORMAL：VPC网络异常<br>
<li>SUBNET_ABNORMAL：VPC子网异常<br>
<li>INSUFFICIENT_BALANCE：余额不足<br>
<li>LB_BACKEND_REGION_NOT_MATCH：CLB实例后端地域与AS服务所在地域不匹配<br>
<li>LB_BACKEND_VPC_NOT_MATCH：CLB实例VPC与伸缩组VPC不匹配
                     * @param AutoScalingGroupStatus 伸缩组当前状态。取值范围：<br>
<li>NORMAL：正常<br>
<li>CVM_ABNORMAL：启动配置异常<br>
<li>LB_ABNORMAL：负载均衡器异常<br>
<li>LB_LISTENER_ABNORMAL：负载均衡器监听器异常<br>
<li>LB_LOCATION_ABNORMAL：负载均衡器监听器转发配置异常<br>
<li>VPC_ABNORMAL：VPC网络异常<br>
<li>SUBNET_ABNORMAL：VPC子网异常<br>
<li>INSUFFICIENT_BALANCE：余额不足<br>
<li>LB_BACKEND_REGION_NOT_MATCH：CLB实例后端地域与AS服务所在地域不匹配<br>
<li>LB_BACKEND_VPC_NOT_MATCH：CLB实例VPC与伸缩组VPC不匹配
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

                    /**
                     * 获取伸缩组标签列表
                     * @return Tags 伸缩组标签列表
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置伸缩组标签列表
                     * @param Tags 伸缩组标签列表
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取服务设置
                     * @return ServiceSettings 服务设置
                     */
                    ServiceSettings GetServiceSettings() const;

                    /**
                     * 设置服务设置
                     * @param ServiceSettings 服务设置
                     */
                    void SetServiceSettings(const ServiceSettings& _serviceSettings);

                    /**
                     * 判断参数 ServiceSettings 是否已赋值
                     * @return ServiceSettings 是否已赋值
                     */
                    bool ServiceSettingsHasBeenSet() const;

                    /**
                     * 获取实例具有IPv6地址数量的配置
                     * @return Ipv6AddressCount 实例具有IPv6地址数量的配置
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置实例具有IPv6地址数量的配置
                     * @param Ipv6AddressCount 实例具有IPv6地址数量的配置
                     */
                    void SetIpv6AddressCount(const int64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                    /**
                     * 获取多可用区/子网策略。
<br><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。
<br><li> EQUALITY：每次选择当前实例数最少的可用区/子网进行扩容，使得每个可用区/子网都有机会发生扩容，多次扩容出的实例会打散到多个可用区/子网。
                     * @return MultiZoneSubnetPolicy 多可用区/子网策略。
<br><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。
<br><li> EQUALITY：每次选择当前实例数最少的可用区/子网进行扩容，使得每个可用区/子网都有机会发生扩容，多次扩容出的实例会打散到多个可用区/子网。
                     */
                    std::string GetMultiZoneSubnetPolicy() const;

                    /**
                     * 设置多可用区/子网策略。
<br><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。
<br><li> EQUALITY：每次选择当前实例数最少的可用区/子网进行扩容，使得每个可用区/子网都有机会发生扩容，多次扩容出的实例会打散到多个可用区/子网。
                     * @param MultiZoneSubnetPolicy 多可用区/子网策略。
<br><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。
<br><li> EQUALITY：每次选择当前实例数最少的可用区/子网进行扩容，使得每个可用区/子网都有机会发生扩容，多次扩容出的实例会打散到多个可用区/子网。
                     */
                    void SetMultiZoneSubnetPolicy(const std::string& _multiZoneSubnetPolicy);

                    /**
                     * 判断参数 MultiZoneSubnetPolicy 是否已赋值
                     * @return MultiZoneSubnetPolicy 是否已赋值
                     */
                    bool MultiZoneSubnetPolicyHasBeenSet() const;

                    /**
                     * 获取伸缩组实例健康检查类型，取值如下：<br><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)<br><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)
                     * @return HealthCheckType 伸缩组实例健康检查类型，取值如下：<br><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)<br><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)
                     */
                    std::string GetHealthCheckType() const;

                    /**
                     * 设置伸缩组实例健康检查类型，取值如下：<br><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)<br><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)
                     * @param HealthCheckType 伸缩组实例健康检查类型，取值如下：<br><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)<br><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)
                     */
                    void SetHealthCheckType(const std::string& _healthCheckType);

                    /**
                     * 判断参数 HealthCheckType 是否已赋值
                     * @return HealthCheckType 是否已赋值
                     */
                    bool HealthCheckTypeHasBeenSet() const;

                    /**
                     * 获取CLB健康检查宽限期
                     * @return LoadBalancerHealthCheckGracePeriod CLB健康检查宽限期
                     */
                    uint64_t GetLoadBalancerHealthCheckGracePeriod() const;

                    /**
                     * 设置CLB健康检查宽限期
                     * @param LoadBalancerHealthCheckGracePeriod CLB健康检查宽限期
                     */
                    void SetLoadBalancerHealthCheckGracePeriod(const uint64_t& _loadBalancerHealthCheckGracePeriod);

                    /**
                     * 判断参数 LoadBalancerHealthCheckGracePeriod 是否已赋值
                     * @return LoadBalancerHealthCheckGracePeriod 是否已赋值
                     */
                    bool LoadBalancerHealthCheckGracePeriodHasBeenSet() const;

                    /**
                     * 获取实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。
<br><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。
<br><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。
                     * @return InstanceAllocationPolicy 实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。
<br><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。
<br><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。
                     */
                    std::string GetInstanceAllocationPolicy() const;

                    /**
                     * 设置实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。
<br><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。
<br><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。
                     * @param InstanceAllocationPolicy 实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。
<br><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。
<br><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。
                     */
                    void SetInstanceAllocationPolicy(const std::string& _instanceAllocationPolicy);

                    /**
                     * 判断参数 InstanceAllocationPolicy 是否已赋值
                     * @return InstanceAllocationPolicy 是否已赋值
                     */
                    bool InstanceAllocationPolicyHasBeenSet() const;

                    /**
                     * 获取竞价混合模式下，各计费类型实例的分配策略。
仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时才会返回有效值。
                     * @return SpotMixedAllocationPolicy 竞价混合模式下，各计费类型实例的分配策略。
仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时才会返回有效值。
                     */
                    SpotMixedAllocationPolicy GetSpotMixedAllocationPolicy() const;

                    /**
                     * 设置竞价混合模式下，各计费类型实例的分配策略。
仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时才会返回有效值。
                     * @param SpotMixedAllocationPolicy 竞价混合模式下，各计费类型实例的分配策略。
仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时才会返回有效值。
                     */
                    void SetSpotMixedAllocationPolicy(const SpotMixedAllocationPolicy& _spotMixedAllocationPolicy);

                    /**
                     * 判断参数 SpotMixedAllocationPolicy 是否已赋值
                     * @return SpotMixedAllocationPolicy 是否已赋值
                     */
                    bool SpotMixedAllocationPolicyHasBeenSet() const;

                    /**
                     * 获取容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：
<br><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。
<br><li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。
                     * @return CapacityRebalance 容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：
<br><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。
<br><li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。
                     */
                    bool GetCapacityRebalance() const;

                    /**
                     * 设置容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：
<br><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。
<br><li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。
                     * @param CapacityRebalance 容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：
<br><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。
<br><li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。
                     */
                    void SetCapacityRebalance(const bool& _capacityRebalance);

                    /**
                     * 判断参数 CapacityRebalance 是否已赋值
                     * @return CapacityRebalance 是否已赋值
                     */
                    bool CapacityRebalanceHasBeenSet() const;

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
                     * 伸缩组当前状态。取值范围：<br>
<li>NORMAL：正常<br>
<li>CVM_ABNORMAL：启动配置异常<br>
<li>LB_ABNORMAL：负载均衡器异常<br>
<li>LB_LISTENER_ABNORMAL：负载均衡器监听器异常<br>
<li>LB_LOCATION_ABNORMAL：负载均衡器监听器转发配置异常<br>
<li>VPC_ABNORMAL：VPC网络异常<br>
<li>SUBNET_ABNORMAL：VPC子网异常<br>
<li>INSUFFICIENT_BALANCE：余额不足<br>
<li>LB_BACKEND_REGION_NOT_MATCH：CLB实例后端地域与AS服务所在地域不匹配<br>
<li>LB_BACKEND_VPC_NOT_MATCH：CLB实例VPC与伸缩组VPC不匹配
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

                    /**
                     * 伸缩组标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 服务设置
                     */
                    ServiceSettings m_serviceSettings;
                    bool m_serviceSettingsHasBeenSet;

                    /**
                     * 实例具有IPv6地址数量的配置
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * 多可用区/子网策略。
<br><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。
<br><li> EQUALITY：每次选择当前实例数最少的可用区/子网进行扩容，使得每个可用区/子网都有机会发生扩容，多次扩容出的实例会打散到多个可用区/子网。
                     */
                    std::string m_multiZoneSubnetPolicy;
                    bool m_multiZoneSubnetPolicyHasBeenSet;

                    /**
                     * 伸缩组实例健康检查类型，取值如下：<br><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)<br><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)
                     */
                    std::string m_healthCheckType;
                    bool m_healthCheckTypeHasBeenSet;

                    /**
                     * CLB健康检查宽限期
                     */
                    uint64_t m_loadBalancerHealthCheckGracePeriod;
                    bool m_loadBalancerHealthCheckGracePeriodHasBeenSet;

                    /**
                     * 实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。
<br><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。
<br><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。
                     */
                    std::string m_instanceAllocationPolicy;
                    bool m_instanceAllocationPolicyHasBeenSet;

                    /**
                     * 竞价混合模式下，各计费类型实例的分配策略。
仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时才会返回有效值。
                     */
                    SpotMixedAllocationPolicy m_spotMixedAllocationPolicy;
                    bool m_spotMixedAllocationPolicyHasBeenSet;

                    /**
                     * 容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：
<br><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。
<br><li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。
                     */
                    bool m_capacityRebalance;
                    bool m_capacityRebalanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGGROUP_H_
