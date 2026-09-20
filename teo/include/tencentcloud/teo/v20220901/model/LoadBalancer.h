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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HealthChecker.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupHealthStatus.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupReference.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 负载均衡实例信息。
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例 ID。</p>
                     * @return InstanceId <p>实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。</p>
                     * @param _instanceId <p>实例 ID。</p>
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
                     * 获取<p>健康检查策略。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>。</p>
                     * @return HealthChecker <p>健康检查策略。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>。</p>
                     * 
                     */
                    HealthChecker GetHealthChecker() const;

                    /**
                     * 设置<p>健康检查策略。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>。</p>
                     * @param _healthChecker <p>健康检查策略。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>。</p>
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
                     * 获取<p>源站组间的流量调度策略，取值有：</p><li>Pritory：按优先级顺序进行故障转移 。</li>
                     * @return SteeringPolicy <p>源站组间的流量调度策略，取值有：</p><li>Pritory：按优先级顺序进行故障转移 。</li>
                     * 
                     */
                    std::string GetSteeringPolicy() const;

                    /**
                     * 设置<p>源站组间的流量调度策略，取值有：</p><li>Pritory：按优先级顺序进行故障转移 。</li>
                     * @param _steeringPolicy <p>源站组间的流量调度策略，取值有：</p><li>Pritory：按优先级顺序进行故障转移 。</li>
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
                     * 获取<p>实际访问某源站失败时的请求重试策略，详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104227">请求重试策略介绍</a>，取值有：</p><li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li><li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>
                     * @return FailoverPolicy <p>实际访问某源站失败时的请求重试策略，详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104227">请求重试策略介绍</a>，取值有：</p><li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li><li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>
                     * 
                     */
                    std::string GetFailoverPolicy() const;

                    /**
                     * 设置<p>实际访问某源站失败时的请求重试策略，详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104227">请求重试策略介绍</a>，取值有：</p><li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li><li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>
                     * @param _failoverPolicy <p>实际访问某源站失败时的请求重试策略，详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104227">请求重试策略介绍</a>，取值有：</p><li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li><li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>
                     * 
                     */
                    void SetFailoverPolicy(const std::string& _failoverPolicy);

                    /**
                     * 判断参数 FailoverPolicy 是否已赋值
                     * @return FailoverPolicy 是否已赋值
                     * 
                     */
                    bool FailoverPolicyHasBeenSet() const;

                    /**
                     * 获取<p>源站组健康状态。</p>
                     * @return OriginGroupHealthStatus <p>源站组健康状态。</p>
                     * 
                     */
                    std::vector<OriginGroupHealthStatus> GetOriginGroupHealthStatus() const;

                    /**
                     * 设置<p>源站组健康状态。</p>
                     * @param _originGroupHealthStatus <p>源站组健康状态。</p>
                     * 
                     */
                    void SetOriginGroupHealthStatus(const std::vector<OriginGroupHealthStatus>& _originGroupHealthStatus);

                    /**
                     * 判断参数 OriginGroupHealthStatus 是否已赋值
                     * @return OriginGroupHealthStatus 是否已赋值
                     * 
                     */
                    bool OriginGroupHealthStatusHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡状态，取值有：</p><li>Pending：部署中；</li><li>Deleting：删除中；</li><li>Running：已生效。</li>
                     * @return Status <p>负载均衡状态，取值有：</p><li>Pending：部署中；</li><li>Deleting：删除中；</li><li>Running：已生效。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>负载均衡状态，取值有：</p><li>Pending：部署中；</li><li>Deleting：删除中；</li><li>Running：已生效。</li>
                     * @param _status <p>负载均衡状态，取值有：</p><li>Pending：部署中；</li><li>Deleting：删除中；</li><li>Running：已生效。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>该负载均衡实例绑的四层代理实例的列表。</p>
                     * @return L4UsedList <p>该负载均衡实例绑的四层代理实例的列表。</p>
                     * 
                     */
                    std::vector<std::string> GetL4UsedList() const;

                    /**
                     * 设置<p>该负载均衡实例绑的四层代理实例的列表。</p>
                     * @param _l4UsedList <p>该负载均衡实例绑的四层代理实例的列表。</p>
                     * 
                     */
                    void SetL4UsedList(const std::vector<std::string>& _l4UsedList);

                    /**
                     * 判断参数 L4UsedList 是否已赋值
                     * @return L4UsedList 是否已赋值
                     * 
                     */
                    bool L4UsedListHasBeenSet() const;

                    /**
                     * 获取<p>该负载均衡实例绑定的七层域名列表。</p>
                     * @return L7UsedList <p>该负载均衡实例绑定的七层域名列表。</p>
                     * 
                     */
                    std::vector<std::string> GetL7UsedList() const;

                    /**
                     * 设置<p>该负载均衡实例绑定的七层域名列表。</p>
                     * @param _l7UsedList <p>该负载均衡实例绑定的七层域名列表。</p>
                     * 
                     */
                    void SetL7UsedList(const std::vector<std::string>& _l7UsedList);

                    /**
                     * 判断参数 L7UsedList 是否已赋值
                     * @return L7UsedList 是否已赋值
                     * 
                     */
                    bool L7UsedListHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡被引用实例的列表。</p>
                     * @return References <p>负载均衡被引用实例的列表。</p>
                     * 
                     */
                    std::vector<OriginGroupReference> GetReferences() const;

                    /**
                     * 设置<p>负载均衡被引用实例的列表。</p>
                     * @param _references <p>负载均衡被引用实例的列表。</p>
                     * 
                     */
                    void SetReferences(const std::vector<OriginGroupReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

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
                     * <p>健康检查策略。详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104228">健康检查策略介绍</a>。</p>
                     */
                    HealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * <p>源站组间的流量调度策略，取值有：</p><li>Pritory：按优先级顺序进行故障转移 。</li>
                     */
                    std::string m_steeringPolicy;
                    bool m_steeringPolicyHasBeenSet;

                    /**
                     * <p>实际访问某源站失败时的请求重试策略，详情请参考 <a href="https://cloud.tencent.com/document/product/1552/104227">请求重试策略介绍</a>，取值有：</p><li>OtherOriginGroup：单次请求失败后，请求优先重试下一优先级源站组；</li><li>OtherRecordInOriginGroup：单次请求失败后，请求优先重试同源站组内的其他源站。</li>
                     */
                    std::string m_failoverPolicy;
                    bool m_failoverPolicyHasBeenSet;

                    /**
                     * <p>源站组健康状态。</p>
                     */
                    std::vector<OriginGroupHealthStatus> m_originGroupHealthStatus;
                    bool m_originGroupHealthStatusHasBeenSet;

                    /**
                     * <p>负载均衡状态，取值有：</p><li>Pending：部署中；</li><li>Deleting：删除中；</li><li>Running：已生效。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>该负载均衡实例绑的四层代理实例的列表。</p>
                     */
                    std::vector<std::string> m_l4UsedList;
                    bool m_l4UsedListHasBeenSet;

                    /**
                     * <p>该负载均衡实例绑定的七层域名列表。</p>
                     */
                    std::vector<std::string> m_l7UsedList;
                    bool m_l7UsedListHasBeenSet;

                    /**
                     * <p>负载均衡被引用实例的列表。</p>
                     */
                    std::vector<OriginGroupReference> m_references;
                    bool m_referencesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCER_H_
