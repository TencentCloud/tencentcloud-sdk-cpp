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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupInLoadBalancer.h>
#include <tencentcloud/teo/v20220901/model/HealthChecker.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancer请求参数结构体
                */
                class ModifyLoadBalancerRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerRequest();
                    ~ModifyLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例 ID。
                     * @return InstanceId 负载均衡实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param _instanceId 负载均衡实例 ID。
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
                     * 获取实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。不填写表示维持原有配置。
                     * @return Name 实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。不填写表示维持原有配置。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。不填写表示维持原有配置。
                     * @param _name 实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。不填写表示维持原有配置。
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
                     * 获取源站组列表及其对应的容灾调度优先级。详情请参考 [快速创建负载均衡实例](https://cloud.tencent.com/document/product/1552/104223) 中的示例场景。不填写表示维持原有配置。
                     * @return OriginGroups 源站组列表及其对应的容灾调度优先级。详情请参考 [快速创建负载均衡实例](https://cloud.tencent.com/document/product/1552/104223) 中的示例场景。不填写表示维持原有配置。
                     * 
                     */
                    std::vector<OriginGroupInLoadBalancer> GetOriginGroups() const;

                    /**
                     * 设置源站组列表及其对应的容灾调度优先级。详情请参考 [快速创建负载均衡实例](https://cloud.tencent.com/document/product/1552/104223) 中的示例场景。不填写表示维持原有配置。
                     * @param _originGroups 源站组列表及其对应的容灾调度优先级。详情请参考 [快速创建负载均衡实例](https://cloud.tencent.com/document/product/1552/104223) 中的示例场景。不填写表示维持原有配置。
                     * 
                     */
                    void SetOriginGroups(const std::vector<OriginGroupInLoadBalancer>& _originGroups);

                    /**
                     * 判断参数 OriginGroups 是否已赋值
                     * @return OriginGroups 是否已赋值
                     * 
                     */
                    bool OriginGroupsHasBeenSet() const;

                    /**
                     * 获取健康检查策略。详情请参考 [健康检查策略介绍](https://cloud.tencent.com/document/product/1552/104228)。不填写表示维持原有配置。
                     * @return HealthChecker 健康检查策略。详情请参考 [健康检查策略介绍](https://cloud.tencent.com/document/product/1552/104228)。不填写表示维持原有配置。
                     * 
                     */
                    HealthChecker GetHealthChecker() const;

                    /**
                     * 设置健康检查策略。详情请参考 [健康检查策略介绍](https://cloud.tencent.com/document/product/1552/104228)。不填写表示维持原有配置。
                     * @param _healthChecker 健康检查策略。详情请参考 [健康检查策略介绍](https://cloud.tencent.com/document/product/1552/104228)。不填写表示维持原有配置。
                     * 
                     */
                    void SetHealthChecker(const HealthChecker& _healthChecker);

                    /**
                     * 判断参数 HealthChecker 是否已赋值
                     * @return HealthChecker 是否已赋值
                     * 
                     */
                    bool HealthCheckerHasBeenSet() const;

                    /**
                     * 获取源站组间的流量调度策略，取值有：
<li>Pritory：按优先级顺序进行故障转移 。</li>不填写表示维持原有配置。
                     * @return SteeringPolicy 源站组间的流量调度策略，取值有：
<li>Pritory：按优先级顺序进行故障转移 。</li>不填写表示维持原有配置。
                     * 
                     */
                    std::string GetSteeringPolicy() const;

                    /**
                     * 设置源站组间的流量调度策略，取值有：
<li>Pritory：按优先级顺序进行故障转移 。</li>不填写表示维持原有配置。
                     * @param _steeringPolicy 源站组间的流量调度策略，取值有：
<li>Pritory：按优先级顺序进行故障转移 。</li>不填写表示维持原有配置。
                     * 
                     */
                    void SetSteeringPolicy(const std::string& _steeringPolicy);

                    /**
                     * 判断参数 SteeringPolicy 是否已赋值
                     * @return SteeringPolicy 是否已赋值
                     * 
                     */
                    bool SteeringPolicyHasBeenSet() const;

                    /**
                     * 获取实际访问某源站失败时的请求重试策略，详情请参考 [请求重试策略介绍](https://cloud.tencent.com/document/product/1552/104227)，取值有：
<li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li>
<li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>不填写表示维持原有配置。
                     * @return FailoverPolicy 实际访问某源站失败时的请求重试策略，详情请参考 [请求重试策略介绍](https://cloud.tencent.com/document/product/1552/104227)，取值有：
<li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li>
<li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>不填写表示维持原有配置。
                     * 
                     */
                    std::string GetFailoverPolicy() const;

                    /**
                     * 设置实际访问某源站失败时的请求重试策略，详情请参考 [请求重试策略介绍](https://cloud.tencent.com/document/product/1552/104227)，取值有：
<li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li>
<li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>不填写表示维持原有配置。
                     * @param _failoverPolicy 实际访问某源站失败时的请求重试策略，详情请参考 [请求重试策略介绍](https://cloud.tencent.com/document/product/1552/104227)，取值有：
<li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li>
<li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>不填写表示维持原有配置。
                     * 
                     */
                    void SetFailoverPolicy(const std::string& _failoverPolicy);

                    /**
                     * 判断参数 FailoverPolicy 是否已赋值
                     * @return FailoverPolicy 是否已赋值
                     * 
                     */
                    bool FailoverPolicyHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 负载均衡实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。不填写表示维持原有配置。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 源站组列表及其对应的容灾调度优先级。详情请参考 [快速创建负载均衡实例](https://cloud.tencent.com/document/product/1552/104223) 中的示例场景。不填写表示维持原有配置。
                     */
                    std::vector<OriginGroupInLoadBalancer> m_originGroups;
                    bool m_originGroupsHasBeenSet;

                    /**
                     * 健康检查策略。详情请参考 [健康检查策略介绍](https://cloud.tencent.com/document/product/1552/104228)。不填写表示维持原有配置。
                     */
                    HealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * 源站组间的流量调度策略，取值有：
<li>Pritory：按优先级顺序进行故障转移 。</li>不填写表示维持原有配置。
                     */
                    std::string m_steeringPolicy;
                    bool m_steeringPolicyHasBeenSet;

                    /**
                     * 实际访问某源站失败时的请求重试策略，详情请参考 [请求重试策略介绍](https://cloud.tencent.com/document/product/1552/104227)，取值有：
<li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li>
<li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>不填写表示维持原有配置。
                     */
                    std::string m_failoverPolicy;
                    bool m_failoverPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOADBALANCERREQUEST_H_
