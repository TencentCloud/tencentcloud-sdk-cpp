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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOADBALANCERREQUEST_H_

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
                * CreateLoadBalancer请求参数结构体
                */
                class CreateLoadBalancerRequest : public AbstractModel
                {
                public:
                    CreateLoadBalancerRequest();
                    ~CreateLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
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
                     * 获取<p>实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。</p>
                     * @return Name <p>实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。</p>
                     * @param _name <p>实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。</p>
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
                     * 获取<p>实例类型，取值有：</p><li>HTTP_V2：HTTP 专用型（V2），支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）。该实例类型支持选择发起探测的区域，可显著降低探测请求量但对源站的健康感知灵敏度更低；</li><li>HTTP：HTTP 专用型（V1），支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）。该实例类型不支持选择发起探测的区域，探测请求量较大但对源站的健康感知灵敏度更高；</li><li>GENERAL：通用型，仅支持添加通用型源站组，能被站点加速服务（如域名服务和规则引擎）和四层代理引用。该实例类型不支持选择发起探测的区域，探测请求量较大但对源站的健康感知灵敏度更高。</li>
                     * @return Type <p>实例类型，取值有：</p><li>HTTP_V2：HTTP 专用型（V2），支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）。该实例类型支持选择发起探测的区域，可显著降低探测请求量但对源站的健康感知灵敏度更低；</li><li>HTTP：HTTP 专用型（V1），支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）。该实例类型不支持选择发起探测的区域，探测请求量较大但对源站的健康感知灵敏度更高；</li><li>GENERAL：通用型，仅支持添加通用型源站组，能被站点加速服务（如域名服务和规则引擎）和四层代理引用。该实例类型不支持选择发起探测的区域，探测请求量较大但对源站的健康感知灵敏度更高。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>实例类型，取值有：</p><li>HTTP_V2：HTTP 专用型（V2），支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）。该实例类型支持选择发起探测的区域，可显著降低探测请求量但对源站的健康感知灵敏度更低；</li><li>HTTP：HTTP 专用型（V1），支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）。该实例类型不支持选择发起探测的区域，探测请求量较大但对源站的健康感知灵敏度更高；</li><li>GENERAL：通用型，仅支持添加通用型源站组，能被站点加速服务（如域名服务和规则引擎）和四层代理引用。该实例类型不支持选择发起探测的区域，探测请求量较大但对源站的健康感知灵敏度更高。</li>
                     * @param _type <p>实例类型，取值有：</p><li>HTTP_V2：HTTP 专用型（V2），支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）。该实例类型支持选择发起探测的区域，可显著降低探测请求量但对源站的健康感知灵敏度更低；</li><li>HTTP：HTTP 专用型（V1），支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）。该实例类型不支持选择发起探测的区域，探测请求量较大但对源站的健康感知灵敏度更高；</li><li>GENERAL：通用型，仅支持添加通用型源站组，能被站点加速服务（如域名服务和规则引擎）和四层代理引用。该实例类型不支持选择发起探测的区域，探测请求量较大但对源站的健康感知灵敏度更高。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>源站组列表及其对应的容灾调度优先级。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104223">快速创建负载均衡实例</a> 中的示例场景。</p>
                     * @return OriginGroups <p>源站组列表及其对应的容灾调度优先级。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104223">快速创建负载均衡实例</a> 中的示例场景。</p>
                     * 
                     */
                    std::vector<OriginGroupInLoadBalancer> GetOriginGroups() const;

                    /**
                     * 设置<p>源站组列表及其对应的容灾调度优先级。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104223">快速创建负载均衡实例</a> 中的示例场景。</p>
                     * @param _originGroups <p>源站组列表及其对应的容灾调度优先级。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104223">快速创建负载均衡实例</a> 中的示例场景。</p>
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
                     * 获取<p>健康检查策略。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>。不填写时，默认为不启用健康检查。</p>
                     * @return HealthChecker <p>健康检查策略。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>。不填写时，默认为不启用健康检查。</p>
                     * 
                     */
                    HealthChecker GetHealthChecker() const;

                    /**
                     * 设置<p>健康检查策略。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>。不填写时，默认为不启用健康检查。</p>
                     * @param _healthChecker <p>健康检查策略。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>。不填写时，默认为不启用健康检查。</p>
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
                     * 获取<p>源站组间的流量调度策略，取值有：</p><li>Pritory：按优先级顺序进行故障转移。</li>默认值为 Pritory。
                     * @return SteeringPolicy <p>源站组间的流量调度策略，取值有：</p><li>Pritory：按优先级顺序进行故障转移。</li>默认值为 Pritory。
                     * 
                     */
                    std::string GetSteeringPolicy() const;

                    /**
                     * 设置<p>源站组间的流量调度策略，取值有：</p><li>Pritory：按优先级顺序进行故障转移。</li>默认值为 Pritory。
                     * @param _steeringPolicy <p>源站组间的流量调度策略，取值有：</p><li>Pritory：按优先级顺序进行故障转移。</li>默认值为 Pritory。
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
                     * 获取<p>实际访问某源站失败时的请求重试策略，详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104227">请求重试策略介绍</a>，取值有：</p><li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li><li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>默认值为 OtherRecordInOriginGroup。
                     * @return FailoverPolicy <p>实际访问某源站失败时的请求重试策略，详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104227">请求重试策略介绍</a>，取值有：</p><li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li><li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>默认值为 OtherRecordInOriginGroup。
                     * 
                     */
                    std::string GetFailoverPolicy() const;

                    /**
                     * 设置<p>实际访问某源站失败时的请求重试策略，详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104227">请求重试策略介绍</a>，取值有：</p><li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li><li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>默认值为 OtherRecordInOriginGroup。
                     * @param _failoverPolicy <p>实际访问某源站失败时的请求重试策略，详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104227">请求重试策略介绍</a>，取值有：</p><li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li><li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>默认值为 OtherRecordInOriginGroup。
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
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>实例名称，可输入 1-200 个字符，允许字符为 a-z，A-Z，0-9，_，-。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>实例类型，取值有：</p><li>HTTP_V2：HTTP 专用型（V2），支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）。该实例类型支持选择发起探测的区域，可显著降低探测请求量但对源站的健康感知灵敏度更低；</li><li>HTTP：HTTP 专用型（V1），支持添加 HTTP 专用型和通用型源站组，仅支持被站点加速相关服务引用（如域名服务和规则引擎）。该实例类型不支持选择发起探测的区域，探测请求量较大但对源站的健康感知灵敏度更高；</li><li>GENERAL：通用型，仅支持添加通用型源站组，能被站点加速服务（如域名服务和规则引擎）和四层代理引用。该实例类型不支持选择发起探测的区域，探测请求量较大但对源站的健康感知灵敏度更高。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>源站组列表及其对应的容灾调度优先级。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104223">快速创建负载均衡实例</a> 中的示例场景。</p>
                     */
                    std::vector<OriginGroupInLoadBalancer> m_originGroups;
                    bool m_originGroupsHasBeenSet;

                    /**
                     * <p>健康检查策略。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>。不填写时，默认为不启用健康检查。</p>
                     */
                    HealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * <p>源站组间的流量调度策略，取值有：</p><li>Pritory：按优先级顺序进行故障转移。</li>默认值为 Pritory。
                     */
                    std::string m_steeringPolicy;
                    bool m_steeringPolicyHasBeenSet;

                    /**
                     * <p>实际访问某源站失败时的请求重试策略，详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104227">请求重试策略介绍</a>，取值有：</p><li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li><li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>默认值为 OtherRecordInOriginGroup。
                     */
                    std::string m_failoverPolicy;
                    bool m_failoverPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATELOADBALANCERREQUEST_H_
