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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYAUTOSCALINGGROUPREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYAUTOSCALINGGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * ModifyAutoScalingGroup请求参数结构体
                */
                class ModifyAutoScalingGroupRequest : public AbstractModel
                {
                public:
                    ModifyAutoScalingGroupRequest();
                    ~ModifyAutoScalingGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>伸缩组ID。可以通过如下方式获取可用的伸缩组ID:</p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li><li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * @return AutoScalingGroupId <p>伸缩组ID。可以通过如下方式获取可用的伸缩组ID:</p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li><li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置<p>伸缩组ID。可以通过如下方式获取可用的伸缩组ID:</p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li><li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * @param _autoScalingGroupId <p>伸缩组ID。可以通过如下方式获取可用的伸缩组ID:</p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li><li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
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
                     * 获取<p>伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符&quot;-&quot;、小数点，最大长度不能超55个字节。</p>
                     * @return AutoScalingGroupName <p>伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符&quot;-&quot;、小数点，最大长度不能超55个字节。</p>
                     * 
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置<p>伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符&quot;-&quot;、小数点，最大长度不能超55个字节。</p>
                     * @param _autoScalingGroupName <p>伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符&quot;-&quot;、小数点，最大长度不能超55个字节。</p>
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
                     * 获取<p>默认冷却时间，单位秒，取值范围 [0,3600]，默认值为300。</p>
                     * @return DefaultCooldown <p>默认冷却时间，单位秒，取值范围 [0,3600]，默认值为300。</p>
                     * 
                     */
                    uint64_t GetDefaultCooldown() const;

                    /**
                     * 设置<p>默认冷却时间，单位秒，取值范围 [0,3600]，默认值为300。</p>
                     * @param _defaultCooldown <p>默认冷却时间，单位秒，取值范围 [0,3600]，默认值为300。</p>
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
                     * 获取<p>期望实例数，取值范围 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     * @return DesiredCapacity <p>期望实例数，取值范围 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     * 
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置<p>期望实例数，取值范围 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     * @param _desiredCapacity <p>期望实例数，取值范围 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
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
                     * 获取<p>启动配置ID。可以通过如下方式获取可用的启动配置ID:</p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/config) 查询启动配置ID。</li><li>通过调用接口 [DescribeLaunchConfigurations](https://cloud.tencent.com/document/api/377/20445) ，取返回信息中的 LaunchConfigurationId 获取启动配置ID。</li>
                     * @return LaunchConfigurationId <p>启动配置ID。可以通过如下方式获取可用的启动配置ID:</p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/config) 查询启动配置ID。</li><li>通过调用接口 [DescribeLaunchConfigurations](https://cloud.tencent.com/document/api/377/20445) ，取返回信息中的 LaunchConfigurationId 获取启动配置ID。</li>
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置<p>启动配置ID。可以通过如下方式获取可用的启动配置ID:</p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/config) 查询启动配置ID。</li><li>通过调用接口 [DescribeLaunchConfigurations](https://cloud.tencent.com/document/api/377/20445) ，取返回信息中的 LaunchConfigurationId 获取启动配置ID。</li>
                     * @param _launchConfigurationId <p>启动配置ID。可以通过如下方式获取可用的启动配置ID:</p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/config) 查询启动配置ID。</li><li>通过调用接口 [DescribeLaunchConfigurations](https://cloud.tencent.com/document/api/377/20445) ，取返回信息中的 LaunchConfigurationId 获取启动配置ID。</li>
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
                     * 获取<p>最大实例数，取值范围为 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     * @return MaxSize <p>最大实例数，取值范围为 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置<p>最大实例数，取值范围为 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     * @param _maxSize <p>最大实例数，取值范围为 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
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
                     * 获取<p>最小实例数，取值范围为 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     * @return MinSize <p>最小实例数，取值范围为 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置<p>最小实例数，取值范围为 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     * @param _minSize <p>最小实例数，取值范围为 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
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
                     * 获取<p>项目ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 ProjectId 字段来获取。默认值为 0，表示使用默认项目。</p>
                     * @return ProjectId <p>项目ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 ProjectId 字段来获取。默认值为 0，表示使用默认项目。</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 ProjectId 字段来获取。默认值为 0，表示使用默认项目。</p>
                     * @param _projectId <p>项目ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 ProjectId 字段来获取。默认值为 0，表示使用默认项目。</p>
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
                     * 获取<p>子网ID列表。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的SubnetId字段获取。</p>
                     * @return SubnetIds <p>子网ID列表。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的SubnetId字段获取。</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>子网ID列表。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的SubnetId字段获取。</p>
                     * @param _subnetIds <p>子网ID列表。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的SubnetId字段获取。</p>
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
                     * 获取<p>销毁策略，目前长度上限为1。取值包括 OLDEST_INSTANCE 和 NEWEST_INSTANCE。</p><li> OLDEST_INSTANCE 优先销毁伸缩组中最旧的实例。</li><li> NEWEST_INSTANCE，优先销毁伸缩组中最新的实例。</li>
                     * @return TerminationPolicies <p>销毁策略，目前长度上限为1。取值包括 OLDEST_INSTANCE 和 NEWEST_INSTANCE。</p><li> OLDEST_INSTANCE 优先销毁伸缩组中最旧的实例。</li><li> NEWEST_INSTANCE，优先销毁伸缩组中最新的实例。</li>
                     * 
                     */
                    std::vector<std::string> GetTerminationPolicies() const;

                    /**
                     * 设置<p>销毁策略，目前长度上限为1。取值包括 OLDEST_INSTANCE 和 NEWEST_INSTANCE。</p><li> OLDEST_INSTANCE 优先销毁伸缩组中最旧的实例。</li><li> NEWEST_INSTANCE，优先销毁伸缩组中最新的实例。</li>
                     * @param _terminationPolicies <p>销毁策略，目前长度上限为1。取值包括 OLDEST_INSTANCE 和 NEWEST_INSTANCE。</p><li> OLDEST_INSTANCE 优先销毁伸缩组中最旧的实例。</li><li> NEWEST_INSTANCE，优先销毁伸缩组中最新的实例。</li>
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
                     * 获取<p>私有网络ID。修改私有网络时，需将 SubnetIds 参数同步修改为该私有网络的子网。有效的 VpcId 可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15778">DescribeVpc</a> ，从接口返回中的 VpcId 字段获取。</p>
                     * @return VpcId <p>私有网络ID。修改私有网络时，需将 SubnetIds 参数同步修改为该私有网络的子网。有效的 VpcId 可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15778">DescribeVpc</a> ，从接口返回中的 VpcId 字段获取。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID。修改私有网络时，需将 SubnetIds 参数同步修改为该私有网络的子网。有效的 VpcId 可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15778">DescribeVpc</a> ，从接口返回中的 VpcId 字段获取。</p>
                     * @param _vpcId <p>私有网络ID。修改私有网络时，需将 SubnetIds 参数同步修改为该私有网络的子网。有效的 VpcId 可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15778">DescribeVpc</a> ，从接口返回中的 VpcId 字段获取。</p>
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
                     * @return Zones <p>可用区列表</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>可用区列表</p>
                     * @param _zones <p>可用区列表</p>
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
                     * 获取<p>重试策略，取值包括 IMMEDIATE_RETRY、 INCREMENTAL_INTERVALS、NO_RETRY，默认取值为 IMMEDIATE_RETRY。部分成功的伸缩活动判定为一次失败活动。</p><li>IMMEDIATE_RETRY，立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li><li>INCREMENTAL_INTERVALS，间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大，重试间隔从秒级到1天不等。</li><li> NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li>
                     * @return RetryPolicy <p>重试策略，取值包括 IMMEDIATE_RETRY、 INCREMENTAL_INTERVALS、NO_RETRY，默认取值为 IMMEDIATE_RETRY。部分成功的伸缩活动判定为一次失败活动。</p><li>IMMEDIATE_RETRY，立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li><li>INCREMENTAL_INTERVALS，间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大，重试间隔从秒级到1天不等。</li><li> NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li>
                     * 
                     */
                    std::string GetRetryPolicy() const;

                    /**
                     * 设置<p>重试策略，取值包括 IMMEDIATE_RETRY、 INCREMENTAL_INTERVALS、NO_RETRY，默认取值为 IMMEDIATE_RETRY。部分成功的伸缩活动判定为一次失败活动。</p><li>IMMEDIATE_RETRY，立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li><li>INCREMENTAL_INTERVALS，间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大，重试间隔从秒级到1天不等。</li><li> NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li>
                     * @param _retryPolicy <p>重试策略，取值包括 IMMEDIATE_RETRY、 INCREMENTAL_INTERVALS、NO_RETRY，默认取值为 IMMEDIATE_RETRY。部分成功的伸缩活动判定为一次失败活动。</p><li>IMMEDIATE_RETRY，立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li><li>INCREMENTAL_INTERVALS，间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大，重试间隔从秒级到1天不等。</li><li> NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li>
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
                     * 获取<p>可用区校验策略，取值包括 ALL 和 ANY，默认取值为ANY。在伸缩组实际变更资源相关字段时（启动配置、可用区、子网）发挥作用。</p><li> ALL，所有可用区（Zone）或子网（SubnetId）都可用则通过校验，否则校验报错。</li><li> ANY，存在任何一个可用区（Zone）或子网（SubnetId）可用则通过校验，否则校验报错。</li><p>可用区或子网不可用的常见原因包括该可用区CVM实例类型售罄、该可用区CBS云盘售罄、该可用区配额不足、该子网IP不足等。<br>如果 Zones/SubnetIds 中可用区或者子网不存在，则无论 ZonesCheckPolicy 采用何种取值，都会校验报错。</p>
                     * @return ZonesCheckPolicy <p>可用区校验策略，取值包括 ALL 和 ANY，默认取值为ANY。在伸缩组实际变更资源相关字段时（启动配置、可用区、子网）发挥作用。</p><li> ALL，所有可用区（Zone）或子网（SubnetId）都可用则通过校验，否则校验报错。</li><li> ANY，存在任何一个可用区（Zone）或子网（SubnetId）可用则通过校验，否则校验报错。</li><p>可用区或子网不可用的常见原因包括该可用区CVM实例类型售罄、该可用区CBS云盘售罄、该可用区配额不足、该子网IP不足等。<br>如果 Zones/SubnetIds 中可用区或者子网不存在，则无论 ZonesCheckPolicy 采用何种取值，都会校验报错。</p>
                     * 
                     */
                    std::string GetZonesCheckPolicy() const;

                    /**
                     * 设置<p>可用区校验策略，取值包括 ALL 和 ANY，默认取值为ANY。在伸缩组实际变更资源相关字段时（启动配置、可用区、子网）发挥作用。</p><li> ALL，所有可用区（Zone）或子网（SubnetId）都可用则通过校验，否则校验报错。</li><li> ANY，存在任何一个可用区（Zone）或子网（SubnetId）可用则通过校验，否则校验报错。</li><p>可用区或子网不可用的常见原因包括该可用区CVM实例类型售罄、该可用区CBS云盘售罄、该可用区配额不足、该子网IP不足等。<br>如果 Zones/SubnetIds 中可用区或者子网不存在，则无论 ZonesCheckPolicy 采用何种取值，都会校验报错。</p>
                     * @param _zonesCheckPolicy <p>可用区校验策略，取值包括 ALL 和 ANY，默认取值为ANY。在伸缩组实际变更资源相关字段时（启动配置、可用区、子网）发挥作用。</p><li> ALL，所有可用区（Zone）或子网（SubnetId）都可用则通过校验，否则校验报错。</li><li> ANY，存在任何一个可用区（Zone）或子网（SubnetId）可用则通过校验，否则校验报错。</li><p>可用区或子网不可用的常见原因包括该可用区CVM实例类型售罄、该可用区CBS云盘售罄、该可用区配额不足、该子网IP不足等。<br>如果 Zones/SubnetIds 中可用区或者子网不存在，则无论 ZonesCheckPolicy 采用何种取值，都会校验报错。</p>
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
                     * 获取<p>服务设置，包括云监控不健康替换等服务设置。</p>
                     * @return ServiceSettings <p>服务设置，包括云监控不健康替换等服务设置。</p>
                     * 
                     */
                    ServiceSettings GetServiceSettings() const;

                    /**
                     * 设置<p>服务设置，包括云监控不健康替换等服务设置。</p>
                     * @param _serviceSettings <p>服务设置，包括云监控不健康替换等服务设置。</p>
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
                     * 获取<p>多可用区/子网策略，取值包括 PRIORITY 和 EQUALITY，默认为 PRIORITY。</p><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li> <li> EQUALITY：扩容出的实例会打散到多个可用区/子网，保证扩容后的各个可用区/子网实例数相对均衡。</li> <p>与本策略相关的注意点：</p><li> 当伸缩组为基础网络时，本策略适用于多可用区；当伸缩组为VPC网络时，本策略适用于多子网，此时不再考虑可用区因素，例如四个子网ABCD，其中ABC处于可用区1，D处于可用区2，此时考虑子网ABCD进行排序，而不考虑可用区1、2。</li> <li> 本策略适用于多可用区/子网，不适用于启动配置的多机型。多机型按照优先级策略进行选择。</li> <li> 按照 PRIORITY 策略创建实例时，先保证多机型的策略，后保证多可用区/子网的策略。例如多机型A、B，多子网1、2、3，会按照A1、A2、A3、B1、B2、B3 进行尝试，如果A1售罄，会尝试A2（而非B1）。</li>
                     * @return MultiZoneSubnetPolicy <p>多可用区/子网策略，取值包括 PRIORITY 和 EQUALITY，默认为 PRIORITY。</p><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li> <li> EQUALITY：扩容出的实例会打散到多个可用区/子网，保证扩容后的各个可用区/子网实例数相对均衡。</li> <p>与本策略相关的注意点：</p><li> 当伸缩组为基础网络时，本策略适用于多可用区；当伸缩组为VPC网络时，本策略适用于多子网，此时不再考虑可用区因素，例如四个子网ABCD，其中ABC处于可用区1，D处于可用区2，此时考虑子网ABCD进行排序，而不考虑可用区1、2。</li> <li> 本策略适用于多可用区/子网，不适用于启动配置的多机型。多机型按照优先级策略进行选择。</li> <li> 按照 PRIORITY 策略创建实例时，先保证多机型的策略，后保证多可用区/子网的策略。例如多机型A、B，多子网1、2、3，会按照A1、A2、A3、B1、B2、B3 进行尝试，如果A1售罄，会尝试A2（而非B1）。</li>
                     * 
                     */
                    std::string GetMultiZoneSubnetPolicy() const;

                    /**
                     * 设置<p>多可用区/子网策略，取值包括 PRIORITY 和 EQUALITY，默认为 PRIORITY。</p><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li> <li> EQUALITY：扩容出的实例会打散到多个可用区/子网，保证扩容后的各个可用区/子网实例数相对均衡。</li> <p>与本策略相关的注意点：</p><li> 当伸缩组为基础网络时，本策略适用于多可用区；当伸缩组为VPC网络时，本策略适用于多子网，此时不再考虑可用区因素，例如四个子网ABCD，其中ABC处于可用区1，D处于可用区2，此时考虑子网ABCD进行排序，而不考虑可用区1、2。</li> <li> 本策略适用于多可用区/子网，不适用于启动配置的多机型。多机型按照优先级策略进行选择。</li> <li> 按照 PRIORITY 策略创建实例时，先保证多机型的策略，后保证多可用区/子网的策略。例如多机型A、B，多子网1、2、3，会按照A1、A2、A3、B1、B2、B3 进行尝试，如果A1售罄，会尝试A2（而非B1）。</li>
                     * @param _multiZoneSubnetPolicy <p>多可用区/子网策略，取值包括 PRIORITY 和 EQUALITY，默认为 PRIORITY。</p><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li> <li> EQUALITY：扩容出的实例会打散到多个可用区/子网，保证扩容后的各个可用区/子网实例数相对均衡。</li> <p>与本策略相关的注意点：</p><li> 当伸缩组为基础网络时，本策略适用于多可用区；当伸缩组为VPC网络时，本策略适用于多子网，此时不再考虑可用区因素，例如四个子网ABCD，其中ABC处于可用区1，D处于可用区2，此时考虑子网ABCD进行排序，而不考虑可用区1、2。</li> <li> 本策略适用于多可用区/子网，不适用于启动配置的多机型。多机型按照优先级策略进行选择。</li> <li> 按照 PRIORITY 策略创建实例时，先保证多机型的策略，后保证多可用区/子网的策略。例如多机型A、B，多子网1、2、3，会按照A1、A2、A3、B1、B2、B3 进行尝试，如果A1售罄，会尝试A2（而非B1）。</li>
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
                     * 获取<p>CLB健康检查宽限期，单位为秒。</p><p>取值范围：[0, 7200]</p><p>默认值：0</p>
                     * @return LoadBalancerHealthCheckGracePeriod <p>CLB健康检查宽限期，单位为秒。</p><p>取值范围：[0, 7200]</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetLoadBalancerHealthCheckGracePeriod() const;

                    /**
                     * 设置<p>CLB健康检查宽限期，单位为秒。</p><p>取值范围：[0, 7200]</p><p>默认值：0</p>
                     * @param _loadBalancerHealthCheckGracePeriod <p>CLB健康检查宽限期，单位为秒。</p><p>取值范围：[0, 7200]</p><p>默认值：0</p>
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
                     * 获取<p>竞价混合模式下，各计费类型实例的分配策略。<br>仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时可用。</p>
                     * @return SpotMixedAllocationPolicy <p>竞价混合模式下，各计费类型实例的分配策略。<br>仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时可用。</p>
                     * 
                     */
                    SpotMixedAllocationPolicy GetSpotMixedAllocationPolicy() const;

                    /**
                     * 设置<p>竞价混合模式下，各计费类型实例的分配策略。<br>仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时可用。</p>
                     * @param _spotMixedAllocationPolicy <p>竞价混合模式下，各计费类型实例的分配策略。<br>仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时可用。</p>
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
                     * 获取<p>容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：</p><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li> <li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
                     * @return CapacityRebalance <p>容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：</p><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li> <li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
                     * 
                     */
                    bool GetCapacityRebalance() const;

                    /**
                     * 设置<p>容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：</p><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li> <li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
                     * @param _capacityRebalance <p>容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：</p><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li> <li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
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
                     * 获取<p>实例名称序号相关设置。开启后为伸缩组内自动创建的实例名称添加递增的数字序号。</p>
                     * @return InstanceNameIndexSettings <p>实例名称序号相关设置。开启后为伸缩组内自动创建的实例名称添加递增的数字序号。</p>
                     * 
                     */
                    InstanceNameIndexSettings GetInstanceNameIndexSettings() const;

                    /**
                     * 设置<p>实例名称序号相关设置。开启后为伸缩组内自动创建的实例名称添加递增的数字序号。</p>
                     * @param _instanceNameIndexSettings <p>实例名称序号相关设置。开启后为伸缩组内自动创建的实例名称添加递增的数字序号。</p>
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
                     * 获取<p>实例主机名序号相关设置。开启后为伸缩组内自动创建的实例主机名添加递增的数字序号。</p>
                     * @return HostNameIndexSettings <p>实例主机名序号相关设置。开启后为伸缩组内自动创建的实例主机名添加递增的数字序号。</p>
                     * 
                     */
                    HostNameIndexSettings GetHostNameIndexSettings() const;

                    /**
                     * 设置<p>实例主机名序号相关设置。开启后为伸缩组内自动创建的实例主机名添加递增的数字序号。</p>
                     * @param _hostNameIndexSettings <p>实例主机名序号相关设置。开启后为伸缩组内自动创建的实例主机名添加递增的数字序号。</p>
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
                     * 获取<p>匹配期望数并发扩容功能，不能在InstanceAllocationPolicy为竞价混合模式时设置，也不能在ScalingMode为扩容优先开机模式时设置。目前仅支持两个匹配期望数扩容活动并发进行，不支持指定数量扩容、缩容等其他类型活动并发。设置为FALSE表示不开启。</p>
                     * @return ConcurrentScaleOutForDesiredCapacity <p>匹配期望数并发扩容功能，不能在InstanceAllocationPolicy为竞价混合模式时设置，也不能在ScalingMode为扩容优先开机模式时设置。目前仅支持两个匹配期望数扩容活动并发进行，不支持指定数量扩容、缩容等其他类型活动并发。设置为FALSE表示不开启。</p>
                     * 
                     */
                    bool GetConcurrentScaleOutForDesiredCapacity() const;

                    /**
                     * 设置<p>匹配期望数并发扩容功能，不能在InstanceAllocationPolicy为竞价混合模式时设置，也不能在ScalingMode为扩容优先开机模式时设置。目前仅支持两个匹配期望数扩容活动并发进行，不支持指定数量扩容、缩容等其他类型活动并发。设置为FALSE表示不开启。</p>
                     * @param _concurrentScaleOutForDesiredCapacity <p>匹配期望数并发扩容功能，不能在InstanceAllocationPolicy为竞价混合模式时设置，也不能在ScalingMode为扩容优先开机模式时设置。目前仅支持两个匹配期望数扩容活动并发进行，不支持指定数量扩容、缩容等其他类型活动并发。设置为FALSE表示不开启。</p>
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
                     * <p>伸缩组ID。可以通过如下方式获取可用的伸缩组ID:</p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li><li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * <p>伸缩组名称，在您账号中必须唯一。名称仅支持中文、英文、数字、下划线、分隔符&quot;-&quot;、小数点，最大长度不能超55个字节。</p>
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * <p>默认冷却时间，单位秒，取值范围 [0,3600]，默认值为300。</p>
                     */
                    uint64_t m_defaultCooldown;
                    bool m_defaultCooldownHasBeenSet;

                    /**
                     * <p>期望实例数，取值范围 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * <p>启动配置ID。可以通过如下方式获取可用的启动配置ID:</p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/config) 查询启动配置ID。</li><li>通过调用接口 [DescribeLaunchConfigurations](https://cloud.tencent.com/document/api/377/20445) ，取返回信息中的 LaunchConfigurationId 获取启动配置ID。</li>
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * <p>最大实例数，取值范围为 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <p>最小实例数，取值范围为 [0,2000]。需满足最大值大于等于期望值，期望值大于等于最小值。</p>
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * <p>项目ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 ProjectId 字段来获取。默认值为 0，表示使用默认项目。</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>子网ID列表。有效的私有网络子网ID可通过登录<a href="https://console.cloud.tencent.com/vpc/subnet">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/product/215/15784">DescribeSubnets</a> ，从接口返回中的SubnetId字段获取。</p>
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>销毁策略，目前长度上限为1。取值包括 OLDEST_INSTANCE 和 NEWEST_INSTANCE。</p><li> OLDEST_INSTANCE 优先销毁伸缩组中最旧的实例。</li><li> NEWEST_INSTANCE，优先销毁伸缩组中最新的实例。</li>
                     */
                    std::vector<std::string> m_terminationPolicies;
                    bool m_terminationPoliciesHasBeenSet;

                    /**
                     * <p>私有网络ID。修改私有网络时，需将 SubnetIds 参数同步修改为该私有网络的子网。有效的 VpcId 可通过登录<a href="https://console.cloud.tencent.com/vpc/vpc">控制台</a>查询；也可以调用接口 <a href="https://cloud.tencent.com/document/api/215/15778">DescribeVpc</a> ，从接口返回中的 VpcId 字段获取。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>可用区列表</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>重试策略，取值包括 IMMEDIATE_RETRY、 INCREMENTAL_INTERVALS、NO_RETRY，默认取值为 IMMEDIATE_RETRY。部分成功的伸缩活动判定为一次失败活动。</p><li>IMMEDIATE_RETRY，立即重试，在较短时间内快速重试，连续失败超过一定次数（5次）后不再重试。</li><li>INCREMENTAL_INTERVALS，间隔递增重试，随着连续失败次数的增加，重试间隔逐渐增大，重试间隔从秒级到1天不等。</li><li> NO_RETRY，不进行重试，直到再次收到用户调用或者告警信息后才会重试。</li>
                     */
                    std::string m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                    /**
                     * <p>可用区校验策略，取值包括 ALL 和 ANY，默认取值为ANY。在伸缩组实际变更资源相关字段时（启动配置、可用区、子网）发挥作用。</p><li> ALL，所有可用区（Zone）或子网（SubnetId）都可用则通过校验，否则校验报错。</li><li> ANY，存在任何一个可用区（Zone）或子网（SubnetId）可用则通过校验，否则校验报错。</li><p>可用区或子网不可用的常见原因包括该可用区CVM实例类型售罄、该可用区CBS云盘售罄、该可用区配额不足、该子网IP不足等。<br>如果 Zones/SubnetIds 中可用区或者子网不存在，则无论 ZonesCheckPolicy 采用何种取值，都会校验报错。</p>
                     */
                    std::string m_zonesCheckPolicy;
                    bool m_zonesCheckPolicyHasBeenSet;

                    /**
                     * <p>服务设置，包括云监控不健康替换等服务设置。</p>
                     */
                    ServiceSettings m_serviceSettings;
                    bool m_serviceSettingsHasBeenSet;

                    /**
                     * <p>实例具有IPv6地址数量的配置，取值包括0、1。默认值为 0，表示实例不分配 IPv6 地址。需使用支持 IPv6 的私有网络，需在子网中开启 IPv6 CIDR，其他使用限制可参考 <a href="https://cloud.tencent.com/document/product/1142/38369">IPv6使用限制</a>。</p>
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * <p>多可用区/子网策略，取值包括 PRIORITY 和 EQUALITY，默认为 PRIORITY。</p><li> PRIORITY，按照可用区/子网列表的顺序，作为优先级来尝试创建实例，如果优先级最高的可用区/子网可以创建成功，则总在该可用区/子网创建。</li> <li> EQUALITY：扩容出的实例会打散到多个可用区/子网，保证扩容后的各个可用区/子网实例数相对均衡。</li> <p>与本策略相关的注意点：</p><li> 当伸缩组为基础网络时，本策略适用于多可用区；当伸缩组为VPC网络时，本策略适用于多子网，此时不再考虑可用区因素，例如四个子网ABCD，其中ABC处于可用区1，D处于可用区2，此时考虑子网ABCD进行排序，而不考虑可用区1、2。</li> <li> 本策略适用于多可用区/子网，不适用于启动配置的多机型。多机型按照优先级策略进行选择。</li> <li> 按照 PRIORITY 策略创建实例时，先保证多机型的策略，后保证多可用区/子网的策略。例如多机型A、B，多子网1、2、3，会按照A1、A2、A3、B1、B2、B3 进行尝试，如果A1售罄，会尝试A2（而非B1）。</li>
                     */
                    std::string m_multiZoneSubnetPolicy;
                    bool m_multiZoneSubnetPolicyHasBeenSet;

                    /**
                     * <p>伸缩组实例健康检查类型，取值如下：</p><li>CVM：根据实例网络状态判断实例是否处于不健康状态，不健康的网络状态即发生实例 PING 不可达事件，详细判断标准可参考[实例健康检查](https://cloud.tencent.com/document/product/377/8553)</li><li>CLB：根据 CLB 的健康检查状态判断实例是否处于不健康状态，CLB健康检查原理可参考[健康检查](https://cloud.tencent.com/document/product/214/6097)</li>
                     */
                    std::string m_healthCheckType;
                    bool m_healthCheckTypeHasBeenSet;

                    /**
                     * <p>CLB健康检查宽限期，单位为秒。</p><p>取值范围：[0, 7200]</p><p>默认值：0</p>
                     */
                    uint64_t m_loadBalancerHealthCheckGracePeriod;
                    bool m_loadBalancerHealthCheckGracePeriodHasBeenSet;

                    /**
                     * <p>实例分配策略，取值包括 LAUNCH_CONFIGURATION 和 SPOT_MIXED。</p><li> LAUNCH_CONFIGURATION，代表传统的按照启动配置模式。</li><li> SPOT_MIXED，代表竞价混合模式。目前仅支持启动配置为按量计费模式时使用混合模式，混合模式下，伸缩组将根据设定扩容按量或竞价机型。使用混合模式时，关联的启动配置的计费类型不可被修改。</li>
                     */
                    std::string m_instanceAllocationPolicy;
                    bool m_instanceAllocationPolicyHasBeenSet;

                    /**
                     * <p>竞价混合模式下，各计费类型实例的分配策略。<br>仅当 InstanceAllocationPolicy 取 SPOT_MIXED 时可用。</p>
                     */
                    SpotMixedAllocationPolicy m_spotMixedAllocationPolicy;
                    bool m_spotMixedAllocationPolicyHasBeenSet;

                    /**
                     * <p>容量重平衡功能，仅对伸缩组内的竞价实例有效。取值范围：</p><li> TRUE，开启该功能，当伸缩组内的竞价实例即将被竞价实例服务自动回收前，AS 主动发起竞价实例销毁流程，如果有配置过缩容 hook，则销毁前 hook 会生效。销毁流程启动后，AS 会异步开启一个扩容活动，用于补齐期望实例数。</li> <li> FALSE，不开启该功能，则 AS 等待竞价实例被销毁后才会去扩容补齐伸缩组期望实例数。</li>
                     */
                    bool m_capacityRebalance;
                    bool m_capacityRebalanceHasBeenSet;

                    /**
                     * <p>实例名称序号相关设置。开启后为伸缩组内自动创建的实例名称添加递增的数字序号。</p>
                     */
                    InstanceNameIndexSettings m_instanceNameIndexSettings;
                    bool m_instanceNameIndexSettingsHasBeenSet;

                    /**
                     * <p>实例主机名序号相关设置。开启后为伸缩组内自动创建的实例主机名添加递增的数字序号。</p>
                     */
                    HostNameIndexSettings m_hostNameIndexSettings;
                    bool m_hostNameIndexSettingsHasBeenSet;

                    /**
                     * <p>匹配期望数并发扩容功能，不能在InstanceAllocationPolicy为竞价混合模式时设置，也不能在ScalingMode为扩容优先开机模式时设置。目前仅支持两个匹配期望数扩容活动并发进行，不支持指定数量扩容、缩容等其他类型活动并发。设置为FALSE表示不开启。</p>
                     */
                    bool m_concurrentScaleOutForDesiredCapacity;
                    bool m_concurrentScaleOutForDesiredCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYAUTOSCALINGGROUPREQUEST_H_
