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
#include <tencentcloud/as/v20180419/model/InstanceNameIndexSettings.h>
#include <tencentcloud/as/v20180419/model/HostNameIndexSettings.h>


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
                     * 获取<p>伸缩组ID</p>
                     * @return AutoScalingGroupId <p>伸缩组ID</p>
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置<p>伸缩组ID</p>
                     * @param _autoScalingGroupId <p>伸缩组ID</p>
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
                     * 获取<p>伸缩组名称</p>
                     * @return AutoScalingGroupName <p>伸缩组名称</p>
                     * 
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置<p>伸缩组名称</p>
                     * @param _autoScalingGroupName <p>伸缩组名称</p>
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
                     * 获取<p>伸缩组当前状态。取值范围：</p><li>NORMAL：正常</li><li>CVM_ABNORMAL：启动配置异常</li><li>LB_ABNORMAL：负载均衡器异常</li><li>LB_LISTENER_ABNORMAL：负载均衡器监听器异常</li><li>LB_LOCATION_ABNORMAL：负载均衡器监听器转发配置异常</li><li>VPC_ABNORMAL：VPC网络异常</li><li>SUBNET_ABNORMAL：VPC子网异常</li><li>INSUFFICIENT_BALANCE：余额不足</li><li>LB_BACKEND_REGION_NOT_MATCH：CLB实例后端地域与AS服务所在地域不匹配</li><li>LB_BACKEND_VPC_NOT_MATCH：CLB实例VPC与伸缩组VPC不匹配</li>
                     * @return AutoScalingGroupStatus <p>伸缩组当前状态。取值范围：</p><li>NORMAL：正常</li><li>CVM_ABNORMAL：启动配置异常</li><li>LB_ABNORMAL：负载均衡器异常</li><li>LB_LISTENER_ABNORMAL：负载均衡器监听器异常</li><li>LB_LOCATION_ABNORMAL：负载均衡器监听器转发配置异常</li><li>VPC_ABNORMAL：VPC网络异常</li><li>SUBNET_ABNORMAL：VPC子网异常</li><li>INSUFFICIENT_BALANCE：余额不足</li><li>LB_BACKEND_REGION_NOT_MATCH：CLB实例后端地域与AS服务所在地域不匹配</li><li>LB_BACKEND_VPC_NOT_MATCH：CLB实例VPC与伸缩组VPC不匹配</li>
                     * 
                     */
                    std::string GetAutoScalingGroupStatus() const;

                    /**
                     * 设置<p>伸缩组当前状态。取值范围：</p><li>NORMAL：正常</li><li>CVM_ABNORMAL：启动配置异常</li><li>LB_ABNORMAL：负载均衡器异常</li><li>LB_LISTENER_ABNORMAL：负载均衡器监听器异常</li><li>LB_LOCATION_ABNORMAL：负载均衡器监听器转发配置异常</li><li>VPC_ABNORMAL：VPC网络异常</li><li>SUBNET_ABNORMAL：VPC子网异常</li><li>INSUFFICIENT_BALANCE：余额不足</li><li>LB_BACKEND_REGION_NOT_MATCH：CLB实例后端地域与AS服务所在地域不匹配</li><li>LB_BACKEND_VPC_NOT_MATCH：CLB实例VPC与伸缩组VPC不匹配</li>
                     * @param _autoScalingGroupStatus <p>伸缩组当前状态。取值范围：</p><li>NORMAL：正常</li><li>CVM_ABNORMAL：启动配置异常</li><li>LB_ABNORMAL：负载均衡器异常</li><li>LB_LISTENER_ABNORMAL：负载均衡器监听器异常</li><li>LB_LOCATION_ABNORMAL：负载均衡器监听器转发配置异常</li><li>VPC_ABNORMAL：VPC网络异常</li><li>SUBNET_ABNORMAL：VPC子网异常</li><li>INSUFFICIENT_BALANCE：余额不足</li><li>LB_BACKEND_REGION_NOT_MATCH：CLB实例后端地域与AS服务所在地域不匹配</li><li>LB_BACKEND_VPC_NOT_MATCH：CLB实例VPC与伸缩组VPC不匹配</li>
                     * 
                     */
                    void SetAutoScalingGroupStatus(const std::string& _autoScalingGroupStatus);

                    /**
                     * 判断参数 AutoScalingGroupStatus 是否已赋值
                     * @return AutoScalingGroupStatus 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupStatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，采用UTC标准计时</p>
                     * @return CreatedTime <p>创建时间，采用UTC标准计时</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间，采用UTC标准计时</p>
                     * @param _createdTime <p>创建时间，采用UTC标准计时</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>默认冷却时间，单位秒</p>
                     * @return DefaultCooldown <p>默认冷却时间，单位秒</p>
                     * 
                     */
                    int64_t GetDefaultCooldown() const;

                    /**
                     * 设置<p>默认冷却时间，单位秒</p>
                     * @param _defaultCooldown <p>默认冷却时间，单位秒</p>
                     * 
                     */
                    void SetDefaultCooldown(const int64_t& _defaultCooldown);

                    /**
                     * 判断参数 DefaultCooldown 是否已赋值
                     * @return DefaultCooldown 是否已赋值
                     * 
                     */
                    bool DefaultCooldownHasBeenSet() const;

                    /**
                     * 获取<p>期望实例数</p>
                     * @return DesiredCapacity <p>期望实例数</p>
                     * 
                     */
                    int64_t GetDesiredCapacity() const;

                    /**
                     * 设置<p>期望实例数</p>
                     * @param _desiredCapacity <p>期望实例数</p>
                     * 
                     */
                    void SetDesiredCapacity(const int64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取<p>启用状态，取值包括<code>ENABLED</code>和<code>DISABLED</code></p>
                     * @return EnabledStatus <p>启用状态，取值包括<code>ENABLED</code>和<code>DISABLED</code></p>
                     * 
                     */
                    std::string GetEnabledStatus() const;

                    /**
                     * 设置<p>启用状态，取值包括<code>ENABLED</code>和<code>DISABLED</code></p>
                     * @param _enabledStatus <p>启用状态，取值包括<code>ENABLED</code>和<code>DISABLED</code></p>
                     * 
                     */
                    void SetEnabledStatus(const std::string& _enabledStatus);

                    /**
                     * 判断参数 EnabledStatus 是否已赋值
                     * @return EnabledStatus 是否已赋值
                     * 
                     */
                    bool EnabledStatusHasBeenSet() const;

                    /**
                     * 获取<p>应用型负载均衡器列表</p>
                     * @return ForwardLoadBalancerSet <p>应用型负载均衡器列表</p>
                     * 
                     */
                    std::vector<ForwardLoadBalancer> GetForwardLoadBalancerSet() const;

                    /**
                     * 设置<p>应用型负载均衡器列表</p>
                     * @param _forwardLoadBalancerSet <p>应用型负载均衡器列表</p>
                     * 
                     */
                    void SetForwardLoadBalancerSet(const std::vector<ForwardLoadBalancer>& _forwardLoadBalancerSet);

                    /**
                     * 判断参数 ForwardLoadBalancerSet 是否已赋值
                     * @return ForwardLoadBalancerSet 是否已赋值
                     * 
                     */
                    bool ForwardLoadBalancerSetHasBeenSet() const;

                    /**
                     * 获取<p>实例数量</p>
                     * @return InstanceCount <p>实例数量</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>实例数量</p>
                     * @param _instanceCount <p>实例数量</p>
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>状态为<code>IN_SERVICE</code>实例的数量</p>
                     * @return InServiceInstanceCount <p>状态为<code>IN_SERVICE</code>实例的数量</p>
                     * 
                     */
                    int64_t GetInServiceInstanceCount() const;

                    /**
                     * 设置<p>状态为<code>IN_SERVICE</code>实例的数量</p>
                     * @param _inServiceInstanceCount <p>状态为<code>IN_SERVICE</code>实例的数量</p>
                     * 
                     */
                    void SetInServiceInstanceCount(const int64_t& _inServiceInstanceCount);

                    /**
                     * 判断参数 InServiceInstanceCount 是否已赋值
                     * @return InServiceInstanceCount 是否已赋值
                     * 
                     */
                    bool InServiceInstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>启动配置ID</p>
                     * @return LaunchConfigurationId <p>启动配置ID</p>
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置<p>启动配置ID</p>
                     * @param _launchConfigurationId <p>启动配置ID</p>
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
                     * 获取<p>启动配置名称</p>
                     * @return LaunchConfigurationName <p>启动配置名称</p>
                     * 
                     */
                    std::string GetLaunchConfigurationName() const;

                    /**
                     * 设置<p>启动配置名称</p>
                     * @param _launchConfigurationName <p>启动配置名称</p>
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
                     * 获取<p>传统型负载均衡器ID列表</p>
                     * @return LoadBalancerIdSet <p>传统型负载均衡器ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIdSet() const;

                    /**
                     * 设置<p>传统型负载均衡器ID列表</p>
                     * @param _loadBalancerIdSet <p>传统型负载均衡器ID列表</p>
                     * 
                     */
                    void SetLoadBalancerIdSet(const std::vector<std::string>& _loadBalancerIdSet);

                    /**
                     * 判断参数 LoadBalancerIdSet 是否已赋值
                     * @return LoadBalancerIdSet 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdSetHasBeenSet() const;

                    /**
                     * 获取<p>最大实例数</p>
                     * @return MaxSize <p>最大实例数</p>
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置<p>最大实例数</p>
                     * @param _maxSize <p>最大实例数</p>
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>最小实例数</p>
                     * @return MinSize <p>最小实例数</p>
                     * 
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置<p>最小实例数</p>
                     * @param _minSize <p>最小实例数</p>
                     * 
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>子网ID列表</p>
                     * @return SubnetIdSet <p>子网ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIdSet() const;

                    /**
                     * 设置<p>子网ID列表</p>
                     * @param _subnetIdSet <p>子网ID列表</p>
                     * 
                     */
                    void SetSubnetIdSet(const std::vector<std::string>& _subnetIdSet);

                    /**
                     * 判断参数 SubnetIdSet 是否已赋值
                     * @return SubnetIdSet 是否已赋值
                     * 
                     */
                    bool SubnetIdSetHasBeenSet() const;

                    /**
                     * 获取<p>销毁策略。取值范围如下：</p><li>OLDEST_INSTANCE：优先销毁伸缩组中最旧的实例，默认取值。</li><li>NEWEST_INSTANCE：优先销毁伸缩组中最新的实例。</li>
                     * @return TerminationPolicySet <p>销毁策略。取值范围如下：</p><li>OLDEST_INSTANCE：优先销毁伸缩组中最旧的实例，默认取值。</li><li>NEWEST_INSTANCE：优先销毁伸缩组中最新的实例。</li>
                     * 
                     */
                    std::vector<std::string> GetTerminationPolicySet() const;

                    /**
                     * 设置<p>销毁策略。取值范围如下：</p><li>OLDEST_INSTANCE：优先销毁伸缩组中最旧的实例，默认取值。</li><li>NEWEST_INSTANCE：优先销毁伸缩组中最新的实例。</li>
                     * @param _terminationPolicySet <p>销毁策略。取值范围如下：</p><li>OLDEST_INSTANCE：优先销毁伸缩组中最旧的实例，默认取值。</li><li>NEWEST_INSTANCE：优先销毁伸缩组中最新的实例。</li>
                     * 
                     */
                    void SetTerminationPolicySet(const std::vector<std::string>& _terminationPolicySet);

                    /**
                     * 判断参数 TerminationPolicySet 是否已赋值
                     * @return TerminationPolicySet 是否已赋值
                     * 
                     */
                    bool TerminationPolicySetHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID。</p>
                     * @return VpcId <p>私有网络ID。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID。</p>
                     * @param _vpcId <p>私有网络ID。</p>
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
                     * 获取<p>可用区列表</p>
                     * @return ZoneSet <p>可用区列表</p>
                     * 
                     */
                    std::vector<std::string> GetZoneSet() const;

                    /**
                     * 设置<p>可用区列表</p>
                     * @param _zoneSet <p>可用区列表</p>
                     * 
                     */
                    void SetZoneSet(const std::vector<std::string>& _zoneSet);

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     * 
                     */
                    bool ZoneSetHasBeenSet() const;

                    /**
                     * 获取<p>重试策略，部分成功的伸缩活动判定为一次失败活动。取值范围如下：</p><li>IMMEDIATE_RETRY：默认取值，表示立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li><li>INCREMENTAL_INTERVALS：间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大。前 10 次重试为快速重试，后续重试间隔逐步递增至 10 分钟、30 分钟、60 分钟、一天。</li><li>NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li>
                     * @return RetryPolicy <p>重试策略，部分成功的伸缩活动判定为一次失败活动。取值范围如下：</p><li>IMMEDIATE_RETRY：默认取值，表示立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li><li>INCREMENTAL_INTERVALS：间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大。前 10 次重试为快速重试，后续重试间隔逐步递增至 10 分钟、30 分钟、60 分钟、一天。</li><li>NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li>
                     * 
                     */
                    std::string GetRetryPolicy() const;

                    /**
                     * 设置<p>重试策略，部分成功的伸缩活动判定为一次失败活动。取值范围如下：</p><li>IMMEDIATE_RETRY：默认取值，表示立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li><li>INCREMENTAL_INTERVALS：间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大。前 10 次重试为快速重试，后续重试间隔逐步递增至 10 分钟、30 分钟、60 分钟、一天。</li><li>NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li>
                     * @param _retryPolicy <p>重试策略，部分成功的伸缩活动判定为一次失败活动。取值范围如下：</p><li>IMMEDIATE_RETRY：默认取值，表示立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li><li>INCREMENTAL_INTERVALS：间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大。前 10 次重试为快速重试，后续重试间隔逐步递增至 10 分钟、30 分钟、60 分钟、一天。</li><li>NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li>
                     * 
                     */
                    void SetRetryPolicy(const std::string& _retryPolicy);

                    /**
                     * 判断参数 RetryPolicy 是否已赋值
                     * @return RetryPolicy 是否已赋值
                     * 
                     */
                    bool RetryPolicyHasBeenSet() const;

                    /**
                     * 获取<p>伸缩组是否处于伸缩活动中，<code>IN_ACTIVITY</code>表示处于伸缩活动中，<code>NOT_IN_ACTIVITY</code>表示不处于伸缩活动中。</p>
                     * @return InActivityStatus <p>伸缩组是否处于伸缩活动中，<code>IN_ACTIVITY</code>表示处于伸缩活动中，<code>NOT_IN_ACTIVITY</code>表示不处于伸缩活动中。</p>
                     * 
                     */
                    std::string GetInActivityStatus() const;

                    /**
                     * 设置<p>伸缩组是否处于伸缩活动中，<code>IN_ACTIVITY</code>表示处于伸缩活动中，<code>NOT_IN_ACTIVITY</code>表示不处于伸缩活动中。</p>
                     * @param _inActivityStatus <p>伸缩组是否处于伸缩活动中，<code>IN_ACTIVITY</code>表示处于伸缩活动中，<code>NOT_IN_ACTIVITY</code>表示不处于伸缩活动中。</p>
                     * 
                     */
                    void SetInActivityStatus(const std::string& _inActivityStatus);

                    /**
                     * 判断参数 InActivityStatus 是否已赋值
                     * @return InActivityStatus 是否已赋值
                     * 
                     */
                    bool InActivityStatusHasBeenSet() const;

                    /**
                     * 获取<p>伸缩组标签列表</p>
                     * @return Tags <p>伸缩组标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>伸缩组标签列表</p>
                     * @param _tags <p>伸缩组标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>服务设置</p>
                     * @return ServiceSettings <p>服务设置</p>
                     * 
                     */
                    ServiceSettings GetServiceSettings() const;

                    /**
                     * 设置<p>服务设置</p>
                     * @param _serviceSettings <p>服务设置</p>
                     * 
                     */
                    void SetServiceSettings(const ServiceSettings& _serviceSettings);

                    /**
                     * 判断参数 ServiceSettings 是否已赋值
                     * @return ServiceSettings 是否已赋值
                     * 
                     */
                    bool ServiceSettingsHasBeenSet() const;

                    /**
                     * 获取<p>实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 <a href="https://cloud.tencent.com/document/product/1142/38369">IPv6使用限制</a>。</p>
                     * @return Ipv6AddressCount <p>实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 <a href="https://cloud.tencent.com/document/product/1142/38369">IPv6使用限制</a>。</p>
                     * 
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置<p>实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 <a href="https://cloud.tencent.com/document/product/1142/38369">IPv6使用限制</a>。</p>
                     * @param _ipv6AddressCount <p>实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 <a href="https://cloud.tencent.com/document/product/1142/38369">IPv6使用限制</a>。</p>
                     * 
                     */
                    void SetIpv6AddressCount(const int64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     * 
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                    /**
                     * 获取<p>多可用区/子网策略。</p><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li><li> EQUALITY：每次选择当前实例数最少的可用区/子网进行扩容，使得每个可用区/子网都有机会发生扩容，多次扩容出的实例会打散到多个可用区/子网。</li>
                     * @return MultiZoneSubnetPolicy <p>多可用区/子网策略。</p><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li><li> EQUALITY：每次选择当前实例数最少的可用区/子网进行扩容，使得每个可用区/子网都有机会发生扩容，多次扩容出的实例会打散到多个可用区/子网。</li>
                     * 
                     */
                    std::string GetMultiZoneSubnetPolicy() const;

                    /**
                     * 设置<p>多可用区/子网策略。</p><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li><li> EQUALITY：每次选择当前实例数最少的可用区/子网进行扩容，使得每个可用区/子网都有机会发生扩容，多次扩容出的实例会打散到多个可用区/子网。</li>
                     * @param _multiZoneSubnetPolicy <p>多可用区/子网策略。</p><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li><li> EQUALITY：每次选择当前实例数最少的可用区/子网进行扩容，使得每个可用区/子网都有机会发生扩容，多次扩容出的实例会打散到多个可用区/子网。</li>
                     * 
                     */
                    void SetMultiZoneSubnetPolicy(const std::string& _multiZoneSubnetPolicy);

                    /**
                     * 判断参数 MultiZoneSubnetPolicy 是否已赋值
                     * @return MultiZoneSubnetPolicy 是否已赋值
                     * 
                     */
                    bool MultiZoneSubnetPolicyHasBeenSet() const;

                    /**
                     * 获取<p>伸缩组实例健康检查类型，取值如下：</p><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)</li>
                     * @return HealthCheckType <p>伸缩组实例健康检查类型，取值如下：</p><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)</li>
                     * 
                     */
                    std::string GetHealthCheckType() const;

                    /**
                     * 设置<p>伸缩组实例健康检查类型，取值如下：</p><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)</li>
                     * @param _healthCheckType <p>伸缩组实例健康检查类型，取值如下：</p><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)</li>
                     * 
                     */
                    void SetHealthCheckType(const std::string& _healthCheckType);

                    /**
                     * 判断参数 HealthCheckType 是否已赋值
                     * @return HealthCheckType 是否已赋值
                     * 
                     */
                    bool HealthCheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>CLB健康检查宽限期.当扩容的实例进入IN_SERVICE后，在宽限期时间范围内将不会被标记为不健康CLB_UNHEALTHY。<br>默认值：0。取值范围[0, 7200]，单位：秒。</p>
                     * @return LoadBalancerHealthCheckGracePeriod <p>CLB健康检查宽限期.当扩容的实例进入IN_SERVICE后，在宽限期时间范围内将不会被标记为不健康CLB_UNHEALTHY。<br>默认值：0。取值范围[0, 7200]，单位：秒。</p>
                     * 
                     */
                    uint64_t GetLoadBalancerHealthCheckGracePeriod() const;

                    /**
                     * 设置<p>CLB健康检查宽限期.当扩容的实例进入IN_SERVICE后，在宽限期时间范围内将不会被标记为不健康CLB_UNHEALTHY。<br>默认值：0。取值范围[0, 7200]，单位：秒。</p>
                     * @param _loadBalancerHealthCheckGracePeriod <p>CLB健康检查宽限期.当扩容的实例进入IN_SERVICE后，在宽限期时间范围内将不会被标记为不健康CLB_UNHEALTHY。<br>默认值：0。取值范围[0, 7200]，单位：秒。</p>
                     * 
                     */
                    void SetLoadBalancerHealthCheckGracePeriod(const uint64_t& _loadBalancerHealthCheckGracePeriod);

                    /**
                     * 判断参数 LoadBalancerHealthCheckGracePeriod 是否已赋值
                     * @return LoadBalancerHealthCheckGracePeriod 是否已赋值
                     * 
                     */
                    bool LoadBalancerHealthCheckGracePeriodHasBeenSet() const;

                    /**
                     * 获取<p>实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。</p><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
                     * @return InstanceAllocationPolicy <p>实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。</p><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
                     * 
                     */
                    std::string GetInstanceAllocationPolicy() const;

                    /**
                     * 设置<p>实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。</p><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
                     * @param _instanceAllocationPolicy <p>实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。</p><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
                     * 
                     */
                    void SetInstanceAllocationPolicy(const std::string& _instanceAllocationPolicy);

                    /**
                     * 判断参数 InstanceAllocationPolicy 是否已赋值
                     * @return InstanceAllocationPolicy 是否已赋值
                     * 
                     */
                    bool InstanceAllocationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>竞价混合模式下，各计费类型实例的分配策略。<br>仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时才会返回有效值。</p>
                     * @return SpotMixedAllocationPolicy <p>竞价混合模式下，各计费类型实例的分配策略。<br>仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时才会返回有效值。</p>
                     * 
                     */
                    SpotMixedAllocationPolicy GetSpotMixedAllocationPolicy() const;

                    /**
                     * 设置<p>竞价混合模式下，各计费类型实例的分配策略。<br>仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时才会返回有效值。</p>
                     * @param _spotMixedAllocationPolicy <p>竞价混合模式下，各计费类型实例的分配策略。<br>仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时才会返回有效值。</p>
                     * 
                     */
                    void SetSpotMixedAllocationPolicy(const SpotMixedAllocationPolicy& _spotMixedAllocationPolicy);

                    /**
                     * 判断参数 SpotMixedAllocationPolicy 是否已赋值
                     * @return SpotMixedAllocationPolicy 是否已赋值
                     * 
                     */
                    bool SpotMixedAllocationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：</p><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li><li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
                     * @return CapacityRebalance <p>容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：</p><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li><li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
                     * 
                     */
                    bool GetCapacityRebalance() const;

                    /**
                     * 设置<p>容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：</p><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li><li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
                     * @param _capacityRebalance <p>容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：</p><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li><li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
                     * 
                     */
                    void SetCapacityRebalance(const bool& _capacityRebalance);

                    /**
                     * 判断参数 CapacityRebalance 是否已赋值
                     * @return CapacityRebalance 是否已赋值
                     * 
                     */
                    bool CapacityRebalanceHasBeenSet() const;

                    /**
                     * 获取<p>实例名称序号相关设置。</p>
                     * @return InstanceNameIndexSettings <p>实例名称序号相关设置。</p>
                     * 
                     */
                    InstanceNameIndexSettings GetInstanceNameIndexSettings() const;

                    /**
                     * 设置<p>实例名称序号相关设置。</p>
                     * @param _instanceNameIndexSettings <p>实例名称序号相关设置。</p>
                     * 
                     */
                    void SetInstanceNameIndexSettings(const InstanceNameIndexSettings& _instanceNameIndexSettings);

                    /**
                     * 判断参数 InstanceNameIndexSettings 是否已赋值
                     * @return InstanceNameIndexSettings 是否已赋值
                     * 
                     */
                    bool InstanceNameIndexSettingsHasBeenSet() const;

                    /**
                     * 获取<p>实例主机名序号相关设置。</p>
                     * @return HostNameIndexSettings <p>实例主机名序号相关设置。</p>
                     * 
                     */
                    HostNameIndexSettings GetHostNameIndexSettings() const;

                    /**
                     * 设置<p>实例主机名序号相关设置。</p>
                     * @param _hostNameIndexSettings <p>实例主机名序号相关设置。</p>
                     * 
                     */
                    void SetHostNameIndexSettings(const HostNameIndexSettings& _hostNameIndexSettings);

                    /**
                     * 判断参数 HostNameIndexSettings 是否已赋值
                     * @return HostNameIndexSettings 是否已赋值
                     * 
                     */
                    bool HostNameIndexSettingsHasBeenSet() const;

                    /**
                     * 获取<p>匹配期望数并发扩容功能，不能在InstanceAllocationPolicy为竞价混合模式时设置，也不能在ScalingMode为扩容优先开机模式时设置。目前仅支持两个匹配期望数扩容活动并发进行，不支持指定数量扩容、缩容等其他类型活动并发。默认值为FALSE，表示不开启。</p>
                     * @return ConcurrentScaleOutForDesiredCapacity <p>匹配期望数并发扩容功能，不能在InstanceAllocationPolicy为竞价混合模式时设置，也不能在ScalingMode为扩容优先开机模式时设置。目前仅支持两个匹配期望数扩容活动并发进行，不支持指定数量扩容、缩容等其他类型活动并发。默认值为FALSE，表示不开启。</p>
                     * 
                     */
                    bool GetConcurrentScaleOutForDesiredCapacity() const;

                    /**
                     * 设置<p>匹配期望数并发扩容功能，不能在InstanceAllocationPolicy为竞价混合模式时设置，也不能在ScalingMode为扩容优先开机模式时设置。目前仅支持两个匹配期望数扩容活动并发进行，不支持指定数量扩容、缩容等其他类型活动并发。默认值为FALSE，表示不开启。</p>
                     * @param _concurrentScaleOutForDesiredCapacity <p>匹配期望数并发扩容功能，不能在InstanceAllocationPolicy为竞价混合模式时设置，也不能在ScalingMode为扩容优先开机模式时设置。目前仅支持两个匹配期望数扩容活动并发进行，不支持指定数量扩容、缩容等其他类型活动并发。默认值为FALSE，表示不开启。</p>
                     * 
                     */
                    void SetConcurrentScaleOutForDesiredCapacity(const bool& _concurrentScaleOutForDesiredCapacity);

                    /**
                     * 判断参数 ConcurrentScaleOutForDesiredCapacity 是否已赋值
                     * @return ConcurrentScaleOutForDesiredCapacity 是否已赋值
                     * 
                     */
                    bool ConcurrentScaleOutForDesiredCapacityHasBeenSet() const;

                private:

                    /**
                     * <p>伸缩组ID</p>
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * <p>伸缩组名称</p>
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * <p>伸缩组当前状态。取值范围：</p><li>NORMAL：正常</li><li>CVM_ABNORMAL：启动配置异常</li><li>LB_ABNORMAL：负载均衡器异常</li><li>LB_LISTENER_ABNORMAL：负载均衡器监听器异常</li><li>LB_LOCATION_ABNORMAL：负载均衡器监听器转发配置异常</li><li>VPC_ABNORMAL：VPC网络异常</li><li>SUBNET_ABNORMAL：VPC子网异常</li><li>INSUFFICIENT_BALANCE：余额不足</li><li>LB_BACKEND_REGION_NOT_MATCH：CLB实例后端地域与AS服务所在地域不匹配</li><li>LB_BACKEND_VPC_NOT_MATCH：CLB实例VPC与伸缩组VPC不匹配</li>
                     */
                    std::string m_autoScalingGroupStatus;
                    bool m_autoScalingGroupStatusHasBeenSet;

                    /**
                     * <p>创建时间，采用UTC标准计时</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>默认冷却时间，单位秒</p>
                     */
                    int64_t m_defaultCooldown;
                    bool m_defaultCooldownHasBeenSet;

                    /**
                     * <p>期望实例数</p>
                     */
                    int64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * <p>启用状态，取值包括<code>ENABLED</code>和<code>DISABLED</code></p>
                     */
                    std::string m_enabledStatus;
                    bool m_enabledStatusHasBeenSet;

                    /**
                     * <p>应用型负载均衡器列表</p>
                     */
                    std::vector<ForwardLoadBalancer> m_forwardLoadBalancerSet;
                    bool m_forwardLoadBalancerSetHasBeenSet;

                    /**
                     * <p>实例数量</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>状态为<code>IN_SERVICE</code>实例的数量</p>
                     */
                    int64_t m_inServiceInstanceCount;
                    bool m_inServiceInstanceCountHasBeenSet;

                    /**
                     * <p>启动配置ID</p>
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * <p>启动配置名称</p>
                     */
                    std::string m_launchConfigurationName;
                    bool m_launchConfigurationNameHasBeenSet;

                    /**
                     * <p>传统型负载均衡器ID列表</p>
                     */
                    std::vector<std::string> m_loadBalancerIdSet;
                    bool m_loadBalancerIdSetHasBeenSet;

                    /**
                     * <p>最大实例数</p>
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <p>最小实例数</p>
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>子网ID列表</p>
                     */
                    std::vector<std::string> m_subnetIdSet;
                    bool m_subnetIdSetHasBeenSet;

                    /**
                     * <p>销毁策略。取值范围如下：</p><li>OLDEST_INSTANCE：优先销毁伸缩组中最旧的实例，默认取值。</li><li>NEWEST_INSTANCE：优先销毁伸缩组中最新的实例。</li>
                     */
                    std::vector<std::string> m_terminationPolicySet;
                    bool m_terminationPolicySetHasBeenSet;

                    /**
                     * <p>私有网络ID。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>可用区列表</p>
                     */
                    std::vector<std::string> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                    /**
                     * <p>重试策略，部分成功的伸缩活动判定为一次失败活动。取值范围如下：</p><li>IMMEDIATE_RETRY：默认取值，表示立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li><li>INCREMENTAL_INTERVALS：间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大。前 10 次重试为快速重试，后续重试间隔逐步递增至 10 分钟、30 分钟、60 分钟、一天。</li><li>NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li>
                     */
                    std::string m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                    /**
                     * <p>伸缩组是否处于伸缩活动中，<code>IN_ACTIVITY</code>表示处于伸缩活动中，<code>NOT_IN_ACTIVITY</code>表示不处于伸缩活动中。</p>
                     */
                    std::string m_inActivityStatus;
                    bool m_inActivityStatusHasBeenSet;

                    /**
                     * <p>伸缩组标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>服务设置</p>
                     */
                    ServiceSettings m_serviceSettings;
                    bool m_serviceSettingsHasBeenSet;

                    /**
                     * <p>实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 <a href="https://cloud.tencent.com/document/product/1142/38369">IPv6使用限制</a>。</p>
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * <p>多可用区/子网策略。</p><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li><li> EQUALITY：每次选择当前实例数最少的可用区/子网进行扩容，使得每个可用区/子网都有机会发生扩容，多次扩容出的实例会打散到多个可用区/子网。</li>
                     */
                    std::string m_multiZoneSubnetPolicy;
                    bool m_multiZoneSubnetPolicyHasBeenSet;

                    /**
                     * <p>伸缩组实例健康检查类型，取值如下：</p><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)</li>
                     */
                    std::string m_healthCheckType;
                    bool m_healthCheckTypeHasBeenSet;

                    /**
                     * <p>CLB健康检查宽限期.当扩容的实例进入IN_SERVICE后，在宽限期时间范围内将不会被标记为不健康CLB_UNHEALTHY。<br>默认值：0。取值范围[0, 7200]，单位：秒。</p>
                     */
                    uint64_t m_loadBalancerHealthCheckGracePeriod;
                    bool m_loadBalancerHealthCheckGracePeriodHasBeenSet;

                    /**
                     * <p>实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。</p><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
                     */
                    std::string m_instanceAllocationPolicy;
                    bool m_instanceAllocationPolicyHasBeenSet;

                    /**
                     * <p>竞价混合模式下，各计费类型实例的分配策略。<br>仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时才会返回有效值。</p>
                     */
                    SpotMixedAllocationPolicy m_spotMixedAllocationPolicy;
                    bool m_spotMixedAllocationPolicyHasBeenSet;

                    /**
                     * <p>容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：</p><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li><li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
                     */
                    bool m_capacityRebalance;
                    bool m_capacityRebalanceHasBeenSet;

                    /**
                     * <p>实例名称序号相关设置。</p>
                     */
                    InstanceNameIndexSettings m_instanceNameIndexSettings;
                    bool m_instanceNameIndexSettingsHasBeenSet;

                    /**
                     * <p>实例主机名序号相关设置。</p>
                     */
                    HostNameIndexSettings m_hostNameIndexSettings;
                    bool m_hostNameIndexSettingsHasBeenSet;

                    /**
                     * <p>匹配期望数并发扩容功能，不能在InstanceAllocationPolicy为竞价混合模式时设置，也不能在ScalingMode为扩容优先开机模式时设置。目前仅支持两个匹配期望数扩容活动并发进行，不支持指定数量扩容、缩容等其他类型活动并发。默认值为FALSE，表示不开启。</p>
                     */
                    bool m_concurrentScaleOutForDesiredCapacity;
                    bool m_concurrentScaleOutForDesiredCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGGROUP_H_
