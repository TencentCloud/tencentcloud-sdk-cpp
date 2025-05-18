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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATEAUTOSCALINGGROUPREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATEAUTOSCALINGGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ForwardLoadBalancer.h>
#include <tencentcloud/as/v20180419/model/Tag.h>
#include <tencentcloud/as/v20180419/model/ServiceSettings.h>
#include <tencentcloud/as/v20180419/model/SpotMixedAllocationPolicy.h>
#include <tencentcloud/as/v20180419/model/InstanceNameIndexSettings.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CreateAutoScalingGroup请求参数结构体
                */
                class CreateAutoScalingGroupRequest : public AbstractModel
                {
                public:
                    CreateAutoScalingGroupRequest();
                    ~CreateAutoScalingGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超55个字节。
                     * @return AutoScalingGroupName 伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超55个字节。
                     * 
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超55个字节。
                     * @param _autoScalingGroupName 伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超55个字节。
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
                     * 获取启动配置ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/config) 或调用接口 [DescribeLaunchConfigurations](https://cloud.tencent.com/document/api/377/20445) ，取返回信息中的 LaunchConfigurationId 获取启动配置ID。
                     * @return LaunchConfigurationId 启动配置ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/config) 或调用接口 [DescribeLaunchConfigurations](https://cloud.tencent.com/document/api/377/20445) ，取返回信息中的 LaunchConfigurationId 获取启动配置ID。
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置启动配置ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/config) 或调用接口 [DescribeLaunchConfigurations](https://cloud.tencent.com/document/api/377/20445) ，取返回信息中的 LaunchConfigurationId 获取启动配置ID。
                     * @param _launchConfigurationId 启动配置ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/config) 或调用接口 [DescribeLaunchConfigurations](https://cloud.tencent.com/document/api/377/20445) ，取返回信息中的 LaunchConfigurationId 获取启动配置ID。
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
                     * 获取最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @return MaxSize 最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @param _maxSize 最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @return MinSize 最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @param _minSize 最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取私有网络ID。有效的VpcId可通过登录[控制台](https://console.cloud.tencent.com/vpc/vpc)查询；也可以调用接口 [DescribeVpc](https://cloud.tencent.com/document/api/215/15778) ，从接口返回中的VpcId字段获取。
                     * @return VpcId 私有网络ID。有效的VpcId可通过登录[控制台](https://console.cloud.tencent.com/vpc/vpc)查询；也可以调用接口 [DescribeVpc](https://cloud.tencent.com/document/api/215/15778) ，从接口返回中的VpcId字段获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID。有效的VpcId可通过登录[控制台](https://console.cloud.tencent.com/vpc/vpc)查询；也可以调用接口 [DescribeVpc](https://cloud.tencent.com/document/api/215/15778) ，从接口返回中的VpcId字段获取。
                     * @param _vpcId 私有网络ID。有效的VpcId可通过登录[控制台](https://console.cloud.tencent.com/vpc/vpc)查询；也可以调用接口 [DescribeVpc](https://cloud.tencent.com/document/api/215/15778) ，从接口返回中的VpcId字段获取。
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
                     * 获取默认冷却时间，单位秒，默认值为300。取值范围为 [0,3600]。
                     * @return DefaultCooldown 默认冷却时间，单位秒，默认值为300。取值范围为 [0,3600]。
                     * 
                     */
                    uint64_t GetDefaultCooldown() const;

                    /**
                     * 设置默认冷却时间，单位秒，默认值为300。取值范围为 [0,3600]。
                     * @param _defaultCooldown 默认冷却时间，单位秒，默认值为300。取值范围为 [0,3600]。
                     * 
                     */
                    void SetDefaultCooldown(const uint64_t& _defaultCooldown);

                    /**
                     * 判断参数 DefaultCooldown 是否已赋值
                     * @return DefaultCooldown 是否已赋值
                     * 
                     */
                    bool DefaultCooldownHasBeenSet() const;

                    /**
                     * 获取期望实例数，取值范围 [0,2000]，默认值等于当前 MinSize，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @return DesiredCapacity 期望实例数，取值范围 [0,2000]，默认值等于当前 MinSize，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置期望实例数，取值范围 [0,2000]，默认值等于当前 MinSize，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * @param _desiredCapacity 期望实例数，取值范围 [0,2000]，默认值等于当前 MinSize，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     * 
                     */
                    void SetDesiredCapacity(const uint64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取传统负载均衡器ID列表，目前长度上限为20，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * @return LoadBalancerIds 传统负载均衡器ID列表，目前长度上限为20，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置传统负载均衡器ID列表，目前长度上限为20，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * @param _loadBalancerIds 传统负载均衡器ID列表，目前长度上限为20，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取伸缩组内实例所属项目ID。默认值为0，表示使用默认项目。该参数可以通过调用 [DescribeProject](https://cloud.tencent.com/document/api/651/78725) 的返回值中的 projectId 字段来获取。
                     * @return ProjectId 伸缩组内实例所属项目ID。默认值为0，表示使用默认项目。该参数可以通过调用 [DescribeProject](https://cloud.tencent.com/document/api/651/78725) 的返回值中的 projectId 字段来获取。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置伸缩组内实例所属项目ID。默认值为0，表示使用默认项目。该参数可以通过调用 [DescribeProject](https://cloud.tencent.com/document/api/651/78725) 的返回值中的 projectId 字段来获取。
                     * @param _projectId 伸缩组内实例所属项目ID。默认值为0，表示使用默认项目。该参数可以通过调用 [DescribeProject](https://cloud.tencent.com/document/api/651/78725) 的返回值中的 projectId 字段来获取。
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
                     * 获取负载均衡器列表，目前长度上限为100，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     * @return ForwardLoadBalancers 负载均衡器列表，目前长度上限为100，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     * 
                     */
                    std::vector<ForwardLoadBalancer> GetForwardLoadBalancers() const;

                    /**
                     * 设置负载均衡器列表，目前长度上限为100，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     * @param _forwardLoadBalancers 负载均衡器列表，目前长度上限为100，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     * 
                     */
                    void SetForwardLoadBalancers(const std::vector<ForwardLoadBalancer>& _forwardLoadBalancers);

                    /**
                     * 判断参数 ForwardLoadBalancers 是否已赋值
                     * @return ForwardLoadBalancers 是否已赋值
                     * 
                     */
                    bool ForwardLoadBalancersHasBeenSet() const;

                    /**
                     * 获取子网ID列表，VPC场景下必须指定子网。多个子网以填写顺序为优先级，依次进行尝试，直至可以成功创建实例。有效的私有网络子网ID可通过登录[控制台](https://console.cloud.tencent.com/vpc/subnet)查询；也可以调用接口 [DescribeSubnets](https://cloud.tencent.com/document/product/215/15784) ，从接口返回中的SubnetId字段获取。
                     * @return SubnetIds 子网ID列表，VPC场景下必须指定子网。多个子网以填写顺序为优先级，依次进行尝试，直至可以成功创建实例。有效的私有网络子网ID可通过登录[控制台](https://console.cloud.tencent.com/vpc/subnet)查询；也可以调用接口 [DescribeSubnets](https://cloud.tencent.com/document/product/215/15784) ，从接口返回中的SubnetId字段获取。
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网ID列表，VPC场景下必须指定子网。多个子网以填写顺序为优先级，依次进行尝试，直至可以成功创建实例。有效的私有网络子网ID可通过登录[控制台](https://console.cloud.tencent.com/vpc/subnet)查询；也可以调用接口 [DescribeSubnets](https://cloud.tencent.com/document/product/215/15784) ，从接口返回中的SubnetId字段获取。
                     * @param _subnetIds 子网ID列表，VPC场景下必须指定子网。多个子网以填写顺序为优先级，依次进行尝试，直至可以成功创建实例。有效的私有网络子网ID可通过登录[控制台](https://console.cloud.tencent.com/vpc/subnet)查询；也可以调用接口 [DescribeSubnets](https://cloud.tencent.com/document/product/215/15784) ，从接口返回中的SubnetId字段获取。
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取销毁策略，目前长度上限为1。取值包括 OLDEST_INSTANCE 和 NEWEST_INSTANCE，默认取值为 OLDEST_INSTANCE。
<li> OLDEST_INSTANCE 优先销毁伸缩组中最旧的实例。</li>
<li> NEWEST_INSTANCE，优先销毁伸缩组中最新的实例。</li>
                     * @return TerminationPolicies 销毁策略，目前长度上限为1。取值包括 OLDEST_INSTANCE 和 NEWEST_INSTANCE，默认取值为 OLDEST_INSTANCE。
<li> OLDEST_INSTANCE 优先销毁伸缩组中最旧的实例。</li>
<li> NEWEST_INSTANCE，优先销毁伸缩组中最新的实例。</li>
                     * 
                     */
                    std::vector<std::string> GetTerminationPolicies() const;

                    /**
                     * 设置销毁策略，目前长度上限为1。取值包括 OLDEST_INSTANCE 和 NEWEST_INSTANCE，默认取值为 OLDEST_INSTANCE。
<li> OLDEST_INSTANCE 优先销毁伸缩组中最旧的实例。</li>
<li> NEWEST_INSTANCE，优先销毁伸缩组中最新的实例。</li>
                     * @param _terminationPolicies 销毁策略，目前长度上限为1。取值包括 OLDEST_INSTANCE 和 NEWEST_INSTANCE，默认取值为 OLDEST_INSTANCE。
<li> OLDEST_INSTANCE 优先销毁伸缩组中最旧的实例。</li>
<li> NEWEST_INSTANCE，优先销毁伸缩组中最新的实例。</li>
                     * 
                     */
                    void SetTerminationPolicies(const std::vector<std::string>& _terminationPolicies);

                    /**
                     * 判断参数 TerminationPolicies 是否已赋值
                     * @return TerminationPolicies 是否已赋值
                     * 
                     */
                    bool TerminationPoliciesHasBeenSet() const;

                    /**
                     * 获取可用区列表，基础网络场景下必须指定可用区。多个可用区以填写顺序为优先级，依次进行尝试，直至可以成功创建实例。
                     * @return Zones 可用区列表，基础网络场景下必须指定可用区。多个可用区以填写顺序为优先级，依次进行尝试，直至可以成功创建实例。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置可用区列表，基础网络场景下必须指定可用区。多个可用区以填写顺序为优先级，依次进行尝试，直至可以成功创建实例。
                     * @param _zones 可用区列表，基础网络场景下必须指定可用区。多个可用区以填写顺序为优先级，依次进行尝试，直至可以成功创建实例。
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取重试策略，取值包括 IMMEDIATE_RETRY、 INCREMENTAL_INTERVALS、NO_RETRY，默认取值为 IMMEDIATE_RETRY。部分成功的伸缩活动判定为一次失败活动。
<li> IMMEDIATE_RETRY，立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li> 
<li> INCREMENTAL_INTERVALS，间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大。前 10 次重试间隔与立即重试模式相同，后续逐步递增至 10 分钟、30 分钟、60 分钟、一天。</li> 
<li> NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li> 
                     * @return RetryPolicy 重试策略，取值包括 IMMEDIATE_RETRY、 INCREMENTAL_INTERVALS、NO_RETRY，默认取值为 IMMEDIATE_RETRY。部分成功的伸缩活动判定为一次失败活动。
<li> IMMEDIATE_RETRY，立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li> 
<li> INCREMENTAL_INTERVALS，间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大。前 10 次重试间隔与立即重试模式相同，后续逐步递增至 10 分钟、30 分钟、60 分钟、一天。</li> 
<li> NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li> 
                     * 
                     */
                    std::string GetRetryPolicy() const;

                    /**
                     * 设置重试策略，取值包括 IMMEDIATE_RETRY、 INCREMENTAL_INTERVALS、NO_RETRY，默认取值为 IMMEDIATE_RETRY。部分成功的伸缩活动判定为一次失败活动。
<li> IMMEDIATE_RETRY，立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li> 
<li> INCREMENTAL_INTERVALS，间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大。前 10 次重试间隔与立即重试模式相同，后续逐步递增至 10 分钟、30 分钟、60 分钟、一天。</li> 
<li> NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li> 
                     * @param _retryPolicy 重试策略，取值包括 IMMEDIATE_RETRY、 INCREMENTAL_INTERVALS、NO_RETRY，默认取值为 IMMEDIATE_RETRY。部分成功的伸缩活动判定为一次失败活动。
<li> IMMEDIATE_RETRY，立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li> 
<li> INCREMENTAL_INTERVALS，间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大。前 10 次重试间隔与立即重试模式相同，后续逐步递增至 10 分钟、30 分钟、60 分钟、一天。</li> 
<li> NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li> 
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
                     * 获取可用区校验策略，取值包括 ALL 和 ANY，默认取值为ANY。
<li> ALL，所有可用区（Zone）或子网（SubnetId）都可用则通过校验，否则校验报错。</li>
<li> ANY，存在任何一个可用区（Zone）或子网（SubnetId）可用则通过校验，否则校验报错。</li>

可用区或子网不可用的常见原因包括该可用区CVM实例类型售罄、该可用区CBS云盘售罄、该可用区配额不足、该子网IP不足等。
如果 Zones/SubnetIds 中可用区或者子网不存在，则无论 ZonesCheckPolicy 采用何种取值，都会校验报错。
                     * @return ZonesCheckPolicy 可用区校验策略，取值包括 ALL 和 ANY，默认取值为ANY。
<li> ALL，所有可用区（Zone）或子网（SubnetId）都可用则通过校验，否则校验报错。</li>
<li> ANY，存在任何一个可用区（Zone）或子网（SubnetId）可用则通过校验，否则校验报错。</li>

可用区或子网不可用的常见原因包括该可用区CVM实例类型售罄、该可用区CBS云盘售罄、该可用区配额不足、该子网IP不足等。
如果 Zones/SubnetIds 中可用区或者子网不存在，则无论 ZonesCheckPolicy 采用何种取值，都会校验报错。
                     * 
                     */
                    std::string GetZonesCheckPolicy() const;

                    /**
                     * 设置可用区校验策略，取值包括 ALL 和 ANY，默认取值为ANY。
<li> ALL，所有可用区（Zone）或子网（SubnetId）都可用则通过校验，否则校验报错。</li>
<li> ANY，存在任何一个可用区（Zone）或子网（SubnetId）可用则通过校验，否则校验报错。</li>

可用区或子网不可用的常见原因包括该可用区CVM实例类型售罄、该可用区CBS云盘售罄、该可用区配额不足、该子网IP不足等。
如果 Zones/SubnetIds 中可用区或者子网不存在，则无论 ZonesCheckPolicy 采用何种取值，都会校验报错。
                     * @param _zonesCheckPolicy 可用区校验策略，取值包括 ALL 和 ANY，默认取值为ANY。
<li> ALL，所有可用区（Zone）或子网（SubnetId）都可用则通过校验，否则校验报错。</li>
<li> ANY，存在任何一个可用区（Zone）或子网（SubnetId）可用则通过校验，否则校验报错。</li>

可用区或子网不可用的常见原因包括该可用区CVM实例类型售罄、该可用区CBS云盘售罄、该可用区配额不足、该子网IP不足等。
如果 Zones/SubnetIds 中可用区或者子网不存在，则无论 ZonesCheckPolicy 采用何种取值，都会校验报错。
                     * 
                     */
                    void SetZonesCheckPolicy(const std::string& _zonesCheckPolicy);

                    /**
                     * 判断参数 ZonesCheckPolicy 是否已赋值
                     * @return ZonesCheckPolicy 是否已赋值
                     * 
                     */
                    bool ZonesCheckPolicyHasBeenSet() const;

                    /**
                     * 获取标签描述列表。通过指定该参数可以支持绑定标签到伸缩组。同时绑定标签到相应的资源实例。每个伸缩组最多支持30个标签。可通过调用接口 [GetTags](https://cloud.tencent.com/document/product/651/72275) ，根据回参获取已有的标签键值对信息。
                     * @return Tags 标签描述列表。通过指定该参数可以支持绑定标签到伸缩组。同时绑定标签到相应的资源实例。每个伸缩组最多支持30个标签。可通过调用接口 [GetTags](https://cloud.tencent.com/document/product/651/72275) ，根据回参获取已有的标签键值对信息。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签描述列表。通过指定该参数可以支持绑定标签到伸缩组。同时绑定标签到相应的资源实例。每个伸缩组最多支持30个标签。可通过调用接口 [GetTags](https://cloud.tencent.com/document/product/651/72275) ，根据回参获取已有的标签键值对信息。
                     * @param _tags 标签描述列表。通过指定该参数可以支持绑定标签到伸缩组。同时绑定标签到相应的资源实例。每个伸缩组最多支持30个标签。可通过调用接口 [GetTags](https://cloud.tencent.com/document/product/651/72275) ，根据回参获取已有的标签键值对信息。
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
                     * 获取服务设置，包括云监控不健康替换等服务设置。
                     * @return ServiceSettings 服务设置，包括云监控不健康替换等服务设置。
                     * 
                     */
                    ServiceSettings GetServiceSettings() const;

                    /**
                     * 设置服务设置，包括云监控不健康替换等服务设置。
                     * @param _serviceSettings 服务设置，包括云监控不健康替换等服务设置。
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
                     * 获取实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 [IPv6使用限制](https://cloud.tencent.com/document/product/1142/38369)。
                     * @return Ipv6AddressCount 实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 [IPv6使用限制](https://cloud.tencent.com/document/product/1142/38369)。
                     * 
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 [IPv6使用限制](https://cloud.tencent.com/document/product/1142/38369)。
                     * @param _ipv6AddressCount 实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 [IPv6使用限制](https://cloud.tencent.com/document/product/1142/38369)。
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
                     * 获取多可用区/子网策略，取值包括 PRIORITY 和 EQUALITY，默认为 PRIORITY。
<li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li>
<li> EQUALITY：扩容出的实例会打散到多个可用区/子网，保证扩容后的各个可用区/子网实例数相对均衡。</li>

与本策略相关的注意点：
<li> 当伸缩组为基础网络时，本策略适用于多可用区；当伸缩组为VPC网络时，本策略适用于多子网，此时不再考虑可用区因素，例如四个子网ABCD，其中ABC处于可用区1，D处于可用区2，此时考虑子网ABCD进行排序，而不考虑可用区1、2。</li>
<li> 本策略适用于多可用区/子网，不适用于启动配置的多机型。多机型按照优先级策略进行选择。</li>
<li> 按照 PRIORITY 策略创建实例时，先保证多机型的策略，后保证多可用区/子网的策略。例如多机型A、B，多子网1、2、3，会按照A1、A2、A3、B1、B2、B3 进行尝试，如果A1售罄，会尝试A2（而非B1）。</li>
                     * @return MultiZoneSubnetPolicy 多可用区/子网策略，取值包括 PRIORITY 和 EQUALITY，默认为 PRIORITY。
<li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li>
<li> EQUALITY：扩容出的实例会打散到多个可用区/子网，保证扩容后的各个可用区/子网实例数相对均衡。</li>

与本策略相关的注意点：
<li> 当伸缩组为基础网络时，本策略适用于多可用区；当伸缩组为VPC网络时，本策略适用于多子网，此时不再考虑可用区因素，例如四个子网ABCD，其中ABC处于可用区1，D处于可用区2，此时考虑子网ABCD进行排序，而不考虑可用区1、2。</li>
<li> 本策略适用于多可用区/子网，不适用于启动配置的多机型。多机型按照优先级策略进行选择。</li>
<li> 按照 PRIORITY 策略创建实例时，先保证多机型的策略，后保证多可用区/子网的策略。例如多机型A、B，多子网1、2、3，会按照A1、A2、A3、B1、B2、B3 进行尝试，如果A1售罄，会尝试A2（而非B1）。</li>
                     * 
                     */
                    std::string GetMultiZoneSubnetPolicy() const;

                    /**
                     * 设置多可用区/子网策略，取值包括 PRIORITY 和 EQUALITY，默认为 PRIORITY。
<li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li>
<li> EQUALITY：扩容出的实例会打散到多个可用区/子网，保证扩容后的各个可用区/子网实例数相对均衡。</li>

与本策略相关的注意点：
<li> 当伸缩组为基础网络时，本策略适用于多可用区；当伸缩组为VPC网络时，本策略适用于多子网，此时不再考虑可用区因素，例如四个子网ABCD，其中ABC处于可用区1，D处于可用区2，此时考虑子网ABCD进行排序，而不考虑可用区1、2。</li>
<li> 本策略适用于多可用区/子网，不适用于启动配置的多机型。多机型按照优先级策略进行选择。</li>
<li> 按照 PRIORITY 策略创建实例时，先保证多机型的策略，后保证多可用区/子网的策略。例如多机型A、B，多子网1、2、3，会按照A1、A2、A3、B1、B2、B3 进行尝试，如果A1售罄，会尝试A2（而非B1）。</li>
                     * @param _multiZoneSubnetPolicy 多可用区/子网策略，取值包括 PRIORITY 和 EQUALITY，默认为 PRIORITY。
<li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li>
<li> EQUALITY：扩容出的实例会打散到多个可用区/子网，保证扩容后的各个可用区/子网实例数相对均衡。</li>

与本策略相关的注意点：
<li> 当伸缩组为基础网络时，本策略适用于多可用区；当伸缩组为VPC网络时，本策略适用于多子网，此时不再考虑可用区因素，例如四个子网ABCD，其中ABC处于可用区1，D处于可用区2，此时考虑子网ABCD进行排序，而不考虑可用区1、2。</li>
<li> 本策略适用于多可用区/子网，不适用于启动配置的多机型。多机型按照优先级策略进行选择。</li>
<li> 按照 PRIORITY 策略创建实例时，先保证多机型的策略，后保证多可用区/子网的策略。例如多机型A、B，多子网1、2、3，会按照A1、A2、A3、B1、B2、B3 进行尝试，如果A1售罄，会尝试A2（而非B1）。</li>
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
                     * 获取伸缩组实例健康检查类型，取值如下：
<li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li>
<li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097) </li>
如果选择了`CLB`类型，伸缩组将同时检查实例网络状态与CLB健康检查状态，如果出现实例网络状态不健康，实例将被标记为 UNHEALTHY 状态；如果出现 CLB 健康检查状态异常，实例将被标记为CLB_UNHEALTHY 状态，如果两个异常状态同时出现，实例`HealthStatus`字段将返回 UNHEALTHY|CLB_UNHEALTHY。默认值：CLB
                     * @return HealthCheckType 伸缩组实例健康检查类型，取值如下：
<li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li>
<li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097) </li>
如果选择了`CLB`类型，伸缩组将同时检查实例网络状态与CLB健康检查状态，如果出现实例网络状态不健康，实例将被标记为 UNHEALTHY 状态；如果出现 CLB 健康检查状态异常，实例将被标记为CLB_UNHEALTHY 状态，如果两个异常状态同时出现，实例`HealthStatus`字段将返回 UNHEALTHY|CLB_UNHEALTHY。默认值：CLB
                     * 
                     */
                    std::string GetHealthCheckType() const;

                    /**
                     * 设置伸缩组实例健康检查类型，取值如下：
<li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li>
<li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097) </li>
如果选择了`CLB`类型，伸缩组将同时检查实例网络状态与CLB健康检查状态，如果出现实例网络状态不健康，实例将被标记为 UNHEALTHY 状态；如果出现 CLB 健康检查状态异常，实例将被标记为CLB_UNHEALTHY 状态，如果两个异常状态同时出现，实例`HealthStatus`字段将返回 UNHEALTHY|CLB_UNHEALTHY。默认值：CLB
                     * @param _healthCheckType 伸缩组实例健康检查类型，取值如下：
<li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li>
<li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097) </li>
如果选择了`CLB`类型，伸缩组将同时检查实例网络状态与CLB健康检查状态，如果出现实例网络状态不健康，实例将被标记为 UNHEALTHY 状态；如果出现 CLB 健康检查状态异常，实例将被标记为CLB_UNHEALTHY 状态，如果两个异常状态同时出现，实例`HealthStatus`字段将返回 UNHEALTHY|CLB_UNHEALTHY。默认值：CLB
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
                     * 获取CLB健康检查宽限期，当扩容的实例进入`IN_SERVICE`后，在宽限期时间范围内将不会被标记为不健康`CLB_UNHEALTHY`。<br>默认值：0。取值范围[0, 7200]，单位：秒。
                     * @return LoadBalancerHealthCheckGracePeriod CLB健康检查宽限期，当扩容的实例进入`IN_SERVICE`后，在宽限期时间范围内将不会被标记为不健康`CLB_UNHEALTHY`。<br>默认值：0。取值范围[0, 7200]，单位：秒。
                     * 
                     */
                    uint64_t GetLoadBalancerHealthCheckGracePeriod() const;

                    /**
                     * 设置CLB健康检查宽限期，当扩容的实例进入`IN_SERVICE`后，在宽限期时间范围内将不会被标记为不健康`CLB_UNHEALTHY`。<br>默认值：0。取值范围[0, 7200]，单位：秒。
                     * @param _loadBalancerHealthCheckGracePeriod CLB健康检查宽限期，当扩容的实例进入`IN_SERVICE`后，在宽限期时间范围内将不会被标记为不健康`CLB_UNHEALTHY`。<br>默认值：0。取值范围[0, 7200]，单位：秒。
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
                     * 获取实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED，默认取 LAUNCH_CONFIGURATION。
<li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li>
<li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
                     * @return InstanceAllocationPolicy 实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED，默认取 LAUNCH_CONFIGURATION。
<li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li>
<li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
                     * 
                     */
                    std::string GetInstanceAllocationPolicy() const;

                    /**
                     * 设置实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED，默认取 LAUNCH_CONFIGURATION。
<li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li>
<li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
                     * @param _instanceAllocationPolicy 实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED，默认取 LAUNCH_CONFIGURATION。
<li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li>
<li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
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
                     * 获取竞价混合模式下，各计费类型实例的分配策略。
仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时可用。
                     * @return SpotMixedAllocationPolicy 竞价混合模式下，各计费类型实例的分配策略。
仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时可用。
                     * 
                     */
                    SpotMixedAllocationPolicy GetSpotMixedAllocationPolicy() const;

                    /**
                     * 设置竞价混合模式下，各计费类型实例的分配策略。
仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时可用。
                     * @param _spotMixedAllocationPolicy 竞价混合模式下，各计费类型实例的分配策略。
仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时可用。
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
                     * 获取容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：
<li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li>
<li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
默认取 FALSE。
                     * @return CapacityRebalance 容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：
<li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li>
<li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
默认取 FALSE。
                     * 
                     */
                    bool GetCapacityRebalance() const;

                    /**
                     * 设置容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：
<li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li>
<li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
默认取 FALSE。
                     * @param _capacityRebalance 容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：
<li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li>
<li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
默认取 FALSE。
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
                     * 获取实例名称序号相关设置。若不指定该参数，则默认不开启。开启后为伸缩组内自动创建的实例名称添加递增的数字序号。
                     * @return InstanceNameIndexSettings 实例名称序号相关设置。若不指定该参数，则默认不开启。开启后为伸缩组内自动创建的实例名称添加递增的数字序号。
                     * 
                     */
                    InstanceNameIndexSettings GetInstanceNameIndexSettings() const;

                    /**
                     * 设置实例名称序号相关设置。若不指定该参数，则默认不开启。开启后为伸缩组内自动创建的实例名称添加递增的数字序号。
                     * @param _instanceNameIndexSettings 实例名称序号相关设置。若不指定该参数，则默认不开启。开启后为伸缩组内自动创建的实例名称添加递增的数字序号。
                     * 
                     */
                    void SetInstanceNameIndexSettings(const InstanceNameIndexSettings& _instanceNameIndexSettings);

                    /**
                     * 判断参数 InstanceNameIndexSettings 是否已赋值
                     * @return InstanceNameIndexSettings 是否已赋值
                     * 
                     */
                    bool InstanceNameIndexSettingsHasBeenSet() const;

                private:

                    /**
                     * 伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符"-"、小数点，最大长度不能超55个字节。
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * 启动配置ID。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/config) 或调用接口 [DescribeLaunchConfigurations](https://cloud.tencent.com/document/api/377/20445) ，取返回信息中的 LaunchConfigurationId 获取启动配置ID。
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * 最大实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 最小实例数，取值范围为 [0,2000]，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 私有网络ID。有效的VpcId可通过登录[控制台](https://console.cloud.tencent.com/vpc/vpc)查询；也可以调用接口 [DescribeVpc](https://cloud.tencent.com/document/api/215/15778) ，从接口返回中的VpcId字段获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 默认冷却时间，单位秒，默认值为300。取值范围为 [0,3600]。
                     */
                    uint64_t m_defaultCooldown;
                    bool m_defaultCooldownHasBeenSet;

                    /**
                     * 期望实例数，取值范围 [0,2000]，默认值等于当前 MinSize，同时需满足 MaxSize >= DesiredCapacity >= MinSize 。
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * 传统负载均衡器ID列表，目前长度上限为20，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 伸缩组内实例所属项目ID。默认值为0，表示使用默认项目。该参数可以通过调用 [DescribeProject](https://cloud.tencent.com/document/api/651/78725) 的返回值中的 projectId 字段来获取。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 负载均衡器列表，目前长度上限为100，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     */
                    std::vector<ForwardLoadBalancer> m_forwardLoadBalancers;
                    bool m_forwardLoadBalancersHasBeenSet;

                    /**
                     * 子网ID列表，VPC场景下必须指定子网。多个子网以填写顺序为优先级，依次进行尝试，直至可以成功创建实例。有效的私有网络子网ID可通过登录[控制台](https://console.cloud.tencent.com/vpc/subnet)查询；也可以调用接口 [DescribeSubnets](https://cloud.tencent.com/document/product/215/15784) ，从接口返回中的SubnetId字段获取。
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 销毁策略，目前长度上限为1。取值包括 OLDEST_INSTANCE 和 NEWEST_INSTANCE，默认取值为 OLDEST_INSTANCE。
<li> OLDEST_INSTANCE 优先销毁伸缩组中最旧的实例。</li>
<li> NEWEST_INSTANCE，优先销毁伸缩组中最新的实例。</li>
                     */
                    std::vector<std::string> m_terminationPolicies;
                    bool m_terminationPoliciesHasBeenSet;

                    /**
                     * 可用区列表，基础网络场景下必须指定可用区。多个可用区以填写顺序为优先级，依次进行尝试，直至可以成功创建实例。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 重试策略，取值包括 IMMEDIATE_RETRY、 INCREMENTAL_INTERVALS、NO_RETRY，默认取值为 IMMEDIATE_RETRY。部分成功的伸缩活动判定为一次失败活动。
<li> IMMEDIATE_RETRY，立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li> 
<li> INCREMENTAL_INTERVALS，间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大。前 10 次重试间隔与立即重试模式相同，后续逐步递增至 10 分钟、30 分钟、60 分钟、一天。</li> 
<li> NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li> 
                     */
                    std::string m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                    /**
                     * 可用区校验策略，取值包括 ALL 和 ANY，默认取值为ANY。
<li> ALL，所有可用区（Zone）或子网（SubnetId）都可用则通过校验，否则校验报错。</li>
<li> ANY，存在任何一个可用区（Zone）或子网（SubnetId）可用则通过校验，否则校验报错。</li>

可用区或子网不可用的常见原因包括该可用区CVM实例类型售罄、该可用区CBS云盘售罄、该可用区配额不足、该子网IP不足等。
如果 Zones/SubnetIds 中可用区或者子网不存在，则无论 ZonesCheckPolicy 采用何种取值，都会校验报错。
                     */
                    std::string m_zonesCheckPolicy;
                    bool m_zonesCheckPolicyHasBeenSet;

                    /**
                     * 标签描述列表。通过指定该参数可以支持绑定标签到伸缩组。同时绑定标签到相应的资源实例。每个伸缩组最多支持30个标签。可通过调用接口 [GetTags](https://cloud.tencent.com/document/product/651/72275) ，根据回参获取已有的标签键值对信息。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 服务设置，包括云监控不健康替换等服务设置。
                     */
                    ServiceSettings m_serviceSettings;
                    bool m_serviceSettingsHasBeenSet;

                    /**
                     * 实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 [IPv6使用限制](https://cloud.tencent.com/document/product/1142/38369)。
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * 多可用区/子网策略，取值包括 PRIORITY 和 EQUALITY，默认为 PRIORITY。
<li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li>
<li> EQUALITY：扩容出的实例会打散到多个可用区/子网，保证扩容后的各个可用区/子网实例数相对均衡。</li>

与本策略相关的注意点：
<li> 当伸缩组为基础网络时，本策略适用于多可用区；当伸缩组为VPC网络时，本策略适用于多子网，此时不再考虑可用区因素，例如四个子网ABCD，其中ABC处于可用区1，D处于可用区2，此时考虑子网ABCD进行排序，而不考虑可用区1、2。</li>
<li> 本策略适用于多可用区/子网，不适用于启动配置的多机型。多机型按照优先级策略进行选择。</li>
<li> 按照 PRIORITY 策略创建实例时，先保证多机型的策略，后保证多可用区/子网的策略。例如多机型A、B，多子网1、2、3，会按照A1、A2、A3、B1、B2、B3 进行尝试，如果A1售罄，会尝试A2（而非B1）。</li>
                     */
                    std::string m_multiZoneSubnetPolicy;
                    bool m_multiZoneSubnetPolicyHasBeenSet;

                    /**
                     * 伸缩组实例健康检查类型，取值如下：
<li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li>
<li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097) </li>
如果选择了`CLB`类型，伸缩组将同时检查实例网络状态与CLB健康检查状态，如果出现实例网络状态不健康，实例将被标记为 UNHEALTHY 状态；如果出现 CLB 健康检查状态异常，实例将被标记为CLB_UNHEALTHY 状态，如果两个异常状态同时出现，实例`HealthStatus`字段将返回 UNHEALTHY|CLB_UNHEALTHY。默认值：CLB
                     */
                    std::string m_healthCheckType;
                    bool m_healthCheckTypeHasBeenSet;

                    /**
                     * CLB健康检查宽限期，当扩容的实例进入`IN_SERVICE`后，在宽限期时间范围内将不会被标记为不健康`CLB_UNHEALTHY`。<br>默认值：0。取值范围[0, 7200]，单位：秒。
                     */
                    uint64_t m_loadBalancerHealthCheckGracePeriod;
                    bool m_loadBalancerHealthCheckGracePeriodHasBeenSet;

                    /**
                     * 实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED，默认取 LAUNCH_CONFIGURATION。
<li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li>
<li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
                     */
                    std::string m_instanceAllocationPolicy;
                    bool m_instanceAllocationPolicyHasBeenSet;

                    /**
                     * 竞价混合模式下，各计费类型实例的分配策略。
仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时可用。
                     */
                    SpotMixedAllocationPolicy m_spotMixedAllocationPolicy;
                    bool m_spotMixedAllocationPolicyHasBeenSet;

                    /**
                     * 容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：
<li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li>
<li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
默认取 FALSE。
                     */
                    bool m_capacityRebalance;
                    bool m_capacityRebalanceHasBeenSet;

                    /**
                     * 实例名称序号相关设置。若不指定该参数，则默认不开启。开启后为伸缩组内自动创建的实例名称添加递增的数字序号。
                     */
                    InstanceNameIndexSettings m_instanceNameIndexSettings;
                    bool m_instanceNameIndexSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATEAUTOSCALINGGROUPREQUEST_H_
